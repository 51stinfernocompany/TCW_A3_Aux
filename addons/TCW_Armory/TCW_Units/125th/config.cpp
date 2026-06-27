class CfgPatches 
{
	class tcw_units_125th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_125th_base",
			"tcw_unit_125th_co",
            "tcw_unit_125th_eod",
			"tcw_backpack_125th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_125th_base",
			"tcw_p1_helmet_125th_medic",
			"tcw_p1_helmet_125th_co",
            "tcw_p1_helmet_125th_eod",
			"tcw_p1_helmet_pilot_125th",
			"tcw_uniform_125th_base",
			"tcw_uniform_125th_co",
            "tcw_uniform_125th_eod",
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
	class tcw_p1_helmet_125th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 125th P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_125th";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_125th_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 125th Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_125th";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_125th_co : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 125th CO P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_co_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_co_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_125th";
			camo = "co";
		};
	};

	class tcw_p1_helmet_125th_eod : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 125th EOD P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_eod_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_helmet_125th_eod_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_125th";
			camo = "eod";
		};
	};

	class tcw_p1_helmet_pilot_125th : tcw_p1_helmet_pilot_base
	{
		displayName = "[TCW] 125th P1 Pilot Helmet";
		scope = 2;
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_pilot_helmet_125th_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_pilot_helmet_125th_lifesupport_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\p1_pilot_helmet_125th_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_125th";
			camo = "pilot";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_125th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 125th Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_125th_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_125th";
			camo = "ct";
		};
	};

	class tcw_uniform_125th_co : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 125th CO Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_125th_co";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_125th";
			camo = "co";
		};
	};

	class tcw_uniform_125th_eod : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 125th EOD Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_125th_eod";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_125th";
			camo = "eod";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_125th_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_125th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_upper_125th_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_lower_125th_base_co.paa",
		};
	};
	class tcw_unit_125th_co : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_125th_co";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_upper_125th_co_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_lower_125th_co_co.paa",	// Bottom
		};
	};
    class tcw_unit_125th_eod : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_125th_eod";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_upper_125th_eod_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\uniform_clone_lower_125th_eod_co.paa",	// Bottom
		};
	};
	class tcw_clone_backpack;
	class tcw_backpack_125th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 125th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\backpack_125th_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\125th\Tex\backpack_grenade_125th_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
    };
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_125th
		{
			label = "[TCW] 125th Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic","co","eod","pilot"};
				class ct
				{
					label = "Standard";
				};
				class medic
				{
					label = "Medic";
				};
				class co
				{
					label = "CO";
				};
				class eod
				{
					label = "AT/EOD";
				};
				class pilot
				{
					label = "Pilot";
				};
			};
		};

		class tcw_unit_uniforms_125th
		{
			label = "[TCW] 125th Uniforms";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","co","eod"};
				class ct
				{
					label = "Standard";
				};
				class co
				{
					label = "CO";
				};
				class eod
				{
					label = "AT/EOD";
				};
			};
		};
	};
};
