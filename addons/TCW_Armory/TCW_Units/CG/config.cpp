/*
class CfgPatches 
{
	class TCW_Units_CG
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
	class TCW_Units_CG_Helmet_P1: TCW_Base_Helmet_SEA_P1	
	{
		scope = 2;
		displayName = "[TCW:A3] Coruscant Guard P1 Helmet";
		author = "Balance + Ithias";
		hiddenSelectionsTextures[] = 
		{
			"\TCW_A3_Aux\TCW_Units\CG\Tex\TCW_Units_CG_Helmet_P1.paa",	// Helmet
			"\JLTS_AE\Data\BaseTextures\P1\P1_Helmet_CO.paa",	// Visor
		};
	};
	class SEA_Uniform_Clean;
	class TCW_Base_Uniform_SEA: SEA_Uniform_Clean
	{
		class ItemInfo;
	};
	class TCW_Units_CG_Uniform_SEA: TCW_Base_Uniform_SEA
	{
		scope = 2;
		displayName = "[TCW:A3] Coruscant Guard Uniform";
		author = "Balance + Ithias";
		class ItemInfo: ItemInfo 
		{
			uniformClass = "TCW_Units_CG_Uniform_SEA_Veh";
		};
	};
};

class CfgVehicles
{
	class TCW_Base_Uniform_SEA_Veh;
	class TCW_Units_CG_Uniform_SEA_Veh: TCW_Base_Uniform_SEA_Veh
	{
		uniformClass = "TCW_Units_CG_Uniform_SEA";
		hiddenSelectionsTextures[] = 
		{
			"\TCW_A3_Aux\TCW_Units\CG\Tex\TCW_Units_CG_Uniform_Upper.paa",	// Top
			"\TCW_A3_Aux\TCW_Units\CG\Tex\TCW_Units_CG_Uniform_Lower.paa",	// Bottom
		};
	};
};
*/
