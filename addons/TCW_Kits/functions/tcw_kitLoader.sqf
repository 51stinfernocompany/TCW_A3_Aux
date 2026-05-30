if (isNil "TCW_KitBox") exitWith {
    diag_log "[Kits] ERROR: kitBox not found!";
};

/* <------------- Unit IDs to validate against ------------->*/
private _41EC = "41st"; //41st Elite Corps


/* <------------- Squad XML Data Collection and Validation ------------->*/
private _params = squadParams player;
private _clanID = ""; //The player's clan ID
private _clanRemark = "";
private _rank = "CT"; //Default Rank
private _progression = "0"; //Default Prog

// Debug, shows all values from a matched Squad XML file
{
    diag_log format ["[Param Check] param %1: '%2'", _forEachIndex, _x];
} forEach _params;

// Grab, parse, and store TCW needed data from the remark field of the XML
if (count _params > 0 && {!isNil {_params select 1 select 5}}) then {
    _clanRemark = _params select 1 select 5;
    diag_log format ["[RemarkCheck] _clanRemark: '%1'", _clanRemark];
    private _remarkArray = _clanRemark splitString ",";
    _rank = _remarkArray select 0;
    _progression = _remarkArray select 1;
};

// Store Unit Nick and output the data to log for debug
if (count _params > 0 && {!isNil {_params select 0 select 0}}) then {
    _clanID = _params select 0 select 0;
    diag_log format ["[UnitCheck] _clanID: '%1'", _clanID];
};

// Debug message if no XML match acheived
if (_clanID == "") then {
    diag_log "[UnitCheck] Player has no linked squad.";
};

// Build alt gear array conditionally
private _rankGear = [];

// Add rank gear conditionally
private _rankOrder = ["CS", "CL", "CPT", "CC"];
private _rankGearMap = [
    ["tcw_p1_helmet_sergeant",  "tcw_clone_uniform_sergeant"],
    ["tcw_p1_helmet_lieutenant","tcw_clone_uniform_lieutenant"],
    ["tcw_p1_helmet_captain",   "tcw_clone_uniform_captain"],
    ["tcw_p1_helmet_commander", "tcw_clone_uniform_commander"]
];

private _rankIndex = _rankOrder find _rank;

if (_rankIndex >= 0) then {
    for "_i" from 0 to _rankIndex do {
        { _rankGear pushBackUnique _x; } forEach (_rankGearMap select _i);
    };
};

/* <------------- Alt Gear Arrays ------------->*/
private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearMedic = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearHeavy = ["tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","tcw_z6_mag"];
private _altGearMarksman = ["tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","tcw_dc15x_magazine"];
private _altGearAT = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearAssault = ["tcw_dc23","tcw_dc23_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearEngineer = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack"];

/* <------------- Append rank gear to the Alt Gear Arrays ------------->*/
private _allAltGear = [
    _altGearTrooper,
    _altGearMedic,
    _altGearHeavy,
    _altGearMarksman,
    _altGearAT,
    _altGearAssault,
    _altGearEngineer
];

//Possibly Temporary catch for non-standard or missing ranks at launch. Enables all rank gear if no rank found.
if (!(_rank in _rankOrder)) then {
    diag_log format ["[TCW] WARNING: Rank '%1' not recognised, adding all rank gear as fallback.", _rank];
    private _allRankGear = [];
    { { _allRankGear pushBackUnique _x; } forEach _x; } forEach _rankGearMap;
    {
        private _kit = _x;
        { _kit pushBackUnique _x; } forEach _allRankGear;
    } forEach _allAltGear;
} else {
    {
        private _kit = _x;
        { _kit pushBackUnique _x; } forEach _rankGear;
    } forEach _allAltGear;
};

// Code for after removal the backend data collection is fully finished
/*{
    private _kit = _x;
    { _kit pushBackUnique _x; } forEach _rankGear;
} forEach _allAltGear;*/

/* <------------- The Basic Kits ------------->*/
// Trooper
[
    TCW_KitBox, // Variable name of our specific Kit Box, do not change for TCW
    "Trooper", // Name of the Kit
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["TCW_bactaSpray",30],["tcw_SmokeWhite",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["TCW_tourniquet",4],["TCW_combatStim",1],["TCW_adrenalStim",1],["TCW_bacta_250",2],["TCW_splint",4],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",14,30],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1],["tcw_stun_mag_long",3,5]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit
    _altGearTrooper, //Alt Gear
    "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true];} //Additional code to run
] spawn Wbk_AddKit;

// Medic
[
    TCW_KitBox,
    "Medic",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_EntrenchingTool",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["TCW_bacta",3]]],["tcw_vest_plate_base",[["ItemcTabHCam",1],["TCW_bacta",5],["TCW_stitchKit",1],["TCW_splint",8],["TCW_tourniquet",8],["TCW_bactaSpray",35],["TCW_adrenalStim",1],["tcw_SmokeWhite",8,1],["tcw_dc15a_mag",10,30],["Laserbatteries",1,1],["tcw_dc17_mag",2,50],["tcw_SmokePurple",2,1],["tcw_stun_mag_long",2,5]]],["tcw_clone_backpack",[["TCW_bactaSpray",25],["TCW_bacta_500",8],["TCW_bacta_250",4],["TCW_combatStim",10],["TCW_adrenalStim",10],["tcw_dc17_mag",4,50],["3AS_SmokePurple",5,1],["3AS_ThermalDetonator",2,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMedic,
    "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Heavy
[
    TCW_KitBox,
    "Heavy",
    [["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["TCW_tourniquet",4],["TCW_splint",4],["TCW_bacta_250",1],["TCW_adrenalStim",1],["3AS_SmokeWhite",3,1],["tcw_SmokeWhite",3,1]]],["tcw_vest_plate_base",[["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["Laserbatteries",1,1],["tcw_dc17_mag",3,50],["tcw_z6_mag",5,300]]],["tcw_clone_backpack",[["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["TCW_bactaSpray",30],["TCW_combatStim",1],["tcw_z6_mag",5,300]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearHeavy,
    "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Marksman
[
    TCW_KitBox,
    "Marksman",
    [["tcw_dc15x","","","",["tcw_dc15x_magazine",13],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["TCW_tourniquet",4],["TCW_splint",4],["TCW_bactaSpray",30],["TCW_adrenalStim",1],["TCW_combatStim",1],["tcw_SmokeWhite",2,1]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["WBK_HeadLampItem_Narrow",1],["tcw_dc17_mag",2,50],["tcw_dc15x_magazine",15,20],["3AS_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["Laserbatteries",1,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMarksman,
    "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Anti-Tank
[
    TCW_KitBox,
    "Anti-Tank",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["IDA_RPS6HP","","","",["IDA_RPS6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["TCW_bactaSpray",30],["TCW_splint",4],["TCW_tourniquet",4],["tcw_dc17_mag",1,50]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["3AS_SmokeWhite",3,1],["IDA_grenade_Sonic_mag",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc15a_mag",15,30],["tcw_dc17_mag",2,50],["Laserbatteries",1,1],["tcw_stun_mag_long",2,5]]],["IDA_Clone_Rucksack",[["IDA_RPS6_rocket",6,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAT,
    "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Assault
[
    TCW_KitBox,
    "Assault",
    [["tcw_dc23","","","",["tcw_dc23_mag",6],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_Flashlight_XL50",1],["ACE_IR_Strobe_Item",1],["TCW_bactaSpray",30],["TCW_splint",4],["TCW_tourniquet",4],["TCW_adrenalStim",1],["TCW_combatStim",1]]],["tcw_vest_plate_base",[["ACE_painkillers",1,10],["3AS_ThermalDetonator",8,1],["IDA_grenade_Sonic_mag",15,1],["3AS_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["tcw_penetrator_grenade",1,1],["tcw_dc17_mag",2,50],["tcw_dc23_mag",8,6]]],["tcw_clone_backpack",[["ACE_packingBandage",20],["ACE_elasticBandage",10],["ACE_splint",4],["tcw_dc23_mag",10,6]]],"tcw_p1_helmet_base","",[],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAssault,
    "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Engineer
[
    TCW_KitBox,
    "Engineer",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_DefusalKit",1],["TCW_bactaSpray",30],["TCW_splint",4],["TCW_tourniquet",4],["TCW_adrenalStim",1],["TCW_combatStim",1],["ACE_Fortify",1],["tcw_stun_mag_long",2,5]]],["tcw_vest_plate_base",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["ToolKit",1],["tcw_SmokeWhite",5,1],["tcw_ThermalDetonator",4,1],["tcw_dc15a_mag",13,30]]],["tcw_clone_backpack",[["ACE_EntrenchingTool",1],["ACE_wirecutter",1],["Laserbatteries",1,1],["tcw_dc15a_mag",2,30],["tcw_dc17_mag",2,50]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearEngineer,
    "(({_x getVariable 'WBK_Kit_Name' == 'Engineer'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
