    class CfgVehicles
    {
    // ATT
    class 3AS_Heavy_AAT_Flamer_Red;
    class tcw_att_flame: 3AS_Heavy_AAT_Flamer_Red
    {
    displayName="[TCW] ATT Flamer";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction_droids";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
        // Model paths for the ATT
    model = "3as\3AS_CIS_Armor\HeavyAAT\Model\3AS_CIS_HeavyAAT_Flamer_F.p3d";
    hiddenSelections[]=
		{
        "Camo",
        "camo4"
		};
    hiddenselectionstextures[]= 
        {
        "3as\3as_cis_armor\heavyaat\data\hull_Red_co.paa",
        "3as\3as_cis_armor\heavyaat\data\Flame_Red_co.paa"
        };
            textureList[] = {"CIS",0,"Red",1,"Green",0,"Camo",0,"TCW",0};
    class TextureSources
    {
        class TCW
        {
            // Self explanatory, but if you want to implement a new ARC-170, just copy this line of code unless you really want to alter textures
            textures[]=
            {
            "3as\3as_cis_armor\heavyaat\data\hull_Red_co.paa",
            "3as\3as_cis_armor\heavyaat\data\Flame_Red_co.paa"
            };
        };
    };
        // Self explanatory, but if you want to implement a new ATT, just copy this line of code unless you really want to alter textures
        maxSpeed = 12;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};