diag_log format ["[Kits] TCW_KitBox isNil=%1 isNull=%2 typeOf=%3",
    isNil "TCW_KitBox",
    isNull (missionNamespace getVariable ["TCW_KitBox", objNull]),
    typeOf (missionNamespace getVariable ["TCW_KitBox", objNull])];

if (isNil "TCW_KitBox") exitWith {
    diag_log "[Kits] ERROR: kitBox not found!";
};

/* <------------- Unit IDs to validate against ------------->*/
private _validUnits = [
    "41st",   // 41st Elite Corps
    "104th",  // 104th Wolf Pack
    "115th",  // 115th Strike Battalion
    "125th",  // Doom Legion
    "133rd",  // 133rd Kraken
    "17th",   // 17th Ordinance
    "205th",  // Recon Battalion
    "212th",  // 212th Attack Battalion
    "21st",   // 21st Nova Corps
    "31st",   // Nexu Battalion
    "327th",  // Star Corps
    "44th",   // Devil Dogs
    "501st",  // Blue Berries
    "91st",   // 91st Recon
    "CG",     // Coruscant Guard
    "Razor", // Razor
    "UA" //Unaffiliated
];


/* <------------- Squad XML Data Collection and Validation ------------->*/
private _params = squadParams player;
private _clanID = ""; //The player's clan ID
private _clanRemark = ""; //The total data stored in the remark field
private _rank = "CT"; //Default Rank
private _progression = "0"; //Default Prog
private _unitMatch = false; // Validated Unit? default is false

// Debug, shows all values from a matched Squad XML file
{
    diag_log format ["[Param Check] param %1: '%2'", _forEachIndex, _x];
} forEach _params;

// Grab, parse, and store TCW needed data from the remark field of the XML
if (count _params > 0 && {!isNil {_params select 1 select 5}}) then {
    _clanRemark = _params select 1 select 5;
    diag_log format ["[RemarkCheck] _clanRemark: '%1'", _clanRemark];
    private _remarkArray = _clanRemark splitString ",";
    if (count _remarkArray >= 3) then {
        _clanID = _remarkArray select 0;
        _rank   = _remarkArray select 1;
        _progression = _remarkArray select 2;
    } else {
        diag_log format ["[TCW] WARNING: Remark '%1' has insufficient fields, using defaults.", _clanRemark];
    };
};

/*// Store Unit Nick and output the data to log for debug
if (count _params > 0 && {!isNil {_params select 0 select 0}}) then {
    _clanID = _params select 0 select 0;
    diag_log format ["[UnitCheck] _clanID: '%1'", _clanID];
};*/

if (_clanID in _validUnits) then {
    diag_log format ["[UnitCheck] '%1' is a recognised unit.", _clanID];
    // make _unitMatch true
    _unitMatch = true;
} else {
    diag_log format ["[UnitCheck] '%1' is NOT a recognised unit.", _clanID];
    // _unitMatch remains false
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
    ["tcw_p1_helmet_sergeant","tcw_clone_uniform_sergeant","tcw_radio_backback","itemAndroid"],
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
private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator","tcw_stun_mag_long"];
private _altGearMedic = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_500","ACE_packingBandage","ACE_plasmaIV","tcw_ThermalDetonator","tcw_stun_mag_long"];
private _altGearHeavy = ["tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","tcw_z6_mag","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_dc15le","tcw_dc15le_mag"];
private _altGearMarksman = ["tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","tcw_dc15x_magazine","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_valken38x","tcw_valken38x_mag","tcw_dc15x","tcw_dc15x_mag","tcw_ThermalDetonator"];
private _altGearAT = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator"];
private _altGearAssault = ["tcw_dc23","tcw_dc23_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator","tcw_dp23","tcw_scattergun_slug","tcw_scattergun_pellet"];
private _altGearEngineer = ["tcw_dc15c","tcw_dc15s","tcw_dc15c_mag","tcw_dc15s_mag","tcw_p1_helmet_base","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator"];

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

//Possibly Temporary catch for non-standard or missing ranks at launch. Enables all rank gear if no approved rank found.
if (!(_rank in _rankOrder)) then {
    private _allRankGear = [];
    {
        private _rankEntry = _x;
        { _allRankGear pushBackUnique _x; } forEach _rankEntry;
    } forEach _rankGearMap;
    {
        private _kit = _x;
        { _kit pushBackUnique _x; } forEach _allRankGear;
    } forEach _allAltGear;
};

private _ldrRanks = ["CP","CS","CL","CPT","CC"];

// Only dispatch a unit loader if the clanID matches a known unit
if (_clanID in _validUnits) then {
    private _unitLoaders = [
        ["41st",  "x\tcw\addons\TCW_Kits\functions\unit functions\kitLoader41st.sqf"],
        ["501st", "x\tcw\addons\TCW_Kits\functions\unit functions\kitLoader501st.sqf"],
        ["212th", "x\tcw\addons\TCW_Kits\functions\unit functions\kitLoader212th.sqf"]
    ];
    {
        //Break the loop if the clan ID is matched.
        if (_x select 0 == _clanID) exitWith {
            [
                _altGearTrooper,
                _altGearMedic,
                _altGearHeavy,
                _altGearMarksman,
                _altGearAT,
                _altGearAssault,
                _altGearEngineer,
                TCW_KitBox
            ] call (compile preprocessFileLineNumbers (_x select 1));
        };
    } forEach _unitLoaders;

} else {
    diag_log format ["[TCW] '%1' has no unit loader, base kits only.", _clanID];
};


// Trooper
[
    TCW_KitBox, // Variable name of our specific Kit Box, do not change for TCW
    "Trooper", // Name of the Kit
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]], //Main Gear in kit
    _altGearTrooper, //Alt Gear
    "true", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; } //Additional code to run
] spawn Wbk_AddKit;

// Medic
[
    TCW_KitBox,
    "Medic",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",30],["ACE_packingBandage",20],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_medic_backpack",[["ACE_epinephrine",6],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_splint",4],["ACE_plasmaIV_500",6],["ACE_plasmaIV",7],["ACE_surgicalKit",1],["tcw_SmokeWhite",2,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearMedic,
    "true",
    { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Heavy
[
    TCW_KitBox,
    "Heavy",
    [["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["Laserbatteries",1,1],["tcw_z6_mag",1,300]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc17_mag",3,50],["tcw_z6_mag",3,300]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearHeavy,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Marksman
[
    TCW_KitBox,
    "Marksman",
    [["tcw_valken38x","","","3AS_optic_VK38X_F",["tcw_valken38x_mag",20],[],"3AS_bipod_VK38X_F"],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["Laserbatteries",1,1],["tcw_valken38x_mag",10,20]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc17_mag",3,50],["tcw_valken38x_mag",10,20]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearMarksman,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Anti-Tank
[
    TCW_KitBox,
    "Anti-Tank",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["tcw_rps6","","","",["tcw_rps6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[["tcw_rps6_rocket",4,1]]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearAT,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Assault
[
    TCW_KitBox,
    "Assault",
    [["tcw_dc23","","","",["tcw_dc23_mag",6],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc23_mag",6,6]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1],["tcw_ThermalDetonator",5,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc23_mag",14,6]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearAssault,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Engineer
[
    TCW_KitBox,
    "Engineer",
    [["tcw_dc15c","","","",["tcw_dc15c_mag",40],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15c_mag",8,40]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["ACE_Fortify",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc15c_mag",6,40]]],["tcw_clone_backpack",[]],"tcw_p1_helmet_base","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearEngineer,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
