class CfgVehicles
{
    #include "venator.hpp"
};
class CfgPatches
{
    class tcw_vehicle_venator 
    {
        author = "TCW Aux Team";
        name = "TCW - Vehicle (Venator)";
        addonRootClass = "TCW_Vehicles";
        requiredVersion = 2.14;

        requiredAddons[] =
        {
            "ls_props_staticships"
        };

        units[] =
        {
            "tcw_venator_full",
            "tcw_venator_full_open",
            "tcw_venator_full_hollow",
            "tcw_venator_open_full_hollow",

            "tcw_ven_body1_1",
            "tcw_ven_body1_2",
            "tcw_ven_body2_1",
            "tcw_ven_body2_2",
            "tcw_ven_body2_3",
            "tcw_ven_body3",
            "tcw_ven_body4",
            "tcw_ven_body5",
            "tcw_ven_body6",
            "tcw_ven_body7",
            "tcw_ven_body8",
            "tcw_ven_body9",
            "tcw_ven_body10",
            "tcw_ven_door",
            "tcw_ven_door2",
            "tcw_ven_engine",
            "tcw_ven_int1",
            "tcw_ven_int2",
            "tcw_ven_int3",
            "tcw_ven_int4",
            "tcw_ven_int5",
            "tcw_ven_int6",
            "tcw_ven_int7",
            "tcw_ven_int8",
            "tcw_ven_bridge"
        };
    };
};