//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crvhahen
//

#include "rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {
    /* 80BD36E4 */ ~cXyz();
    /* 80BD3FDC */ cXyz();
};

struct csXyz {
    /* 80BD3F9C */ ~csXyz();
    /* 80BD3FD8 */ csXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF0C */ void ZXYrotS(csXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjCRVHAHEN_c {
    /* 80BD342C */ void HahenSet(cXyz, cXyz, cXyz, cXyz, f32);
    /* 80BD3628 */ void Wall_Check(cXyz, cXyz);
    /* 80BD3720 */ void Hahen_Hakai(int, int);
    /* 80BD38DC */ void CheckCull();
    /* 80BD3A9C */ void checkViewArea(cXyz*);
    /* 80BD3B20 */ void Execute();
    /* 80BD3B74 */ void Delete();
    /* 80BD3C0C */ void setBaseMtx();
    /* 80BD3DBC */ void create();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct J3DModel {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
};

struct Vec {};

//
// Forward References:
//

extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObjCRVHAHEN_Create__FP10fopAc_ac_c();
extern "C" static void daObjCRVHAHEN_Delete__FP15daObjCRVHAHEN_c();
extern "C" void HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf();
extern "C" void Wall_Check__15daObjCRVHAHEN_cF4cXyz4cXyz();
extern "C" void __dt__4cXyzFv();
extern "C" void Hahen_Hakai__15daObjCRVHAHEN_cFii();
extern "C" void CheckCull__15daObjCRVHAHEN_cFv();
extern "C" void checkViewArea__15daObjCRVHAHEN_cFP4cXyz();
extern "C" void Execute__15daObjCRVHAHEN_cFv();
extern "C" void Delete__15daObjCRVHAHEN_cFv();
extern "C" void setBaseMtx__15daObjCRVHAHEN_cFv();
extern "C" static void daObjCRVHAHEN_Draw__FP15daObjCRVHAHEN_c();
extern "C" static void daObjCRVHAHEN_Execute__FP15daObjCRVHAHEN_c();
extern "C" void create__15daObjCRVHAHEN_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjCRVHAHEN_IsDelete__FP15daObjCRVHAHEN_c();
extern "C" extern char const* const d_a_obj_crvhahen__stringBase0;
extern "C" extern void* g_profile_Obj_CRVHAHEN[12];

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareDistance();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80BD4064-80BD4068 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_crvhahen__stringBase0;

/* 80BD3338-80BD33E8 000078 00B0+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BD33E8-80BD3408 000128 0020+00 1/0 0/0 0/0 .text daObjCRVHAHEN_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVHAHEN_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/daObjCRVHAHEN_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BD3408-80BD342C 000148 0024+00 1/0 0/0 0/0 .text daObjCRVHAHEN_Delete__FP15daObjCRVHAHEN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVHAHEN_Delete(daObjCRVHAHEN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/daObjCRVHAHEN_Delete__FP15daObjCRVHAHEN_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3FF0-80BD3FF4 000000 0004+00 5/5 0/0 0/0 .rodata          @3703 */
SECTION_RODATA static f32 const lit_3703 = 0.5f;
COMPILER_STRIP_GATE(80BD3FF0, &lit_3703);

/* 80BD3FF4-80BD3FF8 000004 0004+00 0/1 0/0 0/0 .rodata          @3704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3704 = 1.0f;
COMPILER_STRIP_GATE(80BD3FF4, &lit_3704);
#pragma pop

/* 80BD3FF8-80BD3FFC 000008 0004+00 0/1 0/0 0/0 .rodata          @3705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3705 = 5000.0f;
COMPILER_STRIP_GATE(80BD3FF8, &lit_3705);
#pragma pop

/* 80BD3FFC-80BD4000 00000C 0004+00 0/1 0/0 0/0 .rodata          @3706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3706 = 65536.0f;
COMPILER_STRIP_GATE(80BD3FFC, &lit_3706);
#pragma pop

/* 80BD342C-80BD3628 00016C 01FC+00 0/0 0/0 2/2 .text
 * HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::HahenSet(cXyz param_0, cXyz param_1, cXyz param_2, cXyz param_3,
                                   f32 param_4) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf.s"
}
#pragma pop

/* 80BD3628-80BD36E4 000368 00BC+00 1/1 0/0 0/0 .text Wall_Check__15daObjCRVHAHEN_cF4cXyz4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::Wall_Check(cXyz param_0, cXyz param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/Wall_Check__15daObjCRVHAHEN_cF4cXyz4cXyz.s"
}
#pragma pop

/* 80BD36E4-80BD3720 000424 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD4000-80BD4004 000010 0004+00 0/2 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3773 = -9.0f;
COMPILER_STRIP_GATE(80BD4000, &lit_3773);
#pragma pop

/* 80BD4004-80BD4008 000014 0004+00 0/1 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3774 = 13.0f;
COMPILER_STRIP_GATE(80BD4004, &lit_3774);
#pragma pop

/* 80BD4008-80BD400C 000018 0004+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = -3.0f / 5.0f;
COMPILER_STRIP_GATE(80BD4008, &lit_3775);
#pragma pop

/* 80BD400C-80BD4010 00001C 0004+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(80BD400C, &lit_3776);
#pragma pop

/* 80BD3720-80BD38DC 000460 01BC+00 1/1 0/0 0/0 .text            Hahen_Hakai__15daObjCRVHAHEN_cFii
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::Hahen_Hakai(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/Hahen_Hakai__15daObjCRVHAHEN_cFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD4010-80BD4018 000020 0004+04 0/2 0/0 0/0 .rodata          @3836 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3836[4 + 4 /* padding */] = {
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
COMPILER_STRIP_GATE(80BD4010, &lit_3836);
#pragma pop

/* 80BD4018-80BD4020 000028 0008+00 0/1 0/0 0/0 .rodata          @3837 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3837[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BD4018, &lit_3837);
#pragma pop

/* 80BD4020-80BD4028 000030 0008+00 0/1 0/0 0/0 .rodata          @3838 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3838[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BD4020, &lit_3838);
#pragma pop

/* 80BD4028-80BD4030 000038 0008+00 0/1 0/0 0/0 .rodata          @3839 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3839[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80BD4028, &lit_3839);
#pragma pop

/* 80BD38DC-80BD3A9C 00061C 01C0+00 1/1 0/0 0/0 .text            CheckCull__15daObjCRVHAHEN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::CheckCull() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/CheckCull__15daObjCRVHAHEN_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD4030-80BD4034 000040 0004+00 0/1 0/0 0/0 .rodata          @3852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3852 = 608.0f;
COMPILER_STRIP_GATE(80BD4030, &lit_3852);
#pragma pop

/* 80BD4034-80BD4038 000044 0004+00 0/1 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853 = 448.0f;
COMPILER_STRIP_GATE(80BD4034, &lit_3853);
#pragma pop

/* 80BD3A9C-80BD3B20 0007DC 0084+00 1/1 0/0 0/0 .text checkViewArea__15daObjCRVHAHEN_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::checkViewArea(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/checkViewArea__15daObjCRVHAHEN_cFP4cXyz.s"
}
#pragma pop

/* 80BD3B20-80BD3B74 000860 0054+00 1/1 0/0 0/0 .text            Execute__15daObjCRVHAHEN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/Execute__15daObjCRVHAHEN_cFv.s"
}
#pragma pop

/* 80BD3B74-80BD3C0C 0008B4 0098+00 1/1 0/0 0/0 .text            Delete__15daObjCRVHAHEN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/Delete__15daObjCRVHAHEN_cFv.s"
}
#pragma pop

/* 80BD3C0C-80BD3CA0 00094C 0094+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjCRVHAHEN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/setBaseMtx__15daObjCRVHAHEN_cFv.s"
}
#pragma pop

/* 80BD3CA0-80BD3D9C 0009E0 00FC+00 1/0 0/0 0/0 .text daObjCRVHAHEN_Draw__FP15daObjCRVHAHEN_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVHAHEN_Draw(daObjCRVHAHEN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/daObjCRVHAHEN_Draw__FP15daObjCRVHAHEN_c.s"
}
#pragma pop

/* 80BD3D9C-80BD3DBC 000ADC 0020+00 2/1 0/0 0/0 .text daObjCRVHAHEN_Execute__FP15daObjCRVHAHEN_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVHAHEN_Execute(daObjCRVHAHEN_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/daObjCRVHAHEN_Execute__FP15daObjCRVHAHEN_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD4038-80BD403C 000048 0004+00 0/1 0/0 0/0 .rodata          @3993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3993 = -1000.0f;
COMPILER_STRIP_GATE(80BD4038, &lit_3993);
#pragma pop

/* 80BD403C-80BD4040 00004C 0004+00 0/1 0/0 0/0 .rodata          @3994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3994 = -500.0f;
COMPILER_STRIP_GATE(80BD403C, &lit_3994);
#pragma pop

/* 80BD4040-80BD4044 000050 0004+00 0/1 0/0 0/0 .rodata          @3995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3995 = 1000.0f;
COMPILER_STRIP_GATE(80BD4040, &lit_3995);
#pragma pop

/* 80BD4044-80BD4048 000054 0004+00 0/1 0/0 0/0 .rodata          @3996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3996 = 500.0f;
COMPILER_STRIP_GATE(80BD4044, &lit_3996);
#pragma pop

/* 80BD3DBC-80BD3F9C 000AFC 01E0+00 1/1 0/0 0/0 .text            create__15daObjCRVHAHEN_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVHAHEN_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/create__15daObjCRVHAHEN_cFv.s"
}
#pragma pop

/* 80BD3F9C-80BD3FD8 000CDC 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvhahen/d_a_obj_crvhahen/__dt__5csXyzFv.s"
}
#pragma pop

/* 80BD3FD8-80BD3FDC 000D18 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80BD3FDC-80BD3FE0 000D1C 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BD3FE0-80BD3FE8 000D20 0008+00 1/0 0/0 0/0 .text daObjCRVHAHEN_IsDelete__FP15daObjCRVHAHEN_c
 */
static bool daObjCRVHAHEN_IsDelete(daObjCRVHAHEN_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BD4068-80BD4088 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCRVHAHEN_Method */
SECTION_DATA static void* l_daObjCRVHAHEN_Method[8] = {
    (void*)daObjCRVHAHEN_Create__FP10fopAc_ac_c,
    (void*)daObjCRVHAHEN_Delete__FP15daObjCRVHAHEN_c,
    (void*)daObjCRVHAHEN_Execute__FP15daObjCRVHAHEN_c,
    (void*)daObjCRVHAHEN_IsDelete__FP15daObjCRVHAHEN_c,
    (void*)daObjCRVHAHEN_Draw__FP15daObjCRVHAHEN_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BD4088-80BD40B8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_CRVHAHEN */
SECTION_DATA extern void* g_profile_Obj_CRVHAHEN[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00710000, (void*)&g_fpcLf_Method,
    (void*)0x00000794, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D40000, (void*)&l_daObjCRVHAHEN_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80BD4048-80BD4062 000058 001A+00 4/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BD4048 = "CrvFence";
SECTION_DEAD static char const* const stringBase_80BD4051 = "CaravanPiece.bmd";
#pragma pop
