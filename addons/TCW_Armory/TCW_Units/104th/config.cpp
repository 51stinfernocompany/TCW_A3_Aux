class CfgPatches 
{
	class tcw_units_104th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_104th_base",
			"tcw_unit_44th_base",
            "tcw_unit_104th_tl",
            "tcw_unit_104th_sl",
            //"tcw_unit_104th_pl",
			"tcw_backpack_104th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_104th_base",
			"tcw_p1_helmet_44th_base",
			"tcw_p1_helmet_104th_medic",
            "tcw_p1_helmet_104th_tl",
            "tcw_p1_helmet_104th_sl",
            //"tcw_p1_helmet_104th_pl",
			"tcw_p1_helmet_pilot_104th",
			"tcw_uniform_104th_base",
			"tcw_uniform_44th_base",
            "tcw_uniform_104th_tl",
            "tcw_uniform_104th_sl",
            //"tcw_uniform_104th_pl"
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
	class tcw_p1_helmet_104th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_44th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 44th Devil Dogs P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_44th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_44th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "ctdd";
		};
	};

    class tcw_p1_helmet_104th_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "medic";
		};
	};
    
    class tcw_p1_helmet_104th_tl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Team Lead P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_tl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_tl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "tl";
		};
	};

    class tcw_p1_helmet_104th_sl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Squad Lead P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_sl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_sl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "sl";
		};
	};
  /*  
    class tcw_p1_helmet_104th_pl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Platoon Lead P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_pl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_pl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "pl";
		};
	};*/

	class tcw_p1_helmet_pilot_104th : tcw_p1_helmet_pilot_base
	{
		displayName = "[TCW] 104th P1 Pilot Helmet";
		scope = 2;
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_pilot_helmet_104th_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_pilot_helmet_104th_lifesupport_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_pilot_helmet_104th_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "pilot";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_104th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "ct";
		};
	};

	class tcw_uniform_44th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 44th Devil Dogs Uniform";
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
			model = "tcw_unit_uniforms_104th";
			camo = "ctdd";
		};
	};

    class tcw_uniform_104th_tl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Team Lead Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_tl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "tl";
		};
	};


    class tcw_uniform_104th_sl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Squad Lead Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_sl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "sl";
		};
	};
/*
    class tcw_uniform_104th_pl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Platoon Lead Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_pl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "pl";
		};
	};
    */
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_104th_base : tcw_clone_unit
	{
		scope = 2;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 104th Trooper";
		uniformClass = "tcw_uniform_104th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_base_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_104th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_104th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};

    class tcw_unit_104th_tl : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 104th Team Lead";
		uniformClass = "tcw_uniform_104th_tl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_tl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_tl_co.paa"
		};
	};

	class tcw_unit_44th_base : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 44th Devil Dogs Trooper";
		uniformClass = "tcw_uniform_44th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_44th_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_44th_base_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_44th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_44th_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};

    class tcw_unit_104th_sl : tcw_clone_unit
	{
		scope = 1;
		displayName = "[TCW] 104th Squad Lead";
		uniformClass = "tcw_uniform_104th_sl";
		editorSubcategory = "tcw_clones_units";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_sl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_sl_co.paa"
		};
	};
/*
    class tcw_unit_104th_pl : tcw_clone_unit
	{
		scope = 1;
		displayName = "[TCW] 104th Platoon Lead";
		uniformClass = "tcw_uniform_104th_pl";
		editorSubcategory = "tcw_clones_units";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_pl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_pl_co.paa"
		};
	}; */

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
                values[] = {"ct","ctdd","medic","tl","sl","pl","pilot"};
                class ct
                {
                    label = "Standard";
                };
				class ctdd
                {
                    label = "Devil Dogs";
                };
                class medic
                {
                    label = "Medic";
                };
                class tl
                {
                    label = "Team Lead";
                };
                class sl
                {
                    label = "Squad Lead";
                };/*
                class pl
                {
                    label = "Platoon Lead";
                };*/
				class pilot
				{
					label = "Pilot";
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
                values[] = {"ct","ctdd","tl","sl","pl"};
                class ct
                {
                    label = "Standard";
                };
				class ctdd
                {
                    label = "Devil Dogs";
                };
                class tl
                {
                    label = "Team Lead";
                };
                class sl
                {
                    label = "Squad Lead";
                };/*
                class pl
                {
                    label = "Platoon Lead";
                };*/
            };
        };
	};
};
