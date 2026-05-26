class CfgVehicles
    {
    // ATAP
    class 3AS_ATAP_Base;
    class tcw_atap: 3AS_ATAP_Base
    {
    displayName="[TCW] AT-AP";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATAP
    model = "3AS\3AS_ATAP\model\3AS_ATAP.p3d";
    hiddenSelections[]=
		{
        "camo1",
        "camo2",
        "camo3"
		};
    hiddenselectionstextures[]= 
        {
        "tcw\addons\TCW_Vehicles\Data\AT-AP\Hull_CO.paa",
        "tcw\addons\TCW_Vehicles\Data\AT-AP\weapons and decals_CO.paa",
        "tcw\addons\TCW_Vehicles\Data\AT-AP\legs_CO.paa"
        };
        // Self explanatory, but if you want to implement a new ATAP, just copy this line of code unless you really want to alter textures
        maxSpeed = 15;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};