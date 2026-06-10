#include "..\BaseControls.hpp"

class CfgAmmo {
    class IDA_Blasterbolt_Power1_Blue;
    class tcw_blasterbolt_z6 : IDA_Blasterbolt_Power1_Blue {
        hit = 8;
    };
    class IDA_Blasterbolt_Power2_Blue;
    class tcw_blasterbolt_dc15le : IDA_Blasterbolt_Power2_Blue {
        hit = 13;
    };
    class tcw_blasterbolt_dlt19 : IDA_Blasterbolt_Power2_Blue {
        hit = 8;
    };
};

class CfgPatches
{
    class tcw_weapons_heavy
    {
        author = "TCW Team";
        name = "heavy";
        addonRootClass = "tcw_weapons";
        requiredVersion = 2.20;
        requiredAddons[] =
        {
            "IDA_Republic",
            "JLTS_weapons_Core",
            "JLTS_weapons_Z6"
        };
        units[]={};
        ammo[] ={};
        magazines[] =
        {
            "tcw_dc15le_mag",
            "tcw_z6_mag",
            "tcw_dlt19_mag",
        };
        weapons[] =
        {
            "tcw_dc15le",
            "tcw_z6",
            "tcw_dlt19",
        };
    };
};

class CfgMagazines {
    // Z-6
    class IDA_Blaster_Cell_Power1_300Rnd_Blue;
    class tcw_z6_mag : IDA_Blaster_Cell_Power1_300Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_z6_mag";
        displayName = "[TCW] Z-6 Energy Cell";
        ammo = "tcw_blasterbolt_z6";
        count = 500;
        scope = 2;
    };
    class IDA_Blaster_Cell_Power2_20Rnd_Blue;
    class tcw_dc15le_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le_mag";
        displayName = "[TCW] DC-15LE Energy Cell (150)";
        displayNameShort = "DC-15LE Energy Cell (150)";
        ammo = "tcw_blasterbolt_dc15le";
        count = 150;
        mass = 12;
        scope = 2;
    };

    class tcw_dlt19_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dlt19_mag";
        displayName = "[TCW] DLT-19 Energy Cell (200)";
        displayNameShort = "DLT-19 Energy Cell (200)";
        ammo = "tcw_blasterbolt_dlt19";
        count = 200;
        initSpeed = 417;
        mass = 16;
        scope = 2;
    };
};

class CfgWeapons {
    // Z-6
    class Auto;
    class FullAuto;
    class WeaponSlotsInfo;
    class MuzzleSlot;
    class CowsSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class IDA_Z6;
    class tcw_z6 : IDA_Z6 {
        author = "TCW Team";
        BaseWeapon = "tcw_z6";
        displayName = "[TCW] Z-6 Rotary Cannon";
        magazines[] = {"tcw_z6_mag"};
        modes[] = {"Auto"};
        scope = 2;
        class Auto : Auto
        {
            reloadTime = 0.0399; // ~1504 RPM
            dispersion = 0.02;
        };
    };

    //DC-15LE
    class IDA_DC15LE;
    class tcw_dc15le : IDA_DC15LE
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le";
        displayName = "[TCW] DC-15LE";
        magazines[] = {"tcw_dc15le_mag"};
        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        scope = 2;
        class FullAuto : FullAuto 
        {
            autoFire = 1;
            dispersion = 0.00145;
            reloadTime = 0.092; // ~650 RPM
        };
    };

    // DLT-19
    class IDA_DLT19;
    class tcw_dlt19 : IDA_DLT19 {
        author = "TCW Team";
        baseWeapon = "tcw_dlt19";
        displayName = "[TCW] DLT-19";
        magazines[] = {"tcw_dlt19_mag"};
        magazineWell[] = {};
        scope = 2;
        class FullAuto : FullAuto
        {
            reloadTime = 0.065; // ~923 RPM
            dispersion = 0.0015;
        };
    };
};
