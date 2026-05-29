#include "BaseControls.hpp"
class CfgPatches
{
    class tcw_weapons_recoils
    {
        name = "recoils";
        addonRootClass = "tcw_weapons";
        requiredAddons[] ={};
        units[]={};
        weapons[] ={};
    };
};

class cfgRecoils{
    class Default;
    class ic51_recoil_default: Default{
        kickBack[]={0.029999999,0.059999999};
        muzzleInner[]={0,0,0.1,0.1};
        muzzleOuter[]={0.30000001,1,0.30000001,0.2};
        permanent=0.1;
        temporary=0.0099999998;
    };
    class ic51_recoil_15c: ic51_recoil_default
	{
		muzzleOuter[]={0.1,0.35,0.30000001,0.200000005};
		kickBack[]={0.039999999,0.050000001};
		temporary=0.0099999998;
	};
    class ic51_recoil_15le: ic51_recoil_default
	{
		muzzleOuter[]={0.45,0.45,0.35,0.35};
		kickBack[]={0.039999999,0.050000001};
		temporary=0.0099999998;
	};
};
