class CfgPatches {
    class tcw_kits {
        author = "TCW Team";
        name = "tcw_kits";
        requiredVersion = 2.20;
        requiredAddons[] = { "cba_main", "JLTS_weapons_crates", "WBK_KitArsenal"};
        units[] = { "tcw_kit_crate" };
        weapons[] = {};
    };
};

/* <------------- Create Kit Box(s?) -----------------> */
class CfgVehicles {
    class JLTS_Ammobox_weapons_special_GAR;
    class tcw_kit_crate : JLTS_Ammobox_weapons_special_GAR {
        displayName = "[TCW] Kit Box";
        scope = 2;                    // 2 = visible in editor
        scopeCurator = 2;             // 2 = visible in Zeus
        faction = "tcw_faction";              // groups it in the editor browser
        editorCategory = "tcw_kit_boxes"; // category in the browser
        editorSubcategory = "tcw_kit_boxes_medium";
        author = "TCW Team";
        //init = "diag_log '[TCW] Init firing...'; WBK_GlobalKitBoxRn = TCW_KitBox; diag_log format ['[TCW] WBK_GlobalKitBoxRn set to: %1', WBK_GlobalKitBoxRn]; [] exec 'WBK_KitMenu\WBK_Kit_Camera.sqs'; diag_log '[TCW] Camera exec called'; player switchMove selectRandom ['Acts_AidlPercMstpSloWWrflDnon_warmup_1','Acts_AidlPercMstpSloWWrflDnon_warmup_2','Acts_AidlPercMstpSloWWrflDnon_warmup_3','Acts_AidlPercMstpSloWWrflDnon_warmup_4','Acts_AidlPercMstpSloWWrflDnon_warmup_5']; diag_log '[TCW] switchMove called'; _dirToObj = [player, TCW_KitBox] call BIS_fnc_dirTo; diag_log format ['[TCW] _dirToObj: %1', _dirToObj]; _actDir = _dirToObj - 180; player setDir _actDir; diag_log format ['[TCW] Final dir set to: %1', _actDir];";
    };
};

/* <------------- Set the first placed Kit Box to be our object -----------------> */
class Extended_Init_EventHandlers
{
    class tcw_kit_crate
    {
        class TCW_InitializeKitBox
        {
            init = "private _crate = _this select 0; _crate setVehicleVarName ""TCW_KitBox""; TCW_KitBox = _crate; missionNamespace setVariable [""TCW_KitBox"", _crate, true]; diag_log ""[TCW] Extended_Init fired on tcw_kit_crate"";";
        };
    };
};

/* <------------- Eden Editor Categorization -----------------> */
class CfgFactionClasses {
    class tcw_faction {
        displayName = "TCW";
        priority = 1;
        side = 1;
    };
};

class CfgEditorCategories {
    class tcw_kit_boxes {
        displayName = "TCW Kit Boxes";
    };
};

class CfgEditorSubcategories {
    class tcw_kit_boxes_medium {
        displayName = "Medium Kit Boxes";
    };
};

/* <------------- Script Loading -----------------> */
class Extended_PostInit_EventHandlers
{
	class tcw_kits
	{
		init = "call compile preprocessFileLineNumbers '\x\tcw\addons\TCW_Kits\XEH_postInit.sqf'";
	};
};

class CfgFunctions
{
    class TCW
    {
        class KitCompilation
        {
            tag = "TCW";  // explicitly set the tag
            class kit_loader { file = "\x\tcw\addons\TCW_Kits\functions\tcw_kitLoader.sqf"; };
            //class kit_menu   { file = "\x\tcw\addons\TCW_Kits\functions\tcw_openKitMenu.sqf"; };
        };
    };
};
