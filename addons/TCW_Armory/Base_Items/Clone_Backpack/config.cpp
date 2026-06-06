class CfgPatches
{
	class tcw_base_backpack
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		requiredaddons[] = {
			"A3_Data_F_Decade_Loadorder",
			"SEA_JLTS_ExtendedArsenal",
			"Indecisive_Armoury_units",
		};
		requiredVersion = 2.20;
		units[] = 
        {
            "tcw_clone_backpack",
			"tcw_medic_backpack",
			"tcw_radio_backback"
        };
		weapons[] ={};

	};
};

class CfgVehicles
{
    class IDA_Clone_Rucksack;
	class IDA_Clone_RadioAntenna;
    class tcw_clone_backpack : IDA_Clone_Rucksack
    {
        scope = 2;
		author = "TCW Team";
		displayName = "[TCW] Clone Rucksack";
		maximumLoad=350;
    };

	class tcw_medic_backpack : IDA_Clone_Rucksack
    {
        scope = 2;
		author = "TCW Team";
		displayName = "[TCW] Clone Medic Rucksack";
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Backpack\textures\backpack_medic_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Grenade_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Backpacks\IDA_Clone_Rucksack\IDA_Clone_Rucksack_Cloth_co.paa"};
		maximumLoad=400;
    };

	class tcw_radio_backback : IDA_Clone_RadioAntenna
	{
        scope = 2;
		author = "TCW Team";
		displayName = "[TCW] Clone Radiopack";
		maximumLoad=400;
		tf_range=25000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_dialog = "ls_radios_cloneLR";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };
};
