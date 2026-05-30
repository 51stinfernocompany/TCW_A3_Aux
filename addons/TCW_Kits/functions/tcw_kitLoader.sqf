if (isNil "TCW_KitBox") exitWith {
    diag_log "[Kits] ERROR: kitBox not found!";
};

/* <------------- Squad XML Data Collection and Validation ------------->*/
private _params = squadParams player;
private _41EC = "41st"; //Make a variable like this for each whitelisted unit in TCW
private _clanID = ""; //The player's clan ID
private _clanRemark = "";
private _rank = "CT";
private _progression = "0";


{
    diag_log format ["[Param Check] param %1: '%2'", _forEachIndex, _x];
} forEach _params;

if (count _params > 0 && {!isNil {_params select 1 select 5}}) then {
    _clanRemark = _params select 1 select 5;
    diag_log format ["[RemarkCheck] _clanRemark: '%1'", _clanRemark];
    private _remarkArray = _clanRemark splitString ",";
    _rank = _remarkArray select 0;
    _progression = _remarkArray select 1;
};

if (count _params > 0 && {!isNil {_params select 3}}) then {
    _clanID = _params select 3;
    diag_log format ["[UnitCheck] _clanID: '%1'", _clanID];
};

player setVariable ["isUnit",(_clanID == _41EC)]; //Set the trigger variable for each whitelisted unit
//private _isUnit2 = (_clanID == _dummyUnitID);

if (_clanID == "") then {
    diag_log "[UnitCheck] Player has no linked squad.";
};

// Build alt gear array conditionally
private _rankGear = [];

// Add rank gear conditionally
switch (_rank) do {
    case "CS": {
        _rankGear pushBackUnique "tcw_p1_helmet_sergeant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_sergeant";
    };
    case "CL": {
        _rankGear pushBackUnique "tcw_p1_helmet_sergeant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_sergeant";
        _rankGear pushBackUnique "tcw_p1_helmet_lieutenant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_lieutenant";
    };
    case "CC": {
        _rankGear pushBackUnique "tcw_p1_helmet_sergeant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_sergeant";
        _rankGear pushBackUnique "tcw_p1_helmet_lieutenant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_lieutenant";
        _rankGear pushBackUnique "tcw_p1_helmet_captain";
        _rankGear pushBackUnique "tcw_clone_uniform_item_captain";
    };
    case "N/A": {
        _rankGear pushBackUnique "tcw_p1_helmet_sergeant";
        _rankGear pushBackUnique "tcw_clone_uniform_item_sergeant";
    };
};

private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Radiopack_ReconRig"];

// Append rank gear
{ _altGearTrooper pushBackUnique _x; } forEach _rankGear;

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

// Dummy Test Kit squad XML unlocking rank armor
[
 TCW_KitBox, // Variable name of our specific Kit Box, do not change for TCW
 "Clone Trooper", // Name of the Kit
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_packingBandage",20],["ACE_elasticBandage",10],["tcw_SmokeWhite",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_MapTools",1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",15,30],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit

_altGearTrooper, //Alt Gear

 "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true];} //Additional code to run
] spawn Wbk_AddKit;



/* <------------- Fake Kits, Update with proper gear ------------->*/
[
 TCW_KitBox, // Variable name of our specific Kit Box, do not change for TCW
 "Clone Trooper", // Name of the Kit
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_packingBandage",20],["ACE_elasticBandage",10],["tcw_SmokeWhite",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_MapTools",1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",15,30],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit

_altGearTrooper, //Alt Gear

 "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true];} //Additional code to run
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Medic",
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_bloodIV",3]]],["tcw_vest_plate_base",[["ACE_splint",10],["ACE_surgicalKit",1],["ACE_tourniquet",12],["ItemcTabHCam",1],["ACE_bloodIV",6],["tcw_SmokeWhite",10,1],["tcw_dc15a_mag",12,30],["Laserbatteries",1,1],["tcw_dc17_mag",2,50]]],["IDA_Clone_Rucksack",[["ACE_adenosine",5],["ACE_elasticBandage",30],["ACE_packingBandage",20],["ACE_epinephrine",5],["ACE_morphine",10],["ACE_personalAidKit",1],["ACE_plasmaIV_500",12],["ACE_bloodIV_500",4],["ACE_bloodIV_250",8],["tcw_dc17_mag",4,50],["3AS_SmokePurple",5,1],["3AS_ThermalDetonator",2,1],["ACE_painkillers",4,10]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Heavy",
[["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",3],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["3AS_SmokeWhite",3,1]]],["tcw_vest_plate_base",[["tcw_z6_mag_explosive",3,3],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["Laserbatteries",1,1],["tcw_dc17_mag",3,50],["tcw_z6_mag",2,300]]],["IDA_Clone_Rucksack",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_tourniquet",2],["ACE_splint",4],["tcw_z6_mag",3,300],["ACE_painkillers",1,10]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;



[
 TCW_KitBox,
 "Marksman",
[["tcw_dc15x","","","",["tcw_dc15x_magazine",20],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",3],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["tcw_dc17_mag",1,50]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_splint",4],["ACE_tourniquet",2],["WBK_HeadLampItem_Narrow",1],["tcw_dc17_mag",2,50],["tcw_dc15x_magazine",15,20],["3AS_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["Laserbatteries",1,1],["ACE_painkillers",1,10]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_ReconRig","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Anti-Tank",
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["IDA_RPS6HP","","","",["IDA_RPS6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_packingBandage",20],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["ACE_painkillers",1,10]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_splint",4],["ACE_tourniquet",4],["3AS_SmokeWhite",3,1],["IDA_grenade_Sonic_mag",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc15a_mag",15,30],["tcw_dc17_mag",3,50],["Laserbatteries",1,1]]],["IDA_Clone_Rucksack",[["IDA_RPS6_rocket",6,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Assault",
[["IDA_DC23","","","",["IDA_Blaster_Cell_Scatter_6Rnd_Blue",6],[],""],[],["IDA_Clone_Knife","","","",[],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_Flashlight_XL50",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",4],["ACE_Chemlight_HiGreen",10,1],["ACE_Chemlight_HiRed",4,1]]],["tcw_vest_plate_base",[["ACE_painkillers",1,10],["3AS_ThermalDetonator",8,1],["IDA_grenade_Sonic_mag",15,1],["3AS_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["tcw_penetrator_grenade",1,1],["IDA_Blaster_Cell_Scatter_6Rnd_Blue",11,6]]],["IDA_Clone_GrenadeRig",[["ACE_packingBandage",20],["ACE_elasticBandage",10],["ACE_splint",4],["IDA_Blaster_Cell_Scatter_6Rnd_Blue",4,6]]],"tcw_p1_helmet_base","",[],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","IDA_DC23","IDA_Blaster_Cell_Scatter_6Rnd_Blue","IDA_Clone_Knife","tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_Radiopack"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Engineer",
[["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_DefusalKit",1],["ACE_splint",4],["ACE_SpraypaintRed",1],["ACE_tourniquet",4],["ACE_painkillers",1,10]]],["tcw_vest_plate_base",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["ToolKit",1],["tcw_SmokeWhite",5,1],["tcw_ThermalDetonator",4,1],["tcw_dc15a_mag",13,30]]],["IDA_Clone_ReconRig",[["ACE_Fortify",1],["ACE_EntrenchingTool",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["tcw_p1_helmet_base","tcw_p1_helmet_sergeant","tcw_p1_helmet_lieutenant","tcw_p1_helmet_captain","tcw_p1_helmet_commander","tcw_clone_uniform_item","tcw_clone_uniform_item_sergeant","tcw_clone_uniform_item_lieutenant","tcw_clone_uniform_item_captain","tcw_clone_uniform_item_commander","IDA_Clone_Rucksack","IDA_Clone_ReconRig", "JLTS_Clone_backpack_RTO","IDA_Clone_Radiopack"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Engineer'} count units group player) == 0)",
 { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
