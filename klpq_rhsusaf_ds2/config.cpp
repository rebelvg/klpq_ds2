class CfgPatches {
    class klpq_rhsusaf_ds2 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            "klpq_arma3_ds2",
            #include "rhs_addons.hpp"
        };

        addonRootClass = "A3_Characters_F";
    };
};

class CfgAmmo {
    class RocketBase;
    class B_12Gauge_Slug;

    class rhs_ammo_12g_FRAG: B_12Gauge_Slug {
        SoundSetExplosion[] = {"DS_Ex_small_impact_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
    };
    class rhs_ammo_smaw_SR: RocketBase {
        SoundSetExplosion[] = {};
    };
};
