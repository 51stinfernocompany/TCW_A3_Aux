#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for Z-95s to work. Most of this should be self explanatory
    class tcw_vehicle_z_96_head_hunter
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles (Z-95 Head Hunter)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3AS_Z95_base"
        };
        // Just the list of available Z-95s
        units[] = {
            "tcw_Z_95_Head_Hunter_3AS"
        };
        weapons[] ={};
    };
};