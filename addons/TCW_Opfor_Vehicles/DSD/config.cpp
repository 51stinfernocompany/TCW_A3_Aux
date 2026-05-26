#include "DSD.hpp"
class CfgPatches
{
   class tcw_vehicle_dsd
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (DSD)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_ADSD"
        };
        units[] = {
            "tcw_dsd"
        };
        weapons[] ={};
    };
};