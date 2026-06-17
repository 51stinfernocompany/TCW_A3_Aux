class CfgAmmo {
    class IDA_Blasterbolt_Power3_Red;
    class tcw_cis_e5_ammo : IDA_Blasterbolt_Power3_Red
    {
        author = "TCW Team";
        ACE_damageType = "bullet";
        ACE_caliber = 9.042;
        ACE_muzzleVelocities[] = {380,390,420,435};
        caliber = 0.869565;
        coefGravity = 0.01;
        hit = 5;
        explosive = 0.1;
        typicalSpeed = 380;
    };

    class IDA_Blasterbolt_Power5_Red;
    class tcw_cis_e5s_ammo : IDA_Blasterbolt_Power5_Red
    {
        author = "TCW Team";
        ACE_damageType = "bullet";
        caliber = 2.4;
        coefGravity = 0.01;
        cost = 7;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        explosive = 0;
        hit = 24;
        suppressionRadiusBulletClose = 6;
        suppressionRadiusHit = 8;
        typicalSpeed = 910;
    };

};

class CfgMagazines {
    class IDA_Blaster_Cell_Power3_40Rnd_Red;
    class tcw_cis_e5_mag : IDA_Blaster_Cell_Power3_40Rnd_Red
    {
        author = "TCW Team";
        BaseWeapon = "tcw_cis_e5_mag";
        displayName = "[TCW] E-5 Blaster Carbine Magazine";
        displayNameShort = "E-5 Magazine";
        descriptionShort = "40 round capacity.";
        ammo = "tcw_cis_e5_ammo";
        count = 40;
        scope = 2;
    };

    class IDA_Blaster_Cell_Power3_60Rnd_Red;
    class tcw_cis_e5c_mag : IDA_Blaster_Cell_Power3_60Rnd_Red
    {
        author = "TCW Team";
        BaseWeapon = "tcw_cis_e5c_mag";
        displayName = "[TCW] E-5C Blaster Rifle Magazine";
        displayNameShort = "E-5C Magazine";
        descriptionShort = "60 round capacity.";
        ammo = "tcw_cis_e5_ammo";
        count = 60;
        scope = 2;
    };

    class IDA_Blaster_Cell_Power5_5Rnd_Red;
    class tcw_cis_e5s_mag : IDA_Blaster_Cell_Power5_5Rnd_Red
    {
        author = "TCW Team";
        BaseWeapon = "tcw_cis_e5s_mag";
        displayName = "[TCW] E-5S Targeting Blaster Magazine";
        displayNameShort = "E-5S Magazine";
        descriptionShort = "5 round capacity.";
        ammo = "tcw_cis_e5s_ammo";
        count = 5;
        scope = 2;
    };
};
