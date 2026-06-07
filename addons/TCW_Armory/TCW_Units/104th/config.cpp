class CfgPatches 
{
	class tcw_units_104th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_104th_base",
            //"tcw_unit_104th_cpl",
            //"tcw_unit_104th_sgt",
            //"tcw_unit_104th_lt",
			//"tcw_backpack_104th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_104th_base",
			//"tcw_p1_helmet_104th_medic",
            //"tcw_p1_helmet_104th_cpl",
            //"tcw_p1_helmet_104th_sgt",
            //"tcw_p1_helmet_104th_lt",
			"tcw_uniform_104th_base",
            //"tcw_uniform_104th_cpl",
            //"tcw_uniform_104th_sgt",
            //"tcw_uniform_104th_lt"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
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
/*
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
    
    class tcw_p1_helmet_104th_cpl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Corporal P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_cpl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_cpl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "cpl";
		};
	};

    class tcw_p1_helmet_104th_sgt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Sergeant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_sgt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_sgt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "sgt";
		};
	};
    
    class tcw_p1_helmet_104th_lt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 104th Lieutenant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_lt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_lt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_104th";
			camo = "lt";
		};
	};
*/
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
/*
    class tcw_uniform_104th_cpl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Corporal Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_cpl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "cpl";
		};
	};

    class tcw_uniform_104th_sgt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Sergeant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_sgt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "sgt";
		};
	};

    class tcw_uniform_104th_lt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 104th Lieutenant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_104th_lt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_104th";
			camo = "lt";
		};
	};
    */
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_104th_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_104th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_base_co.paa",
		};
	};
/*
    class tcw_unit_104th_cpl : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_104th_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_cpl_co.paa",
		};
	};

    class tcw_unit_104th_sgt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_104th_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_sgt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_sgt_co.paa"
		};
	};

    class tcw_unit_104th_lt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_104th_lt";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_upper_104th_lt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\uniform_clone_lower_104th_lt_co.paa"
		};
	};

	class tcw_clone_backpack;
	class tcw_backpack_104th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 104th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\backpack_104th_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};
    };*/
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
                values[] = {"ct"/*,"medic","cpl","sgt","lt"*/};
                class ct
                {
                    label = "Standard";
                };
                /*class medic
                {
                    label = "Medic";
                };
                class cpl
                {
                    label = "Corporal";
                };
                class sgt
                {
                    label = "Sergeant";
                };
                class lt
                {
                    label = "Lieutenant";
                };*/
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
                values[] = {"ct"/*,"cpl","sgt","lt"*/};
                class ct
                {
                    label = "Standard";
                };
                /*class cpl
                {
                    label = "Corporal";
                };
                class sgt
                {
                    label = "Sergeant";
                };
                class lt
                {
                    label = "Lieutenant";
                };*/
            };
        };
	};
};
