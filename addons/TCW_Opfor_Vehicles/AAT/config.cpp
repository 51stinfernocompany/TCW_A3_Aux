#include "AAT.hpp"
class CfgPatches
{
   class tcw_vehicle_att
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (ATT)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "ls_vehicles_aat"
        };
        units[] = {
            "tcw_att_cis",
            "tcw_att_fed"
        };
        weapons[] ={};
    };
};
