#include "BaseControls.hpp"
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
            "IDA_Imperial"
        };
        units[]={};
        ammo[] =
        {
            "tcw_dc15x_ammo",
            "tcw_dc15x_ammo_red",
            "tcw_blasterbolt_Amp"
        };
        magazines[] =
        {
            "tcw_dc15x_magazine",
            "tcw_dc15x_magazine_red",
            "tcw_773FP_magazine"
        };
        weapons[] =
        {
            "tcw_DC15X",
            "tcw_773Firepuncher"
        };
    };
};

class CfgAmmo {
    // DC-15x, Firepuncher 773FP
    class IDA_Blasterbolt_Power2_Blue;
    class IDA_Blasterbolt_Power5_Blue;
    class tcw_blasterbolt_dc15x : IDA_Blasterbolt_Power2_Blue {
        author = "TCW Team";
        JLTS_isEMPAmmo = 0;
        //coefGravity = 0.000001;
        //airFriction = -0.000001;
        hit = 25;
    };

    class tcw_blasterbolt_firepuncher : tcw_blasterbolt_dc15x {
        hit = 69;
        thrust = 600;
        thrustTime = 0.4;
    };

    // Valken-38x
    class tcw_valken38_ammo : IDA_Blasterbolt_Power5_Blue {
        author = "TCW Team";
        JLTS_isEMPAmmo = 0;
        hit = 15;
    };
};

class CfgMagazines {

    // Firepuncher 773FP
    class IDA_Blaster_Cell_Power3_60Rnd_Blue;
    class tcw_773FP_magazine : IDA_Blaster_Cell_Power3_60Rnd_Blue
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15x_magazine";
        descriptionShort = "15 round capacity.";
        displayName = "[TCW] 773 FP Magazine";
        ammo = "tcw_blasterbolt_firepuncher";
        initSpeed=1500;
        count = 10;
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
        descriptionShort = "20 round capacity.";
        ammo = "tcw_blasterbolt_dc15x";
        count = 20;
        scope = 2;
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
            recoilProne = "recoil_single_prone_ebr";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo{
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {
                };
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {
                    "tcw_dc15le_optic",
                    "tcw_dc15x_optic", 
                    "tcw_e30b_optic",
                    "tcw_e30c_optic",
                    "tcw_valken_optic",
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
        /*
        class OpticsModes : OpticsModes {
            class IDA_773Firepuncher_Scope;
            class tcw_773Firepuncher_Scope : IDA_773Firepuncher_Scope {
                visionMode[] = {"Normal","NVG","Ti"};
                thermalMode[] = {0,1};
            };
        };
        */
        magazines[] = {"tcw_773FP_magazine"};
        
        scope = 2;
        class Single: Single {
            dispersion = 0;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo{
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {
                };
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {
                    "tcw_dc15le_optic",
                    "tcw_dc15x_optic", 
                    "tcw_e30b_optic",
                    "tcw_e30c_optic",
                    "tcw_valken_optic",
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
};
