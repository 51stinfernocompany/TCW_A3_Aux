/*params [
    "_altGearTrooper",
    "_altGearMedic",
    "_altGearHeavy",
    "_altGearMarksman",
    "_altGearAT",
    "_altGearAssault",
    "_altGearEngineer",
    "_kitBox"
];

diag_log "[TCW] 41st unit loader executing...";

// ============================================================
//  APPEND 41st-SPECIFIC ALT GEAR
//  These push unit-specific cosmetics into the shared arrays
// ============================================================
_altGearTrooper pushBack "tcw_41st_helmet";
_altGearTrooper pushBack "tcw_41st_uniform";
_altGearTrooper pushBack "tcw_41st_pauldron";

_altGearMedic pushBack "tcw_41st_helmet";
_altGearMedic pushBack "tcw_41st_uniform";

_altGearHeavy pushBack "tcw_41st_helmet";
_altGearHeavy pushBack "tcw_41st_uniform";

// ============================================================
//  41st-SPECIFIC KITS
//  Add any roles unique to the 41st here
// ============================================================

// ARF Trooper (41st exclusive)
[
    _kitBox,
    "ARF Trooper",
    [
        ["tcw_dc15a","","","",["tcw_dc15a_mag",30],[],""],
        [],
        ["tcw_dc17","","","",["tcw_dc17_mag",50],[],""],
        ["tcw_41st_uniform",[
            ["ACE_EntrenchingTool",1],
            ["ACE_CableTie",4],
            ["ACE_EarPlugs",1],
            ["ACE_IR_Strobe_Item",1],
            ["ACE_elasticBandage",30],
            ["tcw_SmokeWhite",2,1]
        ]],
        ["tcw_vest_plate_base",[
            ["ACE_MapTools",1],
            ["ACE_tourniquet",4],
            ["ACE_morphine",1],
            ["ACE_epinephrine",1],
            ["tcw_dc15a_mag",14,30],
            ["tcw_dc17_mag",3,50],
            ["tcw_SmokeWhite",3,1],
            ["tcw_ThermalDetonator",2,1],
            ["Laserbatteries",1,1]
        ]],
        ["tcw_clone_backpack",[]],
        "tcw_41st_helmet",
        "",
        ["IDA_Electrobinoculars_Rep","","","",["Laserbatteries",1],[],""],
        ["ItemMap","ItemGPS","ls_radios_cwp8","ItemCompass","ItemWatch",""]
    ],
    _altGearTrooper, // Uses the now-modified alt gear array
    "true",
    { player setVariable ["ace_medical_medicClass", 0, true]; player setVariable ["ace_isEngineer", 0, true]; }
] spawn Wbk_AddKit;

// Put 41st specific gear here.


diag_log "[TCW] 41st unit loader complete.";*/