class CfgPatches 
{
	class tcw_units_212th
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_212th_base",
			"tcw_unit_212th_cpl",
			"tcw_unit_212th_sgt",
			"tcw_backpack_212th"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_212th_base",
			"tcw_p1_helmet_212th_medic",
			"tcw_p1_helmet_212th_cpl",
			"tcw_p1_helmet_212th_sgt",
			"tcw_uniform_212th_base",
			"tcw_uniform_212th_cpl",
			"tcw_uniform_212th_sgt"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_212th_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 212th P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_212th";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_212th_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 212th Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_212th";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_212th_cpl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 212th Corporal P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_cpl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_cpl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_212th";
			camo = "cpl";
		};
	};

	class tcw_p1_helmet_212th_sgt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 212th Sergeant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_sgt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\p1_helmet_212th_sgt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_212th";
			camo = "sgt";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_212th_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 212th Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_212th_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_212th";
			camo = "ct";
		};
	};

	class tcw_uniform_212th_cpl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 212th Corporal Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_212th_cpl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_212th";
			camo = "cpl";
		};
	};

	class tcw_uniform_212th_sgt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 212th Sergeant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_212th_sgt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_212th";
			camo = "sgt";
		};
	};

};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_212th_base : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_212th_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\uniform_clone_upper_212th_base_co.paa",
			"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa",
		};
	};
	class tcw_unit_212th_cpl : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_212th_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\uniform_clone_upper_212th_cpl_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\uniform_clone_lower_212th_cpl_co.paa",
		};
	};
	class tcw_unit_212th_sgt : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_212th_sgt";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\uniform_clone_upper_212th_sgt_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\uniform_clone_lower_212th_sgt_co.paa",
		};
	};
	class tcw_clone_backpack;
	class tcw_backpack_212th : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 212th Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\212th\Tex\backpack_212th_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_212th
		{
			label = "[TCW] 212th Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic","cpl","sgt"};
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
			};
		};

		class tcw_unit_uniforms_212th
		{
			label = "[TCW] 212th Uniforms";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","cpl","sgt"};
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
			};
		};
	};
};
