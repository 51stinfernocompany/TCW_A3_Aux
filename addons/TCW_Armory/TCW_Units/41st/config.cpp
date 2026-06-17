class CfgPatches 
{
	class tcw_units_41st
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_41st_base",
			"tcw_backpack_41st"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_41st_base",
			"tcw_p1_helmet_41st_medic",
			"tcw_p1_helmet_pilot_41st",
			"tcw_uniform_41st_base",
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_pilot_base;
	class tcw_p1_helmet_41st_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 41st P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_helmet_41st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_helmet_41st_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_41st";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_41st_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 41st Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_helmet_41st_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_helmet_41st_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_41st";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_pilot_41st : tcw_p1_helmet_pilot_base
	{
		displayName = "[TCW] 41st P1 Pilot Helmet";
		scope = 2;
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_pilot_helmet_41st_co.paa","x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_pilot_helmet_lifesupport_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\p1_pilot_helmet_41st_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_41st";
			camo = "pilot";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_41st_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 41st Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_41st_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_41st";
			camo = "ct";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_41st_base : tcw_clone_unit
	{
		scope = 2;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 41st Trooper";
		uniformClass = "tcw_uniform_41st_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\uniform_clone_upper_41st_base_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_41st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_41st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};
	class tcw_clone_backpack;
	class tcw_backpack_41st : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 41st Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\41st\Tex\backpack_41st_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_41st
		{
			label = "[TCW] 41st Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic","pilot"};
				class ct
				{
					label = "Standard";
				};
				class medic
				{
					label = "Medic";
				};
				class pilot
				{
					label = "Pilot";
				};
			};
		};

		class tcw_unit_uniforms_41st
		{
			label = "[TCW] 41st Uniforms";
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
