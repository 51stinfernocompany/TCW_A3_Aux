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
    ["tcw_p1_helmet_sergeant",  "tcw_clone_uniform_item_sergeant"],
    ["tcw_p1_helmet_lieutenant","tcw_clone_uniform_item_lieutenant"],
    ["tcw_p1_helmet_captain",   "tcw_clone_uniform_item_captain"],
    ["tcw_p1_helmet_commander", "tcw_clone_uniform_item_commander"]
];

private _rankIndex = _rankOrder find _rank;

if (_rankIndex >= 0) then {
    for "_i" from 0 to _rankIndex do {
        { _rankGear pushBackUnique _x; } forEach (_rankGearMap select _i);
    };
};

/* <------------- Alt Gear Arrays ------------->*/
private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Radiopack_ReconRig"];
private _altGearMedic = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Rucksack","IDA_Clone_Radiopack"];
private _altGearHeavy = ["tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Rucksack","IDA_Clone_Radiopack"];
private _altGearMarksman = ["tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_ReconRig","IDA_Clone_Radiopack"];
private _altGearAT = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Rucksack","IDA_Clone_Radiopack"];
private _altGearAssault = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","IDA_DC23","IDA_Blaster_Cell_Scatter_6Rnd_Blue","IDA_Clone_Knife","tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Rucksack","IDA_Clone_Radiopack"];
private _altGearEngineer = ["tcw_p1_helmet_base","tcw_clone_uniform_item","IDA_Clone_Rucksack","IDA_Clone_ReconRig", "JLTS_Clone_backpack_RTO","IDA_Clone_Radiopack"];

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
    "Clone Trooper", // Name of the Kit
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_packingBandage",20],["ACE_elasticBandage",10],["tcw_SmokeWhite",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_MapTools",1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",15,30],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit
    _altGearTrooper, //Alt Gear
    "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true];} //Additional code to run
] spawn Wbk_AddKit;

// Medic
[
    TCW_KitBox,
    "Medic",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_EntrenchingTool",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_bloodIV",3]]],["tcw_vest_plate_base",[["ACE_splint",10],["ACE_surgicalKit",1],["ACE_tourniquet",12],["ItemcTabHCam",1],["ACE_bloodIV",6],["tcw_SmokeWhite",10,1],["tcw_dc15a_mag",12,30],["Laserbatteries",1,1],["tcw_dc17_mag",2,50]]],["IDA_Clone_Rucksack",[["ACE_adenosine",5],["ACE_elasticBandage",30],["ACE_packingBandage",20],["ACE_epinephrine",5],["ACE_morphine",10],["ACE_personalAidKit",1],["ACE_plasmaIV_500",12],["ACE_bloodIV_500",4],["ACE_bloodIV_250",8],["tcw_dc17_mag",4,50],["3AS_SmokePurple",5,1],["3AS_ThermalDetonator",2,1],["ACE_painkillers",4,10]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMedic,
    "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Heavy
[
    TCW_KitBox,
    "Heavy",
    [["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",3],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["3AS_SmokeWhite",3,1]]],["tcw_vest_plate_base",[["tcw_z6_mag_explosive",3,3],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["Laserbatteries",1,1],["tcw_dc17_mag",3,50],["tcw_z6_mag",2,300]]],["IDA_Clone_Rucksack",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_tourniquet",2],["ACE_splint",4],["tcw_z6_mag",3,300],["ACE_painkillers",1,10]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearHeavy,
    "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Marksman
[
    TCW_KitBox,
    "Marksman",
    [["tcw_dc15x","","","",["tcw_dc15x_magazine",20],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",3],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["tcw_dc17_mag",1,50]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_splint",4],["ACE_tourniquet",2],["WBK_HeadLampItem_Narrow",1],["tcw_dc17_mag",2,50],["tcw_dc15x_magazine",15,20],["3AS_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["Laserbatteries",1,1],["ACE_painkillers",1,10]]],[],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMarksman,
    "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Anti-Tank
[
    TCW_KitBox,
    "Anti-Tank",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["IDA_RPS6HP","","","",["IDA_RPS6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_packingBandage",20],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["ACE_painkillers",1,10]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_splint",4],["ACE_tourniquet",4],["3AS_SmokeWhite",3,1],["IDA_grenade_Sonic_mag",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc15a_mag",15,30],["tcw_dc17_mag",3,50],["Laserbatteries",1,1]]],["IDA_Clone_Rucksack",[["IDA_RPS6_rocket",6,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAT,
    "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Assault
[
    TCW_KitBox,
    "Assault",
    [["IDA_DC23","","","",["IDA_Blaster_Cell_Scatter_6Rnd_Blue",6],[],""],[],["IDA_Clone_Knife","","","",[],[],""],["tcw_clone_uniform_item",[["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_Flashlight_XL50",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",4],["ACE_Chemlight_HiGreen",10,1],["ACE_Chemlight_HiRed",4,1]]],["tcw_vest_plate_base",[["ACE_painkillers",1,10],["3AS_ThermalDetonator",8,1],["IDA_grenade_Sonic_mag",15,1],["3AS_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["tcw_penetrator_grenade",1,1],["IDA_Blaster_Cell_Scatter_6Rnd_Blue",11,6]]],["IDA_Clone_GrenadeRig",[["ACE_packingBandage",20],["ACE_elasticBandage",10],["ACE_splint",4],["IDA_Blaster_Cell_Scatter_6Rnd_Blue",4,6]]],"tcw_p1_helmet_base","",[],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAssault,
    "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Engineer
[
    TCW_KitBox,
    "Engineer",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform_item",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_DefusalKit",1],["ACE_splint",4],["ACE_SpraypaintRed",1],["ACE_tourniquet",4],["ACE_painkillers",1,10]]],["tcw_vest_plate_base",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["ToolKit",1],["tcw_SmokeWhite",5,1],["tcw_ThermalDetonator",4,1],["tcw_dc15a_mag",13,30]]],["IDA_Clone_ReconRig",[["ACE_Fortify",1],["ACE_EntrenchingTool",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearEngineer,
    "(({_x getVariable 'WBK_Kit_Name' == 'Engineer'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
