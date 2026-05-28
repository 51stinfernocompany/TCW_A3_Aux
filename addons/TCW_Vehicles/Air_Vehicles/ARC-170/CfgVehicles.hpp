    class CfgVehicles
    {
    // ARC-170
    class 3AS_ARC_170_Orange;
    class tcw_ARC_170: 3AS_ARC_170_Orange
    {
        displayName="[TCW] ARC-170";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        // Model paths for the ARC-170
    textureList[] = {"Republic",1,"Blue",0,"Green",0,"Orange",0,"Yellow",0,"TCW",0};
    class TextureSources
    {
        class TCW
        {
            // Self explanatory, but if you want to implement a new ARC-170, just copy this line of code unless you really want to alter textures
            textures[]=
            {
            "tcw\addons\TCW_Vehicles\Data\ARC-170\Main_Frame_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\ARC-170\Wings_Engines_CO.paa",
            "tcw\addons\TCW_Vehicles\Data\ARC-170\Guns_CO.paa"
            };
        };
    };
  };
};
