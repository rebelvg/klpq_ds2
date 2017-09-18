class CfgPatches {
    class klpq_cup_ds2 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            "klpq_arma3_ds2",
            "CUP_Weapons_Ammunition"
        };

        addonRootClass = "A3_Characters_F";
    };
};

class CfgAmmo {
    class BulletBase;
    class RocketBase;

    class CUP_B_19mm_HE: BulletBase {
        SoundSetExplosion[] = {"DS_Ex_small_impact_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
    };
    class CUP_R_SMAW_Spotting: RocketBase {
        SoundSetExplosion[] = {};
    };
};
