/*
class CfgPatches 
{
	class TCW_Units_41st
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
	class TCW_Units_41st_Helmet_P1: TCW_Base_Helmet_SEA_P1	
	{
		scope = 2;
		displayName = "[TCW:A3] 41st P1 Helmet";
		author = "Balance + Ithias";
		hiddenSelectionsTextures[] = 
		{
			"\TCW_A3_Aux\TCW_Units\41st\Tex\TCW_Units_41st_Helmet_P1.paa",	// Helmet
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa",	// Visor
		};
	};
	class SEA_Uniform_Clean;
	class TCW_Base_Uniform_SEA: SEA_Uniform_Clean
	{
		class ItemInfo;
	};
	class TCW_Units_41st_Uniform_SEA: TCW_Base_Uniform_SEA
	{
		scope = 2;
		displayName = "[TCW:A3] 41st Uniform";
		author = "Balance + Ithias";
		class ItemInfo: ItemInfo 
		{
			uniformClass = "TCW_Units_41st_Uniform_SEA_Veh";
		};
	};
};

class CfgVehicles
{
	class TCW_Base_Uniform_SEA_Veh;
	class TCW_Units_41st_Uniform_SEA_Veh: TCW_Base_Uniform_SEA_Veh			// Currently grey version of 41st, could change to camo if needed
	{
		uniformClass = "TCW_Units_41st_Uniform_SEA";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor2_co.paa"
		};
	};
};
*/
