class CfgPatches
{
    class tcw_cis
    {
        name = "tcw_cis";
        author = "TCW Team";
        requiredVersion = 2.20;
        requiredAddons[] = {
            "IDA_CIS",
            "IDA_Ammo",
            "ls_characters_droid"
        };
        units[] = {
            //Droids
            "tcw_cis_b1",
            "tcw_cis_b1_backpack",
            "tcw_cis_b1_backpack_at",
            "tcw_cis_b1_backpack_geonosis",
            "tcw_cis_b1_heavy",
            "tcw_cis_b1_at",
            "tcw_cis_b1_marksman",
            "tcw_cis_b1_shotgun",
            "tcw_cis_b1_commander",
            "tcw_cis_b1_pilot",
            "tcw_cis_b1_crew",
            "tcw_cis_b1_security",
            "tcw_cis_b1_geonosis",
            "tcw_cis_b1_geonosis_at",
            "tcw_cis_b1_geonosis_heavy",
            "tcw_cis_b1_geonosis_marksman",
            "tcw_cis_b1_geonosis_shotgun",
            "tcw_cis_b1_geonosis_commander",
            "tcw_cis_bx",
            "tcw_cis_bx_captain",
            "tcw_cis_bx_assassin",
            "tcw_cis_bx_diplomat",
            "tcw_cis_bx_security",
            "tcw_cis_bx_clone",
            "tcw_cis_droideka",
            "tcw_cis_droideka_noShield",
            "tcw_cis_b2",
            "tcw_cis_tseries",
            //Air Vehicles
            "tcw_cis_vulture",
            "tcw_cis_vulture_tan",
            "tcw_cis_vulture_aa",
            "tcw_cis_vulture_aa_tan",
            "tcw_cis_trifighter",
            "tcw_cis_hmp_gunship",
            "tcw_cis_hmp_transport",
            //Ground Vehicles
            "tcw_cis_aat",
            "tcw_cis_aat_tan",
            "tcw_cis_heavy_aat",
            "tcw_cis_adv_dsd",
            "tcw_cis_flamer",
            "tcw_cis_defoliator",
            "tcw_cis_gat",
            "tcw_cis_gat_light",
            "tcw_cis_hailfire_at",
            "tcw_cis_hailfire_aa",
            "tcw_cis_hailfire_rocket",
            "tcw_cis_hagm",
            "tcw_cis_hagm_tan",
            "tcw_cis_mtt",
            "tcw_cis_mtt_tan",
            "tcw_cis_octuptarra_torpedo",
            "tcw_cis_octuptarra_magna",
            "tcw_cis_octuptarra_torpedo_static",
            "tcw_cis_octuptarra_magna_static",
            "tcw_cis_sac",
            "tcw_cis_sac_tan",
            "tcw_cis_pac",
            "tcw_cis_pac_tan",
            "tcw_cis_speeder_bx",
            //Turrets
            "tcw_cis_mortar",
            "tcw_cis_j10s",
            
        };
        weapons[] = {
            "tcw_cis_e5",
            "tcw_cis_e60r",
            "tcw_cis_e5c",
            "tcw_cis_e5s",
        };
        magazines[] = {
            "tcw_cis_e5_mag",
            "tcw_cis_e5c_mag",
            "tcw_cis_e5s_mag",
        };
        ammo[] = {
            "tcw_cis_e5_ammo",
            "tcw_cis_e5s_ammo",
        };
    };
};

class CfgFactionClasses
{
    class tcw_opfor_cis
    {
        displayName = "[TCW] CIS";
        priority = 1;
        side = 0;
    };
};

class CfgEditorSubcategories
{
    class tcw_cis_battledroids
    {
        displayName = "Battledroids";
    };
    class tcw_cis_battledroids_geo
    {
        displayName = "Battledroids (Geonosis)";
    };
    class tcw_cis_vehicles_ground
    {
        displayName = "Ground Vehicles";
    };
    class tcw_cis_vehicles_air
    {
        displayName = "Air Vehicles";
    };
    class tcw_cis_turrets
    {
        displayName = "Turrets";
    };
    class tcw_cis_walkers
    {
        displayName = "Walkers";
    };
};

#include "CfgAmmoMagazines.hpp"

class CfgWeapons {
    #include "CfgWeapons.hpp"
};

class CfgVehicles {
    #include "CfgVehicles.hpp"
};

class CfgGroups
{
    class East
    {
        class tcw_opfor_cis
        {
            name = "[TCW] CIS";
            displayName = "[TCW] CIS";
            side = 0;
            faction = "tcw_opfor_cis";
            #include "CfgGroups.hpp"
        };
    };
};
