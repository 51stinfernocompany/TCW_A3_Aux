/*
class CfgPatches 
{
	class TCW_Units_21st
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
	class TCW_Base_Helmet_Marine;
	class TCW_Units_21st_Helmet_Marine: TCW_Base_Helmet_Marine	
	{
		scope = 2;
		displayName = "[TCW:A3] 21st Marine Helmet";
		author = "Balance + Ithias";
	};
	class TCW_Base_Vest_Marine;
	class TCW_Units_21st_Vest_Marine: TCW_Base_Vest_Marine	
	{
		scope = 2;
		scopearsenal = 2;
		displayName = "[TCW:A3] 21st Marine Vest";
		author = "Balance + Ithias";
	};
	class SEA_Uniform_GM_Plastic_21;
	class TCW_Base_Uniform_Marine: SEA_Uniform_GM_Plastic_21
	{
		class ItemInfo;
	};
	class TCW_Units_21st_Uniform_Marine: TCW_Base_Uniform_Marine
	{
		scope = 2;
		displayName = "[TCW:A3] 21st Uniform";
		author = "Balance + Ithias";
		class ItemInfo: ItemInfo 
		{
			uniformClass = "TCW_Units_21st_Uniform_Marine_Veh";
		};
	};
};

class CfgVehicles
{
	class TCW_Base_Uniform_Marine_Veh;
	class TCW_Units_21st_Uniform_Marine_Veh: TCW_Base_Uniform_Marine_Veh
	{
		uniformClass = "TCW_Units_21st_Uniform_Marine";
	};
};
*/
