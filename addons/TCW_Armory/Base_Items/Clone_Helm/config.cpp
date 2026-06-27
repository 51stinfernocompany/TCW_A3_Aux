class CfgPatches
{
	class tcw_base_helm
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		requiredaddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units",
		};
		requiredVersion = 2.20;
		units[] = {};
		weapons[] =
		{
			"tcw_p1_helmet_base", 
			"tcw_p1_helmet_sergeant", 
			"tcw_p1_helmet_lieutenant", 
			"tcw_p1_helmet_captain", 
			"tcw_p1_helmet_commander",
			"tcw_p1_helmet_pilot_base"
		};

	};
};

class CfgWeapons
{
	/* <---------------- Phase 1 Helmets ----------------> */
	class SEA_Helmet_P1_Base;
	class ItemInfo;
	class tcw_p1_helmet_base: SEA_Helmet_P1_Base
	{
		scope = 2;
		author = "TCW Team";
		model = "JLTS_AE\SEA_Helmet_P1.p3d";
		displayName = "[TCW] Phase 1 Helmet";
		picture = "\Indecisive_Armoury_units\REPUBLIC\Clone_P1_Helmet\P1_Helmet_UI.paa";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_base_co.paa","x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_base_co.paa"};
		hiddenSelectionsMaterials[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Materials\p1_helmet_base.rvmat","a3\weapons_f_beta\launchers\titan\data\mirror.rvmat"};
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		class ItemInfo: ItemInfo
		{
			mass = 10;
			uniformModel = "JLTS_AE\SEA_Helmet_P1.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1","Visor"};
			class HitpointsProtectionInfo
			{
				class head
				{
					hitpointname = "hithead";
					armor = 10;
					visual = "injury_head";
					passthrough = 0.08975;
				};
				class face
				{
					hitpointname = "hitface";
					armor = 10;
					visual = "injury_head";
					passthrough = 0.08975;
				};
			};
		};
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "ct";
		};
	};

	class tcw_p1_helmet_sergeant : tcw_p1_helmet_base
	{
		displayName = "[TCW] Phase 1 Helmet (Sergeant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_sgt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_sgt_co.paa"
		};
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "sgt";
		};
	};

	class tcw_p1_helmet_lieutenant : tcw_p1_helmet_base
	{
		displayName = "[TCW] Phase 1 Helmet (Lieutenant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_lt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_lt_co.paa"
		};
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "lt";
		};
	};

	class tcw_p1_helmet_captain : tcw_p1_helmet_base
	{
		displayName = "[TCW] Phase 1 Helmet (Captain)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cpt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cpt_co.paa"
		};
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "cpt";
		};
	};

	class tcw_p1_helmet_commander : tcw_p1_helmet_base
	{
		displayName = "[TCW] Phase 1 Helmet (Commander)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cmdr_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cmdr_co.paa"
		};
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "cmdr";
		};
	};

	//pilot
	class LSEA_Helmet_Pilot_P1_Base;
	class tcw_p1_helmet_pilot_base : LSEA_Helmet_Pilot_P1_Base
	{
		scope = 2;
		author = "TCW Team";
		model = "JLTS_AE\LS_Helmet_Pilot_P1.p3d";
		displayName = "[TCW] Phase 1 Pilot Helmet";
		picture = "\Indecisive_Armoury_units\REPUBLIC\Clone_P1_Helmet\P1_Helmet_UI.paa";
		hiddenSelections[] = {"Camo1","camo2","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_pilot_helmet_base_co.paa","x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_pilot_helmet_lifesupport_co.paa","x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_pilot_helmet_base_co.paa"};
		hiddenSelectionsMaterials[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Materials\p1_pilot_helmet_base.rvmat","x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Materials\p1_pilot_helmet_lifesupport.rvmat","a3\weapons_f_beta\launchers\titan\data\mirror.rvmat"};
		ace_hearing_protection = 1;
		ace_hearing_lowervolume = 0;
		class xtdgearinfo
		{
			model = "tcw_phase1_helmets_rank";
			camo = "pilot";
		};
	};
};


class xtdgearmodels
{
	class cfgweapons
	{
		class tcw_phase1_helmets_rank
		{
			label = "[TCW] Phase 1 Helmets (Ranks)";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","sgt","lt","cpt","cmdr","pilot"};
				class ct
				{
					label = "Trooper";
				};
				class sgt
				{
					label = "Sergeant";
				};
				class lt
				{
					label = "Lieutenant";
				};
				class cpt
				{
					label = "Captain";
				};
				class cmdr
				{
					label = "Commander";
				};
				class pilot
				{
					label = "Pilot";
				};
			};
		};
	};
};
