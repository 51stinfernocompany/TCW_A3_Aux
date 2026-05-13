class CfgPatches 
{
	class TCW_Base_Vest		//SEA_Vest_GM_21
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
	class V_RebreatherB;
	class IDA_vest_base: V_RebreatherB
	{
		class ItemInfo;
	};
	class TCW_Base_Vest_IDA: IDA_vest_base
	{
		scope = 1;
		scopearsenal = 1;
		class ItemInfo: ItemInfo
		{
			// TCW_Base_Vest_IDA class exists in case we want to make any armor adjustment or what not
		};
	};


	class TCW_Base_Vest_Marine: TCW_Base_Vest_IDA
	{
		scope = 1;
		scopearsenal = 1;
		model = "\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\JLTS_AE_GM\data\ReTextures\21st\Vest.paa"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformModel = "JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
			hiddenSelections[] = {"camo1"};
		};
	};
};