class CfgPatches
{
	class TCW_Base_Vest
	{
		units[] =
		{
		
		};
		weapons[] =
		{
			"tcw_vest_plate_base",
		};
		requiredVersion = 2.20;
		requiredAddons[] = { "Indecisive_Armoury_units", };
	};
};

class CfgWeapons
{
	class IDA_vest_base;
	class VestItem;
	class tcw_vest_plate_base : IDA_vest_base
    {
        author = "TCW Team";
        scope = 2;
        scopearsenal = 2;
        scopecurator = 2;
        picture = "";
        displayName="[TCW] Clone Vest";
        class ItemInfo : VestItem
        {
            uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Vests.p3d";
            containerclass = "Supply300";
			hiddenSelections[] = {"Recon_Harness","GrenadeBag","KamaCW","KamaEp3","PauldronCW_L","PauldronCW_R","PauldronEp3_L","PauldronEp3_R","PauldronAccessory","ArmPouches_L","ArmPouches_R","SuspenderL","SuspenderR","ChestPadR","ShoulderPadR","PauldronARC"};
			hiddenSelectionsTextures[] = {"","","","","","","","","","","","","","","",""};
            mass = 15;
            vesttype = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 6;
                    PassThrough = 0.08975;
                };
                class Diaphragm : Chest
                {
                    HitpointName = "HitDiaphragm";
                };
                class Abdomen : Diaphragm
                {
                    HitpointName = "HitAbdomen";
                };
                class Body : Abdomen
                {
                    HitpointName = "HitBody";
                };
                class Arms : Body
                {
                    HitpointName = "HitArms";
                };
                class Legs : Arms
                {
                    HitpointName = "Hitlegs";
                };
            };
        };
	};
};


/*
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
*/
