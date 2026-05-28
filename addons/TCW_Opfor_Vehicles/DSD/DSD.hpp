    class CfgVehicles
    {
    // ATT
    class 3AS_Advanced_DSD;
    class tcw_dsd: 3AS_Advanced_DSD
    {
    displayName="[TCW] DSD";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATT
    model = "3AS\3AS_ADSD\model\ADSD.p3d";
        // Self explanatory, but if you want to implement a new ATT, just copy this line of code unless you really want to alter textures
        maxSpeed = 12;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};
