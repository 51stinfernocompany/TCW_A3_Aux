if (isNil "TCW_KitBox") exitWith {
    diag_log "[Kits] ERROR: kitBox not found!";
};

/* <------------- Update When Backend is Ready ------------->*/
private _params = squadParams player;
private _dummyUnitID = "256838"; //Make a variable like this for each whitelisted unit in TCW
private _clanID = ""; //The player's clan ID
private _clanRemark = "";

{
    diag_log format ["[Param Check] param %1: '%2'", _forEachIndex, _x];
} forEach _params;

if (count _params > 0 && {!isNil {_params select 1}}) then {
    _clanRemark = _params select 1 select 5;
    diag_log format ["[RemarkCheck] _clanRemark: '%1'", _clanRemark];
};

if (count _params > 0 && {!isNil {_params select 3}}) then {
    _clanID = _params select 3;
    diag_log format ["[UnitCheck] _clanID: '%1'", _clanID];
};

player setVariable ["isUnit",(_clanID == _dummyUnitID)]; //Set the trigger variable for each whitelisted unit
//private _isUnit2 = (_clanID == _dummyUnitID);

if (_clanID == "") then {
    diag_log "[UnitCheck] Player has no linked squad.";
};

// Debug / Testing, remove after full implementation
/*[
    TCW_KitBox, ///////Variable of the object
    "Shiny",  ////Name of the kit
    [["JLTS_DC15A_plastic","","","",["JLTS_DC15A_mag",60],[],""],[],["JLTS_DC17SA","","","",["JLTS_DC17SA_mag",20],[],""],["3AS_Clone_Phase1_Armor",[["ACE_EarPlugs",1],["ACE_fieldDressing",1],["ACE_packingBandage",1],["ACE_morphine",1],["ACE_tourniquet",1],["JLTS_DC15A_mag",9,60],["JLTS_DC17SA_mag",2,20],["Chemlight_green",2,1],["HandGrenade",2,1]]],[],[],"3as_P1_Base","",[],["ItemMap","ItemGPS","","ItemCompass","ItemWatch",""]], ////Kit itself
    [""], ////Additional equipment
    "true", ////Statement must return true!
    {} ////Aditional code that will be executed when kit is selected
] spawn Wbk_AddKit;

if (player getVariable ['isUnit', false]) then
{
    [
        TCW_KitBox, ///////Variable of the object
        "Unit Test",  ////Name of the kit
        [["IDA_DC15A","","","",["IDA_Blaster_Cell_Power3_60Rnd_Blue",60],[],""],[],["IDA_DC17","","","",["IDA_Blaster_Cell_Power2_20Rnd_Blue",20],[],""],["IDA_Clone_Uniform",[["ACE_EarPlugs",1],["ACE_fieldDressing",1],["ACE_packingBandage",1],["ACE_morphine",1],["ACE_tourniquet",1],["Chemlight_green",2,1],["HandGrenade",2,1],["IDA_Blaster_Cell_Power3_60Rnd_Blue",3,60],["IDA_Blaster_Cell_Power2_20Rnd_Blue",3,20]]],["IDA_Holster_1",[]],["IDA_Clone_ScoutPack",[]],"SEA_Helmet_P1_Base","IDA_Airborne_Harness_Kama",[],["ItemMap","ItemGPS","","ItemCompass","ItemWatch","IDA_Clone_NVG"]], ////Kit itself
        ["IDA_DC15S_UGL"], ////Additional equipment
        "(player getVariable ['isUnit', false])", ////Statement must return true!
        {} ////Aditional code that will be executed when kit is selected
    ] spawn Wbk_AddKit;
};*/

/* <------------- Fake Kits, Update with proper gear ------------->*/
[
 TCW_KitBox, // Variable name of our specific Kit Box, do not change for TCW
 "Clone Trooper", // Name of the Kit
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["IDA_BactaBandage",20],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_packingBandage",10],["ACE_tourniquet",4],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",15,30],["ACE_Chemlight_HiBlue",4,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Radiopack_ReconRig"], //Alt Gear

 "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; } //Additional code to run
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Medic",
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_bloodIV",3]]],["tcw_vest_plate_base",[["ACE_plasmaIV",6],["ACE_splint",10],["ACE_surgicalKit",1],["ACE_tourniquet",12],["ItemcTabHCam",1],["tcw_SmokeWhite",10,1],["tcw_dc15a_mag",12,30],["Laserbatteries",1,1],["tcw_dc17_mag",2,50]]],["IDA_Clone_Rucksack",[["ACE_adenosine",5],["ACE_elasticBandage",50],["ACE_packingBandage",25],["ACE_epinephrine",5],["ACE_morphine",10],["ACE_personalAidKit",1],["ACE_plasmaIV_500",12],["ACE_plasmaIV",1],["ACE_plasmaIV_250",4],["tcw_dc17_mag",4,50],["3AS_SmokePurple",5,1],["3AS_ThermalDetonator",2,1],["ACE_painkillers",10,10]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Heavy",
[["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["3AS_SmokeWhite",3,1]]],["tcw_vest_plate_base",[["tcw_z6_mag_explosive",2,3],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1],["tcw_z6_mag",3,300]]],["IDA_Clone_Rucksack",[["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["tcw_z6_mag",3,300]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;



[
 TCW_KitBox,
 "Marksman",
[["tcw_dc15x","","","",["tcw_dc15x_magazine",20],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["tcw_dc17_mag",1,50]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_splint",4],["ACE_tourniquet",4],["WBK_HeadLampItem_Narrow",1],["tcw_dc17_mag",2,50],["tcw_dc15x_magazine",15,20],["3AS_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["Laserbatteries",1,1]]],["IDA_Clone_ReconRig",[["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_ReconRig","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Anti-Tank",
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["IDA_RPS6HP","","","",["IDA_RPS6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_elasticBandage",20],["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["ACE_painkillers",1,10]]],["tcw_vest_plate_base",[["ACE_packingBandage",10],["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_splint",4],["ACE_tourniquet",4],["3AS_SmokeWhite",3,1],["IDA_grenade_Sonic_mag",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc15a_mag",15,30],["tcw_dc17_mag",3,50],["Laserbatteries",1,1]]],["IDA_Clone_Rucksack",[["IDA_RPS6_rocket",6,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Assault",
[["IDA_DC23","","","",["IDA_Blaster_Cell_Scatter_6Rnd_Blue",6],[],""],[],["IDA_Clone_Knife","","","",[],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_Flashlight_XL50",1],["ACE_IR_Strobe_Item",1],["ACE_elasticBandage",3],["ACE_Chemlight_HiGreen",10,1],["ACE_Chemlight_HiRed",4,1]]],["tcw_vest_plate_base",[["ACE_painkillers",1,10],["3AS_ThermalDetonator",8,1],["IDA_grenade_Sonic_mag",15,1],["3AS_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["tcw_penetrator_grenade",1,1],["IDA_Blaster_Cell_Scatter_6Rnd_Blue",11,6]]],["IDA_Clone_GrenadeRig",[["IDA_Blaster_Cell_Scatter_6Rnd_Blue",4,6]]],"tcw_p1_helmet_base","",[],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","IDA_DC23","IDA_Blaster_Cell_Scatter_6Rnd_Blue","IDA_Clone_Knife","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Engineer",
[["ic51_dc15c","","","ic51_reflex3_optic",["ic51_dc15c_mag",40],["ic51_stun_mag_short",10],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_DefusalKit",1],["ACE_Fortify",1],["ACE_splint",5],["ACE_SpraypaintRed",1],["ACE_tourniquet",5],["kat_Painkiller",2,4]]],["ic51_vest_plate_engineer",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["JLTS_repairkit_weapon",1],["ic51_SmokeWhite",5,1],["ic51_ThermalDetonator",4,1],["3AS_FusionCutter_Magazine",6,100],["ic51_dc15c_mag",20,40],["ic51_stun_mag_long",3,5]]],[],"SEA_Helmet_P1_Base","3AS_G_Engineer_2_F",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 2, true]; }
] spawn Wbk_AddKit;
