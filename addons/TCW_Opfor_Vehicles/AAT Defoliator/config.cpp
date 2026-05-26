#include "AATDefoliator.hpp"
class CfgPatches
{
   class tcw_vehicle_att_def
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ATT Defoliator)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_CIS_Armor_HeavyAAT"
        };
        units[] = {
            "tcw_att_def"
        };
        weapons[] ={};
    };
};