class CfgVehicles
{
    ///////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////               Base               //////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////
class ls_vehicle_laatc;
class tcw_laatc_base: ls_vehicle_laatc
{
    author = "TCW Aux Team";
    displayName="[TCW] LAAT/C (LS)";
    scope=2;
    scopecurator=2;
    faction="tcw_faction";
    editorCategory="tcw_assets";
    editorSubcategory="tcw_vics";
    fuelCapacity=3700;
    fuelConsumptionRate=0.1;
    hiddenSelections[]=
		{
			"_auxiliary",
      "_cockpit",
      "_glass",
      "_hull",
      "_wings"
		};
          textureList[] = {"Standard",0,"FactoryNew",0,"TCW",1};
    class TextureSources
    {
        class Standard
        {
            // Self explanatory, but if you want to implement a new ARC-170, just copy this line of code unless you really want to alter textures
            textures[]=
            {
        "\ls\core\x\tcw\addons\vehicles_laatc\data\auxiliary_co.paa",
        "\ls\core\x\tcw\addons\vehicles_laatc\data\cockpit_co.paa",
        "\ls\core\x\tcw\addons\vehicles_laatc\data\glass_ca.paa",
        "\ls\core\x\tcw\addons\vehicles_laatc\data\hull_co.paa",
        "\ls\core\x\tcw\addons\vehicles_laatc\data\wings_co.paa"
            };
        };
    };
  }; 
};
