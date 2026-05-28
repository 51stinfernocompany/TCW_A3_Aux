#include "MTT.hpp"
class CfgPatches
{
   class tcw_vehicle_mtt
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (MTT)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_MTT"
        };
        units[] = {
            "tcw_mtt_cis",
            "tcw_mtt_fed"
        };
        weapons[] ={};
    };
};
