class CfgPatches 
{
	class tcw_units_31st
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_31st_base",
			//"tcw_backpack_31st"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_31st_base",
			//"tcw_p1_helmet_31st_medic",
			"tcw_uniform_31st_base",
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_31st_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 31st P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\p1_helmet_31st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\p1_helmet_31st_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_31st";
			camo = "ct";
		};
	};

	/*class tcw_p1_helmet_31st_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 31st Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\p1_helmet_31st_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\p1_helmet_31st_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_31st";
			camo = "medic";
		};
	};*/


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_31st_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 31st Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_31st_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_31st";
			camo = "ct";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_31st_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_31st_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\uniform_clone_upper_31st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\uniform_clone_lower_31st_base_co.paa",
		};
	};
	/*class tcw_clone_backpack;
	class tcw_backpack_31st : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 31st Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\31st\Tex\backpack_31st_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
	};*/
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_31st
		{
			label = "[TCW] 31st Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic"};
				class ct
				{
					label = "Standard";
				};
				class medic
				{
					label = "Medic";
				};
			};
		};

		class tcw_unit_uniforms_31st
		{
			label = "[TCW] 31st Uniforms";
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
