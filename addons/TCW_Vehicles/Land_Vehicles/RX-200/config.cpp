#include "CfgVehicles.hpp"
class CfgPatches
{
   class tcw_vehicle_rx_200
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (RX-200)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;
        requiredAddons[] =
        {
        "A3_Data_F_Decade_Loadorder",
        "3AS_RX200",
        "ls_compat_tas"
        };
        units[] = {
            "tcw_rx_200"
        };
        weapons[] ={};
    };
};