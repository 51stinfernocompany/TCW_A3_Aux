#include "..\BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_rifles
    {
        requiredAddons[] =
        {
            "JLTS_weapons_Core",
            "IDA_Ammo",
            "IDA_Republic"
        };
        units[]={};
        ammo[] =
        {
            "tcw_blasterbolt_overcharged_dc17m",
            "tcw_blasterbolt_dc17m",
            "tcw_at_shell_dc17M",
            "tcw_he_launchergrenade"
        };
        magazines[] =
        {
            "tcw_dc17m_SNR_mag",
            "tcw_dc17m_standard_mag",
            "tcw_dc17m_AT_mag",
            "tcw_dc15s_mag",
            "tcw_dc15s_mag_red",
            "tcw_dc15a_mag",
            "tcw_dc15a_mag_red",
            "tcw_stun_mag_long",
            "tcw_HE_LauncherGrenade",
            "tcw_Smoke_LauncherGrenade",
            "tcw_SmokeRed_LauncherGrenade",
            "tcw_SmokeGreen_LauncherGrenade",
            "tcw_SmokeBlue_LauncherGrenade",
            "tcw_SmokePurple_LauncherGrenade",
            "tcw_dc15c_mag",
            "tcw_westar_mag"
        };
        weapons[] =
        {
            "tcw_DC17m",
            "tcw_dc15s",
            "tcw_dc15s_ugl",
            "tcw_dc15s_shield",
            "tcw_dc15a",
            "tcw_dc15a_ugl",
            "tcw_stun_muzzle",
            "tcw_dc15c",
            "tcw_westar",
            "tcw_westar_ugl"
        };
    };
};

class CfgAmmo {
    // DC17M
    class IDA_Blasterbolt_Power2_Blue;
    class tcw_blasterbolt_overcharged_dc17m : IDA_Blasterbolt_Power2_Blue {
        author = "TCW Team";
        JLTS_isEMPAmmo = 0;
        //coefGravity = 0.000001;
        //airFriction = -0.000001;
        thrust = 360;
        thrustTime = 0.8;
        timetolive = 14;
        hit = 70;
    };
    class tcw_blasterbolt_dc17m : IDA_Blasterbolt_Power2_Blue
    {
        author = "TCW Team";
        thrust = 260;
        thrustTime = 1.2;
        timetolive = 10;
    };

    class IDA_AT_shell;
    class tcw_at_shell_dc17M : IDA_AT_shell {
        author = "TCW Team";
        hit = 900;
    };

    // DC-15A, DC-15S
    class IDA_Blasterbolt_Power3_Blue;
    class tcw_blasterbolt_dc15a : IDA_Blasterbolt_Power3_Blue
    {
        author = "TCW Team";
        thrust = 270;
        thrustTime = 1.2;
        timetolive = 7;
        hit = 13;
    };
    class tcw_blasterbolt_dc15s : IDA_Blasterbolt_Power2_Blue
    {
        author = "TCW Team";
        thrust = 200;
        thrustTime = 1.4;
        timetolive = 4;
        hit = 9;
    };

    // UGL Ammo
    class IDA_HE_LauncherGrenade;
    class tcw_he_launchergrenade : IDA_HE_LauncherGrenade {
        author = "TCW Team";
        fuseDistance = 12;
    };
};

class CfgMagazines {
    // DC15A
    class IDA_Blaster_Cell_Power3_40Rnd_Blue;
    class tcw_dc15a_mag : IDA_Blaster_Cell_Power3_40Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15a_mag";
        displayName = "[TCW] DC-15A Energy Cell";
        displayNameShort = "DC-15A Energy Cell";
        descriptionShort = "30 round capacity.";

        ammo = "tcw_blasterbolt_dc15a";
        count = 30;
        scope = 2;
    };

    // DC15S
    class tcw_dc15s_mag : IDA_Blaster_Cell_Power3_40Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15s_mag";
        displayName = "[TCW] DC-15S Energy Cell";
        displayNameShort = "DC-15S Energy Cell";
        ammo = "tcw_blasterbolt_dc15s";
        scope = 2;
    };

    // DC17M
    class IDA_Blaster_Clip_Power4_5Rnd_Blue;
    class tcw_dc17m_SNR_mag : IDA_Blaster_Clip_Power4_5Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17m_SNR_mag";
        displayName = "[TCW] 5Rnd Heavy Energy Clip";
        ammo = "tcw_blasterbolt_overcharged_dc17m";
        initSpeed = 1300;
        scope = 2;
    };
    class IDA_Blaster_Clip_Power2_60Rnd_Blue;
    class tcw_dc17m_standard_mag : IDA_Blaster_Clip_Power2_60Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17m_standard_mag";
        displayName = "[TCW] Low-Power Energy Clip";
        ammo = "tcw_blasterbolt_dc17m";
        initSpeed = 900;
        scope = 2;
    };
    class IDA_Blaster_Clip_Grenade;
    class tcw_dc17m_AT_mag : IDA_Blaster_Clip_Grenade {
        author = "TCW Team";
        BaseWeapon = "tcw_dc17m_AT_mag";
        ammo = "tcw_at_shell_dc17M";
        displayName = "[TCW] T-31 Anti-Armor Detonator";
        scope = 2;
    };

    //DC-15C
    class 3AS_40Rnd_EC40_Mag;
    class tcw_dc15c_mag : 3AS_40Rnd_EC40_Mag
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15c_mag";
        displayName = "[TCW] DC-15C Energy Cell";
        displayNameShort = "DC-15C Energy Cell";
        descriptionShort = "40 round capacity.";
        ammo = "tcw_blasterbolt_dc15a";
        scope = 2;
    };

    //Westar
    class tcw_westar_mag : IDA_Blaster_Cell_Power3_40Rnd_Blue {
        author = "TCW Team";
        BaseWeapon = "tcw_westar_mag";
        displayName = "[TCW] Westar M5 Energy Cell";
        displayNameShort = "Westar Energy Cell";
        descriptionShort = "40 round capacity.";

        ammo = "tcw_blasterbolt_dc15a";
        count = 40;
        scope = 2;
    };

    // Stun Rounds
    class JLTS_stun_mag_long;
    class tcw_stun_mag_long : JLTS_stun_mag_long {
        author = "TCW Team";
        BaseWeapon = "tcw_stun_mag_long";
        displayName = "[TCW] Stun Mag Long";
        displayNameShort = "Stun Mag Long";
        scope = 2;
    };

    // UGL
    // To-do:
    // Increase mass 
    // Original mass * 1.6
    class IDA_HE_LauncherGrenade;
    class tcw_HE_LauncherGrenade : IDA_HE_LauncherGrenade {
        displayName="[TCW] Impact Grenade (3)";
        descriptionShort="Impact grenade";
        count = 3;
        ammo = "tcw_he_launchergrenade";
    };
    class IDA_Smoke_LauncherGrenade;
    class tcw_Smoke_LauncherGrenade : IDA_Smoke_LauncherGrenade {
        displayName="[TCW] Smoke Grenade";
        displayNameShort="[TCW] White smoke";
        descriptionShort="Impact smoke grenade";
        count = 5;
    };
    class IDA_SmokeRed_LauncherGrenade;
    class tcw_SmokeRed_LauncherGrenade : IDA_SmokeRed_LauncherGrenade {
        displayName="[TCW] Smoke Grenade (Red)";
        displayNameShort="[TCW] Red Smoke";
        descriptionShort="Red impact smoke grenade";
        count = 3;
    };
    class IDA_SmokeGreen_LauncherGrenade;
    class tcw_SmokeGreen_LauncherGrenade : IDA_SmokeGreen_LauncherGrenade {
        displayName="[TCW] Smoke Grenade (Green)";
        displayNameShort="[TCW] Green Smoke";
        descriptionShort="Green impact smoke grenade";
        count = 3;
    };
    class IDA_SmokeBlue_LauncherGrenade;
    class tcw_SmokeBlue_LauncherGrenade : IDA_SmokeBlue_LauncherGrenade {
        displayName="[TCW] Smoke grenade (Blue)";
        displayNameShort="[TCW] Blue Smoke";
        descriptionShort="Blue impact smoke grenade";
        count = 3;
    };
    class IDA_SmokePurple_LauncherGrenade;
    class tcw_SmokePurple_LauncherGrenade : IDA_SmokePurple_LauncherGrenade {
        displayName="[TCW] Smoke grenade (Purple)";
        displayNameShort="[TCW] Purple Smoke";
        descriptionShort="Purple impact smoke grenade";
        count = 3;
    };
};

class CfgWeapons {
    class JLTS_stun_muzzle;
    class tcw_stun_muzzle: JLTS_stun_muzzle {
        magazines[] = {"tcw_stun_mag_long"};
    };
    class EGLM;
    // DC-15S UGL
    class IDA_DC15S_UGL;
    class tcw_dc15s_ugl : IDA_DC15S_UGL 
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15s_ugl";
        displayName = "[TCW] DC-15S (UGL)";
        magazines[] = {"tcw_dc15s_mag"};
        muzzles[] = {"this","EGLM"};
        
        scope = 2;
        class FullAuto : FullAuto {
            reloadTime = 0.1999995;
        };
        class Single : Single {
            reloadTime = 0.102;
        };
        class EGLM : EGLM {
            displayName="[TCW] UGL";
            descriptionShort="Grenade Launcher";
            magazines[] =
            {
                "tcw_HE_LauncherGrenade",
                "tcw_Smoke_LauncherGrenade",
                "tcw_SmokeRed_LauncherGrenade",
                "tcw_SmokeGreen_LauncherGrenade",
                "tcw_SmokeBlue_LauncherGrenade",
                "tcw_SmokePurple_LauncherGrenade",
                "ACE_40mm_Flare_Red",
                "ACE_40mm_Flare_White",
                "ACE_HuntIR_M203"
            };
            magazineWell[] = {};
        };
    };

    // DC15A
    class IDA_DC15A;
    class tcw_dc15a : IDA_DC15A 
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15a";
        displayName = "[TCW] DC-15A";
        magazines[] = {"tcw_dc15a_mag"};
        muzzles[] = {"this","Stun"};
        scope = 2;
        class FullAuto : FullAuto {
            reloadTime = 0.1999995;
        };
        class Single : Single {
            reloadTime = 0.102;
        };
        class Stun : tcw_stun_muzzle {
            displayName = "[TCW] Stun";
        };
    };

    // DC15A UGL
    class IDA_DC15A_UGL;
    class tcw_dc15a_ugl : IDA_DC15A_UGL
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15a_ugl";
        displayName = "[TCW] DC-15A (UGL)";
        magazines[] = {"tcw_dc15a_mag"};
        muzzles[] = {"this","EGLM"};
        scope = 2;
        class FullAuto : FullAuto {
            reloadTime = 0.1999995;
        };
        class Single : Single {
            reloadTime = 0.102;
        };
        class EGLM : EGLM {
            displayName="[TCW] UGL";
            descriptionShort="Grenade Launcher";
            magazines[] =
            {
                "tcw_HE_LauncherGrenade",
                "tcw_Smoke_LauncherGrenade",
                "tcw_SmokeRed_LauncherGrenade",
                "tcw_SmokeGreen_LauncherGrenade",
                "tcw_SmokeBlue_LauncherGrenade",
                "tcw_SmokePurple_LauncherGrenade",
                "ACE_40mm_Flare_Red",
                "ACE_40mm_Flare_White",
                "ACE_HuntIR_M203"
            };
            magazineWell[] = {};
        };
    };

    // DC15S
    class IDA_DC15S;
    class tcw_dc15s : IDA_DC15S
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15s";
        displayName = "[TCW] DC-15S";
        magazines[] = {"tcw_dc15s_mag"};
        muzzles[] = {"this"};
        JLTS_canHaveShield = 1;
        JLTS_shieldedWeapon = "tcw_dc15s_shield";
        scope = 2;
    };
    class JLTS_DC15S_shield;
    class tcw_dc15s_shield: JLTS_DC15S_shield{
        author = "TCW Team";
        BaseWeapon = "tcw_dc15s";
        displayName = "[TCW] DC-15S (Shielded)";
        magazines[] = {"tcw_dc15s_mag"};
        muzzles[] = {"this","Stun"};
        JLTS_isShielded = 1;
        JLTS_baseWeapon = "tcw_dc15s";
        class Stun : tcw_stun_muzzle{
            displayName="[TCW] Stun";
        };
    };

    // DC-15C
    class 3AS_DC15C_F;
    class tcw_dc15c : 3AS_DC15C_F
    {
        author = "TCW Team";
        BaseWeapon = "tcw_dc15c";
        displayName = "[TCW] DC-15C";
        magazines[] = {"tcw_dc15c_mag"};
        magazineWell[] = {};
        muzzles[] = {"this"};
        modes[] = {"FullAuto","Single"};
        scope = 2;
        class FullAuto : FullAuto {
            reloadTime = 0.1;
        };
        class Single : Single {
            reloadTime = 0.1;
        };
    };

    //Westar
    class 3AS_WestarM5_F;
    class tcw_westar: 3AS_WestarM5_F{
        author = "TCW Team";
        BaseWeapon = "tcw_westar";
        displayName = "[TCW] Westar M5";
        magazines[] = {"tcw_westar_mag"};
        muzzles[] = {"this","Stun"};
        scope = 2;
        class Stun : tcw_stun_muzzle{
            displayName="[TCW] Stun";
        };
    };
    class 3AS_WestarM5_GL;
    class tcw_westar_ugl: 3AS_WestarM5_GL{
        author = "TCW Team";
        BaseWeapon = "tcw_westar_ugl";
        displayName = "[TCW] Westar M5 (UGL)";
        magazines[] = {"tcw_westar_mag"};
        muzzles[] = {"this","EGLM"};
        scope = 2;
        class EGLM : EGLM {
            displayName="[TCW] UGL";
            descriptionShort="Grenade Launcher";
            magazines[] =
            {
                "tcw_HE_LauncherGrenade",
                "tcw_Smoke_LauncherGrenade",
                "tcw_SmokeRed_LauncherGrenade",
                "tcw_SmokeGreen_LauncherGrenade",
                "tcw_SmokeBlue_LauncherGrenade",
                "tcw_SmokePurple_LauncherGrenade",
                "ACE_40mm_Flare_Red",
                "ACE_40mm_Flare_White",
                "ACE_HuntIR_M203"
            };
            magazineWell[] = {};
        };
    };


    // DC17M
    class IDA_DC17M;
    class tcw_DC17M : IDA_DC17M {
        author = "TCW Team";
        BaseWeapon = "tcw_DC17M";
        displayName = "[TCW] DC-17M";
        magazines[] = {"tcw_dc17m_standard_mag","tcw_dc17m_AT_mag","tcw_dc17m_SNR_mag"};
        modes[] = {"FullAuto","Burst","Single"};
        scope = 2;
        class FullAuto : FullAuto // Automatic Fire (For standard mag, CQB)
        {
            textureType = "fastAuto";
            dispersion = 0.003;
        };
        class Burst : Single // Single fire, autofire. (For standard mag)
        {
            autoFire = 1;
            reloadTime = 0.25;
            dispersion = 0.001;
            displayName = "Burst";
            textureType = "fullAuto";
        };
        class Single : Single
        {
            dispersion = 0;
        };
    };
};
