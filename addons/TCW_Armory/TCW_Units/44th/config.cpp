class CfgPatches 
{
	class tcw_units_44th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_44th_base",
			"tcw_unit_44th_sharp",
			"tcw_backpack_44th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_44th_base",
			"tcw_p1_helmet_44th_medic",
			"tcw_p1_helmet_44th_sharp",
			"tcw_p1_helmet_pilot_44th",
			"tcw_uniform_44th_base",
			"tcw_uniform_44th_sharp"
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
	class tcw_p1_helmet_44th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 44th P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_44th";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_44th_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 44th Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_44th";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_44th_sharp : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 44th 'Sharp' P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_sharp_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_helmet_44th_sharp_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_44th";
			camo = "sharp";
		};
	};

	class tcw_p1_helmet_pilot_44th : tcw_p1_helmet_pilot_base
	{
		displayName = "[TCW] 44th P1 Pilot Helmet";
		scope = 2;
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_pilot_helmet_44th_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_pilot_helmet_44th_lifesupport_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\p1_pilot_helmet_44th_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_44th";
			camo = "pilot";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_44th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 44th Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_44th_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_44th";
			camo = "ct";
		};
	};

	class tcw_uniform_44th_sharp : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 44th 'Sharp' Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_44th_sharp";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_44th";
			camo = "sharp";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_44th_base : tcw_clone_unit
	{
		scope = 2;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 44th Trooper";
		uniformClass = "tcw_uniform_44th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\uniform_clone_upper_44th_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\uniform_clone_lower_44th_base_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_44th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_44th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};
	class tcw_unit_44th_sharp : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 44th Commander 'Sharp'";
		uniformClass = "tcw_uniform_44th_sharp";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\uniform_clone_upper_44th_sharp_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\uniform_clone_lower_44th_sharp_co.paa",	// Bottom
		};
	};
	class tcw_clone_backpack;
	class tcw_backpack_44th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 44th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\44th\Tex\backpack_44th_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_44th
        {
            label = "[TCW] 44th Helmets";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct","medic","sharp","pilot"};
                class ct
                {
                    label = "Standard";
                };
				class medic
                {
                    label = "Medic";
                };
                class sharp
                {
                    label = "'Sharp'";
                };
				class pilot
				{
					label = "Pilot";
				};
            };
        };
		class tcw_unit_uniforms_44th
        {
            label = "[TCW] 44th Uniforms";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct","sharp"};
                class ct
                {
                    label = "Standard";
                };
                class sharp
                {
                    label = "'Sharp'";
                };
            };
        };
	};
};
