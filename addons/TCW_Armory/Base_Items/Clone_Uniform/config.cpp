class CfgPatches
{
	class TCW_Base_Uniform
	{
		units[] =
		{
			"tcw_clone_uniform",
		};
		weapons[] =
		{
			"tcw_clone_uniform_item",
		};
		requiredVersion = 0.100000;
		requiredAddons[] = { "Indecisive_Armoury_units", };
	};
};

class CfgWeapons
{
	/* <----------- Clone Uniform Stat Values Uniform Component -----------> */
	class IDA_Clone_Uniform;
	class UniformItem;

	class tcw_clone_uniform_item : IDA_Clone_Uniform
	{
		author = "TCW Team";
		scope = 2;
		displayName = "[TCW] Clone Armour";
		class ItemInfo : UniformItem
		{
			uniformClass = "tcw_clone_uniform";
			mass = 15;
		};
	};
};

class CfgVehicles
{
	/* <----------- Clone Uniform Appearance Uniform Component -----------> */
	class IDA_Clone_DC15S;
	class Hitpoints;

	class tcw_clone_uniform : IDA_Clone_DC15S
	{
		author = "TCW Team";
		displayName = "[TCW] Clone Trooper (DC15A)";
		scope = 2;
		faction = "tcw_faction";
		editorSubcategory = "tcw_Clone_Subfaction";
		editorPreview = "";
		uniformclass = "tcw_clone_uniform_item";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower_co.paa"};
		hiddenSelectionsMaterials[] = {"\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Upper\IDA_BodyUpper.rvmat","\Indecisive_Armoury_Units\REPUBLIC\Clone_Uniform\Lower\IDA_BodyLower.rvmat"};
		linkedItems[] = {"IDA_vest_attachment_base","tcw_p1_helmet_base","tcw_clone_uniform_item","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","TFAR_anprc152"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","tcw_p1_helmet_base","tcw_clone_uniform_item","tcw_vest_plate_base","ItemMap","ItemGPS","ItemCompass","ItemWatch","TFAR_anprc152"};
		weapons[] = {"IDA_DC15A","Throw","Put"};
		respawnWeapons[] = {"IDA_DC15A","Throw","Put"};
		magazines[] = {"IDA_grenade_Smoke_mag","IDA_grenade_Smoke_mag","IDA_grenade_Detonator_mag","IDA_Blaster_Cell_Power3_60Rnd_Blue"};
		respawnMagazines[] = {"IDA_grenade_Smoke_mag","IDA_grenade_Smoke_mag","IDA_grenade_Detonator_mag","IDA_Blaster_Cell_Power3_60Rnd_Blue"};
		items[] = {"ACE_EntrenchingTool","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Splint","ACE_Splint","ACE_PlasmaIV_500","IDA_BattleStim","IDA_BattleStim","IDA_BattleStim","ACE_Spraypaintgreen","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","acc_flashlight","Laserbatteries","FirstAidKit"};
		respawnItems[] = {"ACE_EntrenchingTool","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","IDA_BactaBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Splint","ACE_Splint","ACE_PlasmaIV_500","IDA_BattleStim","IDA_BattleStim","IDA_BattleStim","ACE_Spraypaintgreen","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","acc_flashlight","Laserbatteries","FirstAidKit"};
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
};

/* <----------- Category Settings -----------> */
class CfgEditorSubcategories
{
	class tcw_Clone_Subfaction
	{
		displayName = "Clone Troopers";
	};
};


/*
class CfgWeapons
{
	class UniformItem;
	class SEA_Uniform_Clean;
	class TCW_Base_Uniform_SEA: SEA_Uniform_Clean
	{
		scope = 1;
		class ItemInfo: UniformItem
		{
			containerClass = "Supply200";
			mass = 15;
			uniformClass = "TCW_Base_Uniform_SEA_Veh";
			uniformModel = "-";
			uniformType = "Neopren";
		};
	};

	class IDA_Clone_Uniform;
	class TCW_Base_Uniform_IDA: IDA_Clone_Uniform
	{
		scope = 1;
		class ItemInfo: UniformItem
		{
			containerClass = "Supply200";
			mass = 15;
			uniformClass = "TCW_Base_Uniform_IDA_Veh";
			uniformModel = "-";
			uniformType = "Neopren";
		};
	};

	class SEA_Uniform_GM_Plastic_21;
	class TCW_Base_Uniform_Marine: SEA_Uniform_GM_Plastic_21
	{
		scope = 1;
		class ItemInfo: UniformItem
		{
			containerClass = "Supply200";
			mass = 15;
			uniformClass = "TCW_Base_Uniform_Marine_Veh";
			uniformModel = "-";
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class HitPoints;
	class SEA_Clonetrooper_Clean;
	class TCW_Base_Uniform_SEA_Veh: SEA_Clonetrooper_Clean
	{
		uniformClass = "TCW_Base_Uniform_SEA";
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding=0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough = 0.8;
				radius=0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough = 0.8;
				radius=0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material=-1;
				name="pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material=-1;
				name="spine1";
				passThrough = 0.8;
				radius=0.16;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material=-1;
				name="spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material=-1;
				name="spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_hands";
				minimalHit = 0.01;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material=-1;
				name="hands";
				passThrough = 1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.01;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding = 3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius = 0.08;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};

	class IDA_Clone_DC15S;
	class TCW_Base_Uniform_IDA_Veh: IDA_Clone_DC15S
	{
		uniformClass = "TCW_Base_Uniform_IDA";
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding=0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough = 0.8;
				radius=0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough = 0.8;
				radius=0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material=-1;
				name="pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material=-1;
				name="spine1";
				passThrough = 0.8;
				radius=0.16;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material=-1;
				name="spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material=-1;
				name="spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_hands";
				minimalHit = 0.01;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material=-1;
				name="hands";
				passThrough = 1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.01;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding = 3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius = 0.08;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};

	class SEA_GM_Base_21_Plastic;
	class TCW_Base_Uniform_Marine_Veh: SEA_GM_Base_21_Plastic
	{
		uniformClass = "TCW_Base_Uniform_Marine";
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding=0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough = 0.8;
				radius=0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough = 0.8;
				radius=0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 8;
				material=-1;
				name="pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material=-1;
				name="spine1";
				passThrough = 0.8;
				radius=0.16;
				explosionShielding = 3;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material=-1;
				name="spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 8;
				material=-1;
				name="spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 6;
				visual="injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_hands";
				minimalHit = 0.01;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material=-1;
				name="hands";
				passThrough = 1;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.01;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding = 3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius = 0.08;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding = 3;
				visual="injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
	};
};
*/
