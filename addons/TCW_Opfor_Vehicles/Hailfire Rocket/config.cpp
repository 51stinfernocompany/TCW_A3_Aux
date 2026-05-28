#include "HailfireR.hpp"
class CfgPatches
{
   class tcw_vehicle_hailfire_r
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (Hailfire R)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_Hailfire"
        };
        units[] = {
            "tcw_hailfire_r"
        };
        weapons[] ={};
    };
};
