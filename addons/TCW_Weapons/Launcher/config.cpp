#include "BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_launchers
    {
        author = "TCW Team";
        name = "launchers";
        addonRootClass = "tcw_weapons";
        requiredVersion = 2.20;
        requiredAddons[] =
        {
            "IDA_Republic"
        };
        units[]={};
        ammo[] =
        {
            "tcw_hh12_ion_ammo"
        };
        magazines[] =
        {
            "tcw_rps6_rocket",
            "tcw_rps6_rocket_disposable"
        };
        weapons[] =
        {
            "tcw_rps6",
            "tcw_rps6_disposable",
            "tcw_rps6_disposable_loaded",
            "tcw_rps6_disposable_used"
        };
    };
};

#define LAUNCHER_MASS 66
#define LAUNCHER_MAGAZINE_MASS 60

class CBA_DisposableLaunchers {
    tcw_rps6_disposable[] = {"tcw_rps6_disposable_loaded","tcw_rps6_disposable_used"};
};

    // RPS-6
    class IDA_RPS6_rocket;
    class tcw_rps6_rocket : IDA_RPS6_rocket {
        author = "TCW Team";
        BaseWeapon = "tcw_rps6_rocket";
        displayName = "[TCW] RPS-6 Rocket";
        ammo = "IDA_rocket";
        mass = 60;
        scope = 2;
        
    };

    class tcw_rps6_rocket_disposable : tcw_rps6_rocket
    {
        mass = LAUNCHER_MAGAZINE_MASS;
    };

class CfgWeapons {

    // RPS-6
    class IDA_RPS6HP;
    class tcw_rps6 : IDA_RPS6HP {
        author = "TCW Team";
        BaseWeapon = "tcw_rps6";
        displayName = "[TCW] RPS-6";
        magazines[] = {"tcw_rps6_rocket"};
        scope = 2;
    };

    // RPS-6 Disposable
    class WeaponSlotsInfo;

    class IDA_RPS6_Disposable;
    class tcw_rps6_disposable : IDA_RPS6_Disposable
    {
        author = "TCW Team";
        scope = 1;
        baseWeapon = "tcw_rps6_disposable_loaded";
        displayName = "[TCW] Disposable Launcher";
        magazines[] = {"tcw_rps6_rocket_disposable"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};
        class EventHandlers 
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS;
        };
    };
    class tcw_rps6_disposable_loaded : tcw_rps6_disposable
    {
        scope = 2;
        magazines[] = {"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
        };
    };
    class tcw_rps6_disposable_used : tcw_rps6_disposable
    {
        scope = 1;
        magazines[] = {"CBA_FakeLauncherMagazine"};
        displayName = "[TCW] Disposable Launcher (Used)";
        baseWeapon = "tcw_rps6_disposable_used";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = LAUNCHER_MASS + LAUNCHER_MAGAZINE_MASS;
        };
    };
};
