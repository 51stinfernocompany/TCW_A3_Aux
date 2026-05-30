class CfgPatches
{
    class tcw_vehicles_ground
    {
        author = "TCW Team";
        name = "ground";
        addonRootClass = "tcw_vehicles";
        requiredAddons[] =
        {
            // Ground Assault
            "3AS_ATTE", // AT-TE
            "3AS_SaberTank", // Saber TX-130
            "3AS_UTAT", // UT-AT
            // Ground Transport
            "3AS_ITT", // ITT
            "3AS_ATRT", // ATRT
            "3AS_LightVics_Barc", // BARC
            "3AS_APC_Jug", // Juggernaut
            // Ground Logistics
            "3AS_ATAP", // ATAP
            "3AS_AV7", // AV-7
            "3AS_Republic_Heli_Rho", // Rho-Crates
            "3AS_RX200", // RX-200
            "TCW_base"
        };
        units[]=
        {
            // Ground Assault
            "tcw_atte",
            "tcw_saber_tx",
            "tcw_utat",
            // Ground Transport
            "tcw_itt",
            "tcw_atrt",
            "tcw_barc",
            "tcw_juggernaut",
            // Ground Logistics
            "tcw_atap",
            "tcw_av7",
            "tcw_rho_crate",
            "tcw_rho_crate_barracks",
            "tcw_rx",
            "tcw_itt_logi"
        };
        magazines[] = {};
        weapons[] = {};
    };
};

class CfgVehicles {
// AT-TE
    class 3AS_ATTE_TCW;
    class tcw_atte: 3AS_ATTE_TCW
    {
        displayName="[TCW] ATTE";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_assault";
        crew = "tcw_clone_unit";
        author = "TCW Team";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass            = "B_Parachute_02_F";
                parachuteHeightLimit    = 40;                
                canBeTransported        = 1;                
                dimensions[]            = { "ftr_muzzle", "btl_muzzle" };
            };
        };
    };

// TX-130
    class 3AS_Saber_M1;
    class tcw_saber_tx: 3AS_Saber_M1
    {
        displayName="[TCW] Saber TX-130";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_assault";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

// UT-AT
    class 3AS_UTAT;
    class tcw_utat: 3AS_UTAT
    {
        displayName="[TCW] UT-AT";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_assault";
        crew = "tcw_clone_unit";
        author = "TCW Team";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass            = "B_Parachute_02_F";
                parachuteHeightLimit    = 40;                
                canBeTransported        = 1;                
                dimensions[]            = { "wheel_1_2_axis", "wheel_2_7_bound" };
            };
        };
    };

    // ITT
    class 3AS_ITT;
    class tcw_itt: 3AS_ITT
    {
        displayName="[TCW] ITT";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_transport";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    // AT-RT
    class 3AS_ATRT;
    class tcw_atrt: 3AS_ATRT
    {
        displayName="[TCW] AT-RT";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_transport";
        crew = "tcw_clone_unit";
        author = "TCW Team";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass            = "B_Parachute_02_F";
                parachuteHeightLimit    = 40;                
                canBeTransported        = 1;                
                dimensions[]            = { "ftr_muzzle", "btl_muzzle" };
            };
        };
    };

    // BARC
    class 3AS_BARC;
    class tcw_barc: 3AS_BARC
    {
        displayName="[TCW] Barc Speeder";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_transport";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    // Juggernaut
    class 3as_Jug;
    class tcw_juggernaut: 3as_Jug
    {
        displayName="[TCW] Juggernaut";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_transport";
        crew = "tcw_clone_unit_base";
        author = "TCW Team";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass            = "B_Parachute_02_F";
                parachuteHeightLimit    = 40;                
                canBeTransported        = 1;                
                dimensions[]            = { "ftr_muzzle", "btl_muzzle" };
            };
        };
    };

    // AT-AP
    class 3AS_ATAP_Base;
    class tcw_atap: 3AS_ATAP_Base
    {
        displayName="[TCW] AT-AP";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass            = "B_Parachute_02_F";
                parachuteHeightLimit    = 40;                
                canBeTransported        = 1;                
                dimensions[]            = { "doplnovani", "action" };
            };
        };
    };

    // AV-7
    class 3AS_AV7;
    class tcw_av7: 3AS_AV7
    {
        displayName="[TCW] AV-7";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    // Rho-Crates
    class 3AS_Rho_Crate_REP_Transport;
    class tcw_rho_crate: 3AS_Rho_Crate_REP_Transport
    {
        displayName="[TCW] Rho-Ho Crate (Transport)";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    class 3AS_Rho_Crate_REP_Barracks;
    class tcw_rho_crate_barracks: 3AS_Rho_Crate_REP_Barracks
    {
        displayName="[TCW] Rho-Ho Crate (Barracks)";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    // RX-200
    class 3AS_RX200_Base;
    class tcw_rx: 3AS_RX200_Base
    {
        displayName="[TCW] RX-200";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };

    // ITT Transport
    class tcw_itt_logi: 3AS_ITT
    {
        displayName="[TCW] ITT Logistics";
        faction = "tcw_blufor";
        editorSubcategory = "tcw_ground_logistics";
        crew = "tcw_clone_unit";
        author = "TCW Team";
    };
};
