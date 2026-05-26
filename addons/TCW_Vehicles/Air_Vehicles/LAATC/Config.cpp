#include "LAATC.hpp"
class CfgPatches
{
    // Config for LAATs to work. Most of this should be self explanatory
    class tcw_vehicle_LAATC
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicles (LaatC)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_LAAT_Cargo"
        };
        // Just the list of available LAATs
        units[] = 
        {
            "tcw_laatc_base"
        };
        weapons[] ={};
    };
};