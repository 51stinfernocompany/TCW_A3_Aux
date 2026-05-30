#include "..\BaseControls.hpp"
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
        magazines[] =
        {
            "tcw_plx_aa",
            "tcw_plx_he",
            "tcw_plx_at",
            "tcw_rps6_rocket",
            "tcw_rps6_rocket_disposable",
        };
        weapons[] =
        {
            "tcw_plx_launcher",
            "tcw_rps6",
            "tcw_rps6_disposable",
            "tcw_rps6_disposable_loaded",
            "tcw_rps6_disposable_used",
        };
    };
};

#define LAUNCHER_MASS 66
#define LAUNCHER_MAGAZINE_MASS 60

class CBA_DisposableLaunchers {
    tcw_rps6_disposable[] = {"tcw_rps6_disposable_loaded","tcw_rps6_disposable_used"};
};

class CfgMagazines {
    // PLX
    class 3AS_JLTS_MK39_AA;
    class tcw_plx_aa : 3AS_JLTS_MK39_AA {
        author = "TCW Team";
        BaseWeapon = "tcw_plx_aa";
        displayName = "[TCW] PLX AA Missile Pack";
        mass = 110;
        count = "4";
        scope = 2;
        
    };
    class 3AS_JLTS_MK44_HE;
    class tcw_plx_he : 3AS_JLTS_MK44_HE {
        author = "TCW Team";
        BaseWeapon = "tcw_plx_he";
        displayName = "[TCW] PLX HE Missile Pack";
        mass = 130;
        count = "2";
        scope = 2;
        
    };
    class 3AS_JLTS_MK43_AT;
    class tcw_plx_at : 3AS_JLTS_MK43_AT {
        author = "TCW Team";
        BaseWeapon = "tcw_plx_at";
        displayName = "[TCW] PLX AT Missile Pack";
        mass = 130;
        count = "2";
        scope = 2;
        
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

    class 3AS_MK41_AT;
    class tcw_hh12_at : 3AS_MK41_AT {
        author = "TCW Team";
        BaseWeapon = "tcw_hh12_at";
        displayName = "[TCW] HH12 AT Missile";
        mass = 100;
        count = "1";
        scope = 2;
        
    };
    class tcw_hh12_ion : tcw_hh12_at {
        author = "TCW Team";
        BaseWeapon = "tcw_hh12_ion";
        displaynameshort = "Ion Rocket";
        ammo = "tcw_hh12_ion_ammo";
        displayName = "[TCW] HH12 Ion Missile";
        mass = 100;
        count = "1";
        scope = 2;
        
    };
};

class CfgWeapons {
    // PLX
    class 3AS_PLX1_F;
    class tcw_plx_launcher : 3AS_PLX1_F {
        author = "TCW Team";
        BaseWeapon = "tcw_plx_launcher";
        displayName = "[TCW] PLX-1 Guided Missile Launcher";
        magazines[] = {"tcw_plx_aa","tcw_plx_he","tcw_plx_at"};
        reloadTime = 2;
        ace_overpressure_damage = 0;
        scope = 2;
    };

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
