class CfgPatches 
{
	class tcw_units_115th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_115th_base",
            "tcw_unit_115th_cpl",
            "tcw_unit_115th_sgt",
            "tcw_unit_115th_lt",
			//"tcw_backpack_115th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_115th_base",
			"tcw_p1_helmet_115th_medic",
            "tcw_p1_helmet_115th_cpl",
            "tcw_p1_helmet_115th_sgt",
            "tcw_p1_helmet_115th_lt",
			"tcw_uniform_115th_base",
            "tcw_uniform_115th_cpl",
            "tcw_uniform_115th_sgt",
            "tcw_uniform_115th_lt"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_115th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 115th P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_base_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_base_CO.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "ct";
		};
	};

    class tcw_p1_helmet_115th_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 115th Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_medic_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_medic_CO.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "medic";
		};
	};
    
    class tcw_p1_helmet_115th_cpl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 115th Corporal P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_cpl_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_cpl_CO.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "cpl";
		};
	};

    class tcw_p1_helmet_115th_sgt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 115th Sergeant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_sgt_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_sgt_CO.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "sgt";
		};
	};
    
    class tcw_p1_helmet_115th_lt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 115th Lieutenant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_lt_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\p1_helmet_115th_lt_CO.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_115th";
			camo = "lt";
		};
	};

//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_115th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 115th Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_115th_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_115th";
			camo = "ct";
		};
	};

    class tcw_uniform_115th_cpl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 115th Corporal Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_115th_cpl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_115th";
			camo = "cpl";
		};
	};

    class tcw_uniform_115th_sgt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 115th Sergeant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_115th_sgt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_115th";
			camo = "sgt";
		};
	};

    class tcw_uniform_115th_lt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 115th Lieutenant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_115th_lt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_115th";
			camo = "lt";
		};
	};
    
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_115th_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_115th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_upper_115th_base_CO.paa",
		};
	};

    class tcw_unit_115th_cpl : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_115th_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_upper_115th_cpl_CO.paa",
		};
	};

    class tcw_unit_115th_sgt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_115th_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_upper_115th_sgt_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_lower_115th_sgt_CO.paa"
		};
	};

    class tcw_unit_115th_lt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_115th_lt";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_upper_115th_lt_CO.paa","x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\uniform_clone_lower_115th_lt_CO.paa"
		};
	};

	/*class tcw_clone_backpack;
	class tcw_backpack_115th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 115th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\115th\Tex\backpack_115th_CO.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_CO.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_CO.paa"};
    };*/
};

class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_115th
        {
            label = "[TCW] 115th Helmets";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct","medic","cpl","sgt","lt"};
                class ct
                {
                    label = "Standard";
                };
                class medic
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
                };
            };
        };
		class tcw_unit_uniforms_115th
        {
            label = "[TCW] 115th Uniforms";
            author = "TCW Team";
            options[] = {"camo"};
            class camo
            {
                changeingame = 0;
                values[] = {"ct","cpl","sgt","lt"};
                class ct
                {
                    label = "Standard";
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
                };
            };
        };
	};
};
