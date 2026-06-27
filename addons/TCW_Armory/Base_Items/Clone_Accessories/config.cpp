class CfgPatches
{
	class tcw_base_accessories
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		requiredaddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units",
		};
		requiredVersion = 2.20;
		units[] = {};
		weapons[] =
        {
            "tcw_nvg_chip",
        };

	};
};

class cfgWeapons
{
    class IDA_Clone_NVG;
    class tcw_nvg_chip : IDA_Clone_NVG
    {
        scope = 2;
        scopearsenal = 2;
        scopecurator = 2;
        author = "TCW Team";
        displayname = "[TCW] Clone NVG Chip";
		visionMode[] = {"Normal","NVG"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {""};
        class xtdgearinfo
        {
            model = "tcw_nvg";
            camo = "chip";
        };
    };
};

class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_nvg
		{
			label = "[TCW] Phase 1 NVG";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"chip"};
				class chip
				{
					label = "Clone NVG Chip";
				};
            };
        };
    };
};
