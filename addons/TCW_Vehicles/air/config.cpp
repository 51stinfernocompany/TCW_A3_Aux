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
    class 3AS_ARC_170_Republic;
    class tcw_arc170: 3AS_ARC_170_Republic
    {
        displayName="[TCW] ARC-170";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };

    // Delta 7
    class 3AS_Delta7_F;
    class tcw_delta_7: 3AS_Delta7_F
    {
        displayName="[TCW] Delta-7";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
        scope = 2;
        textureList[] = {"Base",1,"PloKoon",0,"Ani",0,"Tano",0,"Blue",0,"Orange",0,"Green",0,"Purple",0};
        class TextureSources: TextureSources
        {
            class Base
            {
                author = "3rd Army Studios";
                displayName = "Base";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Delta7_Hull_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class PloKoon
            {
                author = "3rd Army Studios";
                displayName = "Plo Koon";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_PK_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Ani
            {
                author = "3rd Army Studios";
                displayName = "Anakin";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Anakin_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Blue
            {
                author = "3rd Army Studios";
                displayName = "Blue";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Blue_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Green
            {
                author = "3rd Army Studios";
                displayName = "Green";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Green_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Orange
            {
                author = "3rd Army Studios";
                displayName = "Orange";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Orange_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Purple
            {
                author = "3rd Army Studios";
                displayName = "Purple";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Purple_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
            class Tano
            {
                author = "3rd Army Studios";
                displayName = "Purple";
                factions[] = {"tcw_blufor"};
                textures[] = {"3AS\3AS_Delta7\data\Textures\Delta7_Hull_Ahsoka_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
            };
        };
    };

    // V-19
    class 3AS_V19_base;
    class tcw_v19: 3AS_V19_base
    {
        displayName="[TCW] V-19 Torrent";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };

    // Y-Wing
    class 3AS_BTLB_Bomber;
    class tcw_ywing: 3AS_BTLB_Bomber
    {
        displayName="[TCW] BTL-Y Wing";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
        weapons[] = {"tcw_ywing_cannon","CMFlareLauncher","Laserdesignator_pilotCamera"};
    };

    // V-Wing
    class 3as_Vwing_base;
    class tcw_vwing: 3as_Vwing_base
    {
        displayName="[TCW] V-Wing (3AS)";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_assault";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
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
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };
    
    // 3AS LAAT
    class 3AS_LAAT_Mk1;
    class tcw_laat_i: 3AS_LAAT_Mk1
    {
        displayName="[TCW] LAAT/i Gunship (3AS)";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
        fuelCapacity=3700;
        fuelConsumptionRate=0.1;
        hiddenSelectionsMaterials[] = {
            "x\tcw\addons\TCW_Vehicles\air\data\laat\materials\hull.rvmat",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\materials\wings.rvmat",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\materials\weapons.rvmat",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\materials\weapon_details.rvmat",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\materials\interior.rvmat"
        };
        hiddenSelectionsTextures[] = {
            "x\tcw\addons\TCW_Vehicles\air\data\laat\gar\GAR_Hull_CO.paa",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\gar\GAR_Wings_CO.paa",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapons_CO.paa",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapon_Details_CO.paa",
            "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Interior_CO.paa"
        };
        textureList[] = {"Republic",1,"Base",0,"CSA",0};
        class TextureSources: TextureSources
        {
            class Republic
            {
                displayName = "Republic";
                author = "TCW Team";
                textures[] = {
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\gar\GAR_Hull_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\gar\GAR_Wings_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapons_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapon_Details_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Interior_CO.paa"
                };
            };
            class Base
            {
                displayName = "Base";
                author = "TCW Team";
                textures[] = {
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Hull_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Wings_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapons_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapon_Details_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Interior_CO.paa"
                };
            };
            class CSA
            {
                displayName = "CSA";
                author = "TCW Team";
                textures[] = {
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\csa\CSA_Hull_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\csa\CSA_Wings_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapons_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Weapon_Details_CO.paa",
                    "x\tcw\addons\TCW_Vehicles\air\data\laat\base\Interior_CO.paa"
                };
            };
        };
    };

    // Rho Ho Transport
    class 3AS_Rho_REP_F;
    class tcw_rho_ho: 3AS_Rho_REP_F
    {
        displayName="[TCW] Rho Ho";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };

    // LAAT LE
    class 3AS_Patrol_LAAT_Republic;
    class tcw_LAAT_LE: 3AS_Patrol_LAAT_Republic
    {
        displayName="[TCW] LAAT-LE";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_transport";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
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
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };

    // Gozanti
    class 3AS_Gozanti_Republic;
    class tcw_gozanti: 3AS_Gozanti_Republic
    {
        displayName="[TCW] Gozanti Cruiser";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
    };
    
    //3AS LAAT C
    class 3AS_LAATC;
    class tcw_laat_c : 3AS_LAATC
    {
        scope = 2;
        faction = "tcw_blufor";
        editorSubcategory = "tcw_air_logistics";
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
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
        crew = "tcw_clone_unit_pilot";
        author = "TCW Team";
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
