class CfgPatches 
{
	class tcw_units_21st
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_21st_base",
			"tcw_backpack_21st"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_21st_base",
			"tcw_p1_helmet_21st_medic",
			"tcw_uniform_21st_base",
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_21st_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 21st P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\p1_helmet_21st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\p1_helmet_21st_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_21st";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_21st_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 21st Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\p1_helmet_21st_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\p1_helmet_21st_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_21st";
			camo = "medic";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_21st_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 21st Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_21st_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_21st";
			camo = "ct";
		};
	};

};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_21st_base : tcw_clone_unit
	{
		scope = 2;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 21st Trooper";
		uniformClass = "tcw_uniform_21st_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\uniform_clone_upper_21st_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\uniform_clone_lower_21st_base_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_21st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_21st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};
	class tcw_clone_backpack;
	class tcw_backpack_21st : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 21st Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\21st\Tex\backpack_21st_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_21st
		{
			label = "[TCW] 21st Helmets";
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

		class tcw_unit_uniforms_21st
		{
			label = "[TCW] 21st Uniforms";
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
