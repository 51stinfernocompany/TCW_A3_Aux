class CfgPatches
{
	class tcw_base_vest
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
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
