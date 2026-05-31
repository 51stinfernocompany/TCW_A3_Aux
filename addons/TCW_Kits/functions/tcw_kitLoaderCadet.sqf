if (isNil "TCW_KitBoxCadet") exitWith {
    diag_log "[TCW Kits] ERROR: Cadet KitBox not found!";
};

/* <------------- Alt Gear Arrays ------------->*/
private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearMedic = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearHeavy = ["k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_z6_mag"];
private _altGearMarksman = ["k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_dc15x_magazine"];
private _altGearAT = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearAssault = ["tcw_dc23","tcw_dc23_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack"];
private _altGearEngineer = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack"];



// Cadet Helmet Versions of the Main kits
// Trooper
[
    TCW_KitBoxCadet, // Variable name of our specific Kit Box, do not change for TCW
    "Trooper", // Name of the Kit
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_EntrenchingTool",1],["ACE_SpraypaintGreen",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_elasticBandage",30],["tcw_SmokeWhite",1,1]]],["tcw_vest_plate_base",[["acc_flashlight",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_tourniquet",4],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_plasmaIV_250",2],["ACE_splint",4],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc17_mag",3,50],["ACE_painkillers",1,10],["tcw_dc15a_mag",14,30],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["Laserbatteries",1,1],["tcw_stun_mag_long",3,5]]],[],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]], //Main Gear in kit
    _altGearTrooper, //Alt Gear
    "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true];} //Additional code to run
] spawn Wbk_AddKit;

// Medic
[
    TCW_KitBoxCadet,
    "Medic",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_EntrenchingTool",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_plasmaIV",3]]],["tcw_vest_plate_base",[["ItemcTabHCam",1],["ACE_plasmaIV",5],["ACE_surgicalKit",1],["ACE_splint",8],["ACE_tourniquet",8],["ACE_elasticBandage",35],["ACE_epinephrine",1],["tcw_SmokeWhite",8,1],["tcw_dc15a_mag",10,30],["Laserbatteries",1,1],["tcw_dc17_mag",2,50],["tcw_SmokePurple",2,1],["tcw_stun_mag_long",2,5]]],["tcw_clone_backpack",[["ACE_elasticBandage",25],["ACE_plasmaIV_500",8],["ACE_plasmaIV_250",4],["ACE_morphine",10],["ACE_epinephrine",10],["tcw_dc17_mag",4,50],["3AS_SmokePurple",5,1],["3AS_ThermalDetonator",2,1]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMedic,
    "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Heavy
[
    TCW_KitBoxCadet,
    "Heavy",
    [["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",4],["ACE_splint",4],["ACE_plasmaIV_250",1],["ACE_epinephrine",1],["3AS_SmokeWhite",3,1],["tcw_SmokeWhite",3,1]]],["tcw_vest_plate_base",[["tcw_SonicDetonator",2,1],["tcw_ThermalDetonator",3,1],["Laserbatteries",1,1],["tcw_dc17_mag",3,50],["tcw_z6_mag",5,300]]],["tcw_clone_backpack",[["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_elasticBandage",30],["ACE_morphine",1],["tcw_z6_mag",5,300]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearHeavy,
    "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Marksman
[
    TCW_KitBoxCadet,
    "Marksman",
    [["tcw_dc15x","","","",["tcw_dc15x_magazine",13],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_tourniquet",4],["ACE_splint",4],["ACE_elasticBandage",30],["ACE_epinephrine",1],["ACE_morphine",1],["tcw_SmokeWhite",2,1]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["WBK_HeadLampItem_Narrow",1],["tcw_dc17_mag",2,50],["tcw_dc15x_magazine",15,20],["3AS_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["Laserbatteries",1,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearMarksman,
    "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Anti-Tank
[
    TCW_KitBoxCadet,
    "Anti-Tank",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["IDA_RPS6HP","","","",["IDA_RPS6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_elasticBandage",30],["ACE_splint",4],["ACE_tourniquet",4],["tcw_dc17_mag",1,50]]],["tcw_vest_plate_base",[["ACE_EntrenchingTool",1],["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["WBK_HeadLampItem_Narrow",1],["3AS_SmokeWhite",3,1],["IDA_grenade_Sonic_mag",2,1],["tcw_ThermalDetonator",3,1],["tcw_dc15a_mag",15,30],["tcw_dc17_mag",2,50],["Laserbatteries",1,1],["tcw_stun_mag_long",2,5]]],["IDA_Clone_Rucksack",[["IDA_RPS6_rocket",6,1]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAT,
    "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Assault
[
    TCW_KitBoxCadet,
    "Assault",
    [["tcw_dc23","","","",["tcw_dc23_mag",6],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_Flashlight_XL50",1],["ACE_IR_Strobe_Item",1],["ACE_elasticBandage",30],["ACE_splint",4],["ACE_tourniquet",4],["ACE_epinephrine",1],["ACE_morphine",1]]],["tcw_vest_plate_base",[["ACE_painkillers",1,10],["3AS_ThermalDetonator",8,1],["IDA_grenade_Sonic_mag",15,1],["3AS_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["tcw_penetrator_grenade",1,1],["tcw_dc17_mag",2,50],["tcw_dc23_mag",8,6]]],["tcw_clone_backpack",[["ACE_packingBandage",20],["ACE_elasticBandage",10],["ACE_splint",4],["tcw_dc23_mag",10,6]]],"k_cadet_Helmet","",[],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearAssault,
    "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Engineer
[
    TCW_KitBoxCadet,
    "Engineer",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_DefusalKit",1],["ACE_elasticBandage",30],["ACE_splint",4],["ACE_tourniquet",4],["ACE_epinephrine",1],["ACE_morphine",1],["ACE_Fortify",1],["tcw_stun_mag_long",2,5]]],["tcw_vest_plate_base",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["ToolKit",1],["tcw_SmokeWhite",5,1],["tcw_ThermalDetonator",4,1],["tcw_dc15a_mag",13,30]]],["tcw_clone_backpack",[["ACE_EntrenchingTool",1],["ACE_wirecutter",1],["Laserbatteries",1,1],["tcw_dc15a_mag",2,30],["tcw_dc17_mag",2,50]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]],
    _altGearEngineer,
    "(({_x getVariable 'WBK_Kit_Name' == 'Engineer'} count units group player) == 0)",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
