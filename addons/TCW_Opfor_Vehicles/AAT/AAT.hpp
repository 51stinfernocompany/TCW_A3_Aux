    class CfgVehicles
    {
    // ATT
    class ls_vehicle_aat_cis;
    class ls_vehicle_aat;
    class tcw_att_cis: ls_vehicle_aat_cis
    {
    displayName="[TCW] ATT CIS";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATT
    model = "\ls\core\addons\vehicles_aat\ls_vehicle_aat.p3d";
    hiddenSelections[]=
		{
        "body1",
        "body2",
        "gun"
		};
    hiddenselectionstextures[]= 
        {
        "\ls\core\addons\vehicles_aat\data\textures\cis\body1_co.paa",
        "\ls\core\addons\vehicles_aat\data\textures\cis\body2_co.paa",
        "\ls\core\addons\vehicles_aat\data\textures\cis\gun_co.paa"
        };
            textureList[] = {"TradeFederation",0,"CIS",1,"Blue",0,"Red",0,"Green",0,"Black",0,"Winter",0,"TCW",0};
    class TextureSources
    {
        class TCW
        {
            // Self explanatory, but if you want to implement a new ARC-170, just copy this line of code unless you really want to alter textures
            textures[]=
            {
            "",
            "",
            ""
            };
        };
    };
        // Self explanatory, but if you want to implement a new ATT, just copy this line of code unless you really want to alter textures
        maxSpeed = 12;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class tcw_att_fed: ls_vehicle_aat
    {
    displayName="[TCW] ATT Trade Fedration";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATT
    model = "\ls\core\addons\vehicles_aat\ls_vehicle_aat.p3d";
    hiddenSelections[]=
		{
        "body1",
        "body2",
        "gun"
		};
    hiddenselectionstextures[]= 
        {
        "\ls\core\addons\vehicles_aat\data\body1_co.paa",
        "\ls\core\addons\vehicles_aat\data\body2_co.paa",
        "\ls\core\addons\vehicles_aat\data\gun_co.paa"
        };
        textureList[] = {"TradeFederation",1,"CIS",0,"Blue",0,"Red",0,"Green",0,"Black",0,"Winter",0,"TCW",0};
    class TextureSources
    {
        class TCW
        {
            // Self explanatory, but if you want to implement a new ARC-170, just copy this line of code unless you really want to alter textures
            textures[]=
            {
            "",
            "",
            ""
            };
        };
    };
        // Self explanatory, but if you want to implement a new ATT, just copy this line of code unless you really want to alter textures
        maxSpeed = 12;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};
