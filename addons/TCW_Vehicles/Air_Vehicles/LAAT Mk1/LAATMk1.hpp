class CfgVehicles
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////               Base               //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
class 3AS_LAAT_Mk1;
class tcw_laat_mk1_base: 3AS_LAAT_Mk1
{
    author = "TCW Aux Team";
    displayName="[TCW] LAAT Mk1 (3AS)";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
    fuelCapacity=3700;
    fuelConsumptionRate=0.1;
    hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
    hiddenSelectionsTextures[]=
    {
        "TCW_A3_Aux\addons\TCW_Vehicles\Data\Base Mk1 LAAT\Hull_CO.paa",
        "TCW_A3_Aux\addons\TCW_Vehicles\Data\Base Mk1 LAAT\Wings_CO.paa",
        "TCW_A3_Aux\addons\TCW_Vehicles\Data\Base Mk1 LAAT\Weapons_CO.paa",
        "TCW_A3_Aux\addons\TCW_Vehicles\Data\Base Mk1 LAAT\Weapon_Details_CO.paa",
        "TCW_A3_Aux\addons\TCW_Vehicles\Data\Base Mk1 LAAT\Interior_CO.paa"
    };
  };
};