class CfgPatches {
    class tcw_base {
        author = "TCW Aux Team";
        name = "tcw_base";
        requiredVersion = 2.20;
        requiredAddons[] = {"cba_main","A3_UI_F","A3_UI_F_Data","OPTRE_Core","OPTRE_Modules","3AS_Main"};
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgFactionClasses.hpp"

class RscPicture;
class RscPictureKeepAspect;
class RscStandardDisplay;

class RscDisplayMain 
{

    class controlsBackground 
    {
        // Obliterates vanilla/OPTRE base background layer
        class MainMenuBackground: RscPicture 
        {
            idc = 1104; 
            text = "x\tcw\addons\TCW_Base\loading\geo_atte.paa";
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
        };
        
        // Secondary layer to ensure no OPTRE menu animations bleed through
        class BackgroundTile: RscPicture 
        {
            idc = 1200;
            text = "x\tcw\addons\TCW_Base\loading\geo_atte.paa";
            x = "SafeZoneX";
            y = "SafeZoneY";
            w = "SafeZoneW";
            h = "SafeZoneH";
        };
    };
};
