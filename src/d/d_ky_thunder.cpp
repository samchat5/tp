//
// Generated By: dol2asm
// Translation Unit: d/d_ky_thunder
//

#include "d/d_ky_thunder.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J3DAnmTevRegKey {};

struct J3DMaterialTable {
    /* 8032F880 */ void removeTevRegAnimator(J3DAnmTevRegKey*);
};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct kankyo_class {};

struct dThunder_c {
    /* 801ADF58 */ void createHeap();
    /* 801ADFB4 */ void adjustHeap();
    /* 801AE458 */ void create();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct cXyz {
    /* 80009184 */ ~cXyz();
};

struct Vec {};

struct Z2EnvSeMgr {
    /* 802C7E68 */ void startFarThunderSe(Vec*, s8);
};

struct JKRSolidHeap {};

struct J3DModelData {};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
};

//
// Forward References:
//

static void dThunder_Draw(dThunder_c*);
static void dThunder_Execute(dThunder_c*);
static bool dThunder_IsDelete(dThunder_c*);
static void dThunder_Delete(dThunder_c*);
static void dThunder_Create(kankyo_class*);

extern "C" void createHeap__10dThunder_cFv();
extern "C" void adjustHeap__10dThunder_cFv();
extern "C" static void dThunder_Draw__FP10dThunder_c();
extern "C" static void dThunder_Execute__FP10dThunder_c();
extern "C" static bool dThunder_IsDelete__FP10dThunder_c();
extern "C" static void dThunder_Delete__FP10dThunder_c();
extern "C" static void dThunder_Create__FP12kankyo_class();
extern "C" void create__10dThunder_cFv();
extern "C" extern char const* const d_d_ky_thunder__stringBase0;
extern "C" extern void* g_profile_KY_THUNDER[10 + 1 /* padding */];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_createSolidHeapFromGameToCurrent(u32, u32);
void mDoExt_adjustSolidHeap(JKRSolidHeap*);
void mDoExt_destroySolidHeap(JKRSolidHeap*);
void mDoExt_restoreCurrentHeap();
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopKyM_Delete(void*);
void dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_targetAngleY(Vec const*, Vec const*);

extern "C" void __dt__4cXyzFv();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FUlUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopKyM_Delete__FPv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void startFarThunderSe__10Z2EnvSeMgrFP3VecSc();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void DCStoreRangeNoSync();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __register_global_object();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" void strcmp();
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 struct_80451070[8];

//
// Declarations:
//

/* 801ADF58-801ADFB4 005C+00 s=1 e=0 z=0  None .text      createHeap__10dThunder_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dThunder_c::createHeap() {
    nofralloc
#include "asm/d/d_ky_thunder/createHeap__10dThunder_cFv.s"
}
#pragma pop

/* 801ADFB4-801AE000 004C+00 s=1 e=0 z=0  None .text      adjustHeap__10dThunder_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dThunder_c::adjustHeap() {
    nofralloc
#include "asm/d/d_ky_thunder/adjustHeap__10dThunder_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8042E7F0-8042E7FC 000C+00 s=1 e=0 z=0  None .bss       @3816 */
static u8 lit_3816[12];

/* 8042E7FC-8042E808 000C+00 s=1 e=0 z=0  None .bss       @3818 */
static u8 lit_3818[12];

/* 8042E808-8042E814 000C+00 s=1 e=0 z=0  None .bss l_offsetPos$localstatic3$draw__10dThunder_cFv
 */
static u8 data_8042E808[12];

/* 8042E814-8042E820 000C+00 s=1 e=0 z=0  None .bss       l_scale$localstatic5$draw__10dThunder_cFv
 */
static u8 data_8042E814[12];

/* 80453E70-80453E74 0004+00 s=2 e=0 z=0  None .sdata2    @3882 */
SECTION_SDATA2 static u8 lit_3882[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80453E74-80453E78 0004+00 s=1 e=0 z=0  None .sdata2    @3883 */
SECTION_SDATA2 static f32 lit_3883 = 40.0f;

/* 80453E78-80453E7C 0004+00 s=1 e=0 z=0  None .sdata2    @3884 */
SECTION_SDATA2 static f32 lit_3884 = -250.0f;

/* 80453E7C-80453E80 0004+00 s=3 e=0 z=0  None .sdata2    @3885 */
SECTION_SDATA2 static f32 lit_3885 = 1.0f;

/* 801AE000-801AE19C 019C+00 s=1 e=0 z=0  None .text      dThunder_Draw__FP10dThunder_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dThunder_Draw(dThunder_c* param_0) {
    nofralloc
#include "asm/d/d_ky_thunder/dThunder_Draw__FP10dThunder_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453E80-80453E84 0004+00 s=2 e=0 z=0  None .sdata2    @3923 */
SECTION_SDATA2 static f32 lit_3923 = 1.0f / 10.0f;

/* 80453E84-80453E88 0004+00 s=1 e=0 z=0  None .sdata2    @3924 */
SECTION_SDATA2 static f32 lit_3924 = 1.0f / 20.0f;

/* 80453E88-80453E8C 0004+00 s=1 e=0 z=0  None .sdata2    @3925 */
SECTION_SDATA2 static f32 lit_3925 = 0.017000000923871994f;

/* 80453E8C-80453E90 0004+00 s=1 e=0 z=0  None .sdata2    @3926 */
SECTION_SDATA2 static f32 lit_3926 = 9.999999747378752e-06f;

/* 80453E90-80453E94 0004+00 s=1 e=0 z=0  None .sdata2    @3927 */
SECTION_SDATA2 static f32 lit_3927 = 60.0f;

/* 80453E94-80453E98 0004+00 s=1 e=0 z=0  None .sdata2    @3928 */
SECTION_SDATA2 static f32 lit_3928 = 1.0f / 100.0f;

/* 80453E98-80453E9C 0004+00 s=1 e=0 z=0  None .sdata2    @3929 */
SECTION_SDATA2 static f32 lit_3929 = 1.0f / 50.0f;

/* 801AE19C-801AE374 01D8+00 s=1 e=0 z=0  None .text      dThunder_Execute__FP10dThunder_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dThunder_Execute(dThunder_c* param_0) {
    nofralloc
#include "asm/d/d_ky_thunder/dThunder_Execute__FP10dThunder_c.s"
}
#pragma pop

/* 801AE374-801AE37C 0008+00 s=1 e=0 z=0  None .text      dThunder_IsDelete__FP10dThunder_c */
static bool dThunder_IsDelete(dThunder_c* param_0) {
    return true;
}

/* 801AE37C-801AE3FC 0080+00 s=1 e=0 z=0  None .text      dThunder_Delete__FP10dThunder_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dThunder_Delete(dThunder_c* param_0) {
    nofralloc
#include "asm/d/d_ky_thunder/dThunder_Delete__FP10dThunder_c.s"
}
#pragma pop

/* 801AE3FC-801AE458 005C+00 s=1 e=0 z=0  None .text      dThunder_Create__FP12kankyo_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dThunder_Create(kankyo_class* param_0) {
    nofralloc
#include "asm/d/d_ky_thunder/dThunder_Create__FP12kankyo_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394F40-80394F50 000E+02 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80394F40 = "Always";
SECTION_DEAD char const* const stringBase_80394F47 = "R_SP30";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80394F4E = "\0";
#pragma pop

/* 80453E9C-80453EA0 0004+00 s=1 e=0 z=0  None .sdata2    @4079 */
SECTION_SDATA2 static f32 lit_4079 = 0.5f;

/* 80453EA0-80453EA4 0004+00 s=1 e=0 z=0  None .sdata2    @4080 */
SECTION_SDATA2 static f32 lit_4080 = 0.25f;

/* 80453EA4-80453EA8 0004+00 s=1 e=0 z=0  None .sdata2    @4081 */
SECTION_SDATA2 static f32 lit_4081 = 14.0f;

/* 80453EA8-80453EAC 0004+00 s=1 e=0 z=0  None .sdata2    @4082 */
SECTION_SDATA2 static f32 lit_4082 = 20.0f;

/* 80453EAC-80453EB0 0004+00 s=1 e=0 z=0  None .sdata2    @4083 */
SECTION_SDATA2 static f32 lit_4083 = 60000.0f;

/* 80453EB0-80453EB4 0004+00 s=1 e=0 z=0  None .sdata2    @4084 */
SECTION_SDATA2 static f32 lit_4084 = -5000.0f;

/* 80453EB4-80453EB8 0004+00 s=1 e=0 z=0  None .sdata2    @4085 */
SECTION_SDATA2 static f32 lit_4085 = 2000.0f;

/* 80453EB8-80453EBC 0004+00 s=1 e=0 z=0  None .sdata2    @4086 */
SECTION_SDATA2 static f32 lit_4086 = 24.0f;

/* 80453EBC-80453EC0 0004+00 s=1 e=0 z=0  None .sdata2    @4087 */
SECTION_SDATA2 static f32 lit_4087 = 2500.0f;

/* 80453EC0-80453EC4 0004+00 s=1 e=0 z=0  None .sdata2    @4088 */
SECTION_SDATA2 static f32 lit_4088 = 6000.0f;

/* 80453EC4-80453EC8 0004+00 s=1 e=0 z=0  None .sdata2    @4089 */
SECTION_SDATA2 static f32 lit_4089 = 3.0f / 20.0f;

/* 80453EC8-80453ED0 0004+04 s=1 e=0 z=0  None .sdata2    @4090 */
SECTION_SDATA2 static f32 lit_4090[1 + 1 /* padding */] = {
    1.0f / 5.0f,
    /* padding */
    0.0f,
};

/* 80453ED0-80453ED8 0008+00 s=1 e=0 z=0  None .sdata2    @4091 */
SECTION_SDATA2 static f64 lit_4091 = 0.5;

/* 80453ED8-80453EDC 0004+00 s=1 e=0 z=0  None .sdata2    @4092 */
SECTION_SDATA2 static f32 lit_4092 = -1.0f;

/* 80453EDC-80453EE0 0004+00 s=1 e=0 z=0  None .sdata2    @4093 */
SECTION_SDATA2 static f32 lit_4093 = 100000.0f;

/* 80453EE0-80453EE4 0004+00 s=1 e=0 z=0  None .sdata2    @4094 */
SECTION_SDATA2 static f32 lit_4094 = 19635.0f;

/* 80453EE4-80453EE8 0004+00 s=1 e=0 z=0  None .sdata2    @4095 */
SECTION_SDATA2 static f32 lit_4095 = 260.0f;

/* 80453EE8-80453EEC 0004+00 s=1 e=0 z=0  None .sdata2    @4096 */
SECTION_SDATA2 static f32 lit_4096 = 4592.0f;

/* 80453EEC-80453EF0 0004+00 s=1 e=0 z=0  None .sdata2    @4097 */
SECTION_SDATA2 static f32 lit_4097 = 1507.0f;

/* 80453EF0-80453EF4 0004+00 s=1 e=0 z=0  None .sdata2    @4098 */
SECTION_SDATA2 static f32 lit_4098 = 100.0f;

/* 80453EF4-80453EF8 0004+00 s=1 e=0 z=0  None .sdata2    @4099 */
SECTION_SDATA2 static f32 lit_4099 = 3.0f / 10.0f;

/* 801AE458-801AE938 04E0+00 s=1 e=0 z=0  None .text      create__10dThunder_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dThunder_c::create() {
    nofralloc
#include "asm/d/d_ky_thunder/create__10dThunder_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BC1D8-803BC1EC 0014+00 s=1 e=0 z=0  None .data      l_dThunder_Method */
SECTION_DATA static void* l_dThunder_Method[5] = {
    (void*)dThunder_Create__FP12kankyo_class, (void*)dThunder_Delete__FP10dThunder_c,
    (void*)dThunder_Execute__FP10dThunder_c,  (void*)dThunder_IsDelete__FP10dThunder_c,
    (void*)dThunder_Draw__FP10dThunder_c,
};

/* 803BC1EC-803BC218 0028+04 s=0 e=0 z=1  None .data      g_profile_KY_THUNDER */
SECTION_DATA void* g_profile_KY_THUNDER[10 + 1 /* padding */] = {
    (void*)0xFFFFFFFD,
    (void*)0x0007FFFD,
    (void*)0x02D90000,
    (void*)&g_fpcLf_Method,
    (void*)0x00000170,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopKy_Method,
    (void*)0x00060000,
    (void*)&l_dThunder_Method,
    /* padding */
    NULL,
};
