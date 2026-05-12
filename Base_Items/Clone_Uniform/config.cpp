class CfgPatches 
{
	class TCW_Base_Uniform
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
	class UniformItem;
	class SEA_Uniform_Clean;
	class TCW_Base_Uniform_SEA: SEA_Uniform_Clean
	{
		scope = 1;
		class ItemInfo: UniformItem 
		{
			containerClass = "Supply150";
			mass = 40;
			uniformClass = "TCW_Base_Uniform_SEA_Veh";
			uniformModel = "-";
		};
	};
};

class CfgVehicles
{
	class SEA_Clonetrooper_Clean;
	class TCW_Base_Uniform_SEA_Veh: SEA_Clonetrooper_Clean
	{
		uniformClass = "TCW_Base_Uniform_SEA";
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",	//Top
			"\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa",	//Bottom
		};
	};
};