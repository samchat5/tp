//
// Generated By: dol2asm
// Translation Unit: d_a_kytag09
//

#include "rel/d/a/kytag/d_a_kytag09/d_a_kytag09.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct kytag09_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_player_status_b_c {
    /* 80032BB0 */ void isDarkClearLV(int) const;
};

struct dKy_tevstr_c {};

struct cXyz {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 8085B9F4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void daKytag09_Draw__FP13kytag09_class();
extern "C" static bool daKytag09_Execute__FP13kytag09_class();
extern "C" static bool daKytag09_IsDelete__FP13kytag09_class();
extern "C" static void daKytag09_Delete__FP13kytag09_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void useHeapInit2__FP10fopAc_ac_c();
extern "C" static void daKytag09_Create__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const d_a_kytag09__stringBase0;

//
// External References:
//

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isDarkClearLV__21dSv_player_status_b_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* ############################################################################################## */
/* 8085BA44-8085BA48 000000 0004+00 1/1 0/0 0/0 .rodata          @3863 */
SECTION_RODATA static u8 const lit_3863[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(8085BA44, &lit_3863);

/* 8085B3F8-8085B5F4 000078 01FC+00 1/0 0/0 0/0 .text            daKytag09_Draw__FP13kytag09_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag09_Draw(kytag09_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Draw__FP13kytag09_class.s"
}
#pragma pop

/* 8085B5F4-8085B5FC 000274 0008+00 1/0 0/0 0/0 .text daKytag09_Execute__FP13kytag09_class */
static bool daKytag09_Execute(kytag09_class* param_0) {
    return true;
}

/* 8085B5FC-8085B604 00027C 0008+00 1/0 0/0 0/0 .text daKytag09_IsDelete__FP13kytag09_class */
static bool daKytag09_IsDelete(kytag09_class* param_0) {
    return true;
}

/* 8085B604-8085B658 000284 0054+00 1/0 0/0 0/0 .text            daKytag09_Delete__FP13kytag09_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag09_Delete(kytag09_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Delete__FP13kytag09_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8085BA48-8085BA4C 000004 0004+00 2/2 0/0 0/0 .rodata          @3906 */
SECTION_RODATA static f32 const lit_3906 = 1.0f;
COMPILER_STRIP_GATE(8085BA48, &lit_3906);

/* 8085BA60-8085BA80 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag09_Method */
SECTION_DATA static void* l_daKytag09_Method[8] = {
    (void*)daKytag09_Create__FP10fopAc_ac_c,
    (void*)daKytag09_Delete__FP13kytag09_class,
    (void*)daKytag09_Execute__FP13kytag09_class,
    (void*)daKytag09_IsDelete__FP13kytag09_class,
    (void*)daKytag09_Draw__FP13kytag09_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8085BA80-8085BAB0 -00001 0030+00 0/2 0/0 1/0 .data            g_profile_KYTAG09 */
SECTION_DATA extern void* g_profile_KYTAG09[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B30000, (void*)&g_fpcLf_Method,
    (void*)0x000005C8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00670000, (void*)&l_daKytag09_Method,
    (void*)0x00060000, (void*)NULL,
};

/* 8085B658-8085B7C0 0002D8 0168+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8085B7C0-8085B894 000440 00D4+00 1/1 0/0 0/0 .text            useHeapInit2__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit2(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/useHeapInit2__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8085BAB0-8085BABC 000050 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8085B894-8085B9F4 000514 0160+00 1/0 0/0 0/0 .text            daKytag09_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag09_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8085B9F4-8085BA3C 000674 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 8085BA4C-8085BA5E 000008 0012+00 4/4 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8085BA4C = "Kytag09";
SECTION_DEAD static char const* const stringBase_8085BA54 = "kytag09_2";
#pragma pop
