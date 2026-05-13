class CfgPatches 
{
	class TCW_Base_Helm
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};


class CfgWeapons
{
	class JLTS_CloneHelmetP2;
	class SEA_Helmet_P1_Base: JLTS_CloneHelmetP2
	{
		class ItemInfo;
	};
	class TCW_Base_Helmet_SEA_P1: SEA_Helmet_P1_Base
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
};