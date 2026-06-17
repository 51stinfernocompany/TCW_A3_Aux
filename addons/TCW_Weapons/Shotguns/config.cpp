#include "..\BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_shotguns
    {
        author = "TCW Team";
        name = "shotguns";
        addonRootClass = "tcw_weapons";
        requiredAddons[] =
        {
            "IDA_Republic",
            "3AS_Weapons_Republic_DP23",
            "3AS_Weapons_Scattergun"
        };
        units[]={};
        ammo[] =
        {
            "tcw_blasterbolt_dc23",
            "tcw_blasterbolt_scatterbolt_slug",
            "tcw_blasterbolt_scatterbolt_pellet"
        };
        magazines[] =
        {
            "tcw_dc23_mag",
            "tcw_scattergun_slug",
            "tcw_scattergun_pellet"
        };
        weapons[] =
        {
            "tcw_dc23",
            "tcw_dp23",
            "tcw_scattergun"
        };
    };
};

class CfgAmmo {
    class IDA_Blasterbolt_Scatter_Blue;
    class tcw_blasterbolt_dc23 : IDA_Blasterbolt_Scatter_Blue
    {
        submunitionConeType[] = {"random",10};
        submunitionConeAngle = 0.45;
        timetolive = 3;
    };
    class tcw_blasterbolt_scatterbolt_slug : IDA_Blasterbolt_Scatter_Blue
    {
        submunitionConeType[] = {"random",7};
        submunitionConeAngle = 0.1;
        timetolive = 4;
    };
    class tcw_blasterbolt_scatterbolt_pellet : IDA_Blasterbolt_Scatter_Blue
    {
        caliber = 1.7;
        hit = 6;
        submunitionConeType[] = {"random",10};
        submunitionConeAngle = 0.45;
        timetolive = 2;
    };
};

class CfgMagazines {
    // DC-23
    class IDA_Blaster_Cell_Scatter_6Rnd_Blue;
    class tcw_dc23_mag : IDA_Blaster_Cell_Scatter_6Rnd_Blue 
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_dc23_mag";
        displayName = "[TCW] DC-23 Magazine";
        ammo = "tcw_blasterbolt_dc23";
        scope = 2;
    };

    class 3AS_8Rnd_ESlugY_Mag;
    class tcw_scattergun_slug : 3AS_8Rnd_ESlugY_Mag
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_scattergun_slug";
        displayName = "[TCW] DP-23 Shotgun Slugs";
        count = 6;
        ammo = "tcw_blasterbolt_scatterbolt_slug";
        scope = 2;
    };

    class 3AS_8Rnd_EY30_Pellets;
    class tcw_scattergun_pellet : 3AS_8Rnd_EY30_Pellets
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_scattergun_pellet";
        displayName = "[TCW] DP-23 Shotgun Pellets";
        count = 6;
        ammo = "tcw_blasterbolt_scatterbolt_pellet";
        scope = 2;
    };
    
    class tcw_opfor_scattergun_pellet : 3AS_8Rnd_EY30_Pellets
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_scattergun_pellet";
        displayName = "[TCW] OPFOR Shotgun Pellets";
        scope = 2;
    };

    class 3AS_1Rnd_EC80_Flechette;
    class tcw_scattergun_flechette : 3AS_1Rnd_EC80_Flechette
    {
        author = "TCW Aux Team";
        scope = 2;
        BaseWeapon = "tcw_scattergun_flechette";
        displayName = "[TCW] DP-23 Flechette Round";
        count = 1;
        mass = 25;
    };

};

class CfgWeapons {
    // DP-23
    class 3AS_DP23_F;
    class tcw_dp23 : 3AS_DP23_F 
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_dp23";
        displayName = "[TCW] DP-23";
        magazines[] = {"tcw_scattergun_slug","tcw_scattergun_pellet"};
        reloadTime = 0.22;
        magazineWell[] = {};
        scope = 2;
    };

    // DC-23
    class IDA_DC23;
    class tcw_dc23 : IDA_DC23 
    {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_dc23";
        displayName = "[TCW] DC-23 Scatterblaster";
        magazines[] = {"tcw_dc23_mag"};
        reloadTime = 0.125;
        scope = 2;
    };

    // Scattergun
    class 3AS_ScatterGun_F;
    class tcw_scattergun : 3AS_ScatterGun_F {
        author = "TCW Aux Team";
        BaseWeapon = "tcw_scattergun";
        displayName = "[TCW] Scattergun";
        magazines[] = {"tcw_scattergun_slug","tcw_scattergun_pellet","tcw_opfor_scattergun_pellet"};
        magazineWell[] = {};
    };
};
