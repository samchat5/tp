//
// Generated By: dol2asm
// Translation Unit: d_a_obj_digplace
//

#include "rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct daPy_py_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
};

struct daObjDigpl_c {
    /* 8057BF98 */ void create();
    /* 8057C158 */ ~daObjDigpl_c();
    /* 8057C1EC */ void execute();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct _GXColor {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    /* 8004D1B8 */ void setSimple(u16, cXyz const*, dKy_tevstr_c const*, u8, _GXColor const&,
                                  _GXColor const&, int, f32);
};

struct csXyz {};

//
// Forward References:
//

static void daObjDigpl_Create(fopAc_ac_c*);
static void daObjDigpl_Delete(daObjDigpl_c*);
static void daObjDigpl_Execute(daObjDigpl_c*);
static bool daObjDigpl_Draw(daObjDigpl_c*);

extern "C" void create__12daObjDigpl_cFv();
extern "C" static void daObjDigpl_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daObjDigpl_cFv();
extern "C" static void daObjDigpl_Delete__FP12daObjDigpl_c();
extern "C" void execute__12daObjDigpl_cFv();
extern "C" static void daObjDigpl_Execute__FP12daObjDigpl_c();
extern "C" static bool daObjDigpl_Draw__FP12daObjDigpl_c();
extern "C" extern void* g_profile_Obj_Digpl[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_seenActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ2(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_createItemFromTable(cXyz const*, int, int, int, csXyz const*, int, cXyz const*, f32*,
                                f32*, bool);
void fopAcM_createItem(cXyz const*, int, int, int, csXyz const*, cXyz const*, int);
void dPath_GetRoomPath(int, int);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_seenActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_25();
extern "C" void _restgpr_25();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_max;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8057C8B0-8057C8B4 0004+00 s=2 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA static u32 const lit_3822 = 0xC4098000;

/* 8057C8B4-8057C8B8 0004+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0xC37A0000;

/* 8057C8B8-8057C8BC 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0x44098000;

/* 8057C8BC-8057C8C0 0004+00 s=1 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA static u32 const lit_3825 = 0x437A0000;

/* 8057C8F8-8057C918 0020+00 s=1 e=0 z=0  None .data      l_daObjDigpl_Method */
SECTION_DATA static void* l_daObjDigpl_Method[8] = {
    (void*)daObjDigpl_Create__FP10fopAc_ac_c,
    (void*)daObjDigpl_Delete__FP12daObjDigpl_c,
    (void*)daObjDigpl_Execute__FP12daObjDigpl_c,
    (void*)NULL,
    (void*)daObjDigpl_Draw__FP12daObjDigpl_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8057C918-8057C948 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Digpl */
SECTION_DATA void* g_profile_Obj_Digpl[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00530000, (void*)&g_fpcLf_Method,
    (void*)0x000005C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00FA0000, (void*)&l_daObjDigpl_Method,
    (void*)0x00044080, (void*)0x030E0000,
};

/* 8057C948-8057C954 000C+00 s=2 e=0 z=0  None .data      __vt__12daObjDigpl_c */
SECTION_DATA static void* __vt__12daObjDigpl_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12daObjDigpl_cFv,
};

/* 8057BF98-8057C138 01A0+00 s=1 e=0 z=0  None .text      create__12daObjDigpl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDigpl_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/create__12daObjDigpl_cFv.s"
}
#pragma pop

/* 8057C138-8057C158 0020+00 s=1 e=0 z=0  None .text      daObjDigpl_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjDigpl_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/daObjDigpl_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8057C158-8057C1B8 0060+00 s=1 e=0 z=0  None .text      __dt__12daObjDigpl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjDigpl_c::~daObjDigpl_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/__dt__12daObjDigpl_cFv.s"
}
#pragma pop

/* 8057C1B8-8057C1EC 0034+00 s=1 e=0 z=0  None .text      daObjDigpl_Delete__FP12daObjDigpl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjDigpl_Delete(daObjDigpl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/daObjDigpl_Delete__FP12daObjDigpl_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8057C8C0-8057C8C4 0004+00 s=1 e=0 z=0  None .rodata    @4023 */
SECTION_RODATA static u32 const lit_4023 = 0x41F00000;

/* 8057C8C4-8057C8C8 0004+00 s=1 e=0 z=0  None .rodata    @4024 */
SECTION_RODATA static u32 const lit_4024 = 0x47C35000;

/* 8057C8C8-8057C8D0 0004+04 s=1 e=0 z=0  None .rodata    @4025 */
SECTION_RODATA static u8 const lit_4025[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8057C8D0-8057C8D8 0008+00 s=1 e=0 z=0  None .rodata    @4026 */
SECTION_RODATA static u8 const lit_4026[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8057C8D8-8057C8E0 0008+00 s=1 e=0 z=0  None .rodata    @4027 */
SECTION_RODATA static u8 const lit_4027[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8057C8E0-8057C8E8 0008+00 s=1 e=0 z=0  None .rodata    @4028 */
SECTION_RODATA static u8 const lit_4028[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8057C8E8-8057C8EC 0004+00 s=1 e=0 z=0  None .rodata    @4029 */
SECTION_RODATA static u32 const lit_4029 = 0x447A0000;

/* 8057C8EC-8057C8F0 0004+00 s=1 e=0 z=0  None .rodata    @4030 */
SECTION_RODATA static u32 const lit_4030 = 0x43480000;

/* 8057C8F0-8057C8F4 0004+00 s=1 e=0 z=0  None .rodata    @4031 */
SECTION_RODATA static u32 const lit_4031 = 0x44C80000;

/* 8057C8F4-8057C8F8 0004+00 s=1 e=0 z=0  None .rodata    @4032 */
SECTION_RODATA static u32 const lit_4032 = 0x48742400;

/* 8057C1EC-8057C880 0694+00 s=1 e=0 z=0  None .text      execute__12daObjDigpl_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjDigpl_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/execute__12daObjDigpl_cFv.s"
}
#pragma pop

/* 8057C880-8057C8A0 0020+00 s=1 e=0 z=0  None .text      daObjDigpl_Execute__FP12daObjDigpl_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjDigpl_Execute(daObjDigpl_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_digplace/d_a_obj_digplace/daObjDigpl_Execute__FP12daObjDigpl_c.s"
}
#pragma pop

/* 8057C8A0-8057C8A8 0008+00 s=1 e=0 z=0  None .text      daObjDigpl_Draw__FP12daObjDigpl_c */
static bool daObjDigpl_Draw(daObjDigpl_c* param_0) {
    return true;
}
