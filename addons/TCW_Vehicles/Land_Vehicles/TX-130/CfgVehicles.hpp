    class CfgVehicles
    {
    // TX-130
    class 3AS_Saber_Super;
    class tcw_tx_130: 3AS_Saber_Super
    {
    displayName="[TCW] TX-130";
    author = "TCW Aux Team";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
    hiddenSelections[]=
		{
        "camo1",
        "camo2"
		};
    hiddenselectionstextures[]= {
        "x\tcw\addons\TCW_Vehicles\Data\TX-130\saber_hull_co.paa",
        "x\tcw\addons\TCW_Vehicles\Data\TX-130\saber_weapons_co.paa"
        };
        // Self explanatory, but if you want to implement a new TX-130, just copy this line of code unless you really want to alter textures
        maxSpeed = 20;       // km/h limit
        enginePower = 550;   // lower = slower acceleration
    };
};
