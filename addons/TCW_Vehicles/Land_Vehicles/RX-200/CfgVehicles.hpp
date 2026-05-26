    class CfgVehicles
    {
    // RX-200
    class 3AS_RX200_Base;
    class tcw_rx_200: 3AS_RX200_Base
    {
    displayName="[TCW] RX-200";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the RX-200
    model = "3AS\3AS_RX200\model\RX200.p3d";
    hiddenSelections[]=
		{
        "camo1"
		};
    hiddenselectionstextures[]= 
        {
        "tcw\addons\TCW_Vehicles\Data\RX-200\DefaultMaterial_CO.paa"
        };
        // Self explanatory, but if you want to implement a new RX-200, just copy this line of code unless you really want to alter textures
        maxSpeed = 20;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};