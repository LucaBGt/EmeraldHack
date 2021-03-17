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
	setflag FLAG_HIDE_MAP_NAME_POPUP
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
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_0
	switch VAR_HOMETOWN
	case 0, InsideOfTruck_EventScript_SetIntroFlags_12
	case 1, InsideOfTruck_EventScript_SetIntroFlags_13
	case 2, InsideOfTruck_EventScript_SetIntroFlags_14
	case 3, InsideOfTruck_EventScript_SetIntroFlags_15
	case 4, InsideOfTruck_EventScript_SetIntroFlags_16
	case 5, InsideOfTruck_EventScript_SetIntroFlags_17
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_6
InsideOfTruck_EventScript_SetIntroFlags_10:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq InsideOfTruck_EventScript_SetIntroFlagsMale
	compare VAR_RESULT, FEMALE
	goto_if_eq InsideOfTruck_EventScript_SetIntroFlagsFemale
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
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_1
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_13:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_2
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_14:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_3
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_15:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_4
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_16:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_5
	goto InsideOfTruck_EventScript_SetIntroFlags_10

InsideOfTruck_EventScript_SetIntroFlags_17:
	msgbox InsideOfTruck_EventScript_SetIntroFlags_Text_6
	goto InsideOfTruck_EventScript_SetIntroFlags_10


InsideOfTruck_EventScript_SetIntroFlagsMale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	releaseall
	end


InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 12, 10
	releaseall
	end


InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end


InsideOfTruck_EventScript_SetIntroFlags_Text_0:
	.string "That's right!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_1:
	.string "I'm moving to \nMAUVILE CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_2:
	.string "I'm moving to \nMOSSDEEP CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_3:
	.string "I'm moving to \nLILYCOVE CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_4:
	.string "I'm moving to \nSLATEPORT CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_5:
	.string "I'm moving to \nRUSTBORO CITY!$"

InsideOfTruck_EventScript_SetIntroFlags_Text_6:
	.string "I'm moving to \nLITTLEROOT TOWN!$"

InsideOfTruck_Text_BoxPrintedWithMonLogo::
	.string "The box is printed with a POKéMON logo.\p"
	.string "It's a POKéMON brand moving and\n"
	.string "delivery service.$"

Text_SimpleMsgScript::
	.string "Hm...\n"
	.string "Where is my new house again?$"
