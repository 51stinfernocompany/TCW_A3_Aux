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
            "tcw_dc21_mag"
        };
        weapons[] =
        {
            "tcw_dc15sa",
            "tcw_dc17",
        };
    };
};

class CfgAmmo {
    class IDA_Blasterbolt_Power3_Blue;
    class tcw_dc15sa_stealth_ammo : IDA_Blasterbolt_Power3_Blue {
        author = "TCW Team";
        hit = 28;
        audibleFire = 2.5;
        thrust = 290;
        thrustTime = 1.2;
        timetolive = 5;
        brightness = 100;
        flaresize = 3;
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
        count = 200;
        scope = 2;
    };
    class tcw_dc15sa_stealth_mag : tcw_dc15sa_mag {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15sa_mag";
        displayName = "[TCW] DC-15SA Stealth Energy Cell";
        displayNameShort = "DC-15SA Energy Cell";
        descriptionShort = "Low on Ammo, but silent and deadly.";
        initSpeed = 340;
        count = 42;
        ammo = "tcw_dc15sa_stealth_ammo";
        scope = 2;
    };

    // DC-17
    class IDA_Blaster_Cell_Power4_10Rnd_Blue;
    class tcw_dc17_mag : IDA_Blaster_Cell_Power4_10Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17_mag";
        displayName = "[TCW] DC-17 Mag";
        count = 50;
        scope = 2;
    };

    //DC-21
    class tcw_dc21_mag : IDA_Blaster_Cell_Power4_10Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc21_mag";
        displayName = "[TCW] DC-21 Mag";
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
    };
};
