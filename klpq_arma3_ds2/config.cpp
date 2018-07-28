class CfgPatches {
    class klpq_arma3_ds2 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
        requiredAddons[] = {
            #include "a3_addons.hpp"
            "DynaSound_DS_Main",
            "DynaSound_DS_m_Explosions"
        };

        addonRootClass = "A3_Characters_F";
    };
};

class CfgAmmo {
    class Default;
    class GrenadeCore;
    class MissileCore;
    class RocketCore;
    class ShellCore;
    class PipeBombCore;
    class MineCore;

    class GrenadeBase: GrenadeCore {
        SoundSetExplosion[] = {"DS_Ex_Grenade_SoundSet","DS_Grenade_ExploTail_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
    };
    class MissileBase: MissileCore {
        SoundSetExplosion[] = {"DS_Ex_rocket_small_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
    };
    class RocketBase: RocketCore {
        SoundSetExplosion[] = {"DS_Ex_rocket_small_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
    };
    class ShellBase: ShellCore {
        SoundSetExplosion[] = {"DS_Ex_rocket_big_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
    };
    class PipeBombBase: PipeBombCore {
        SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
    };
    class MineBase: MineCore {
        SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
    };

    class FuelExplosion: Default {
        soundHit[] = {"LAxemann\DynaSound\addons\DS_m_explosions\sounds\vehicle_explos\tank_explo_1",8.2622776,1,2000};
        soundHit1[] = {"LAxemann\DynaSound\addons\DS_m_explosions\sounds\vehicle_explos\tank_explo_1",8.2622776,1,2000};
        soundHit2[] = {"LAxemann\DynaSound\addons\DS_m_explosions\sounds\vehicle_explos\tank_explo_2",8.2622776,1,2000};
        soundHit3[] = {"LAxemann\DynaSound\addons\DS_m_explosions\sounds\vehicle_explos\tank_explo_3",8.2622776,1,2000};
        multiSoundHit[] = {"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.34};

        delete SoundSetExplosion;
    };

    class ammo_Penetrator_Base: ShellBase {
        SoundSetExplosion[] = {};
    };

    class HelicopterExploSmall: ShellBase {
        delete SoundSetExplosion;
    };

    class HelicopterExploBig: HelicopterExploSmall {
        delete SoundSetExplosion;
    };

    class SmallSecondary: HelicopterExploSmall {
        delete SoundSetExplosion;
    };
};

class CfgSoundShaders {
    class DS_rocket_big_0m_SoundShader {
        samples[] = {{"LAxemann\DynaSound\addons\DS_m_explosions\sounds\rocket_big\0m_1",1},{"LAxemann\DynaSound\addons\DS_m_explosions\sounds\rocket_big\0m_2",1}};
    };
};
