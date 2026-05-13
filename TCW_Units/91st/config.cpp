class CfgPatches 
{
	class TCW_Units_91st
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
	class TCW_Base_Helmet_SEA_P1;
	class TCW_Units_91st_Helmet_P1: TCW_Base_Helmet_SEA_P1	
	{
		scope = 2;
		displayName = "[TCW:A3] 91st P1 Helmet";
		author = "Balance + Ithias";
		hiddenSelectionsTextures[] = 
		{
			"\TCW_A3_Aux\TCW_Units\91st\Tex\TCW_Units_91st_Helmet_P1.paa",	// Helmet
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa",	// Visor
		};
	};
	class TCW_Base_Helmet_IDA_BARC;
	class TCW_Units_91st_Helmet_BARC: TCW_Base_Helmet_IDA_BARC
	{
		scope = 2;
		displayName = "[TCW:A3] 91st BARC Helmet";
		author = "Balance + Ithias";
		hiddenSelectionsTextures[] = 
		{
			"\TCW_A3_Aux\TCW_Units\91st\Tex\TCW_Units_91st_Helmet_BARC.paa",	// Helmet
			"\Indecisive_Armoury_units\REPUBLIC\Clone_BARC_Helmet\IDA_BARC_Helmet_co.paa",	// Visor
		};
	};
	class SEA_Uniform_Clean;
	class TCW_Base_Uniform_SEA: SEA_Uniform_Clean
	{
		class ItemInfo;
	};
	class TCW_Units_91st_Uniform_SEA: TCW_Base_Uniform_SEA
	{
		scope = 2;
		displayName = "[TCW:A3] 91st Uniform";
		author = "Balance + Ithias";
		class ItemInfo: ItemInfo 
		{
			uniformClass = "TCW_Units_91st_Uniform_SEA_Veh";
		};
	};
};

class CfgVehicles
{
	class TCW_Base_Uniform_SEA_Veh;
	class TCW_Units_91st_Uniform_SEA_Veh: TCW_Base_Uniform_SEA_Veh
	{
		uniformClass = "TCW_Units_91st_Uniform_SEA";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor2_co.paa",
		};
	};
};