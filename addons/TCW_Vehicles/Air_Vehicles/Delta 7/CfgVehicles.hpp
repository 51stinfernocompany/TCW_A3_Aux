    class CfgVehicles
    {
    // Delta 7
    class 3AS_Delta7_F;
    class tcw_delta_7: 3AS_Delta7_F
    {
        displayName="[TCW] Delta 7";
        faction="tcw_faction";
        editorCategory="tcw_assets";
        editorSubcategory="tcw_vics";
        // Model paths for the Delta 7
    model = "\3AS\3AS_Delta7\3AS_Delta7_F.p3d";
    hiddenSelections[]=
		{
        "camo",
        "camo1",
        "camo2",
        "camo3"
		};
    hiddenselectionstextures[]= 
        {
        "x\tcw\addons\TCW_Vehicles\Data\Delta 7\Delta7_Hull_co.paa",
        "x\tcw\addons\TCW_Vehicles\Data\Delta 7\Delta7_Landing_Gear_co.paa",
        "x\tcw\addons\TCW_Vehicles\Data\Delta 7\Delta7_Cockpit_co.paa",
        "3as\3as_delta7\data\delta7_interfaces_ca.paa"
        };
        // Self explanatory, but if you want to implement a new Delta 7, just copy this line of code unless you really want to alter textures
    };
};
