#include "..\BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_marksmens
    {
        author = "TCW Team";
        name = "marksmens";
        addonRootClass = "tcw_weapons";
        requiredVersion = 2.20;
        requiredAddons[] =
        {
            "IDA_Ammo",
            "IDA_Republic",
            "IDA_Imperial",
            "3AS_Weapons_Republic_Valken38X"
        };
        units[]={};
        ammo[] =
        {
            "tcw_dc15x_ammo",
            "tcw_dc15x_ammo_red",
            "tcw_valken38_ammo"
        };
        magazines[] =
        {
            "tcw_dc15x_magazine",
            "tcw_dc15x_magazine_red",
            "tcw_773FP_magazine",
            "tcw_valken38x_mag",
        };
        weapons[] =
        {
            "tcw_DC15X",
            "tcw_773firepuncher",
            "tcw_valken38x",
        };
    };
};

class CfgAmmo {
    // DC-15x, Firepuncher 773FP
    class IDA_Blasterbolt_Power2_Blue;
    class IDA_Blasterbolt_Power4_Blue;
    class tcw_blasterbolt_dc15x : IDA_Blasterbolt_Power2_Blue {
        author = "TCW Team";
        JLTS_isEMPAmmo = 0;
        hit = 40;
    };

    class tcw_blasterbolt_firepuncher : tcw_blasterbolt_dc15x {
        hit = 55;
        thrust = 600;
        thrustTime = 0.4;
    };

    // Valken-38x
    class tcw_valken38_ammo : IDA_Blasterbolt_Power4_Blue {
        author = "TCW Team";
        JLTS_isEMPAmmo = 0;
        hit = 30;
    };
};

class CfgMagazines {
    // Valken-38x
    class 3AS_10Rnd_EC80_Mag;
    class tcw_valken38x_mag : 3AS_10Rnd_EC80_Mag 
    {
        author = "TCW Team";
        BaseWeapon = "tcw_valken38x_mag";
        displayName = "[TCW] Valken 20Rnd Energy Cell";
        initSpeed=900;
        count = 20;
        ammo = "tcw_valken38_ammo";
        scope = 2;
    };

    // Firepuncher 773FP
    class IDA_Blaster_Cell_Power3_60Rnd_Blue;
    class tcw_773FP_magazine : IDA_Blaster_Cell_Power3_60Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15x_magazine";
        descriptionShort = "6 round capacity.";
        displayName = "[TCW] 773 FP Magazine";
        ammo = "tcw_blasterbolt_firepuncher";
        initSpeed=1500;
        count = 6;
        mass = 12;
        scope = 2;
    };

    // DC-15x
    class IDA_Blaster_Cell_Power4_10Rnd_Blue;
    class tcw_dc15x_magazine : IDA_Blaster_Cell_Power4_10Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15x_magazine";
        displayName = "[TCW] DC15X Magazine";
        descriptionShort = "12 round capacity.";
        ammo = "tcw_blasterbolt_dc15x";
        count = 12;
        scope = 2;
    };
};

class CfgRecoils {
    class recoil_default;
    class tcw_recoil_dc15x : recoil_default {
        muzzleOuter[] = {0, 6, 0.4, 0.4};
        kickBack[] = {0.12, 0.12};
        permanent = 0;
        temporary = 0.01;
    };
};

class CfgWeapons {
    // DC-15x
    class IDA_dc15x;
    class tcw_dc15x : IDA_dc15x
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15x";
        displayName = "[TCW] DC-15X";
        recoil = "tcw_recoil_dc15x";
        dispersion = 0;
        minRange = 100;
        midRange = 500;
        maxRange = 1500;
        magazines[] = {"tcw_dc15x_magazine"};
        scope = 2;
        /*
        class OpticsModes : OpticsModes {
            class IDA_DC15X_Scope;
            class tcw_DC15X_Scope : IDA_DC15X_Scope {
                visionMode[] = {"Normal","NVG","Ti"};
                thermalMode[] = {0,1};
            };
        };
        */
        class Single : Single {
            dispersion = 0;
            reloadTime = 1.0; // 60 RPM
            recoilProne = "recoil_single_prone_ebr";
        };
    };


    // Firepuncher 773fp
    class IDA_773Firepuncher;
    class tcw_773Firepuncher : IDA_773Firepuncher {
        author = "TCW Team";
        BaseWeapon = "tcw_773Firepuncher";
        displayName = "[TCW] 773 Firepuncher";
        maxRecoilSway = 0.03;
        dispersion = 0;
        minRange = 100;
        midRange = 800;
        maxRange = 2500;
        magazines[] = {"tcw_773FP_magazine"};
        scope = 2;
        /*
        class OpticsModes : OpticsModes {
            class IDA_773Firepuncher_Scope;
            class tcw_773Firepuncher_Scope : IDA_773Firepuncher_Scope {
                visionMode[] = {"Normal","NVG","Ti"};
                thermalMode[] = {0,1};
            };
        };
        */
        class Single: Single {
            dispersion = 0;
            reloadTime = 1.5; // 40 RPM
        };
    };

    // Valken-38x
    class 3AS_Valken38X_F;
    class tcw_valken38x : 3AS_Valken38X_F {
        author = "TCW Team";
        BaseWeapon = "tcw_valken38x";
        displayName = "[TCW] Valken-38X";
        magazines[] = {"tcw_valken38x_mag"};
        magazineWell[] = {};
        recoil = "IDA_recoil_TargetingBlaster";
        maxRecoilSway = 0.003;
        scope = 2;
        class Single : Single {
            reloadTime = 0.343; // ~175 RPM
            dispersion = 0.00085;
            sounds[] = {"StandardSound", "SilencedSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {"3AS_Sniper_SoundSet"};
            };
            class SilencedSound: BaseSoundModeType {
                soundSetShot[] = {"3AS_Sniper_SoundSet"};
            };
        };
    };
};
