class CfgPatches 
{
	class tcw_units_501st
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_501st_base",
			"tcw_unit_501st_alt",
			"tcw_backpack_501st"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_501st_base",
			"tcw_p1_helmet_501st_medic",
			"tcw_p1_helmet_501st_alt",
			"tcw_p1_helmet_501st_alt_medic",
			"tcw_uniform_501st_base",
			"tcw_uniform_501st_alt"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_501st_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 501st P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_501st";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_501st_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 501st Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_501st";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_501st_alt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 501st Alternate P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_alt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_alt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_501st";
			camo = "alt";
		};
	};

	class tcw_p1_helmet_501st_alt_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 501st Alternate Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_medic_alt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\p1_helmet_501st_medic_alt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_501st";
			camo = "alt_medic";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_501st_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 501st Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_501st_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_501st";
			camo = "ct";
		};
	};

	class tcw_uniform_501st_alt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 501st Uniform (ALT)";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_501st_alt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_501st";
			camo = "alt";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_501st_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_501st_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\uniform_clone_upper_501st_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\uniform_clone_lower_501st_base_co.paa",
		};
	};
	class tcw_unit_501st_alt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_501st_alt";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\uniform_clone_upper_501st_alt_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\uniform_clone_lower_501st_alt_co.paa",	// Bottom
		};
	};
	class tcw_clone_backpack;
	class tcw_backpack_501st : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 501st Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\501st\Tex\backpack_501st_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_501st
		{
			label = "[TCW] 501st Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic","alt","alt_medic"};
				class ct
				{
					label = "Standard";
				};
				class medic
				{
					label = "Medic";
				};
				class alt
				{
					label = "Alternate";
				};
				class alt_medic
				{
					label = "Alt Medic";
				};
			};
		};

		class tcw_unit_uniforms_501st
		{
			label = "[TCW] 501st Uniforms";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","alt"};
				class ct
				{
					label = "Standard";
				};
				class alt
				{
					label = "Alternate";
				};
			};
		};
	};
};
