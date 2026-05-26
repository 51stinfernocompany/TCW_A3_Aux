#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for V-Wing to work. Most of this should be self explanatory
    class tcw_vehicle_v_wing
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles  (V-Wing)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3AS_Vwing"
        };
        // Just the list of available V-Wing
        units[] = {
            "tcw_v_wing"
        };
        weapons[] ={};
    };
};