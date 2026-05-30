class CfgPatches
{
	class tcw_base_uniform
	{
		author = "TCW Team";
		filename = "tcw_armory.pbo";
		units[] =
		{
			"tcw_clone_unit", 
			"tcw_clone_unit_sergeant", 
			"tcw_clone_unit_lieutenant", 
			"tcw_clone_unit_captain", 
			"tcw_clone_unit_commander",
		};
		weapons[] =
		{
			"tcw_clone_uniform", 
			"tcw_clone_uniform_sergeant", 
			"tcw_clone_uniform_lieutenant",
			"tcw_clone_uniform_captain", 
			"tcw_clone_uniform_commander",
		};
		requiredVersion = 2.20;
		requiredAddons[] = { "Indecisive_Armoury_units", };
	};
};

class CfgWeapons
{
	/* <----------- Clone Uniform Stat Values Uniform Component -----------> */
	class IDA_Clone_Uniform;
	class UniformItem;

	class tcw_clone_uniform : IDA_Clone_Uniform
	{
		author = "TCW Team";
		scope = 2;
		displayName = "[TCW] Clone Armour";
		class ItemInfo : UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass = "tcw_clone_unit";
			uniformType="Neopren";
			containerClass="Supply50";
			mass = 15;
		};
		class xtdgearinfo
		{
			model = "tcw_clone_uniform_base";
			camo = "ct";
		};
	};

	class tcw_clone_uniform_sergeant : tcw_clone_uniform
	{
		displayName = "[TCW] Clone Armour (Sergeant)";
		class ItemInfo : UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass = "tcw_clone_unit_sergeant";
			uniformType="Neopren";
			containerClass="Supply50";
			mass = 15;
		};
		class xtdgearinfo
		{
			model = "tcw_clone_uniform_base";
			camo = "sgt";
		};
	};

	class tcw_clone_uniform_lieutenant : tcw_clone_uniform
	{
		displayName = "[TCW] Clone Armour (Lieutenant)";
		class ItemInfo : UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass = "tcw_clone_unit_lieutenant";
			uniformType="Neopren";
			containerClass="Supply50";
			mass = 15;
		};
		class xtdgearinfo
		{
			model = "tcw_clone_uniform_base";
			camo = "lt";
		};
	};

	class tcw_clone_uniform_captain : tcw_clone_uniform
	{
		displayName = "[TCW] Clone Armour (Captain)";
		class ItemInfo : UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass = "tcw_clone_unit_captain";
			uniformType="Neopren";
			containerClass="Supply50";
			mass = 15;
		};
		class xtdgearinfo
		{
			model = "tcw_clone_uniform_base";
			camo = "cpt";
		};
	};

	class tcw_clone_uniform_commander : tcw_clone_uniform
	{
		displayName = "[TCW] Clone Armour (Commander)";
		class ItemInfo : UniformItem
		{
			uniformModel="\Indecisive_Armoury_units\REPUBLIC\Clone_Uniform\IDA_Clone_Uniform.p3d";
			uniformClass = "tcw_clone_unit_commander";
			uniformType="Neopren";
			containerClass="Supply50";
			mass = 15;
		};
		class XtdGearInfo
		{
			model = "tcw_clone_uniform_base";
			camo = "cmdr";
		};
	};
};

class CfgVehicles
{
	/* <----------- Clone Uniform Appearance Uniform Component -----------> */
	class IDA_Clone_DC15S;
	class Hitpoints;

	class tcw_clone_unit : IDA_Clone_DC15S
	{
		author = "TCW Team";
		displayName = "[TCW] Clone Trooper";
		scope = 2;
		faction = "tcw_blufor";
		editorSubcategory = "tcw_clones";
		editorPreview = "";
		uniformClass = "tcw_clone_uniform";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"};
		identityTypes[] = {"LanguageENG_F","ls_head_clone"};
		facewearList[] = {""};
		Backpack = "";
		linkedItems[] = {"tcw_p1_helmet_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_base","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		class HitPoints : HitPoints
        {
            class HitFace
            {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 8;
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "";
            };
			class HitAbdomen: HitPelvis
            {
                armor = 6;
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 3;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 6;
                material = -1;
                name = "spine2";
                passThrough = 0.33;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 8;
                material = -1;
                name = "spine3";
                passThrough = 0.33;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
			class HitArms: HitBody
            {
                armor = 6;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 6;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 6;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 3;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm
            {
                armor = 6;
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = 3;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
			class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 6;
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 3;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
        };
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	};

	class tcw_clone_unit_sergeant : tcw_clone_unit
	{
		displayName = "[TCW] Clone Sergeant (DC15A)";
		uniformClass = "tcw_clone_uniform_sergeant";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Uniform\textures\uniform_clone_upper_sgt_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		//hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"}; //Uncomment if a different rvmat is required for different ranks
		linkedItems[] = {"tcw_p1_helmet_sergeant","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_sergeant","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		};

	class tcw_clone_unit_lieutenant : tcw_clone_unit
	{
		displayName = "[TCW] Clone Lieutenant (DC15A)";
		uniformClass = "tcw_clone_uniform_lieutenant";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Uniform\textures\uniform_clone_upper_lt_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		//hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"}; //Uncomment if a different rvmat is required for different ranks
		linkedItems[] = {"tcw_p1_helmet_lieutenant","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_lieutenant","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		};

	class tcw_clone_unit_captain : tcw_clone_unit
	{
		displayName = "[TCW] Clone Captain (DC15A)";
		uniformClass = "tcw_clone_uniform_captain";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Uniform\textures\uniform_clone_upper_cpt_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		//hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"}; //Uncomment if a different rvmat is required for different ranks
		linkedItems[] = {"tcw_p1_helmet_captain","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_captain","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		};

	class tcw_clone_unit_commander : tcw_clone_unit
	{
		displayName = "[TCW] Clone Commander (DC15A)";
		uniformClass = "tcw_clone_uniform_commander";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"x\tcw\addons\TCW_Armory\Base_Items\Clone_Uniform\textures\uniform_clone_upper_cmdr_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		//hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"}; //Uncomment if a different rvmat is required for different ranks
		linkedItems[] = {"tcw_p1_helmet_commander","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"tcw_p1_helmet_commander","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		};

};

/* <----------- Category Settings -----------> */
class CfgEditorSubcategories
{
	class tcw_Clone_Subfaction
	{
		displayName = "Clone Troopers";
	};
};

class xtdgearmodels
{
	class CfgWeapons
	{
		class tcw_clone_uniform_base
		{
			label = "Clone Uniform";
			author = "TCW Team";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"ct","sgt","lt","cpt","cmdr"};
				class ct
				{
					label = "Trooper";
				};
				class sgt
				{
					label = "Sergeant";
				};
				class lt
				{
					label = "Lieutenant";
				};
				class cpt
				{
					label = "Captain";
				};
				class cmdr
				{
					label = "Commander";
				};
			};
		};
	};
};
