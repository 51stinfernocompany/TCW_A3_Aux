class CfgPatches
{
    class tcw_vehicles_air
    {
        author = "TCW Team";
        name = "air";
        addonRootClass = "tcw_vehicles";
        requiredAddons[] =
        {
            // Air Assault
            "3AS_ARC_170", // ARC-170
            "3AS_Delta7", // Delta-7
            "3as_V19_Torrent", // V-19
            "3AS_BTLB_Bomber", // Y-Wing / BTL-Y Wing
            "3AS_Vwing", // V-Wing
            "3AS_Z95_base", // Z-95
            // Air Transport
            "3AS_LAAT", // 3AS LAAT
            "3AS_Republic_Heli_Rho", // Rho Ho Transport
            "3AS_LAAT_LE", // LAAT-LE
            // Air Logistics
            "3AS_Republic_Heli_Nu", // Nullclass Transport
            "3AS_Imperial_Air_Gozanti", // Gozanti Crusier
            "3AS_LAAT_Cargo", // LAAT-C (3AS)
            "3as_Starships", // Republic Transport
        };
        units[]=
        {
            // Air Assault
            "tcw_arc170",
            "tcw_delta_7",
            "tcw_v19",
            "tcw_ywing",
            "tcw_vwing",
            "tcw_z95",
            // Air Transport
            "tcw_laat_i",
            "tcw_rho_ho",
            "tcw_LAAT_LE",
            // Air Logistics
            "tcw_nullclass",
            "tcw_gozanti",
            "tcw_laat_c",
            "tcw_republic_transport"
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
    class TextureSources;
    // ARC-170
    class 3AS_ARC_170_Orange;
    class tcw_arc170: 3AS_ARC_170_Orange
    {
        displayName="[TCW] ARC-170";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };

    // Delta 7
    class 3AS_Delta7_F;
    class tcw_delta_7: 3AS_Delta7_F
    {
        displayName="[TCW] Delta-7";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };

    // V-19
    class 3AS_V19_base;
    class tcw_v19: 3AS_V19_base
    {
        displayName="[TCW] V-19 Torrent";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };

    // Y-Wing
    class 3AS_BTLB_Bomber;
    class tcw_ywing: 3AS_BTLB_Bomber
    {
        displayName="[TCW] BTL-Y Wing";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
        weapons[] = {"tcw_ywing_cannon","CMFlareLauncher","Laserdesignator_pilotCamera"};
    };

    // V-Wing
    class 3as_Vwing_base;
    class tcw_vwing: 3as_Vwing_base
    {
        displayName="[TCW] V-Wing (3AS)";
        faction = "tcw_faction_inferno";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot_combat";
        author = "TCW Aux Team";
        fuelCapacity=3700;
        fuelConsumptionRate=0.1;
        weapons[] = {"tcw_vwing_medium_cannon","3AS_ARC_Missile_AA","weapon_AMRAAMLauncher","CMFlareLauncher"};
    };

    // Z-95
    class ls_vehicle_z95;
    class tcw_z95: ls_vehicle_z95
    {
        displayName="[TCW] Z-95";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };
    
    // 3AS LAAT
    class 3AS_LAAT_Mk1;
    class tcw_laat_i: 3AS_LAAT_Mk1
    {
        displayName="[TCW] LAAT/i Gunship (3AS)";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
        fuelCapacity=3700;
        fuelConsumptionRate=0.1;
    };

    // Rho Ho Transport
    class 3AS_Rho_REP_F;
    class tcw_rho_ho: 3AS_Rho_REP_F
    {
        displayName="[TCW] Rho Ho";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };

    // LAAT LE
    class 3AS_Patrol_LAAT_Republic;
    class tcw_LAAT_LE: 3AS_Patrol_LAAT_Republic
    {
        displayName="[TCW] LAAT-LE";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
        scope = 2;
        fuelCapacity=1000;
        fuelConsumptionRate=0.2;
    };

    // Nullclass
    class 3AS_Nu_REP_F;
    class tcw_nullclass: 3AS_Nu_REP_F
    {
        displayName="[TCW] NullClass Transport";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };

    // Gozanti
    class 3AS_Gozanti_Republic;
    class tcw_gozanti: 3AS_Gozanti_Republic
    {
        displayName="[TCW] Gozanti Cruiser";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };
    
    //3AS LAAT C
    class 3AS_LAATC;
    class tcw_laat_c : 3AS_LAATC
    {
        scope = 2;
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
        displayName = "[TCW] LAAT/C Gunship (3AS)";
        fuelConsumptionRate=0.1;
    };

    // Republic Transport
    class 3AS_Republic_Transport_01;
    class tcw_republic_transport: 3AS_Republic_Transport_01
    {
        displayName="[TCW] Republic Transport";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Aux Team";
    };
};
class lowROF;
class CfgWeapons {
    class 3as_Vwing_Medium_Cannon;
    class tcw_vwing_medium_cannon : 3as_Vwing_Medium_Cannon {
        class lowROF : lowROF
        {
            reloadTime = 0.22;
        };
    };
    class 3AS_BTLB_Heavy_Cannon;
    class tcw_ywing_cannon : 3AS_BTLB_Heavy_Cannon 
    {
        class lowROF: lowROF
        {
            reloadTime = 0.22;
        };  
    };
};
