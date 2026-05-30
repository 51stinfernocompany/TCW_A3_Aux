#include "..\BaseControls.hpp"

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
        scope = 2;
        
    };
    class IDA_Blaster_Cell_Power2_20Rnd_Blue;
    class tcw_dc15le_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le_mag";
        displayName = "[TCW] DC-15LE Energy Cell (150)";
        displayNameShort = "DC-15LE Energy Cell (150)";
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
        count = 200;
        initSpeed = 417;
        mass = 16;
        scope = 2;
    };
};

class CfgWeapons {
    // Z-6
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
        scope = 2;
        class FullAuto : FullAuto 
        {
            autoFire = 1;
            dispersion = 0.00145;
            reloadTime = 0.085; // This is rounds per minute
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
            reloadTime = 0.065; // This is rounds per minute
        };
    };
};
