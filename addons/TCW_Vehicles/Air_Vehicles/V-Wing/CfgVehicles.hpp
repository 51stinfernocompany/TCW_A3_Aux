    class CfgVehicles
    {
    // V-Wing
    class 3AS_Vwing_base;
    class tcw_v_wing: 3AS_Vwing_base
    {
        displayName="[TCW] V-Wing";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        hiddenSelections[]=
        {
            "camo1",
            "camo4",
            "camo5"
        };
        hiddenselectionstextures[]= {
            "\x\tcw\addons\TCW_Vehicles\Data\V-Wing\Vwing_Main_co.paa",
            "\x\tcw\addons\TCW_Vehicles\Data\V-Wing\Vwing_AstromechDroid_co.paa",
            "\x\tcw\addons\TCW_Vehicles\Data\V-Wing\Vwing_Wings_co.paa"
        };
        // Self explanatory, but if you want to implement a new V-Wing, just copy this line of code unless you really want to alter textures
    };
};
