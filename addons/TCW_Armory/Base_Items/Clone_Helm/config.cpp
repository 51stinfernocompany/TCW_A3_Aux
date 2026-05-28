class CfgPatches
{
	class TCW_Base_Helm
	{
		author = "TCW Team";
		filename = "TCW_Armory.pbo";
		requiredaddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units",
		};
		requiredVersion = 2.20;
		units[] = {};
		weapons[] =
		{
			"tcw_p1_helmet_base", "tcw_p1_helmet_sergeant", "tcw_p1_helmet_lieutenant", "tcw_p1_helmet_captain", "tcw_p1_helmet_commander"
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
		displayName = "[TCW:A3] Phase 1 Helmet";
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
	};

	class tcw_p1_helmet_sergeant : tcw_p1_helmet_base
	{
		displayName = "[TCW:A3] Phase 1 Helmet (Sergeant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_sgt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_sgt_co.paa"
		};
	};

	class tcw_p1_helmet_lieutenant : tcw_p1_helmet_base
	{
		displayName = "[TCW:A3] Phase 1 Helmet (Lieutenant)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_lt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_lt_co.paa"
		};
	};

	class tcw_p1_helmet_captain : tcw_p1_helmet_base
	{
		displayName = "[TCW:A3] Phase 1 Helmet (Captain)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cpt_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cpt_co.paa"
		};
	};

	class tcw_p1_helmet_commander : tcw_p1_helmet_base
	{
		displayName = "[TCW:A3] Phase 1 Helmet (Commander)";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cmdr_co.paa",
			"x\tcw\addons\TCW_Armory\Base_Items\Clone_Helm\Textures\p1_helmet_cmdr_co.paa"
		};
	};

	/*
	class H_HelmetO_ViperSP_hex_F;
	class IDA_P2_Helmet: H_HelmetO_ViperSP_hex_F
	{
		class ItemInfo;
	};
	class TCW_Base_Helmet_IDA_P2: IDA_P2_Helmet
	{
		scope = 1;
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 6;
					hitpointName = "HitFace";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
				class Head
				{
					armor = 6;
					hitpointname = "HitHead";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
			};
		};
	};

	class IDA_BARC_Helmet: IDA_P2_Helmet
	{
		class ItemInfo: ItemInfo
		{

		};
	};
	class TCW_Base_Helmet_IDA_BARC: IDA_BARC_Helmet
	{
		scope = 1;
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 6;
					hitpointName = "HitFace";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
				class Head
				{
					armor = 6;
					hitpointname = "HitHead";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
			};
		};
	};

	class SEA_HELMET_GM_Base;
	class SEA_Helmet_GM_21: SEA_HELMET_GM_Base
	{
		class ItemInfo;
	};
	class TCW_Base_Helmet_Marine: SEA_Helmet_GM_21
	{
		scope = 1;
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 6;
					hitpointName = "HitFace";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
				class Head
				{
					armor = 6;
					hitpointname = "HitHead";
					PassThrough = 0.08975;
					visual = "injury_Head";
				};
			};
		};
	};
	*/
};
