#!/usr/local/bin/bash
#
# SneezyMUD rebooter script
#
# January, 2005
#
# Do not kill this script with kill -9 or -KILL

# Read in the general configuration
umask 007
cd /mud/prod

if [ -r rebooter.cfg ]
then
  source ./rebooter.cfg
else
  echo "" >> ${REBOOTER_LOG}
  echo "Error: can't read in rebooter.cfg" >> ${REBOOTER_LOG}
  exit 1
fi

REBOOTER_LOG=${PROD_DIR}/rebooter.log

PROD_LIB_DIR=${PROD_DIR}/lib
PROD_CORE=${PROD_LIB_DIR}/sneezy.core
PROD_PID=0

SNEEZY=${PROD_DIR}/sneezy
SNEEZY_LOG=${PROD_LIB_DIR}/logs/logcurrent

LOW_DIR=/mud/low

rotate_files()
{
  DATE_STAMP="$1"

  # Save any core file from last run
  if [ -f "${PROD_CORE}" ]
  then
    echo "Saving core from previous run."
    chmod 660 "${PROD_CORE}"
    mv -f "${PROD_CORE}" "${PROD_LIB_DIR}/cores/sneezy.core.${DATE_STAMP}"
  fi

  # Save log
  if [ -f "${SNEEZY_LOG}" ]
  then
    echo "Saving log from previous run."
    mv -f "${SNEEZY_LOG}" "${PROD_LIB_DIR}/logs/log.${DATE_STAMP}"
    (
    cd ${PROD_DIR}/usage
    ./usage.pl "${PROD_LIB_DIR}/logs/log.${DATE_STAMP}"
    )
  fi

  # Copy new wiznews
  if [ -f "${PROD_LIB_DIR}/txt/wiznews.new" ]
  then
    echo "Copying new wiznews."
    cp -fp "${PROD_LIB_DIR}/txt/wiznews.new" "${PROD_LIB_DIR}/txt/wiznews"
  fi

  # Copy new news
  if [ -f "${PROD_LIB_DIR}/txt/news.new" ]
  then
    echo "Copying new news."
    cp -fp "${PROD_LIB_DIR}/txt/news.new" "${PROD_LIB_DIR}/txt/news"
  fi

  # Copy new version
  if [ -f "${PROD_LIB_DIR}/txt/version.new" ]
  then
    echo "Copying new version."
    cp -fp "${PROD_LIB_DIR}/txt/version.new" "${PROD_LIB_DIR}/txt/version"
  fi

  # Copy new objects
  if [ -f "${PROD_LIB_DIR}/tinyworld.obj" ]
  then
    echo "Copying new tinyworld.obj."
    cp -fp "${PROD_LIB_DIR}/tinyworld.obj" "${PROD_LIB_DIR}/tinyobj.use"
  fi

  # Copy new mobs
  if [ -f "${PROD_LIB_DIR}/tinyworld.mob" ]
  then
    echo "Copying new tinyworld.mob."
    cp -fp "${PROD_LIB_DIR}/tinyworld.mob" "${PROD_LIB_DIR}/tinymob.use"
  fi

  echo "Copying obj and room data from sneezyq to sneezy."

  for i in obj objextra objaffect \
           shopproducing shopmaterial shoptype \
           room roomexit roomextra itemtype;
  do 
    echo Copying $i table.
    pg_dump -F c -t $i sneezyq | pg_restore -c -d sneezy
  done



  /usr/local/bin/psql sneezy<<EOF
drop table shopgoldtmp;
create table shopgoldtmp (shop_nr int, gold int);
insert into shopgoldtmp select shop_nr, gold from shop;
truncate shop;
EOF

  pg_dump -F c -t shop sneezyq | pg_restore -c -d sneezy

  /usr/local/bin/psql sneezy<<EOF
update shop set gold=shopgoldtmp.gold where shop_nr=shopgoldtmp.shop_nr;
EOF

  # Copy the binary
  if [ -f ${SNEEZY}.2 ]
  then
    echo "Moving in new sneezy executable."
    mv -f ${SNEEZY}.2 ${SNEEZY}
  fi

  # Copy the libraries
  for i in libcmd.so libgame.so libobj.so libsys.so libdisc.so libmisc.so libspec.so libtask.so;
  do
    if [ -f "${PROD_DIR}/objs.2/$i" ]
    then
      echo "Moving in new shared library: $i."
      mv -f "${PROD_DIR}/objs.2/$i" "${PROD_DIR}/objs/$i"
    fi
  done
}

reinit()
{
  if [ -r "${PROD_DIR}/${REBOOTER}.2" -a \
          "${PROD_DIR}/${REBOOTER}.2" -nt "${PROD_DIR}/${REBOOTER}" ]
  then
    echo "Found new version of ${PROD_DIR}/${REBOOTER}" >> ${REBOOTER_LOG}
    echo "Saving backup of ${PROD_DIR}/${REBOOTER} to ${PROD_DIR}/${REBOOTER}.orig" >> ${REBOOTER_LOG}
    mv -f "${PROD_DIR}/${REBOOTER}" "${PROD_DIR}/${REBOOTER}.orig" 2>> ${REBOOTER_LOG}

    echo "Overlaying ${PROD_DIR}/${REBOOTER} with ${PROD_DIR}/${REBOOTER}.2" >> ${REBOOTER_LOG}
    # This copy back allows us to make a new inode for script and retain
    # the correct permissions.
    cp -fp "${PROD_DIR}/${REBOOTER}.orig" "${PROD_DIR}/${REBOOTER}" 2>> ${REBOOTER_LOG}
    cat "${PROD_DIR}/${REBOOTER}.2" > "${PROD_DIR}/${REBOOTER}" 2>> ${REBOOTER_LOG}

    echo "Removing ${PROD_DIR}/${REBOOTER}.2" >> ${REBOOTER_LOG}
    rm -f "${PROD_DIR}/${REBOOTER}.2" 2>> ${REBOOTER_LOG}

    if [ "$1" = "exec" ]
    then
      echo "Rebooter reinitializing on $(date)" >> ${REBOOTER_LOG}
      echo "" >> ${REBOOTER_LOG}

      exec ${PROD_DIR}/${REBOOTER}
    fi
  fi
}

cleanup()
{
  trap "" 0

  echo "Rebooter terminated on $(date)" >> ${REBOOTER_LOG}
  DATE_STAMP=$(date +%Y%m%d.%H%M)

  if [ ${PROD_PID} -gt 0 ]
  then
    echo "Killing active mud process ${PROD_PID}" >> ${REBOOTER_LOG}
    kill ${PROD_PID} && PROD_PID=0
  fi

  rotate_files "${DATE_STAMP}" >> ${REBOOTER_LOG} 2>&1
  reinit

  rm -f "${REBOOTER_PID}"
  exit
}

# Main program logic starts here

# Ignore hangups, for cases where this is started from a login shell
trap "" SIGHUP
# Trap the common kill signals, so that the child mud process can be killed
# before this script exits.  Do not kill this script with kill -9 or -KILL
trap cleanup 0 SIGINT SIGQUIT SIGABRT SIGTERM

echo $$ > "${REBOOTER_PID}"
echo "Rebooter initializing on $(date), pid=$$" >> ${REBOOTER_LOG}
rotate_files "${DATE_STAMP}" >> ${REBOOTER_LOG} 2>&1

while true
do
  # Don't do anything if our lockfile, /mud/prod/NOSTART, exists
  if [ -e "${PROD_LOCK}" ]
  then
    echo "Lock file ${PROD_LOCK} found, not booting ${SNEEZY} ${PROD_PORT}" >> ${REBOOTER_LOG}
    echo "${REBOOTER} exiting." >> ${REBOOTER_LOG}
    exit
  fi

  echo -n "Booting ${SNEEZY} ${PROD_PORT} on $(date)" >> ${REBOOTER_LOG}
  {
    ${SNEEZY} ${PROD_PORT} > "${SNEEZY_LOG}" 2>&1 &
  }
  PROD_PID="$!"
  echo ", pid=${PROD_PID}" >> ${REBOOTER_LOG}
  wait

  echo "${SNEEZY} ${PROD_PORT} ended on $(date), pid=${PROD_PID}" >> ${REBOOTER_LOG}
  DATE_STAMP=$(date +%Y%m%d.%H%M)
  echo "" >> ${REBOOTER_LOG}
  PROD_PID=0
  sleep 10

  rotate_files "${DATE_STAMP}" >> ${REBOOTER_LOG} 2>&1
  reinit "exec"
done

cleanup
