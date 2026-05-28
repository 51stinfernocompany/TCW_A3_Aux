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

// Debug / Testing, remove be pushing to main.
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
 TCW_KitBox,
 "Clone Trooper",
[["ic51_dc15a","","","",["ic51_dc15a_mag",30],[],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_elasticBandage",20],["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1]]],["ic51_vest_plate_base",[["ACE_Flashlight_XL50",1],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_splint",5],["ic51_SmokeWhite",3,1],["ic51_SonicDetonator",2,1],["ic51_ThermalDetonator",3,1],["ic51_dc17_mag",3,50],["Laserbatteries",1,1],["kat_Painkiller",1,4],["ic51_stun_mag_long",2,5],["ic51_stun_mag_short",2,10],["ic51_dc15a_mag",15,30]]],[],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["ic51_dc15a","ic51_dc15s","ic51_dc15a_mag","ic51_dc15s_mag","SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Radiopack_ReconRig"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Clone Trooper'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Medic",
[["ic51_dc15a","","","",["ic51_dc15a_mag",30],["ic51_stun_mag_short",10],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_CableTie",4],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["ACE_plasmaIV",9],["kat_Pulseoximeter",5],["ACE_splint",10],["ACE_surgicalKit",1],["ACE_tourniquet",10]]],["ic51_vest_plate_medic",[["ItemcTabHCam",1],["ACE_tourniquet",2],["kat_TXA",5],["ic51_SmokeWhite",10,1],["ic51_stun_mag_long",2,5],["ic51_dc15s_mag",12,40],["Laserbatteries",1,1],["ic51_dc17_mag",6,50],["ic51_stun_mag_short",1,10],["ic51_SmokePurple",5,1],["ic51_ThermalDetonator",2,1],["kat_Carbonate",10,10],["kat_Painkiller",10,4]]],["IDA_Clone_Rucksack",[["kat_IV_16",15],["kat_accuvac",1],["ACE_adenosine",5],["kat_X_AED",1],["ACE_elasticBandage",50],["ACE_packingBandage",25],["kat_chestSeal",10],["kat_EACA",5],["ACE_epinephrine",5],["kat_IO_FAST",10],["kat_larynx",15],["ACE_morphine",10],["kat_naloxone",5],["ACE_personalAidKit",1],["ACE_plasmaIV_500",12],["ACE_plasmaIV",3]]],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["ic51_dc15a","ic51_dc15s","ic51_dc15a_mag","ic51_dc15s_mag","SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Medic'} count units group player) == 0)",
 { [player, 2] call ace_medical_treatment_fnc_setMedicClass; }
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Heavy",
[["ic51_z6","","","",["ic51_z6_mag",300],[],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1],["ic51_z6_mag_explosive",2,3]]],["ic51_vest_plate_heavy",[["ic51_SmokeWhite",3,1],["ic51_SonicDetonator",2,1],["ic51_ThermalDetonator",3,1],["ic51_dc17_mag",3,50],["Laserbatteries",1,1],["ic51_z6_mag",6,300]]],["SEA_Backpack_Heavy",[["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_Flashlight_XL50",1],["ACE_splint",5],["ACE_tourniquet",4],["kat_Painkiller",1,4],["ic51_z6_mag",4,300],["ic51_z6_mag_explosive",2,3]]],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Heavy'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;



[
 TCW_KitBox,
 "Marksman",
[["ic51_Valken38X","","","ic51_valken_optic",["ic51_valken38x_mag",20],[],"ic51_bipod"],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1]]],["ic51_vest_plate_base",[["ic51_dc17_mag",3,50],["ic51_SmokeWhite",3,1],["ic51_SonicDetonator",2,1],["ic51_ThermalDetonator",3,1],["Laserbatteries",1,1],["ic51_valken38x_mag",15,20]]],["ic51_clone_backpack_marksmen_t2",[["ACE_EntrenchingTool",1],["ACE_Flashlight_XL50",1],["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_splint",5],["ACE_tourniquet",4],["WBK_HeadLampItem_Narrow",1],["ACE_MapTools",1],["kat_Painkiller",1,4]]],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","ic51_clone_backpack_marksmen_t2","JLTS_Clone_backpack_RTO"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Marksman'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Anti-Tank",
[["ic51_dc15a","","","",["ic51_dc15a_mag",30],["ic51_stun_mag_short",10],""],["ic51_rps6","","","",["ic51_rps6_rocket",1],[],""],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_elasticBandage",20],["ACE_CableTie",4],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Chemlight_HiBlue",5,1],["ACE_Chemlight_HiGreen",5,1],["ACE_Chemlight_HiRed",5,1]]],["ic51_vest_plate_base",[["ic51_SmokeWhite",3,1],["ic51_SonicDetonator",2,1],["ic51_ThermalDetonator",3,1],["ic51_dc15s_mag",15,40],["ic51_dc17_mag",3,50],["ic51_stun_mag_long",2,5],["ic51_stun_mag_short",1,10],["Laserbatteries",1,1]]],["JLTS_Clone_backpack_eod",[["ACE_elasticBandage",20],["ACE_packingBandage",10],["ACE_EntrenchingTool",1],["WBK_HeadLampItem_Narrow",1],["ACE_Flashlight_XL50",1],["ACE_splint",5],["ACE_tourniquet",4],["ic51_rps6_rocket",3,1],["kat_Painkiller",1,4]]],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["ic51_dc15a","ic51_dc15s","ic51_dc15a_mag","ic51_dc15s_mag","SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Anti-Tank'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Assault",
[["ic51_dc23","","","",["ic51_dc23_mag",6],[],""],[],["ic51_vibroblade","","","",[],[],""],["SEA_Uniform_Clean",[["ACE_elasticBandage",3],["ACE_CableTie",4],["ACE_EntrenchingTool",1],["ItemcTabHCam",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_Chemlight_HiGreen",10,1],["ACE_Chemlight_HiRed",4,1],["kat_Painkiller",2,4]]],["ic51_vest_plate_assault",[["ic51_ThermalDetonator",8,1],["ic51_SonicDetonator",15,1],["ic51_SmokeWhite",10,1],["ACE_Chemlight_HiRed",1,1],["ic51_penetrator_grenade",1,1],["ic51_dc23_mag",5,6]]],["IDA_Clone_Rucksack",[["ic51_dc23_mag",10,6]]],"SEA_Helmet_P1_Base","",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["ic51_dc15a","ic51_dc15s","ic51_dc15a_mag","ic51_dc15s_mag","ic51_dc23","ic51_dc23_mag","ic51_dc17","ic51_dc17_mag","ic51_vibroblade","ic51_vibroblade_rotated","SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],

 "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;


[
 TCW_KitBox,
 "Engineer",
[["ic51_dc15c","","","ic51_reflex3_optic",["ic51_dc15c_mag",40],["ic51_stun_mag_short",10],""],[],["ic51_dc17","","","",["ic51_dc17_mag",50],[],""],["SEA_Uniform_Clean",[["ACE_elasticBandage",10],["ACE_packingBandage",20],["ACE_DefusalKit",1],["ACE_Fortify",1],["ACE_splint",5],["ACE_SpraypaintRed",1],["ACE_tourniquet",5],["kat_Painkiller",2,4]]],["ic51_vest_plate_engineer",[["WBK_HeadLampItem_Double",1],["ace_marker_flags_red",3],["MineDetector",1],["ACE_SpraypaintGreen",1],["JLTS_repairkit_weapon",1],["ic51_SmokeWhite",5,1],["ic51_ThermalDetonator",4,1],["3AS_FusionCutter_Magazine",6,100],["ic51_dc15c_mag",20,40],["ic51_stun_mag_long",3,5]]],[],"SEA_Helmet_P1_Base","3AS_G_Engineer_2_F",["ic51_clone_binoculars_base","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","ls_radios_cwp8","ItemCompass","ItemWatch",""]],

["SEA_Helmet_P1_Base","SEA_Helmet_P1_Helmet_Sergeant","SEA_Helmet_P1_Lieutenant","SEA_Helmet_P1_Captain","SEA_Helmet_P1_Commander","SEA_Uniform_Clean","JLTS_CloneArmor_Sergeant","JLTS_CloneArmor_Lieutenant","JLTS_CloneArmor_Captain","JLTS_CloneArmor_Commander","IDA_Clone_Rucksack","JLTS_Clone_backpack_RTO"],
 "(({_x getVariable 'WBK_Kit_Name' == 'Assault'} count units group player) == 0)",
 {[player, 0] call ace_medical_treatment_fnc_setMedicClass;}
] spawn Wbk_AddKit;
