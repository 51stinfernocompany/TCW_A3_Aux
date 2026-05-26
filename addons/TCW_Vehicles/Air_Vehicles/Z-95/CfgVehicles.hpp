    class CfgVehicles
    {
    // Z-95 3AS ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class 3AS_Z95_Republic;
    class tcw_Z_95_Head_Hunter_3AS: 3AS_Z95_Republic
    {
        displayName="[TCW] Z-95 Head Hunter 3AS";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        // Model paths for the Z-95
        hiddenselectionstextures[]= 
        {
            "x\tcw\addons\TCW_Vehicles\Data\Z-95 Head Hunter 3AS\body_co.paa",
            "x\tcw\addons\TCW_Vehicles\Data\Z-95 Head Hunter 3AS\cockpit_co.paa",
            "x\tcw\addons\TCW_Vehicles\Data\Z-95 Head Hunter 3AS\glass_ca.paa"
        };
        // Self explanatory, but if you want to implement a new Z-95, just copy this line of code unless you really want to alter textures
    };
};