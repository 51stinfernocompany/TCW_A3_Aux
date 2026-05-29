#include "BaseControls.hpp"
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
            // "tcw_dlt15_mag",
            "tcw_dc15le_mag",
            "tcw_z6_mag",
            "tcw_z6_mag_explosive",
           // "tcw_dc42h_mag",
            "tcw_dlt17_mag",
            "tcw_dc15le_he_mag",
        };
        weapons[] =
        {
            //"tcw_dlt15",
            //"tcw_Bipod_dlt15"
            "tcw_dc15le",
            "tcw_z6",
            //"tcw_dc42h",
            "tcw_dlt17",
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
    class tcw_z6_mag_explosive : tcw_z6_mag
    {
        BaseWeapon = "tcw_z6_mag_explosive";
        displayName = "[TCW] Z-6 Explosive Magazine (3rd)";
        displayNameShort = "Explosive Mag (3rd)";
        ammo = "Cannon_30mm_HE_Plane_CAS_02_F";
        count = 3;
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
    class ShdwCmpny_DC15A_LE_HE_3_Mag; 
    class tcw_dc15le_he_mag: ShdwCmpny_DC15A_LE_HE_3_Mag{
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le_mag";
        displayName = "[TCW] Explosive Charge (3rnd)";
        displayNameShort = "Explosive Charge (3rnd)";
        count = 3;
        scope = 2;
    };
    class tcw_dc42h_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le_mag";
        displayName = "[TCW] DC-42H Energy Cell (200)";
        displayNameShort = "DC-42H Energy Cell (200)";
        count = 200;
        initSpeed = 417;
        mass = 16;
        scope = 2;
    };

    class tcw_dlt17_mag : IDA_Blaster_Cell_Power2_20Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le_mag";
        displayName = "[TCW] DLT-17 Energy Cell (200)";
        displayNameShort = "DLT-17 Energy Cell (200)";
        count = 200;
        initSpeed = 417;
        mass = 16;
        scope = 2;
    };

    /*
    // DLT-15
    class tcw_dlt15_mag : IDA_Blaster_Cell_Power1_300Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dlt15_mag";
        displayName = "[TCW] DLT-15 Energy Cell (300)";
        displayNameShort = "DLT-15 Energy Cell (300)";
        scope = 2;
        
    };
    */
};

class CfgWeapons {
    // Z-6
    class FullAuto;
    class WeaponSlotsInfo;
    class MuzzleSlot;
    class CowsSlot;
    class PointerSlot;
    class UnderBarrelSlot;
    class JLTS_stun_muzzle;
    class tcw_explosive_muzzle: JLTS_stun_muzzle {
        magazines[] = {"tcw_z6_mag_explosive"};
        /*
        class Single: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound"
            };
            discreteDistance[]={100};
            discreteDistanceInitIndex=0;
            class BaseSoundModeType
            {
                weaponSoundEffect="";
                closure1[]={};
                closure2[]={};
                soundClosure[]={};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect="";
                begin1[]=
                {
                    "addons\music\data\z6_explosive_shot",
                    0.80000001,
                    1.2,
                    50
                };
                soundBegin[]=
                {
                    "begin1",
                    1
                };
            };
        };
        */
    };
    class IDA_Z6;
    class tcw_z6 : IDA_Z6 {
        author = "TCW Team";
        BaseWeapon = "tcw_z6";
        displayName = "[TCW] Z-6 Rotary Cannon";
        magazines[] = {"tcw_z6_mag","tcw_z6_mag_explosive"};
        modes[] = {"Auto","Single"};
        scope = 2;
        /*
        muzzles[] = {"this","Explosive"};
        class Explosive : tcw_explosive_muzzle {
            displayName="[TCW] Explosive";
        };
        */
    };
    //DC-15LE
    class ShdwCmpny_DC15LE_F;
    class tcw_dc15le : ShdwCmpny_DC15LE_F
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15le";
        displayName = "[TCW] DC-15LE";
        magazines[] = {"tcw_dc15le_mag","tcw_dc15le_he_mag"};
        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        recoil = "tcw_recoil_15le";
        scope = 2;
        class FullAuto : FullAuto 
        {
            autoFire = 1;
            dispersion = 0.00145;
            reloadTime = 0.085; // This is rounds per minute
        };
        class Single {};
        class EGLM {};
        class WeaponSlotsInfo: WeaponSlotsInfo{
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {
                    "tcw_dc15le_muzzel",
                };
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {
                    "tcw_dc15le_optic",
                    "tcw_valken_optic",
                    "tcw_dc15x_optic",
                    "tcw_reflex_optic",
                    "tcw_reflex2_optic", 
                    "tcw_reflex3_optic",
                };
            };
            class PointerSlot: PointerSlot 
            {
                compatibleItems[] = {
                    
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot 
            {
                compatibleItems[] = {
                    "tcw_bipod"
                };
            };
        };
    };
    /*
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
            reloadTime = 0.085; // This is rounds per minute
        };
        class Single {};
        class EGLM {};
    };
    */

    //DLT-17
    class ShdwCmpny_DC15L_F;
    class tcw_dlt17 : ShdwCmpny_DC15L_F {
        author = "TCW Team";
        baseWeapon = "tcw_dlt17";
        displayName = "[TCW] DLT-17";
        magazines[] = {"tcw_dlt17_mag","tcw_dc15le_he_mag"};
        magazineWell[] = {};
        scope = 2;
        class FullAuto : FullAuto 
        {
            reloadTime = 0.065; // This is rounds per minute
        };
        class WeaponSlotsInfo: WeaponSlotsInfo{
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {
                    "tcw_dc15_supp",
                };
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {
                    "tcw_dc15le_optic",
                    "tcw_valken_optic",
                    "tcw_dc15x_optic",
                    "tcw_reflex_optic",
                    "tcw_reflex2_optic", 
                    "tcw_reflex3_optic",
                    "tcw_westar_optic",
                };
            };
            class PointerSlot: PointerSlot 
            {
                compatibleItems[] = {
                    
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot 
            {
                compatibleItems[] = {
                    "tcw_bipod"
                };
            };
        };
    };

    /*
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
            reloadTime = 0.085; // This is rounds per minute
        };
        class Single {};
        class EGLM {};
    };

    //DC-42H
    class 3AS_DC15L_F;
    class tcw_dc42h : 3AS_DC15L_F {
        author = "TCW Team";
        baseWeapon = "tcw_dc42h";
        displayName = "[TCW] DC-42H";
        magazines[] = {"tcw_dc42h_mag"};
        magazineWell[] = {};
        scope = 2;
    };

    // DLT-15
    /*
    class IDA_DLT15;
    class tcw_dlt15 : IDA_DLT15
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dlt15";
        displayName = "[TCW] DLT-15";
        magazines[] = {"tcw_dlt15_mag"};
        modes[] = {"FullAuto", "Single"};
        scope = 2;
        class FullAuto : FullAuto 
        {
            textureType = "fastAuto"; // This defines what is visually shown for firemode.
        };
        class Single : Single // It aint single buddy, it's not burst either but kek
        {
            autoFire = 1;
            dispersion = 0.00145;
            reloadTime = 0.12; // This is rounds per minute
            displayName = "Burst";
            textureType = "fullAuto"; // This defines what is visually shown for firemode.
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                class CompatibleItems
                {
                    tcw_Bipod_dlt15 = 1;
                };
            };
        };
    };
    */
};
