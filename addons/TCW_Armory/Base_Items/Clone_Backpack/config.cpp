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
            "tcw_clone_backpack"
        };
		weapons[] ={};

	};
};

class CfgVehicles
{
    class IDA_Clone_Rucksack;
    class tcw_clone_backpack : IDA_Clone_Rucksack
    {
        scope = 2;
		author = "TCW Team";
		displayName = "[TCW] Clone Rucksack";
    };
};
