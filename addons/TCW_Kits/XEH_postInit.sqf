// Force execution ONLY on clients with a visual display interface
if !(hasInterface) exitWith {};

diag_log "[TCW] XEH_postInit starting. Registering runtime object hooks...";

// ============================================================
//  CRATE REGISTRY
//  To add a new crate type, add a new entry to this array:
//  [classname, global variable name, vehicle var name]
// ============================================================
private _crateRegistry = [
    ["tcw_kit_crate",          "TCW_KitBox",         "TCW_KitBox"],
    ["tcw_kit_crate_cadet",  "TCW_KitBoxCadet",  "TCW_KitBoxCadet"]
    // Add more crate types here as needed:
    // ["tcw_kit_crate_commando", "TCW_KitBoxCommando", "TCW_KitBoxCommando"], // for example
];

// Store registry in missionNamespace BEFORE the queue condition runs
missionNamespace setVariable ["TCW_CrateRegistry", _crateRegistry];

// ============================================================
//  AUTO-REGISTER CLASS EVENT HANDLERS
//  Iterates the registry and registers an init EH for each
// ============================================================
{
    private _classname  = _x select 0;
    private _varName    = _x select 1;
    private _vehicleVar = _x select 2;

    [
        _classname,
        "init",
        {
            params ["_crate", "_varName", "_vehicleVar"];
            _crate setVehicleVarName _vehicleVar;
            missionNamespace setVariable [_varName, _crate, true];
            diag_log format ["[TCW] SUCCESS: Class Hook caught %1. Bound to '%2'.", typeOf _crate, _varName];
        },
        [_varName, _vehicleVar]
    ] call CBA_fnc_addClassEventHandler;

} forEach _crateRegistry;

// ============================================================
//  QUEUE SYSTEM
//  Waits until any registered crate variable is bound,
//  then launches the kit menu with whichever crate is present
// ============================================================
[
    // CONDITION: player ready + at least one registered crate is bound
    {
        !isNull player &&
        time > 0 &&
        local player &&
        !isNull (findDisplay 46) &&
        ({!(isNil (_x select 1))} count (missionNamespace getVariable ["TCW_CrateRegistry", []])) > 0
    },
    // STATEMENT: fires when condition is true
    {
        diag_log "[TCW] Player environment validated. Searching for active crate...";

        private _registry    = missionNamespace getVariable ["TCW_CrateRegistry", []];
        private _activeCrate = objNull;
        private _activeVar   = "";

        // Find the first bound crate that matches its expected classname
        {
            if (_activeVar == "") then {
                private _varName   = _x select 1;
                private _classname = _x select 0;
                if !(isNil _varName) then {
                    private _obj = missionNamespace getVariable [_varName, objNull];
                    if (!isNull _obj && {typeOf _obj == _classname}) then {
                        _activeCrate = _obj;
                        _activeVar   = _varName;
                    };
                };
            };
        } forEach _registry;

        if (isNull _activeCrate) exitWith {
            diag_log "[TCW] CRITICAL ERROR: Crate variable bound but object is null.";
        };

        diag_log format ["[TCW] Active crate found: %1 via '%2'. Launching menu...", typeOf _activeCrate, _activeVar];

        WBK_GlobalKitBoxRn = _activeCrate;


        // Call the correct loaders based on which crate is present
       switch (_activeVar) do {
        case "TCW_KitBox": {
            [] spawn TCW_fnc_kit_loader;
        };
        case "TCW_KitBoxCadet": {
            [] spawn TCW_fnc_kit_loader_cadet;
        };
};

        [_activeCrate] exec "WBK_KitMenu\WBK_Kit_Camera.sqs";

        player switchMove selectRandom [
            "Acts_AidlPercMstpSloWWrflDnon_warmup_1",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_2",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_3",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_4",
            "Acts_AidlPercMstpSloWWrflDnon_warmup_5"
        ];

        diag_log "[TCW] Kit system execution triggered successfully.";
    },
    [],
    60,
    {
        diag_log "[TCW] CRITICAL TIMEOUT ERROR: Player environment or kit crate missing from map.";
    }
] call CBA_fnc_waitUntilAndExecute;