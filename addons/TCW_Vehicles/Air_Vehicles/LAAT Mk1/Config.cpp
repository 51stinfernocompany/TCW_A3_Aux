#include "LAATMk1.hpp"
class CfgPatches
{
    // Config for LAATs to work. Most of this should be self explanatory
    class tcw_vehicle_LAAT
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles (Laat)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_LAAT"
        };
        // Just the list of available LAATs
        units[] = 
        {
            "tcw_laat_mk1_base"
        };
        weapons[] ={};
    };
};