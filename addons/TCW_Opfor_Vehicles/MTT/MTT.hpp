    class CfgVehicles
    {
    // MTT
    class 3as_MTT;
    class tcw_mtt_cis: 3as_MTT
    {
    displayName="[TCW] MTT CIS";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the MTT
    model = "3as\3AS_mtt\model\MTT.p3d";
    hiddenSelections[]=
		{
        "camo1",
        "camo2"
		};
    hiddenselectionstextures[]= 
        {
        "3as\3AS_MTT\data\MTT_Main_Blue_CO.paa",
        "3as\3AS_MTT\data\MTT_Rack_CO.paa"
        };
        // Self explanatory, but if you want to implement a new MTT, just copy this line of code unless you really want to alter textures
        maxSpeed = 75;       // km/h limit
        enginePower = 20000;   // lower = slower acceleration
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class tcw_mtt_fed: 3as_MTT
    {
    displayName="[TCW] MTT Trade Fedration";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the MTT
    model = "3as\3AS_mtt\model\MTT.p3d";
    hiddenSelections[]=
		{
        "camo1",
        "camo2"
		};
    hiddenselectionstextures[]= 
        {
        "3as\3AS_MTT\data\MTT_Main_CO.paa",
        "3as\3AS_MTT\data\MTT_Rack_CO.paa"
        };
        // Self explanatory, but if you want to implement a new MTT, just copy this line of code unless you really want to alter textures
        maxSpeed = 75;       // km/h limit
        enginePower = 20000;   // lower = slower acceleration
    };
};
