    class CfgVehicles
    {
    // ATTE
    class 3AS_ATTE_Base;
    class tcw_atte: 3AS_ATTE_Base
    {
    displayName="[TCW] AT-TE";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATTE
    model = "3AS\3AS_ATTE\model\3AS_ATTE.p3d";
    hiddenSelections[]=
		{
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "camo5",
        "camo11"
		};
    hiddenselectionstextures[]= 
        {
        "tcw\addons\TCW_Vehicles\Data\ATTE\3AS_ATTE_Shell_TCW_co.paa",
        "tcw\addons\TCW_Vehicles\Data\ATTE\3AS_ATTE_Cockpit_co.paa",
        "tcw\addons\TCW_Vehicles\Data\ATTE\3AS_ATTE_Detail_co.paa",
        "tcw\addons\TCW_Vehicles\Data\ATTE\3AS_ATTE_Legs_co.paa",
        "3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
        "tcw\addons\TCW_Vehicles\Data\ATTE\3AS_ATTE_Armor_co.paa"
        };
        // Self explanatory, but if you want to implement a new ATTE, just copy this line of code unless you really want to alter textures
        maxSpeed = 9;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};