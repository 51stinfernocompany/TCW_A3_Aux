class ls_droidBackpack_b1;
class tcw_cis_b1_backpack : ls_droidBackpack_b1
{
    author = "TCW Team";
    displayName = "[TCW] B1 Battle Droid Backpack";
    scope = 2;
    maximumLoad=500;
    class TransportMagazines {
        class _xx_tcw_ThermalDetonator {
            magazine = "tcw_ThermalDetonator";
            count = 3;
        };
        class _xx_tcw_SmokeWhite {
            magazine = "tcw_SmokeWhite";
            count = 2;
        };
        class _xx_FirstAidKit {
            magazine = "FirstAidKit";
            count = 2;
        };
    };
};

class tcw_cis_b1_backpack_at : tcw_cis_b1_backpack
{
    displayName = "[TCW] B1 Battle Droid Backpack (AT)";
    class TransportMagazines {
        class _xx_JLTS_E60R_AT_mag {
            magazine = "JLTS_E60R_AT_mag";
            count = 4;
        };
        class _xx_JLTS_E60R_AP_mag {
            magazine = "JLTS_E60R_AP_mag";
            count = 2;
        };
        class _xx_tcw_SmokeWhite {
            magazine = "tcw_SmokeWhite";
            count = 2;
        };
        class _xx_FirstAidKit {
            magazine = "FirstAidKit";
            count = 2;
        };
    };
};

class ls_droidBackpack_b1_geonosis;
class tcw_cis_b1_backpack_geonosis : ls_droidBackpack_b1_geonosis
{
    displayName = "[TCW] B1 Battle Droid Backpack (Geonosis)";
    author = "TCW Team";
    scope = 2;
    maximumLoad=500;
    class TransportMagazines {
        class _xx_tcw_ThermalDetonator {
            magazine = "tcw_ThermalDetonator";
            count = 3;
        };
        class _xx_tcw_SmokeWhite {
            magazine = "tcw_SmokeWhite";
            count = 2;
        };
        class _xx_FirstAidKit {
            magazine = "FirstAidKit";
            count = 2;
        };
    };
};

//B1
class ls_droid_b1;
class tcw_cis_b1 : ls_droid_b1
{
    author = "TCW Team";
    displayName = "[TCW] B1 Battle Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
    backpack = "tcw_cis_b1_backpack";
    weapons[] = {"tcw_cis_e5","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5","Throw","Put"};
    magazines[] = {"tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
    respawnMagazines[] = {"tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
};

class tcw_cis_b1_heavy : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Heavy)";
    weapons[] = {"tcw_cis_e5c","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5c","Throw","Put"};
};

class tcw_cis_b1_at : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (AT)";
    backpack = "tcw_cis_b1_backpack_at";
    weapons[] = {"tcw_cis_e5","tcw_cis_e60r","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5","tcw_cis_e60r","Throw","Put"};
    magazines[] = {"JLTS_E60R_AT_mag","JLTS_E60R_AT_mag","JLTS_E60R_AT_mag","JLTS_E60R_AP_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
    respawnMagazines[] = {"JLTS_E60R_AT_mag","JLTS_E60R_AT_mag","JLTS_E60R_AT_mag","JLTS_E60R_AP_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
};

class tcw_cis_b1_marksman : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Marksman)";
    weapons[] = {"tcw_cis_e5s","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5s","Throw","Put"};
    magazines[] = {"tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag"};
    respawnMagazines[] = {"tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag"};
};

class tcw_cis_b1_shotgun : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Shotgun)";
    weapons[] = {"tcw_scattergun","Throw","Put"};
    respawnWeapons[] = {"tcw_scattergun","Throw","Put"};
    magazines[] = {"tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet"};
    respawnMagazines[] = {"tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet","tcw_opfor_scattergun_pellet"};
};

class tcw_cis_b1_commander : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Commander)";
    uniformClass = "ls_droidUniform_b1_officer";
    linkedItems[] = {"ls_droidHelmet_b1_officer","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_officer","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_pilot : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Pilot)";
    uniformClass = "ls_droidUniform_b1_pilot";
};

class tcw_cis_b1_crew : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Crew)";
    uniformClass = "ls_droidUniform_b1_crew";
    linkedItems[] = {"ls_droidHelmet_b1_crew","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_crew","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_security : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Security)";
    uniformClass = "ls_droidUniform_b1_security";
};

//Geonosis B1

class tcw_cis_b1_geonosis : tcw_cis_b1
{
    displayName = "[TCW] B1 Battle Droid (Geonosis)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosis";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_geonosis_at : tcw_cis_b1_at
{
    displayName = "[TCW] B1 Battle Droid (Geonosis AT)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosis";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_geonosis_heavy : tcw_cis_b1_heavy
{
    displayName = "[TCW] B1 Battle Droid (Geonosis Heavy)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosis";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_geonosis_marksman : tcw_cis_b1_marksman
{
    displayName = "[TCW] B1 Battle Droid (Geonosis Marksman)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosis";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_geonosis_shotgun : tcw_cis_b1_shotgun
{
    displayName = "[TCW] B1 Battle Droid (Geonosis Shotgun)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosis";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_b1_geonosis_commander : tcw_cis_b1_commander
{
    displayName = "[TCW] B1 Battle Droid (Geonosis Commander)";
    editorSubcategory = "tcw_cis_battledroids_geo";
    uniformClass = "ls_droidUniform_b1_geonosisOfficer";
    backpack = "tcw_cis_b1_backpack_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosisOfficer","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosisOfficer","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

//B2

class WBK_LS_B2;
class tcw_cis_b2 : WBK_LS_B2
{
    author = "TCW Team";
    displayName = "[TCW] B2 Super Battle Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
};

//BX

class WBK_LS_BX;
class tcw_cis_bx : WBK_LS_BX
{
    author = "TCW Team";
    displayName = "[TCW] BX Commando Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
    weapons[] = {"tcw_cis_e5","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5","Throw","Put"};
    magazines[] = {"tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
    respawnMagazines[] = {"tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag","tcw_cis_e5_mag"};
};

class tcw_cis_bx_captain : tcw_cis_bx
{
    displayName = "[TCW] BX Commando Droid (Captain)";
    uniformClass = "ls_droidUniform_bx_captain";
    linkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_bx_assassin : tcw_cis_bx
{
    displayName = "[TCW] BX Assassin Droid";
    weapons[] = {"tcw_cis_e5s","Throw","Put"};
    respawnWeapons[] = {"tcw_cis_e5s","Throw","Put"};
    magazines[] = {"tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag"};
    respawnMagazines[] = {"tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag","tcw_cis_e5s_mag"};
};

class tcw_cis_bx_diplomat : tcw_cis_bx
{
    displayName = "[TCW] BX Diplomat Droid";
    uniformClass = "ls_droidUniform_bx_diplomat";
    linkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_cis_bx_security : tcw_cis_bx
{
    displayName = "[TCW] BX Security Droid";
    uniformClass = "ls_droidUniform_bx_security";
    linkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
    respawnLinkedItems[] = {"ls_droidVest_bx","ItemMap","ItemCompass","ItemWatch","ls_radios_dcs"};
};

class tcw_clone_unit;
class tcw_dc15a;
class tcw_dc15a_mag;
class tcw_cis_bx_clone : tcw_clone_unit
{
    displayName = "[TCW] BX Commando Droid (Clone Disguise)";
    scope = 2;
    faction = "tcw_opfor_cis";
    side = 0;
    editorSubcategory = "tcw_cis_battledroids";
    identityTypes[] = {"LanguageENG_F", "ls_head_bxDroid"};
    weapons[] = {"tcw_dc15a","Throw","Put"};
    respawnWeapons[] = {"tcw_dc15a","Throw","Put"};
    magazines[] = {"tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag"};
    respawnMagazines[] = {"tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag","tcw_dc15a_mag"};
};

//Droideka

class ls_droid_droideka;
class ls_droid_droideka_noShield;
class tcw_cis_droideka : ls_droid_droideka
{
    author = "TCW Team";
    displayName = "[TCW] Droideka";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
};

class tcw_cis_droideka_noShield : ls_droid_droideka_noShield
{
    author = "TCW Team";
    displayName = "[TCW] Droideka (No Shield)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
};

//T-Series
class 3AS_CIS_TS_F;
class tcw_cis_tseries : 3AS_CIS_TS_F
{
    author = "TCW Team";
    displayName = "[TCW] T-Series Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_battledroids";
};


//VEHICLES

//Air Vehicles
class TextureSources;
class 3AS_CIS_Vulture_F;
class tcw_cis_vulture : 3AS_CIS_Vulture_F
{
    author = "TCW Team";
    displayName = "[TCW] Vulture Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_air";
    textureList[] = {"CIS",1,"TradeFedTan",0};
    class TextureSources: TextureSources
    {
        class CIS
        {
            author = "3rd Army Studios";
            displayName = "CIS";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3as\3as_vulture\data\VultureDroid_CO.paa"};
        };
        class TradeFedTan
        {
            author = "3rd Army Studios";
            displayName = "Trade Federation Tan";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3as\3as_vulture\data\VultureDroid_TradeFederation_Tan_CO.paa"};
        };
    };
};

class tcw_cis_vulture_tan : tcw_cis_vulture
{
    displayName = "[TCW] Vulture Droid (Tan)";
    textureList[] = {"CIS",0,"TradeFedTan",1};
};

class 3AS_CIS_Vulture_AA_F;
class tcw_cis_vulture_aa : 3AS_CIS_Vulture_AA_F
{
    author = "TCW Team";
    displayName = "[TCW] Vulture Droid AA";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_air";
    textureList[] = {"CIS",1,"TradeFedTan",0};
    class TextureSources: TextureSources
    {
        class CIS
        {
            author = "3rd Army Studios";
            displayName = "CIS";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3as\3as_vulture\data\VultureDroid_CO.paa"};
        };
        class TradeFedTan
        {
            author = "3rd Army Studios";
            displayName = "Trade Federation Tan";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3as\3as_vulture\data\VultureDroid_TradeFederation_Tan_CO.paa"};
        };
    };
};

class tcw_cis_vulture_aa_tan : tcw_cis_vulture_aa
{
    displayName = "[TCW] Vulture Droid AA (Tan)";
    textureList[] = {"CIS",0,"TradeFedTan",1};
};

class 3AS_Tri_Fighter_DynamicLoadout;
class tcw_cis_trifighter : 3AS_Tri_Fighter_DynamicLoadout
{
    author = "TCW Team";
    displayName = "[TCW] Tri-fighter Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_air";
};

class 3AS_HMP_Gunship;
class tcw_cis_hmp_gunship : 3AS_HMP_Gunship
{
    author = "TCW Team";
    displayName = "[TCW] HMP Gunship";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_air";
    crew = "tcw_cis_b1_pilot";
};

class 3AS_HMP_Transport;
class tcw_cis_hmp_transport : 3AS_HMP_Gunship
{
    author = "TCW Team";
    displayName = "[TCW] HMP Transport";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_air";
    crew = "tcw_cis_b1_pilot";
};

//Ground Vehicles

class 3AS_AAT;
class tcw_cis_aat : 3AS_AAT
{
    author = "TCW Team";
    displayName = "[TCW] AAT";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
    textureList[] = {"CIS",1,"Tan",0};
    class TextureSources: TextureSources
    {
        class CIS
        {
            author = "3rd Army Studios";
            displayName = "CIS";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
        };
        class Tan
        {
            author = "3rd Army Studios";
            displayName = "Trade Federation";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
        };
    };
};

class tcw_cis_aat_tan : tcw_cis_aat
{
    displayName = "[TCW] AAT (Tan)";
    textureList[] = {"CIS",0,"Tan",1};
};

class 3AS_AAT_Red;
class tcw_cis_heavy_aat : 3AS_AAT_Red
{
    author = "TCW Team";
    displayName = "[TCW] Heavy AAT";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
    textureList[] = {"CIS",1,"Tan",0};
    class TextureSources: TextureSources
    {
        class CIS
        {
            author = "3rd Army Studios";
            displayName = "CIS";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
        };
        class Tan
        {
            author = "3rd Army Studios";
            displayName = "Trade Federation";
            factions[] = {"tcw_opfor_cis"};
            textures[] = {"3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
        };
    };
};

class 3AS_Advanced_DSD;
class tcw_cis_adv_dsd : 3AS_Advanced_DSD
{
    author = "TCW Team";
    displayName = "[TCW] Advanced DSD";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Heavy_AAT_Flamer_F;
class tcw_cis_flamer : 3AS_Heavy_AAT_Flamer_F
{
    author = "TCW Team";
    displayName = "[TCW] Flamer Tank";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Heavy_AAT_Defoliator_F;
class tcw_cis_defoliator : 3AS_Heavy_AAT_Defoliator_F
{
    author = "TCW Team";
    displayName = "[TCW] Defoliator Tank";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_GAT;
class tcw_cis_gat : 3AS_GAT
{
    author = "TCW Team";
    displayName = "[TCW] GAT";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
};

class 3AS_GAT_Light;
class tcw_cis_gat_light : 3AS_GAT_Light
{
    author = "TCW Team";
    displayName = "[TCW] GAT Light";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
};

class 3AS_Hailfire_AT;
class tcw_cis_hailfire_at : 3AS_Hailfire_AT
{
    author = "TCW Team";
    displayName = "[TCW] Hailfire Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Hailfire_SAM;
class tcw_cis_hailfire_aa : 3AS_Hailfire_SAM
{
    author = "TCW Team";
    displayName = "[TCW] Hailfire Droid (AA)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Hailfire_Rocket;
class tcw_cis_hailfire_rocket : 3AS_Hailfire_Rocket
{
    author = "TCW Team";
    displayName = "[TCW] Hailfire Droid (Rocket Artillery)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_HAGM_CIS;
class tcw_cis_hagm : 3AS_HAGM_CIS
{
    author = "TCW Team";
    displayName = "[TCW] HAG-M Artillery Tank";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_HAGM_Tan;
class tcw_cis_hagm_tan : 3AS_HAGM_Tan
{
    author = "TCW Team";
    displayName = "[TCW] HAG-M Artillery Tank (Tan)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_MTT;
class tcw_cis_mtt : 3AS_MTT
{
    author = "TCW Team";
    displayName = "[TCW] MTT";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_MTT_tan;
class tcw_cis_mtt_tan : 3AS_MTT_tan
{
    author = "TCW Team";
    displayName = "[TCW] MTT (Trade Federation)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Octuptarra_Torpedo_F;
class tcw_cis_octuptarra_torpedo : 3AS_Octuptarra_Torpedo_F
{
    author = "TCW Team";
    displayName = "[TCW] Octuptarra Magna Tri-Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Octuptarra_Static_Torpedo_F;
class tcw_cis_octuptarra_torpedo_static : 3AS_Octuptarra_Static_Torpedo_F
{
    author = "TCW Team";
    displayName = "[TCW] Octuptarra Magna Tri-Droid (Static)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Octuptarra_Magna_F;
class tcw_cis_octuptarra_magna : 3AS_Octuptarra_Magna_F
{
    author = "TCW Team";
    displayName = "[TCW] Octuptarra Tri-Droid";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Octuptarra_Static_Magna_F;
class tcw_cis_octuptarra_magna_static : 3AS_Octuptarra_Static_Magna_F
{
    author = "TCW Team";
    displayName = "[TCW] Octuptarra Tri-Droid (Static)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_SAC_F;
class tcw_cis_sac : 3AS_SAC_F
{
    author = "TCW Team";
    displayName = "[TCW] Squad Attack Craft";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_SAC_Tan;
class tcw_cis_sac_tan : 3AS_SAC_Tan
{
    author = "TCW Team";
    displayName = "[TCW] Squad Attack Craft (Tan)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_PAC_F;
class tcw_cis_pac : 3AS_PAC_F
{
    author = "TCW Team";
    displayName = "[TCW] Platoon Assault Craft";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_PAC_Tan;
class tcw_cis_pac_tan : 3AS_PAC_Tan
{
    author = "TCW Team";
    displayName = "[TCW] Platoon Assault Craft (Tan)";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_Combat_Speeder_F;
class tcw_cis_speeder_bx : 3AS_Combat_Speeder_F
{
    author = "TCW Team";
    displayName = "[TCW] Combat Speeder";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_bx";
};

//Turrets

class 3AS_CIS_Mortar;
class tcw_cis_mortar : 3AS_CIS_Mortar
{
    author = "TCW Team";
    displayName = "[TCW] CIS Mortar";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1_crew";
};

class 3AS_J10s_F;
class tcw_cis_j10s : 3AS_J10s_F
{
    author = "TCW Team";
    displayName = "[TCW] J10s Blaster Turret";
    scope = 2;
    faction = "tcw_opfor_cis";
    editorSubcategory = "tcw_cis_vehicles_ground";
    crew = "tcw_cis_b1";
};
