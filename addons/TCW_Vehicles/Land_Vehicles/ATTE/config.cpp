#include "ATTE.hpp"
class CfgPatches
{
   class tcw_vehicle_atte
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ATTE)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_ATTE"
        };
        units[] = {
            "tcw_atte"
        };
        weapons[] ={};
    };
};
