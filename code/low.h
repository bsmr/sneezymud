//////////////////////////////////////////////////////////////////////////
//
// SneezyMUD - All rights reserved, SneezyMUD Coding Team
//
//////////////////////////////////////////////////////////////////////////


#ifndef __LOW_H
#define __LOW_H

// --------------- ROOMS

const int ROOM_AUTO_RENT         = -2; /* for auto-renting */
const int ROOM_NOWHERE           = -1;
const int ROOM_VOID              = 0;
const int ROOM_IMPERIA           = 1;
const int ROOM_HELL              = 70;
const int ROOM_STORAGE           = 71;
const int ROOM_POLY_STORAGE      = 72;
const int ROOM_CORPSE_STORAGE    = 73;
const int ROOM_NOCTURNAL_STORAGE = 74;
const int ROOM_Q_STORAGE         = 76;
const int ROOM_CS                = 100;
const int ROOM_MORGUE            = 433;
const int ROOM_GREEN_DRAGON_INN  = 553;
const int ROOM_KINDRED_INN       = 556;
const int ROOM_DONATION          = 563;
const int ROOM_PETS_GH           = 566;
const int ROOM_PEW1              = 757;
const int ROOM_PEW2              = 758;
const int ROOM_PEW3              = 761;
const int ROOM_PEW4              = 763;
const int ROOM_TOP_OF_TREE       = 25487;
const int ROOM_PETS_BM           = 1397;
const int ROOM_DUMP              = 3700;
const int ROOM_PETS_LOG          = 3738;
const int ROOM_TICKET_DESTINATION= 6969;
const int ROOM_PETS_AMB          = 7804;
const int ROOM_POKER             = 2358;
const int ROOM_HILO              = 2359;
const int ROOM_BLACKJACK         = 2360;
const int ROOM_BACCARAT          = 2361;
const int ROOM_HOLDEM            = 2367;
const int ROOM_HEARTS            = 8417;
const int ROOM_WARD_1            = 13142;
const int ROOM_WARD_2            = 9734;
const int ROOM_TREE_BRIDGE       = 15277;
const int ROOM_SLEEPTAG_CONTROL  = 23599;
const int ROOM_FACTION_BUREAU    = 395;
const int ROOM_TROLLEY           = 15344;

// ------------------------- OBJS

const int DEITY_TOKEN          = 2;
const int GENERIC_L_BAG        = 6;
const int OBJ_BANDAGE          = 9;
const int OBJ_ROSEPETAL        = 10;
const int GENERIC_TALEN        = 13;
const int OBJ_BATS_JACUZZI     = 31;
const int GENERIC_TOOTH        = 39;
const int TREASURE_GOLD        = 50;
const int TREASURE_SILVER      = 51;
const int TREASURE_COPPER      = 52;
const int TREASURE_STEEL       = 53;
const int TREASURE_ELECTRUM    = 54;
const int TREASURE_PLATINUM    = 55;
const int TREASURE_TITANIUM    = 56;
const int TREASURE_MITHRIL     = 57;
const int TREASURE_ATHANOR     = 58;
const int TREASURE_ADMANTIUM   = 59;
const int TREASURE_BRASS       = 60;
const int TREASURE_TIN         = 61;
const int TREASURE_IRON        = 62;
const int TREASURE_ALUMINUM    = 63;
const int TREASURE_BRONZE      = 64;
const int TREASURE_OBSIDIAN    = 65;
const int OBJ_SALTPILE         = 99;
const int GENERIC_FLARE        = 199;
const int WEAPON_L_SWORD       = 300;
const int WEAPON_S_SWORD       = 304;
const int WEAPON_DAGGER        = 305;
const int WEAPON_BOW           = 307;
const int WEAPON_STAFF         = 309;
const int WEAPON_CLUB          = 310;
const int WEAPON_MACE          = 311;
const int WEAPON_HAMMER        = 312;
const int WEAPON_AXE           = 314;
const int WEAPON_WHIP          = 316;
const int WEAPON_WHIP_STUD     = 317;
const int WEAPON_KNIFE         = 318;
const int WEAPON_AVENGER1      = 319;
const int WEAPON_AVENGER2      = 320;
const int WEAPON_T_STAFF       = 324;
const int WEAPON_T_DAGGER      = 325;
const int WEAPON_T_SWORD       = 329;
const int WEAPON_AVENGER3      = 326;
const int OBJ_CARAVAN          = 519;
const int OBJ_TRADE_GOOD       = 520;
const int GENERIC_MONEYPOUCH   = 604;
// vnums for various set-trap items
const int ST_FLINT      = 900;
const int ST_SULPHUR    = 901;
const int ST_BAG        = 902;
const int ST_HYDROGEN   = 903;
const int ST_POISON     = 904;
const int ST_SHARDS     = 905;
const int ST_NEEDLE     = 906;
const int ST_NOZZLE     = 907;
const int ST_FUNGUS     = 908;
const int ST_SPRING     = 909;
const int ST_BELLOWS    = 910;
const int ST_GAS        = 911;
const int ST_HOSE       = 912;
const int ST_ACID_VIAL  = 913;
const int ST_CON_POISON = 914;   // also used in poison weapon
const int ST_SPIKE      = 915;
const int ST_TRIPWIRE   = 916;
const int ST_RAZOR_BLADE       = 917;
const int ST_CONCRETE          = 918;
const int ST_WEDGE             = 919;
const int ST_FROST             = 920;
const int ST_PENTAGRAM         = 921;
const int ST_BLINK             = 922;
const int ST_ATHANOR           = 923;
const int ST_LANDMINE          = 924;
const int ST_GRENADE           = 925;
const int ST_CASE_MINE         = 926;
const int ST_CASE_GRENADE      = 927;
const int ST_CGAS              = 928;
const int ST_TUBING            = 929;
const int ST_PEBBLES           = 930;
const int ST_BOLTS             = 931;
const int ST_CANISTER          = 932;
const int ST_CRYSTALINE        = 933;
const int ST_RAZOR_DISK        = 934;
const int GENERIC_DAGGER      = 1000;
const int GENERIC_NOTE        = 3090;
const int GENERIC_PEN         = 3091;
const int OBJ_VENISON         = 3114;
const int BROWN_MUSHROOM      = 3401;
const int WEAPON_ARROW        = 3409;
const int BOULDER_ITEM        = 4181;
const int OBJ_GENERIC_GRAVE   = 4200;
const int OBJ_GOLD_FEATHER    = 4791;
const int OBJ_PHOENIX_FEATHER = 4847;
const int ITEM_DAYGATE        = 5890;
const int ITEM_MOONGATE       = 5891;
const int OBJ_MINELIFT_UP    =  7085;
const int OBJ_MINELIFT_DOWN  =  7086;
const int OBJ_TALISMAN        = 9700;
const int OBJ_PILE_OFFAL      = 10030;  // horse poop, etc...
const int ITEM_RAINBOW_BRIDGE1 = 10041;
const int ITEM_RAINBOW_BRIDGE2 = 10042;
const int OBJ_HERALD          = 10543;
const int GENERIC_POOL        = 10559;
const int GENERIC_SMOKE       = 10560;
const int OBJ_INERT_STICK     = 10561;
const int OBJ_MONK_QUEST_DOG_COLLAR = 12468;
const int OBJ_FLAMING_PORTAL  = 16157;
const int OBJ_BM_TRASHCAN      =18583;
const int OBJ_RIVER_SERP_VENOM= 20409;
const int OBJ_STONE_LEG_CLUB  = 20425;
const int OBJ_ICE_SHARD_LARGE = 20437;
const int OBJ_ICE_SHARD_SMALL = 20440;
const int OBJ_ARCTIC_BEAR_HIDE= 20441;
const int OBJ_SNOW_BEAST_HORN = 20442;
const int OBJ_LARGE_ANIMAL_HIDE = 20443;
const int OBJ_SEAL_SKIN_HIDE  = 20450;
const int OBJ_EARMUFF         = 20456;
const int OBJ_AQUA_DRAG_HEAD  = 22522;
const int OBJ_SLEEPTAG_STAFF  = 23500;
const int OBJ_RAINBOW_MIST    = 27491;
const int OBJ_QUEST_ORE       = 29020;
const int OBJ_RED_ORE         = 29022;
const int OBJ_GENERIC_SCROLL  = 29990;
const int STATS_POTION        = 29991;
const int YOUTH_POTION        = 29992;
const int OBJ_GENERIC_POTION  = 29993;
const int LEARNING_POTION     = 29997;
const int CRAPS_DICE          = 29999;
const int MASK1          = 1415;
const int MASK2          = 1416;
const int MASK3          = 1417;
const int MASK4          = 1418;
const int MASK5          = 1419;
const int MASK6          = 1420;
const int GENERIC_STEAK  = 31365;
const int OBJ_GENERIC_PLANT = 15347;
const int OBJ_ANGEL_HEART = 9634;
const int MYSTERY_POTION = 31300;

// ------------------------- MOBS

const int MOB_NONE           = 0;
const int FIRE_ELEMENTAL     = 16;
const int WATER_ELEMENTAL    = 17;
const int EARTH_ELEMENTAL    = 18;
const int AIR_ELEMENTAL      = 19;
const int FACTION_FAERY      = 20;
const int WOOD_GOLEM         = 26;
const int ROCK_GOLEM         = 27;
const int IRON_GOLEM         = 28;
const int DIAMOND_GOLEM      = 29;
const int MOB_ANIMATION      = 41;
const int MOB_MALE_CHURCH_GOER   =50;
const int MOB_FEMALE_CHURCH_GOER =51;
const int MOB_MALE_HOPPER    = 52;
const int MOB_FEMALE_HOPPER  = 53;
const int MOB_NEWSBOY        = 84;
const int MOB_LAMPBOY        = 99;
const int MOB_WATCHMAN        =100;
const int MOB_CITYGUARD       =101;
const int MOB_ELITE           =102;
const int MOB_SWEEPER         =103;
const int MOB_SMALL_CAT       =104;
const int MOB_CITIZEN_M       =108;
const int MOB_CITIZEN_F       =109;
const int MOB_PEASANT         =110;
const int MOB_OLD_SAGE        =113;
const int MOB_DWARF_ADV       =125;
const int MOB_GNOME_MISS      =126;
const int MOB_OGRE_VIG        =127;
const int MOB_HOBBIT_EMI      =128;
const int MOB_ELF_TRADER      =138;
const int MOB_DEITY_JUDGMENT  =146;
const int MOB_PAWNGUY         =159;
const int MOB_PETGUY_GH       =166;
const int MOB_PIGEON          =172;
const int MOB_SWEEPER2        =193;
const int MOB_BOUNCER         =194;
const int MOB_MAGE_GM_LEVEL15 =200;
const int MOB_MONK_GM_LEVEL15 =207;
const int MOB_MAGE_GM_LEVEL40 =216;
const int MOB_MONK_GM_LEVEL40 =223;
const int MOB_FIRST_RANGER_BASIC_TRAINER =261;
const int MOB_BOUNCER_HEAD    =265;
const int MOB_COMBAT_TRAINER  =286;
const int MOB_FIRST_ANIMAL_TRAINER =308;
const int MOB_TALAR           =324;
const int MOB_KING_GH         =353;
const int MOB_HUANG_LO        =385;
const int MOB_OLD_WOMAN       =404;
const int MOB_TROLL_GIANT     =405;
const int MOB_FISTLAND        =407;
const int MOB_TREE_SPIRIT     =408;
const int MOB_BALCOR          =528;
const int MOB_ROAD_THIEF      =650;
const int MOB_ROAD_ROBBER     =651;
const int MOB_ROAD_THIEF_LARGE=700;
const int MOB_BEHOLDER        =904;
const int MOB_DOPPLEGANGER    =914;
const int MOB_BANSHEE         =928;
const int MOB_EAGLE           =953;
const int MOB_BULGE          =1024;
const int MOB_PETGUY_BM      =1209;
const int MOB_FONG_CHUN      =1304;
const int MOB_BISHOP_BMOON   =1361;
const int APOC_PESTILENCE    =1601;
const int APOC_WAR           =1602;
const int APOC_FAMINE        =1603;
const int APOC_DEATH         =1604;
const int APOC_PESTHORSE     =1605;
const int APOC_WARHORSE      =1606;
const int APOC_FAMINEHORSE   =1607;
const int APOC_DEATHHORSE    =1608;
const int APOC_WARRIOR       =1609;
const int MOB_CARAVAN_MASTER =1610;
const int MOB_DWARVEN_HIGH_PRIEST =2113;
const int MOB_TAILLE         =2273;
const int MOB_CREED	   =2495;
const int MOB_SPARTAGUS	   =2874;
const int MOB_BUCK_OLD       =3109;
const int MOB_BUCK_YOUNG     =3114;
const int MOB_GANGMEMBER_GIBBETT =3210;
const int MOB_RANGER_LORD    =3415;
const int MOB_SULTRESS	   =3459;
const int MOB_PETGUY_LOG     =3707;
const int MOB_ASSASSIN	   =3857;
const int MOB_SHAMAN_BULLY   =4304;
const int MOB_CHIEF_AARAKOCRA =4745;
const int MOB_ROC            =4791;
const int MOB_DRAGON_GOLD    =4796;
const int MOB_RALIKI         =4822 ;
const int MOB_PHOENIX        =4847;
const int MOB_DRAGON_BRONZE  =4858;
const int MOB_SNAKE          =5112;
const int MOB_RAT_KING       =5131;
const int MOB_HOBBIT_ADVENTURER     =5347;
const int MOB_OVERLORD	   =5443;
const int MOB_MARCUS	   =5555;
const int MOB_GRUUM          =5570;
const int MOB_NITELLION      =5720;
const int MOB_LEPER          =6602;
const int MOB_BLACKWIDOW     =6605;
const int MOB_PRIEST_HOLY    =6611;
const int MOB_SCAR           =6761;
const int MOB_DRAGON_WORKER  =6844;
const int MOB_SONGBIRD           = 7500;
const int MOB_GHOST_BISHOP   =7510;
const int MOB_NESMUM	   =7531;
const int MOB_BLINDMAN       =7800;
const int MOB_NIGHTMARE      =7803;
const int MOB_PEACOCK        =7806;
const int MOB_GREYHOUND      =7816;
const int MOB_CHAMELEON      =7818;
const int MOB_LOCUSTS25      =7850;
const int MOB_LOCUSTS30      =7851;
const int MOB_LOCUSTS35      =7852;
const int MOB_LOCUSTS40      =7853;
const int MOB_LOCUSTS50      =7854;
const int MOB_SNAKES25       =7855;
const int MOB_SNAKES30       =7856;
const int MOB_SNAKES35       =7857;
const int MOB_SNAKES40       =7858;
const int MOB_SNAKES50       =7859;
const int MOB_SIMON_SPELLCRAFTER = 7876;
const int MOB_BOUNCER2       =8418;
const int MOB_MISER_BEN	   =8435;
const int MOB_CHEETAH        =8511;
const int MOB_ELEPHANT       =8525;
const int MOB_MEDICINE_MAN   =8677;
const int MOB_PETGUY_AMB     =8701;
const int MOB_RANGER_AMBER   =8704;
const int MOB_DWARVEN_AMBASSADOR =8784;
const int MOB_LENGE_MERCHANT =8796;
const int MOB_YOLA	   =9148;
const int MOB_RATTLESNAKE    =9314;
const int MOB_UNDEAD_CHIEF   =9319;
const int MOB_RAULDOPLIC     =9322;
const int MOB_ABNOR	   =9326;
const int MOB_GRIZWALD	   =9331;
const int MOB_MOAT_MONSTER   =9700;
const int MOB_CLERIC_VOLCANO =9727;
const int MOB_ASH            =9954;
const int MOB_FREEZING_MIST  =10022;
const int MOB_GERSARD        =10119;
const int MOB_FALCON         =10913;
const int MOB_HERMIT_JED     =10919;
const int MOB_POACH_KOBOLD   =10922;
const int MOB_POACH_ORC      =10923;
const int MOB_GM_IRIS        =11001;
const int MOB_DAKINOR        =11005;
const int MOB_THALIA         =11006;
const int MOB_MAGE_GM_LEVEL50=11039;
const int MOB_CAT_SHADOW     =11105;
const int MOB_CAPTAIN_RYOKEN =11113;
const int MOB_ORC_MAGI       =11300;
const int MOB_VAMP_BAT       =11340;
const int MOB_BELIMUS        =12402;
const int MOB_DRAGON_SILVER  =12404;
const int MOB_SIREN          =12406;
const int MOB_KRAKEN         =12407;
const int MOB_WHALE_SPERM    =12411;
const int MOB_TIGER_SHARK    =12413;
const int MOB_WHALE_BLUE     =12415;
const int MOB_EEL            =12416;
const int MOB_SHARK_YOUNG    =12431;
const int MOB_ASCALLION      =12433;
const int MOB_MERMAID        =12440;
const int MOB_MONK_GM_LEVEL50=12509;
const int MOB_EEL2           =14125;
const int MOB_JAQUIN	   =14159;
const int MOB_BARARAKNA	   =14227;
const int MOB_WORKER_WINERY  =14404;
const int MOB_BERARDINIS     =15103;
const int MOB_POACHER	   =15251;
const int MOB_MERRITT        =15284;
const int MOB_BONE_PYGMY     =15107;
const int MOB_SILVERCLAW     =17106;
const int MOB_ROCK_GIANT     =20408;
const int MOB_RIVER_SERPENT  =20409;
const int MOB_LOST_ICE_COM   =20420;
const int MOB_LOST_ICE_SCOUT =20421;
const int MOB_ARCTIC_BEAR1   =20422;
const int MOB_ARCTIC_BEAR2   =20423;
const int MOB_SNOW_BEAST     =20424;
const int MOB_PENGUIN_ADULT  =20425;
const int MOB_PENGUIN_YOUNG  =20426;
const int MOB_MOUNTAIN_CAT   =20427;
const int MOB_SEA_LION       =20430;
const int MOB_AQUATIC_DRAGON =22517;
const int MOB_SPIRIT_OF_WARRIOR =22518;
const int MOB_LOGRUS_INITIATION = 22713;
const int MOB_CLERIC_ARDEN   =23209;
const int MOB_DRAGON_CLOUD   =23633;
const int MOB_LORTO	   =28876;
const int MOB_HERMIT_GHPARK  =25404;
const int MOB_GNOBLE_FARMER  =22410;
const int MOB_GNOME_FARMER   =22414;
const int MOB_GNOME_CHILD    =22419;
const int MOB_GNOME_FARMHAND =22421;
const int MOB_JOHN_RUSTLER   =22427;
const int MOB_CALDONIA       =24100;
const int MOB_ELDERLY_SHAMAN =30701;
const int MOB_CHIEF_MALE_VILLAGER =30702;
const int MOB_ANCESTOR_SPIRIT_APPARATION =30713;
const int THRALL_SPECTRE     =31300;
const int THRALL_GHAST       =31301;
const int THRALL_GHOUL       =31302;
const int THRALL_DEMON       =31303;
const int MOB_JUJU_BUNNY     =4497;
const int MOB_JUJU_MARE      =31307;
const int MOB_JUJU_TETRARCH  =15104;
const int MOB_FACTION_REGISTRAR = 360;
const int MOB_SAMEDI = 31310;
const int MOB_PTOK = 31311;
const int MOB_FORSAKEN = 31312;
const int MOB_ELRIC = 31313;
const int MOB_SPIRIT_FATHER = 31314;
const int MOB_GANDOLFO = 31315;
const int MOB_STRANGE_LIZARD = 31316;
#endif






