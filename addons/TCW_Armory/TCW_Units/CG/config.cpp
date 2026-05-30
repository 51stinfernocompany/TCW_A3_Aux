class CfgPatches 
{
	class tcw_units_CG
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_CG_base",
			"tcw_backpack_CG"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_CG_base",
			"tcw_p1_helmet_CG_medic",
			"tcw_uniform_CG_base"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_CG_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] CG P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\p1_helmet_CG_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\p1_helmet_CG_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_CG";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_CG_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] CG Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\p1_helmet_CG_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\p1_helmet_CG_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_CG";
			camo = "medic";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_CG_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] CG Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_CG_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_CG";
			camo = "ct";
		};
	};

};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_CG_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_CG_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\uniform_clone_upper_CG_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\uniform_clone_lower_CG_base_co.paa",
		};
	};
	
	class tcw_clone_backpack;
	class tcw_backpack_CG : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] CG Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\CG\Tex\backpack_CG_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_CG
		{
			label = "[TCW] CG Helmets";
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

		class tcw_unit_uniforms_CG
		{
			label = "[TCW] CG Uniforms";
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
