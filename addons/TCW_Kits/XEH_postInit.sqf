// Force execution ONLY on clients with a visual display interface
if !(hasInterface) exitWith {};

diag_log "[WebKnights] XEH_postInit starting. Registering runtime object hooks...";

// Class Event Handler: Fires the exact frame ANY 'tcw_kit_crate' spawns
[
    "tcw_kit_crate",
    "init",
    {
        params ["_crate"];

        // Force bind identity variables inside the engine's physics/network tables
        _crate setVehicleVarName "TCW_KitBox";
        TCW_KitBox = _crate;
        missionNamespace setVariable ["TCW_KitBox", _crate, true];
        missionNamespace setVariable ["WBK_GlobalKitBoxRn", _crate, true];

        diag_log "[WebKnights] SUCCESS: Class Hook caught tcw_kit_crate. Global variables bound.";
    }
] call CBA_fnc_addClassEventHandler;


// Queue System: Waits smoothly for player rendering, UI Display 46, and the Box asset to exist
[
    {
        !isNull player &&
        time > 0 &&
        local player &&
        !isNull (findDisplay 46) &&
        !isNil "TCW_KitBox"
    },
    {
        diag_log "[TCW] Player environment and Kit Box validated. Launching menu sequence...";

        // Attach to the box
        WBK_GlobalKitBoxRn = TCW_KitBox;

        [] spawn TCW_fnc_kit_loader;

        // Pass the actual crate object reference directly into the camera script execution parameter array
        [TCW_KitBox] exec "WBK_KitMenu\WBK_Kit_Camera.sqs";

        // Play cosmetic immersive unit animations
        player switchMove selectRandom [
            "Acts_AidlPercMstpSloWWrflDnon_warmup_1",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_2",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_3",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_4",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_5"
        ];

        // Turn player smoothly 180 degrees away from the box positioning orientation
        private _dirToObj = [player, TCW_KitBox] call BIS_fnc_dirTo;
        player setDir (_dirToObj - 180);

        diag_log "[TCW] Kit system execution triggered successfully with kit loaders initialized.";
    },
    [],
    60,
    {
        diag_log "[TCW] CRITICAL TIMEOUT ERROR: Initialization stopped. Player environment or 'tcw_kit_crate' missing from map.";
    }
] call CBA_fnc_waitUntilAndExecute;