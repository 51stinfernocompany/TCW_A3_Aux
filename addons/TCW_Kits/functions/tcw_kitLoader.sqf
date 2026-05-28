if (isNil "TCW_KitBox") exitWith {
    diag_log "[Kits] ERROR: kitBox not found!";
};

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

[
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
};