InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, 0
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, 0
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, 0
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_0
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_1
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_2
	msgbox Text_SimpleMsgScript, MSGBOX_DEFAULT
	multichoicedefault 21, 6, MULTI_HOMETOWN, 2, 0
	switch VAR_RESULT
	case 0, InsideOfTruck_EventScript_SetIntroFlags_3
	case 1, InsideOfTruck_EventScript_SetIntroFlags_4
	case 2, InsideOfTruck_EventScript_SetIntroFlags_5
	case 3, InsideOfTruck_EventScript_SetIntroFlags_6
	case 4, InsideOfTruck_EventScript_SetIntroFlags_7
	case 5, InsideOfTruck_EventScript_SetIntroFlags_8
	setvar VAR_HOMETOWN, 5
InsideOfTruck_EventScript_SetIntroFlags_1:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_3
	switch VAR_HOMETOWN
	case 0, InsideOfTruck_EventScript_SetIntroFlags_12
	case 1, InsideOfTruck_EventScript_SetIntroFlags_13
	case 2, InsideOfTruck_EventScript_SetIntroFlags_14
	case 3, InsideOfTruck_EventScript_SetIntroFlags_15
	case 4, InsideOfTruck_EventScript_SetIntroFlags_16
	case 5, InsideOfTruck_EventScript_SetIntroFlags_17
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_9
InsideOfTruck_EventScript_SetIntroFlags_10:
	goto InsideOfTruck_EventScript_SetIntroFlagsMale
	end

InsideOfTruck_EventScript_SetIntroFlags_3:
	setvar VAR_HOMETOWN, 0
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_4:
	setvar VAR_HOMETOWN, 1
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_5:
	setvar VAR_HOMETOWN, 2
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_6:
	setvar VAR_HOMETOWN, 3
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_7:
	setvar VAR_HOMETOWN, 4
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_8:
	setvar VAR_HOMETOWN, 5
	goto InsideOfTruck_EventScript_SetIntroFlags_1

InsideOfTruck_EventScript_SetIntroFlags_12:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_4
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_13:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_5
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_14:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_6
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_15:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_7
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_16:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_8
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_17:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_9
	goto InsideOfTruck_EventScript_SetIntroFlags_10


InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	switch VAR_HOMETOWN
	case 0, InsideOfTruck_EventScript_SetIntroFlagsMale_3
	case 1, InsideOfTruck_EventScript_SetIntroFlagsMale_4
	case 2, InsideOfTruck_EventScript_SetIntroFlagsMale_5
	case 3, InsideOfTruck_EventScript_SetIntroFlagsMale_6
	case 4, InsideOfTruck_EventScript_SetIntroFlagsMale_7
	case 5, InsideOfTruck_EventScript_SetIntroFlagsMale_8
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
InsideOfTruck_EventScript_SetIntroFlagsMale_1:
	setflag FLAG_SYS_QUEST_MENU_GET
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsMale_3:
	setdynamicwarp MAP_MAUVILLE_CITY, 255, 17, 16
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1

InsideOfTruck_EventScript_SetIntroFlagsMale_4:
	setdynamicwarp MAP_MOSSDEEP_CITY, 255, 65, 27
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1

InsideOfTruck_EventScript_SetIntroFlagsMale_5:
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1

InsideOfTruck_EventScript_SetIntroFlagsMale_6:
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1

InsideOfTruck_EventScript_SetIntroFlagsMale_7:
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1

InsideOfTruck_EventScript_SetIntroFlagsMale_8:
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	goto InsideOfTruck_EventScript_SetIntroFlagsMale_1


InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end


InsideOfTruck_EventScript_SetIntroFlags_Text_0:
	.string "Oh, wait!\nMy pocket watch stopped...$"

InsideOfTruck_EventScript_SetIntroFlags_Text_1:
	.string "What's the time again?$"

InsideOfTruck_EventScript_SetIntroFlags_Text_2:
	.string "All good to go!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_3:
	.string "That's right!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_4:
	.string "I'm moving to \nMAUVILE CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_5:
	.string "I'm moving to \nMOSSDEEP CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_6:
	.string "I'm moving to \nLILYCOVE CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_7:
	.string "I'm moving to \nSLATEPORT CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_8:
	.string "I'm moving to \nRUSTBORO CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_9:
	.string "I'm moving to \nLITTLEROOT TOWN!$"

InsideOfTruck_Text_BoxPrintedWithMonLogo::
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand moving and\n"
	.string "delivery service.$"

Text_SimpleMsgScript::
	.string "Hm...\n"
	.string "Where is my new house again?$"
