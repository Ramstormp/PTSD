#pragma once

#ifndef CVDEFINES_H
#define CVDEFINES_H

// defines.h

// The following #defines should not be moddable...

#define MOVE_IGNORE_DANGER										(0x00000001)
#define MOVE_SAFE_TERRITORY										(0x00000002)
#define MOVE_NO_ENEMY_TERRITORY								(0x00000004)
#define MOVE_DECLARE_WAR											(0x00000008)
#define MOVE_DIRECT_ATTACK										(0x00000010)
#define MOVE_THROUGH_ENEMY										(0x00000020)
#define MOVE_BUST_FOG											(0x00000040)
// TAC - AI Assault Sea - koma13, jdog5000(BBAI) - START
// These two flags signal to weight the cost of moving through or adjacent to enemy territory higher
// Used to reduce exposure to attack for approaching enemy cities
#define MOVE_AVOID_ENEMY_WEIGHT_2								(0x00000080)
#define MOVE_AVOID_ENEMY_WEIGHT_3								(0x00000100)
// TAC - AI Assault Sea - koma13, jdog5000(BBAI) - END

// R&R, ray, Natives raiding party - START
#define MOVE_DIRECT_RAID									(0x00000080)
// R&R, ray, Natives raiding party - END

#define RANDPLOT_LAND													(0x00000001)
#define RANDPLOT_UNOWNED											(0x00000002)
#define RANDPLOT_ADJACENT_UNOWNED							(0x00000004)
#define RANDPLOT_ADJACENT_LAND								(0x00000008)
#define RANDPLOT_PASSIBLE											(0x00000010)
#define RANDPLOT_NOT_VISIBLE_TO_CIV						(0x00000020)
#define RANDPLOT_NOT_CITY											(0x00000040)

#ifdef _USRDLL
#define MAX_PLAYERS												(49) // R&R, ray - Europeans, Natives, Kings, Animals and Church
#else
#define MAX_PLAYERS												(CvGlobals::getInstance().getMaxCivPlayers())
#endif

#define MAX_TEAMS													(MAX_PLAYERS)

// Char Count limit for edit boxes
#define PREFERRED_EDIT_CHAR_COUNT							(15)
#define MAX_GAMENAME_CHAR_COUNT								(32)
#define MAX_PLAYERINFO_CHAR_COUNT							(32)
#define MAX_PLAYEREMAIL_CHAR_COUNT						(64)
#define MAX_PASSWORD_CHAR_COUNT								(32)
#define MAX_GSLOGIN_CHAR_COUNT								(17)
#define MAX_GSEMAIL_CHAR_COUNT								(50)
#define MAX_GSPASSWORD_CHAR_COUNT							(30)
#define MAX_CHAT_CHAR_COUNT										(256)
#define MAX_ADDRESS_CHAR_COUNT								(64)

#define INVALID_PLOT_COORD										(-(MAX_INT))	// don't use -1 since that is a valid wrap coordinate
#define DIRECTION_RADIUS											(1)
#define DIRECTION_DIAMETER										((DIRECTION_RADIUS * 2) + 1)

#define NUM_CITY_PLOTS_RADIUS_2                                    (25)
#define NUM_CITY_PLOTS_RADIUS_1										(9)		// R&R, ray, 2 Plot Radius							
#define CITY_HOME_PLOT												(0)

#define GAME_NAME															("Game")

#define LANDSCAPE_FOW_RESOLUTION							(4)

#define Z_ORDER_LAYER													(-0.1f)
#define Z_ORDER_LEVEL													(-0.3f)

#define CIV4_GUID															"civ4colpc"
#define CIV4_PRODUCT_ID												11476
#define CIV4_NAMESPACE_ID											17
#define CIV4_NAMESPACE_EXT										"-tk"

#define MAP_TRANSFER_EXT											"_t"

#define USER_CHANNEL_PREFIX										"#civ4buser!"

#define SETCOLR																L"<color=%d,%d,%d,%d>"
#define ENDCOLR																L"</color>"
#define NEWLINE																L"\n"
#define SEPARATOR															L"\n-----------------------"
#define TEXT_COLOR(szColor)										((int)(GC.getColorInfo((ColorTypes)GC.getInfoTypeForString(szColor)).getColor().r * 255)), ((int)(GC.getColorInfo((ColorTypes)GC.getInfoTypeForString(szColor)).getColor().g * 255)), ((int)(GC.getColorInfo((ColorTypes)GC.getInfoTypeForString(szColor)).getColor().b * 255)), ((int)(GC.getColorInfo((ColorTypes)GC.getInfoTypeForString(szColor)).getColor().a * 255))

// Version Verification files and folders
#ifdef _DEBUG
#define CIV4_EXE_FILE													".\\Colonization_DEBUG.exe"
#define CIV4_DLL_FILE													".\\Assets\\CvGameCoreDLL_DEBUG.dll"
#else
#define CIV4_EXE_FILE													".\\Colonization.exe"
#define CIV4_DLL_FILE													".\\Assets\\CvGameCoreDLL.dll"
#endif
#define CIV4_SHADERS													".\\Shaders\\FXO"
#define CIV4_ASSETS_PYTHON										".\\Assets\\Python"
#define CIV4_ASSETS_XML												".\\Assets\\XML"

#define MAX_PLAYER_NAME_LEN										(64)
#define MAX_VOTE_CHOICES											(8)
#define VOTE_TIMEOUT													(600000)	// 10 minute vote timeout - temporary

#define ANIMATION_DEFAULT											(1)			// Default idle animation

// python module names
#define PYDebugToolModule			"CvDebugInterface"
#define PYScreensModule				"CvScreensInterface"
#define PYCivModule						"CvAppInterface"
#define PYWorldBuilderModule	"CvWBInterface"
#define PYDiplomacyModule			"CvDiplomacyInterface"
#define PYUnitControlModule		"CvUnitControlInterface"
#define PYTextMgrModule				"CvTextMgrInterface"
#define PYDebugScriptsModule	"DebugScripts"
#define PYPitBossModule				"PbMain"
#define PYTranslatorModule		"CvTranslator"
#define PYGameModule					"CvGameInterface"
#define PYEventModule					"CvEventInterface"
#define PYRandomEventModule					"CvRandomEventInterface"

// modded
#define PYCPPModule "CvCPPInterface"

// CvPlayer::checkPower is too slow to call frequently.
// However when it fails, it doesn't tell where it fails.
// For this reason, compiling with extra power checks is a needed optional feature.
// It will test frequently and a failure will indicate a bug since last check,
//   giving modders a chance to figure out where it went wrong.
// It's off unless CUSTOM_CFLAGS contains -DWITH_EXTRA_POWER_CHECKS (Makefile.settings)
//   Nightinggale
#ifdef WITH_EXTRA_POWER_CHECKS
#define EXTRA_POWER_CHECK FAssert(checkPower(false));
#else
#define EXTRA_POWER_CHECK
#endif
//

#endif	// CVDEFINES_H
