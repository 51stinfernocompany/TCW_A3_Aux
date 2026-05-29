#include "..\BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_throwables
    {
        author = "TCW Team";
        name = "throwables";
        addonRootClass = "tcw_weapons";
        requiredAddons[] =
        {
            "IDA_Ammo",
            "A3_Weapons_F"
        };
        units[]={};
        ammo[] =
        {
            "tcw_detonator_ammo",
            "tcw_sonic_ammo",
            "tcw_SmokeShellGreen",
            "tcw_SmokeShellBlue",
            "tcw_SmokeShellPurple",
            "tcw_SmokeShellYellow",
            "tcw_SmokeShellRed",
            "tcw_SmokeShellOrange",
            "tcw_SmokeShellWhite",
            "tcw_weaponshield_ammo",
        };
        magazines[] =
        {
            "tcw_ThermalDetonator",
            "tcw_SonicDetonator",
            "tcw_SmokeBlue",
            "tcw_SmokeGreen",
            "tcw_SmokeOrange",
            "tcw_SmokePurple",
            "tcw_SmokeRed",
            "tcw_SmokeWhite",
            "tcw_SmokeYellow",
            "tcw_weaponshield",
            "tcw_emp_grenade",
            "tcw_penetrator_grenade",
        };
        weapons[] = {};
    };
};

class CfgAmmo {
    // Grenades
    class IDA_grenade_Detonator_ammo;
    class tcw_detonator_ammo : IDA_grenade_Detonator_ammo{
        BaseWeapon = "tcw_detonator_ammo";
        displayName = "[TCW] Detonator Ammo";
        scope = 2;
    };
    class IDA_grenade_Imploder_ammo;
    class tcw_imploder_ammo : IDA_grenade_Imploder_ammo{
        BaseWeapon = "tcw_imploder_ammo";
        displayName = "[TCW] Imploder Ammo";
        scope = 2;
        hit = 220;
        indirectHit = 140;
        dangerRadiusHit = 90;
        explosionEffectsRadius = 60;
        explosionTime = 5.5;
        timeToLive = 6.5;
        soundFly[] = {"\Indecisive_Armoury_Sounds\Detonator_Timer.ogg",6,1,90};
    };
    class IDA_grenade_Sonic_ammo;
    class tcw_sonic_ammo : IDA_grenade_Sonic_ammo{
        BaseWeapon = "tcw_sonic_ammo";
        displayName = "[TCW] Sonic Ammo";
        scope = 2;
    };
    // Smokes
    class IDA_smoke_Green;
    class tcw_SmokeShellGreen : IDA_smoke_Green{
        BaseWeapon = "tcw_SmokeShellGreen";
        displayName = "[TCW] Smoke Green";
        scope = 2;
    };
    class IDA_smoke_blue;
    class tcw_SmokeShellBlue : IDA_smoke_blue{
        BaseWeapon = "tcw_SmokeShellBlue";
        displayName = "[TCW] Smoke Blue";
        scope = 2;        
    };
    class IDA_smoke_purple;
    class tcw_SmokeShellPurple : IDA_smoke_purple{
        BaseWeapon = "tcw_SmokeShellPurple";
        displayName = "[TCW] Smoke Purple";
        scope = 2;
    };
    class IDA_smoke_Red;
    class tcw_SmokeShellRed : IDA_smoke_Red{
        BaseWeapon = "tcw_SmokeShellRed";
        displayName = "[TCW] Smoke Red";
        scope = 2;
    };
    class IDA_smoke;
    class tcw_SmokeShellWhite : IDA_smoke{
        BaseWeapon = "tcw_SmokeShellWhite";
        displayName = "[TCW] Smoke White";
        scope = 2;
    };
    class IDA_grenade_Penetrator_ammo;
    class tcw_grenade_Penetrator_ammo: IDA_grenade_Penetrator_ammo{
        BaseWeapon = "tcw_grenade_Penetrator_ammo";
        displayName = "[TCW] Penetrator Grenade ";
        model = "\Indecisive_Armoury_Ammos\Data\Thermal_Detonator\IDA_Thermal_Detonator.p3d";
        scope = 2;
        indirectHit=350;
        indirectHitRange=2;
    };
};

class CfgMagazines {
    // Grenades
    class IDA_grenade_Detonator_mag;
    class tcw_ThermalDetonator : IDA_grenade_Detonator_mag{
        BaseWeapon = "tcw_ThermalDetonator";
        displayName = "[TCW] Thermal Detonator";
        displayNameShort = "Thermal Detonator";
        ammo = "tcw_detonator_ammo";
        scope = 2;
        
    };  
    class IDA_grenade_Imploder_mag;
    class tcw_ThermalImploder : IDA_grenade_Imploder_mag{
        BaseWeapon = "tcw_ThermalDetonator";
        displayName = "[TCW] Thermal Imploder";
        displayNameShort = "Thermal Imploder";
        ammo = "tcw_imploder_ammo";
        scope = 2;
    };
    class IDA_grenade_Sonic_mag;
    class tcw_SonicDetonator : IDA_grenade_Sonic_mag{
        BaseWeapon = "tcw_SonicDetonator";
        displayName = "[TCW] Sonic Detonator";
        displayNameShort = "Sonic Detonator";
        ammo = "tcw_sonic_ammo";
        scope = 2;
        
    };  

    // Smokes
    class IDA_grenade_Smoke_mag;
    class tcw_SmokeWhite : IDA_grenade_Smoke_mag{
        BaseWeapon = "tcw_SmokeWhite";
        displayName = "[TCW] Smoke White";
        displayNameShort = "[TCW] White Smoke";
        ammo = "tcw_SmokeShellWhite";
        scope = 2;
    };
    class IDA_grenade_Smoke_Blue_mag;
    class tcw_SmokeBlue : IDA_grenade_Smoke_Blue_mag{
        BaseWeapon = "tcw_SmokeBlue";
        displayName = "[TCW] Smoke Blue";
        displayNameShort = "[TCW] Blue Smoke";
        ammo = "tcw_SmokeShellBlue";
        scope = 2;
    };
    class IDA_grenade_Smoke_Green_mag;
    class tcw_SmokeGreen : IDA_grenade_Smoke_Green_mag{
        BaseWeapon = "tcw_SmokeGreen";
        displayName = "[TCW] Smoke Green";
        displayNameShort = "[TCW] Green Smoke";
        ammo = "tcw_SmokeShellGreen";
        scope = 2;
        
    };
    class IDA_grenade_Smoke_Purple_mag;
    class tcw_SmokePurple : IDA_grenade_Smoke_Purple_mag{
        BaseWeapon = "tcw_SmokePurple";
        displayName = "[TCW] Smoke Purple";
        displayNameShort = "[TCW] Purple Smoke";
        ammo = "tcw_SmokeShellPurple";
        scope = 2;
        
    };
    class IDA_grenade_Smoke_Red_mag;
    class tcw_SmokeRed : IDA_grenade_Smoke_Red_mag{
        BaseWeapon = "tcw_SmokeRed";
        displayName = "[TCW] Smoke Red";
        displayNameShort = "[TCW] Red Smoke";
        ammo = "tcw_SmokeShellRed";
        scope = 2;
        
    };
    /*
    class ShieldGrenade_Mag;
    class tcw_weaponshield : ShieldGrenade_Mag
    {
        baseweapon = "tcw_weaponshield";
        displayName = "[TCW] Weapon Shield";
        scope = 2;
    };
    */
    class IDA_grenade_Penetrator_mag;
    class tcw_penetrator_grenade: IDA_grenade_Penetrator_mag{
        baseweapon = "tcw_penetrator_grenade";
        displayName = "[TCW] Penetrator Grenade";
        ammo = "tcw_grenade_Penetrator_ammo";
        model = "\Indecisive_Armoury_Ammos\Data\Thermal_Detonator\IDA_Thermal_Detonator.p3d";
        scope = 2;
    };
};

class CfgWeapons {
    // Grenades and Smokes
    class GrenadeLauncher;
    class Throw : GrenadeLauncher {
        muzzles[] += {
            "tcw_ThermalDetonator",
            "tcw_SonicDetonator",
            "tcw_SmokeBlue",
            "tcw_SmokeGreen",
            "tcw_SmokeOrange",
            "tcw_SmokePurple",
            "tcw_SmokeRed",
            "tcw_SmokeWhite",
            "tcw_SmokeYellow",
            "tcw_ThermalImploder",
            "tcw_weaponshield",
            "tcw_penetrator_grenade",

        };
        class ThrowMuzzle;
        class tcw_ThermalDetonator : ThrowMuzzle{
            magazines[]={"tcw_ThermalDetonator"};
        };
        class tcw_ThermalImploder : ThrowMuzzle{
            magazines[]={"tcw_ThermalImploder"};
        };
        class tcw_SonicDetonator : ThrowMuzzle{
            magazines[]={"tcw_SonicDetonator"};
        };
        class tcw_SmokeBlue : ThrowMuzzle{
            magazines[]={"tcw_SmokeBlue"};
        };
        class tcw_SmokeGreen : ThrowMuzzle{
            magazines[]={"tcw_SmokeGreen"};
        };
        class tcw_SmokeOrange : ThrowMuzzle{
            magazines[]={"tcw_SmokeOrange"};
        };
        class tcw_SmokePurple : ThrowMuzzle{
            magazines[]={"tcw_SmokePurple"};
        };
        class tcw_SmokeRed : ThrowMuzzle{
            magazines[]={"tcw_SmokeRed"};
        };
        class tcw_SmokeWhite : ThrowMuzzle{
            magazines[]={"tcw_SmokeWhite"};
        };
        class tcw_SmokeYellow : ThrowMuzzle{
            magazines[]={"tcw_SmokeYellow"};
        };
        /*
        class tcw_weaponshield : ThrowMuzzle{
            magazines[]={"tcw_weaponshield"};
        };
        */
        class tcw_emp_grenade : ThrowMuzzle{
            magazines[]={"tcw_emp_grenade"};
        };
        class tcw_penetrator_grenade : ThrowMuzzle{
            magazines[]={"tcw_penetrator_grenade"};
        };
    };  
};
