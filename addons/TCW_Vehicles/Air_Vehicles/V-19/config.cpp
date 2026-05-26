#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for v-19s to work. Most of this should be self explanatory
    class tcw_vehicle_v_19
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles (V-19)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3as_V19_Torrent"
        };
        // Just the list of available V-19s
        units[] = {
            "tcw_V_19"
        };
        weapons[] ={};
    };
};