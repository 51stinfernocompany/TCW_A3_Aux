class CfgPatches 
{
	class tcw_units_razor
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_razor_base",
			"tcw_backpack_razor"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_razor_base",
			//"tcw_p1_helmet_razor_medic",
			"tcw_uniform_razor_base",
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_razor_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] Razor Squadron P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\p1_helmet_razor_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\p1_helmet_razor_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_razor";
			camo = "ct";
		};
	};

	/*class tcw_p1_helmet_razor_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] Razor Squadron Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\p1_helmet_razor_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\p1_helmet_razor_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_razor";
			camo = "medic";
		};
	};*/

//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_razor_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] Razor Squadron Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_razor_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_razor";
			camo = "ct";
		};
	};

};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_razor_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_razor_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\uniform_clone_upper_razor_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\uniform_clone_lower_razor_base_co.paa",
		};
	};
	
	class tcw_clone_backpack;
	class tcw_backpack_razor : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] Razor Squadron Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\Razor\Tex\backpack_razor_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
    };
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_razor
		{
			label = "[TCW] Razor Squadron Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct",/*"medic"*/};
				class ct
				{
					label = "Standard";
				};
				/*class medic
				{
					label = "Medic";
				};*/
			};
		};

		class tcw_unit_uniforms_razor
		{
			label = "[TCW] Razor Squadron Uniforms";
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
	};
};
