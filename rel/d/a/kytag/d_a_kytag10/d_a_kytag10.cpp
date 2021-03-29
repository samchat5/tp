//
// Generated By: dol2asm
// Translation Unit: d_a_kytag10
//

#include "rel/d/a/kytag/d_a_kytag10/d_a_kytag10.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag10_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dPath {};

struct dPa_levelEcallBack {};

struct cXyz {};

struct csXyz {};

struct _GXColor {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct JPABaseEmitter {
    /* 8027EC60 */ void deleteAllParticle();
};

//
// Forward References:
//

static void get_rail_ratio_pos(dPath*, int, f32, s16*, s16*);
static void set_path_info(fopAc_ac_c*);
static void get_Extent_pos_start_get(kytag10_class*, dPath*, cXyz*, f32, int*);
static void get_Extent_pos_end_get(kytag10_class*, dPath*, cXyz*, f32, int*);
static void sparks_move(kytag10_class*);
static bool daKytag10_Draw(kytag10_class*);
static void daKytag10_Execute(kytag10_class*);
static bool daKytag10_IsDelete(kytag10_class*);
static void daKytag10_Delete(kytag10_class*);
static void daKytag10_Create(fopAc_ac_c*);

extern "C" static void get_rail_ratio_pos__FP5dPathifPsPs();
extern "C" static void set_path_info__FP10fopAc_ac_c();
extern "C" static void get_Extent_pos_start_get__FP13kytag10_classP5dPathP4cXyzfPi();
extern "C" static void get_Extent_pos_end_get__FP13kytag10_classP5dPathP4cXyzfPi();
extern "C" static void sparks_move__FP13kytag10_class();
extern "C" static bool daKytag10_Draw__FP13kytag10_class();
extern "C" static void daKytag10_Execute__FP13kytag10_class();
extern "C" static bool daKytag10_IsDelete__FP13kytag10_class();
extern "C" static void daKytag10_Delete__FP13kytag10_class();
extern "C" static void daKytag10_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_3971;
extern "C" extern void* g_profile_KYTAG10[12];

//
// External References:
//

void dPath_GetRoomPath(int, int);
void dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*);
void cM_atan2s(f32, f32);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80529400-80529404 0004+00 s=3 e=0 z=0  None .rodata    @3788 */
SECTION_RODATA static u8 const lit_3788[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80528BF8-80528D0C 0114+00 s=1 e=0 z=0  None .text      get_rail_ratio_pos__FP5dPathifPsPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_rail_ratio_pos(dPath* param_0, int param_1, f32 param_2, s16* param_3,
                                   s16* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/get_rail_ratio_pos__FP5dPathifPsPs.s"
}
#pragma pop

/* 80528D0C-80528D54 0048+00 s=1 e=0 z=0  None .text      set_path_info__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void set_path_info(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/set_path_info__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80528D54-80528D64 0010+00 s=1 e=0 z=0  None .text
 * get_Extent_pos_start_get__FP13kytag10_classP5dPathP4cXyzfPi  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_Extent_pos_start_get(kytag10_class* param_0, dPath* param_1, cXyz* param_2,
                                         f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/get_Extent_pos_start_get__FP13kytag10_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* 80528D64-80528D78 0014+00 s=1 e=0 z=0  None .text
 * get_Extent_pos_end_get__FP13kytag10_classP5dPathP4cXyzfPi    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_Extent_pos_end_get(kytag10_class* param_0, dPath* param_1, cXyz* param_2,
                                       f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/get_Extent_pos_end_get__FP13kytag10_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80529404-80529408 0004+00 s=1 e=0 z=0  None .rodata    @3950 */
SECTION_RODATA static u32 const lit_3950 = 0x447A0000;

/* 80529408-80529410 0004+04 s=2 e=0 z=0  None .rodata    @3951 */
SECTION_RODATA static u32 const lit_3951[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 80529410-80529418 0008+00 s=1 e=0 z=0  None .rodata    @3952 */
SECTION_RODATA static u8 const lit_3952[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80529418-80529420 0008+00 s=1 e=0 z=0  None .rodata    @3953 */
SECTION_RODATA static u8 const lit_3953[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80529420-80529428 0008+00 s=1 e=0 z=0  None .rodata    @3954 */
SECTION_RODATA static u8 const lit_3954[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80529428-8052942C 0004+00 s=1 e=0 z=0  None .rodata    @3955 */
SECTION_RODATA static u32 const lit_3955 = 0x437A0000;

/* 8052942C-80529430 0004+00 s=1 e=0 z=0  None .rodata    @3956 */
SECTION_RODATA static u32 const lit_3956 = 0x42C80000;

/* 80529430-80529438 0004+04 s=1 e=0 z=0  None .rodata    @3957 */
SECTION_RODATA static u32 const lit_3957[1 + 1 /* padding */] = {
    0x3FC00000,
    /* padding */
    0x00000000,
};

/* 80529438-80529440 0008+00 s=2 e=0 z=0  None .rodata    @3959 */
SECTION_RODATA static u8 const lit_3959[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80528D78-80529148 03D0+00 s=1 e=0 z=0  None .text      sparks_move__FP13kytag10_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void sparks_move(kytag10_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/sparks_move__FP13kytag10_class.s"
}
#pragma pop

/* 80529148-80529150 0008+00 s=1 e=0 z=0  None .text      daKytag10_Draw__FP13kytag10_class */
static bool daKytag10_Draw(kytag10_class* param_0) {
    return true;
}

/* 80529150-80529174 0024+00 s=1 e=0 z=0  None .text      daKytag10_Execute__FP13kytag10_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag10_Execute(kytag10_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/daKytag10_Execute__FP13kytag10_class.s"
}
#pragma pop

/* 80529174-8052917C 0008+00 s=1 e=0 z=0  None .text      daKytag10_IsDelete__FP13kytag10_class */
static bool daKytag10_IsDelete(kytag10_class* param_0) {
    return true;
}

/* 8052917C-80529248 00CC+00 s=1 e=0 z=0  None .text      daKytag10_Delete__FP13kytag10_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag10_Delete(kytag10_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/daKytag10_Delete__FP13kytag10_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80529440-80529444 0004+00 s=0 e=0 z=0  None .rodata    @3971 */
SECTION_RODATA u32 const lit_3971 = 0xFFFFFFFF;

/* 80529444-80529448 0004+00 s=1 e=0 z=0  None .rodata    @4058 */
SECTION_RODATA static u32 const lit_4058 = 0x3DCCCCCD;

/* 80529248-805293F8 01B0+00 s=1 e=0 z=0  None .text      daKytag10_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag10_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag10/d_a_kytag10/daKytag10_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80529448-80529468 0020+00 s=1 e=0 z=0  None .data      l_daKytag10_Method */
SECTION_DATA static void* l_daKytag10_Method[8] = {
    (void*)daKytag10_Create__FP10fopAc_ac_c,
    (void*)daKytag10_Delete__FP13kytag10_class,
    (void*)daKytag10_Execute__FP13kytag10_class,
    (void*)daKytag10_IsDelete__FP13kytag10_class,
    (void*)daKytag10_Draw__FP13kytag10_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80529468-80529498 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG10 */
SECTION_DATA void* g_profile_KYTAG10[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B40000, (void*)&g_fpcLf_Method,
    (void*)0x0000059C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00680000, (void*)&l_daKytag10_Method,
    (void*)0x00044000, (void*)NULL,
};
