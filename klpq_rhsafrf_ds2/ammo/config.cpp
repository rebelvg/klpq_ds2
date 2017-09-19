class CfgPatches {
    class klpq_rhsafrf_ds2_ammo {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            "klpq_rhsafrf_ds2"
        };

        addonRootClass = "A3_Characters_F";
    };
};

class CfgAmmo {
    #include "CfgAmmo.hpp"
};
