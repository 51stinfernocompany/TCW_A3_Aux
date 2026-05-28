#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for ARC-170s to work. Most of this should be self explanatory
    class tcw_vehicle_arc_170
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ARC-170)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3AS_ARC_170"
        };
        // Just the list of available ARC-170s
        units[] = {
            "tcw_ARC_170"
        };
        weapons[] ={};
    };
};
