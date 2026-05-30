
class CfgPatches 
{
	class TCW_Units_104th
	{
		author = "TCW Team";
		filename = "TCW_Armory.pbo";
		requiredAddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units"
		};
		units[] = 
		{
			
		};
		weapons[] = 
		{
			"tcw_p1_helmet_104th_base"
		};
		requiredVersion = 2.20;
		
	};
};

class CfgWeapons
{
	class tcw_p1_helmet_base;
	class tcw_p1_helmet_104th_base: tcw_p1_helmet_base
	{
		scope = 2;
		displayName = "[TCW] 104th P1 Helmet";
		author = "TCW Team";
		hiddenSelections[] = {"Camo1","Visor"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa","x\tcw\addons\TCW_Armory\TCW_Units\104th\Tex\p1_helmet_104th_base_co.paa"};
		class xtdgearinfo
		{
		};
	};
	
};
