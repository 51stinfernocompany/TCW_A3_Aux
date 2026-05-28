#include "ATAP.hpp"
class CfgPatches
{
   class tcw_vehicle_atap
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ATAP)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_ATAP"
        };
        units[] = {
            "tcw_atap"
        };
        weapons[] ={};
    };
};
