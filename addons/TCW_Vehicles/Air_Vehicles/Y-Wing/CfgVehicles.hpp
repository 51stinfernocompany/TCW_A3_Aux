    class CfgVehicles
    {
    // Y-Wing
    class 3AS_BTLB_Bomber;
    class tcw_Y_Wing: 3AS_BTLB_Bomber
    {
        displayName="[TCW] Y-Wing";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        hiddenselectionstextures[]= {
            "tcw\addons\TCW_Vehicles\Data\Y-Wing\Chasis_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\Y-Wing\Detail_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\Y-Wing\Interior_CO.paa"
        };
        // Self explanatory, but if you want to implement a new Y-Wing, just copy this line of code unless you really want to alter textures
    };
};
