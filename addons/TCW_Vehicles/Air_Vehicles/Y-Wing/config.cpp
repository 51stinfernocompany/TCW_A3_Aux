#include "CfgVehicles.hpp"
class CfgPatches
{
    // Config for Y-Wings to work. Most of this should be self explanatory
    class tcw_vehicle_y_wing
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles  (Y-Wing)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "3AS_BTLB_Bomber"
        };
        // Just the list of available Y-Wings
        units[] = {
            "tcw_Y_Wing"
        };
        weapons[] ={};
    };
};