class CfgPatches {
    class TCW_Medical {
        units[] = {};
        weapons[] = {"TCW_bactaSpray","TCW_stitchKit","TCW_adrenalStim","TCW_combatStim","TCW_tourniquet","TCW_splint","TCW_electroPad"};
        requiredVersion = 0.1;
        requiredAddons[] = {"ace_medical_treatment"};
    };
};

class CfgWeapons {
    class ACE_elasticBandage;
    class TCW_bactaSpray : ACE_elasticBandage {
        displayName = "[TCW] Bacta Spray";
        picture = "x\tcw\addons\TCW_Medical\ui\Bacta_Spray_ca.paa";
    };

    class ACE_surgicalKit;
    class TCW_stitchKit : ACE_surgicalKit {
        displayName = "[TCW] Stitch Kit";
        picture = "x\tcw\addons\TCW_Medical\ui\Medikit_ca.paa";
    };

    class ACE_epinephrine;
    class TCW_adrenalStim : ACE_epinephrine {
        displayName = "[TCW] Adrenal Stim";
    };

    class ACE_morphine;
    class TCW_combatStim : ACE_morphine {
        displayName = "[TCW] Combat Stim";
    };

    class ACE_plasmaIV;
    class TCW_bacta : ACE_plasmaIV {
        displayName = "[TCW] Bacta(1000ml)";
        picture = "x\tcw\addons\TCW_Medical\ui\ivbag_bacta_1000ml_ca.paa";
    };

    class ACE_plasmaIV_500;
    class TCW_bacta_500 : ACE_plasmaIV_500 {
        displayName = "[TCW] Bacta(500ml)";
        picture = "x\tcw\addons\TCW_Medical\ui\ivbag_bacta_500ml_ca.paa";
    };

    class ACE_plasmaIV_250;
    class TCW_bacta_250 : ACE_plasmaIV_250 {
        displayName = "[TCW] Bacta(250ml)";
        picture = "x\tcw\addons\TCW_Medical\ui\ivbag_bacta_250ml_ca.paa";
    };

    class ACE_tourniquet;
    class TCW_tourniquet : ACE_tourniquet {
        displayName = "[TCW] Tourniquet";
    };

    class ACE_splint;
    class TCW_splint : ACE_splint {
        displayName = "[TCW] Splint";
    };

    class ACE_AED;
    class TCW_electroPad : ACE_AED {
        displayName = "[TCW] Electro-Pad";
    };
};

class ACE_Medical_Treatment
{
	class Bandaging
	{
        class ACE_elasticBandage;
	    class TCW_bactaSpray: ACE_elasticBandage
	    {
	    	displayName = "Bacta Spray";
	    };
    };
};

class ACE_Medical_Treatment_Actions {
    
    class ElasticBandage;
    class TCW_BactaSpray_Action : ElasticBandage {
    displayName = "Apply Bacta Spray";
    displayNameProgress = "Applying Bacta Spray...";
    items[] = { "ACE_elasticBandage", "TCW_bactaSpray" };
    };

    class SurgicalKit;
    class TCW_StitchKit_Action : SurgicalKit {
        displayName = "Use Stitch Kit";
        displayNameProgress = "Stitching wounds...";
        items[] = { "ACE_surgicalKit", "TCW_stitchKit" };
    };

    class Epinephrine;
    class TCW_AdrenalStim_Action : Epinephrine {
        displayName = "Inject Adrenal Stim";
        displayNameProgress = "Injecting Adrenal Stim...";
        items[] = { "ACE_epinephrine", "TCW_adrenalStim" };
    };

    class Morphine;
    class TCW_CombatStim_Action : Morphine {
        displayName = "Inject Combat Stim";
        displayNameProgress = "Injecting Combat Stim...";
        items[] = { "ACE_morphine", "TCW_combatStim" };
    };

    class PlasmaIV;
    class TCW_Bacta_Action : PlasmaIV {
        displayName = "Attach Bacta (1000ml)";
        displayNameProgress = "Attaching Bacta (1000ml)...";
        items[] = { "ACE_plasmaIV", "TCW_bacta" };
    };

    class PlasmaIV_500;
    class TCW_Bacta_500_Action : PlasmaIV_500 {
        displayName = "Attach Bacta (500ml)";
        displayNameProgress = "Attaching Bacta (500ml)...";
        items[] = { "ACE_plasmaIV_500", "TCW_bacta_500" };
    };

    class PlasmaIV_250;
    class TCW_Bacta_250_Action : PlasmaIV_250 {
        displayName = "Attach Bacta (250ml)";
        displayNameProgress = "Attaching Bacta (250ml)...";
        items[] = { "ACE_plasmaIV_250", "TCW_bacta_250" };
    };

    class ApplyTourniquet;
    class TCW_Tourniquet_Action : ApplyTourniquet {
        displayName = "Apply Tourniquet";
        displayNameProgress = "Applying Tourniquet...";
        items[] = { "ACE_tourniquet", "TCW_tourniquet" };
    };

    class Splint;
    class TCW_Splint_Action : Splint {
        displayName = "Apply Splint";
        displayNameProgress = "Applying Splint...";
        items[] = { "ACE_splint", "TCW_splint" };
    };
};