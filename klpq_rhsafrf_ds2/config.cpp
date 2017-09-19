class CfgPatches {
    class klpq_rhsafrf_ds2 {
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
