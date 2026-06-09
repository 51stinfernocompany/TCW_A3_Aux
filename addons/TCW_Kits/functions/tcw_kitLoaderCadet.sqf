if (isNil "TCW_KitBoxCadet") exitWith {
    diag_log "[TCW Kits] ERROR: Cadet KitBox not found!";
};

/* <------------- Alt Gear Arrays ------------->*/
private _altGearTrooper = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator","tcw_stun_mag_long"];
private _altGearMedic = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_500","ACE_packingBandage","ACE_plasmaIV","tcw_ThermalDetonator","tcw_stun_mag_long"];
private _altGearHeavy = ["k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_z6_mag","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_dc15le","tcw_dc15le_mag"];
private _altGearMarksman = ["k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","tcw_dc15x_magazine","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_valken38x","tcw_valken38x_mag","tcw_dc15x","tcw_dc15x_mag","tcw_ThermalDetonator"];
private _altGearAT = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator"];
private _altGearAssault = ["tcw_dc23","tcw_dc23_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator","tcw_dp23","tcw_scattergun_slug","tcw_scattergun_pellet"];
private _altGearEngineer = ["tcw_dc15a","tcw_dc15s","tcw_dc15a_mag","tcw_dc15s_mag","k_cadet_Helmet","tcw_clone_uniform","tcw_clone_backpack","ACE_elasticBandage","tcw_SmokeWhite","ACE_tourniquet","ACE_plasmaIV_250","ACE_packingBandage","tcw_ThermalDetonator"];



// Cadet Helmet Versions of the Main kits
// Trooper
[
    TCW_KitBoxCadet, // Variable name of our specific Kit Box, do not change for TCW
    "Trooper", // Name of the Kit
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]], //Main Gear in kit
    _altGearTrooper, //Alt Gear
    "true", //Statement must eval to true to be selectable, if not true the kit will be grayed out and unselectable
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; } //Additional code to run
] spawn Wbk_AddKit;

// Medic
[
    TCW_KitBoxCadet,
    "Medic",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",30],["ACE_packingBandage",20],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_medic_backpack",[["ACE_epinephrine",6],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_splint",4],["ACE_plasmaIV_500",6],["ACE_plasmaIV",7],["ACE_surgicalKit",1],["tcw_SmokeWhite",2,1]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearMedic,
    "true",
    { player setVariable ["ace_medical_medicClass", 2, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Heavy
[
    TCW_KitBoxCadet,
    "Heavy",
    [["tcw_z6","","","",["tcw_z6_mag",300],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["Laserbatteries",1,1],["tcw_z6_mag",1,300]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc17_mag",3,50],["tcw_z6_mag",3,300]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearHeavy,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Marksman
[
    TCW_KitBoxCadet,
    "Marksman",
    [["tcw_valken38x","","","3AS_optic_VK38X_F",["tcw_valken38x_mag",20],[],"3AS_bipod_VK38X_F"],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["Laserbatteries",1,1],["tcw_valken38x_mag",10,20]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc17_mag",3,50],["tcw_valken38x_mag",10,20]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearMarksman,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Anti-Tank
[
    TCW_KitBoxCadet,
    "Anti-Tank",
    [["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],["tcw_rps6","","","",["tcw_rps6_rocket",1],[],""],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15a_mag",6,30]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc15a_mag",8,30],["tcw_dc17_mag",3,50],["tcw_stun_mag_long",2,5],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10]]],["tcw_clone_backpack",[["tcw_rps6_rocket",4,1]]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearAT,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Assault
[
    TCW_KitBoxCadet,
    "Assault",
    [["tcw_dc23","","","",["tcw_dc23_mag",6],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc23_mag",6,6]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1],["tcw_ThermalDetonator",5,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc23_mag",14,6]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearAssault,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Engineer
[
    TCW_KitBoxCadet,
    "Engineer",
    [["tcw_dc15c","","","",["tcw_dc15c_mag",40],[],""],[],["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],["tcw_clone_uniform",[["ACE_tourniquet",2],["tcw_dc15c_mag",8,40]]],["tcw_vest_plate_base",[["ACE_elasticBandage",15],["ACE_packingBandage",15],["ACE_epinephrine",4],["ACE_morphine",1],["ACE_plasmaIV_250",1],["ACE_splint",4],["ACE_tourniquet",2],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["acc_flashlight",1],["ACE_Fortify",1],["tcw_dc17_mag",3,50],["Laserbatteries",1,1],["tcw_ThermalDetonator",3,1],["tcw_SmokeWhite",3,1],["tcw_SonicDetonator",2,1],["ACE_painkillers",1,10],["tcw_dc15c_mag",6,40]]],["tcw_clone_backpack",[]],"k_cadet_Helmet","",["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch","tcw_nvg_chip"]],
    _altGearEngineer,
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 1, true]; }
] spawn Wbk_AddKit;
