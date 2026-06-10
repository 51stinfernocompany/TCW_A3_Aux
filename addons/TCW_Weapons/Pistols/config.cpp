#include "..\BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_handguns
    {
        author = "TCW Team";
        name = "handguns";
        requiredVersion = 2.20;
        addonRootClass = "tcw_weapons";
        requiredAddons[] =
        {
            "IDA_Republic",
            "3AS_Weapons_Republic_DC17S"
        };
        units[]={};
        magazines[] =
        {
            "tcw_dc15sa_mag",
            "tcw_dc17_mag",
        };
        weapons[] =
        {
            "tcw_dc15sa",
            "tcw_dc17",
            "tcw_vibroblade"
        };
    };
};

class CfgAmmo {
    class IDA_Blasterbolt_Power2_Blue;
    class tcw_dc15sa_ammo : IDA_Blasterbolt_Power2_Blue {
        author = "TCW Team";
        hit = 10;
    };
    class IDA_Blasterbolt_Power3_Blue;
    class tcw_dc15sa_stealth_ammo : IDA_Blasterbolt_Power3_Blue {
        author = "TCW Team";
        hit = 10;
        caliber = 0.8; // half the IDA base (1.6) — reduced penetration for subsonic rounds
        audibleFire = 2.5;
        thrust = 290;
        thrustTime = 1.2;
        timetolive = 5;
        brightness = 100;
        flaresize = 3;
    };
    class IDA_Blasterbolt_Power4_Blue;
    class tcw_blasterbolt_dc17 : IDA_Blasterbolt_Power4_Blue {
        author = "TCW Team";
        hit = 13;
    };
};

class CfgMagazines {
    // DC-15SA
    class IDA_Blaster_Cell_Power2_20Rnd_Blue;
    class tcw_dc15sa_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15sa_mag";
        displayName = "[TCW] DC-15SA Energy Cell";
        displayNameShort = "DC-15SA Energy Cell";
        ammo = "tcw_dc15sa_ammo";
        count = 200;
        scope = 2;
    };
    class tcw_dc15sa_stealth_mag : tcw_dc15sa_mag {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15sa_mag";
        displayName = "[TCW] DC-15SA Stealth Energy Cell";
        displayNameShort = "DC-15SA Energy Cell";
        descriptionShort = "Silent running — suppressed fire.";
        initSpeed = 340;
        count = 200;
        ammo = "tcw_dc15sa_stealth_ammo";
        scope = 2;
    };

    // DC-17
    class IDA_Blaster_Cell_Power4_10Rnd_Blue;
    class tcw_dc17_mag : IDA_Blaster_Cell_Power4_10Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17_mag";
        displayName = "[TCW] DC-17 Mag";
        ammo = "tcw_blasterbolt_dc17";
        count = 50;
        scope = 2;
    };

};

class CfgWeapons {
    // DC-15SA
    class IDA_DC15P;
    class tcw_dc15sa : IDA_DC15P 
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15sa";
        displayName = "[TCW] DC-15SA";
        magazines[] = {"tcw_dc15sa_mag","tcw_dc15sa_stealth_mag"};
        scope = 2;
    };

    // DC-17
    class IDA_DC17;
    class tcw_dc17 : IDA_DC17 {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17";
        displayName = "[TCW] DC-17";
        magazines[] =
            {
            "tcw_dc17_mag",
            "ACE_40mm_Flare_green",
            "ACE_40mm_Flare_red",
            "OPTRE_signalSmokeP",
            };
        scope = 2;
        class Single : Single {
            dispersion = 0.007;
        };
    };

    // Vibroblade
    class IDA_VibroKnife;
    class tcw_vibroblade : IDA_VibroKnife {
        author = "TCW Team";
        BaseWeapon = "tcw_vibroblade";
        displayName = "[TCW] Vibroblade";
        scope = 2;
    };
};
