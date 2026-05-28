#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for Delta 7 to work. Most of this should be self explanatory
    class tcw_vehicle_delta_7
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (Delta 7)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3AS_Delta7"
        };
        // Just the list of available Delta 7
        units[] = {
            "tcw_delta_7"
        };
        weapons[] ={};
    };
};
