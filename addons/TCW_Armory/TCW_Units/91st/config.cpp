class CfgPatches 
{
	class tcw_units_91st
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] = 
		{
			"tcw_unit_91st_base",
			//"tcw_unit_91st_medic",
			"tcw_unit_91st_cpl",
			"tcw_unit_91st_sgt",
			"tcw_unit_91st_blackout",
			"tcw_backpack_91st"
		};
		weapons[] = 
		{
			"tcw_p1_helmet_91st_base",
			"tcw_p1_helmet_91st_medic",
			"tcw_p1_helmet_91st_cpl",
			"tcw_p1_helmet_91st_sgt",
			"tcw_p1_helmet_91st_blackout",
			"tcw_uniform_91st_base",
			//"tcw_uniform_91st_medic",
			"tcw_uniform_91st_cpl",
			"tcw_uniform_91st_sgt",
			"tcw_uniform_91st_blackout"
		};
		requiredVersion = 2.20;
		requiredAddons[] = {};
	};
};

class CfgWeapons
{
//Helmet
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_91st_base : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 91st P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_base_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_91st";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_91st_medic : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 91st Medic P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_medic_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_medic_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_91st";
			camo = "medic";
		};
	};

	class tcw_p1_helmet_91st_cpl : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 91st Corporal P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_cpl_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_cpl_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_91st";
			camo = "cpl";
		};
	};

	class tcw_p1_helmet_91st_sgt : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 91st Sergeant P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_sgt_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_sgt_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_91st";
			camo = "sgt";
		};
	};

	class tcw_p1_helmet_91st_blackout : tcw_p1_helmet_base	
	{
		scope = 2;
		displayName = "[TCW] 91st 'Blackout' P1 Helmet";
		author = "TCW Team";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_blackout_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\p1_helmet_91st_blackout_co.paa"};
		class xtdgearinfo
		{
			model = "tcw_unit_helmets_91st";
			camo = "blackout";
		};
	};


//Uniform
	class tcw_clone_uniform;
	class ItemInfo;
	class UniformItem;
	class tcw_uniform_91st_base : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 91st Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_91st_base";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_91st";
			camo = "ct";
		};
	};

	/*class tcw_uniform_91st_medic : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 91st Medic Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_91st_medic";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_91st";
			camo = "medic";
		};
	};*/

	class tcw_uniform_91st_cpl : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 91st Corporal Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_91st_cpl";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_91st";
			camo = "cpl";
		};
	};

	class tcw_uniform_91st_sgt : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 91st Sergeant Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_91st_sgt";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_91st";
			camo = "sgt";
		};
	};

	class tcw_uniform_91st_blackout : tcw_clone_uniform
	{
		scope = 2;
		displayName = "[TCW] 91st 'Blackout' Uniform";
		author = "TCW Team";
		class ItemInfo: UniformItem 
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass="tcw_unit_91st_blackout";
			uniformType="Neopren";
			containerClass="Supply50";
			mass=15;
		};
		class xtdgearinfo
		{
			model = "tcw_unit_uniforms_91st";
			camo = "blackout";
		};
	};
};

class CfgVehicles
{
	class tcw_clone_unit;
	class tcw_unit_91st_base : tcw_clone_unit
	{
		scope = 2;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 91st Trooper";
		uniformClass = "tcw_uniform_91st_base";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_upper_91st_base_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_lower_91st_base_co.paa",
		};
		linkedItems[] = {"tcw_p1_helmet_91st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_91st_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};
	/*class tcw_unit_91st_medic : tcw_clone_unit
	{
		uniformClass = "tcw_uniform_91st_medic";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_upper_91st_medic_co.paa",
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_lower_91st_medic_co.paa",
		};
	};*/
	class tcw_unit_91st_cpl : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 91st Corporal";
		uniformClass = "tcw_uniform_91st_cpl";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_upper_91st_cpl_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_lower_91st_cpl_co.paa",	// Bottom
		};
	};
	class tcw_unit_91st_sgt : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 91st Sergeant";
		uniformClass = "tcw_uniform_91st_sgt";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_upper_91st_sgt_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_lower_91st_sgt_co.paa",	// Bottom
		};
	};
	class tcw_unit_91st_blackout : tcw_clone_unit
	{
		scope = 1;
		editorSubcategory = "tcw_clones_units";
		displayName = "[TCW] 91st Commander 'Blackout'";
		uniformClass = "tcw_uniform_91st_blackout";
		hiddenSelectionsTextures[] = 
		{
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_upper_91st_blackout_co.paa",	// Top
			"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\uniform_clone_lower_91st_blackout_co.paa",	// Bottom
		};
	};
	class tcw_clone_backpack;
	class tcw_backpack_91st : tcw_clone_backpack
	{
		scope = 2;
		displayName = "[TCW] 91st Backpack";
		author = "TCW Team";
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\91st\Tex\backpack_91st_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};	
	};
};



class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_unit_helmets_91st
		{
			label = "[TCW] 91st Helmets";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","medic","cpl","sgt","blackout"};
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
				class blackout
				{
					label = "'Blackout'";
				};
			};
		};

		class tcw_unit_uniforms_91st
		{
			label = "[TCW] 91st Uniforms";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","cpl","sgt","blackout"};
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
				class blackout
				{
					label = "'Blackout'";
				};
			};
		};
	};
};
