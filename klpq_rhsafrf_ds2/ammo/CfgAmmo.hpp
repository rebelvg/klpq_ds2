class rhs_ammo_s8;
class Missile_AGM_02_F;
class rhs_ammo_kh29l;
class rhs_ammo_s13b: rhs_ammo_s8 {
    SoundSetExplosion[] = {"DS_Ex_rocket_small_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
};
class rhs_ammo_kh29_base: Missile_AGM_02_F {
    SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
};
class rhs_ammo_kh55sm: rhs_ammo_kh29l {
    SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
};
class rhs_ammo_s24_base: rhs_ammo_s13b {
    SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
};
class RHS_9M79_1_F: rhs_ammo_kh29_base {
    SoundSetExplosion[] = {"DS_Ex_heavy_impact_1_SoundSet","DS_exploBig_Tail_placeholder_SoundSet"};
};
