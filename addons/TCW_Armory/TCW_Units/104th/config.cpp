
class CfgPatches 
{
	class TCW_Units_104th
	{
		author = "TCW Team";
		filename = "TCW_Armory.pbo";
		requiredAddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units"
		};
		units[] = 
		{
			"tcw_backpack_104th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_104th_base"
		};
		requiredVersion = 2.20;
		
	};
};

class CfgWeapons
{
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_104th_base: tcw_p1_helmet_base
	{
		scope = 2;
		displayName = "[TCW] 104th P1 Helmet";
		author = "TCW Team";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "ct";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_backpack;
	class tcw_backpack_104th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 104th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\backpack_104th_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
	};
};

class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_104th
        {
            label = "[TCW] 104th Helmets";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct"};
                class ct
                {
                    label = "Standard";
                };
            };
        };
		class tcw_unit_uniforms_104th
        {
            label = "[TCW] 104th Uniforms";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct",};
                class ct
                {
                    label = "Standard";
                };
            };
        };
	};
};