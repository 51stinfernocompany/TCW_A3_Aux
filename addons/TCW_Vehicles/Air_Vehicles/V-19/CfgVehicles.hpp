    class CfgVehicles
    {
    // V-19
    class 3AS_V19_base;
    class tcw_V_19: 3AS_V19_base
    {
        displayName="[TCW] V-19";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        // Model paths for the V-19
        hiddenselectionstextures[]= 
        {
            "tcw\addons\TCW_Vehicles\Data\V-19\wings_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\V-19\wing plates_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\V-19\Hull_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\V-19\gun gear_CO.paa",
            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
            "tcw\addons\TCW_Vehicles\Data\V-19\Pizzlepit_CO.paa"
        };
        // Self explanatory, but if you want to implement a new V-19, just copy this line of code unless you really want to alter textures
    };
};