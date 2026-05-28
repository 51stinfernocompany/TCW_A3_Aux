#include "AATFlamer.hpp"
class CfgPatches
{
   class tcw_vehicle_att_flame
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ATT Flamer)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_CIS_Armor_HeavyAAT"
        };
        units[] = {
            "tcw_att_flame"
        };
        weapons[] ={};
    };
};
