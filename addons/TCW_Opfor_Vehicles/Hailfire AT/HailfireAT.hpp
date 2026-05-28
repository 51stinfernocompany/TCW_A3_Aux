    class CfgVehicles
    {
    // Hailfire
    class 3AS_Hailfire_AT;
    class tcw_hailfire_at: 3AS_Hailfire_AT
    {
    displayName="[TCW] Hailfire Anti-Tank";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the Hailfire
    model = "3AS\3AS_Hailfire\model\Hailfire.p3d";
    hiddenSelections[]=
		{
        "camo1",
        "camo2"
		};
    hiddenselectionstextures[]= 
        {
        "3AS\3AS_hailfire\data\headblue_co.paa",
        "3AS\3AS_hailfire\data\wheelsblue_co.paa"
        };
        // Self explanatory, but if you want to implement a new Hailfire, just copy this line of code unless you really want to alter textures
        maxSpeed = 50;       // km/h limit
        enginePower = 750;   // lower = slower acceleration
    };
};
