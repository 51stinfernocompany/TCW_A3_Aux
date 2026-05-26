#include "HailfireAA.hpp"
class CfgPatches
{
   class tcw_vehicle_hailfire_aa
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (Hailfire AA)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_Hailfire"
        };
        units[] = {
            "tcw_hailfire_aa"
        };
        weapons[] ={};
    };
};