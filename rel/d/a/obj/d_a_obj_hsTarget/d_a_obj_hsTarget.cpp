//
// Generated By: dol2asm
// Translation Unit: d_a_obj_hsTarget
//

#include "rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80C1F448 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daHsTarget_c {
    /* 80C1F490 */ void setBaseMtx();
    /* 80C1F518 */ void CreateHeap();
    /* 80C1F598 */ void create();
    /* 80C1F6B0 */ void Execute(f32 (**)[3][4]);
    /* 80C1F6C4 */ void Draw();
    /* 80C1F728 */ void Delete();
};

struct daHsTarget_HIO_c {
    /* 80C1F42C */ daHsTarget_HIO_c();
    /* 80C1F7F4 */ ~daHsTarget_HIO_c();
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

struct dBgW {};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__16daHsTarget_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daHsTarget_cFv();
extern "C" void CreateHeap__12daHsTarget_cFv();
extern "C" void create__12daHsTarget_cFv();
extern "C" void Execute__12daHsTarget_cFPPA3_A4_f();
extern "C" void Draw__12daHsTarget_cFv();
extern "C" void Delete__12daHsTarget_cFv();
extern "C" static void daHsTarget_Draw__FP12daHsTarget_c();
extern "C" static void daHsTarget_Execute__FP12daHsTarget_c();
extern "C" static void daHsTarget_Delete__FP12daHsTarget_c();
extern "C" static void daHsTarget_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daHsTarget_HIO_cFv();
extern "C" void __sinit_d_a_obj_hsTarget_cpp();
extern "C" extern char const* const d_a_obj_hsTarget__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C1F8C0-80C1F8C8 -00001 0008+00 3/3 0/0 0/0 .data            l_resNameIdx */
SECTION_DATA static void* l_resNameIdx[2] = {
    (void*)&d_a_obj_hsTarget__stringBase0,
    (void*)(((char*)&d_a_obj_hsTarget__stringBase0) + 0x7),
};

/* 80C1F8C8-80C1F8E8 -00001 0020+00 1/0 0/0 0/0 .data            l_daHsTarget_Method */
SECTION_DATA static void* l_daHsTarget_Method[8] = {
    (void*)daHsTarget_Create__FP10fopAc_ac_c,
    (void*)daHsTarget_Delete__FP12daHsTarget_c,
    (void*)daHsTarget_Execute__FP12daHsTarget_c,
    (void*)NULL,
    (void*)daHsTarget_Draw__FP12daHsTarget_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C1F8E8-80C1F918 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_HsTarget */
SECTION_DATA extern void* g_profile_Obj_HsTarget[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x003C0000, (void*)&g_fpcLf_Method,
    (void*)0x000005B0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01F50000, (void*)&l_daHsTarget_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C1F918-80C1F940 000058 0028+00 1/1 0/0 0/0 .data            __vt__12daHsTarget_c */
SECTION_DATA extern void* __vt__12daHsTarget_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daHsTarget_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daHsTarget_cFPPA3_A4_f,
    (void*)Draw__12daHsTarget_cFv,
    (void*)Delete__12daHsTarget_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C1F940-80C1F94C 000080 000C+00 2/2 0/0 0/0 .data            __vt__16daHsTarget_HIO_c */
SECTION_DATA extern void* __vt__16daHsTarget_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daHsTarget_HIO_cFv,
};

/* 80C1F94C-80C1F958 00008C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C1F42C-80C1F448 0000EC 001C+00 1/1 0/0 0/0 .text            __ct__16daHsTarget_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daHsTarget_HIO_c::daHsTarget_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/__ct__16daHsTarget_HIO_cFv.s"
}
#pragma pop

/* 80C1F448-80C1F490 000108 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C1F490-80C1F518 000150 0088+00 1/1 0/0 0/0 .text            setBaseMtx__12daHsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/setBaseMtx__12daHsTarget_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1F8A0-80C1F8A8 000000 0008+00 1/1 0/0 0/0 .rodata          l_bmdIdx */
SECTION_RODATA static u8 const l_bmdIdx[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(80C1F8A0, &l_bmdIdx);

/* 80C1F518-80C1F598 0001D8 0080+00 1/0 0/0 0/0 .text            CreateHeap__12daHsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/CreateHeap__12daHsTarget_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1F8A8-80C1F8B0 000008 0008+00 1/1 0/0 0/0 .rodata          l_dzbIdx */
SECTION_RODATA static u8 const l_dzbIdx[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(80C1F8A8, &l_dzbIdx);

/* 80C1F598-80C1F6B0 000258 0118+00 1/1 0/0 0/0 .text            create__12daHsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/create__12daHsTarget_cFv.s"
}
#pragma pop

/* 80C1F6B0-80C1F6C4 000370 0014+00 1/0 0/0 0/0 .text            Execute__12daHsTarget_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/Execute__12daHsTarget_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C1F6C4-80C1F728 000384 0064+00 1/0 0/0 0/0 .text            Draw__12daHsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/Draw__12daHsTarget_cFv.s"
}
#pragma pop

/* 80C1F728-80C1F768 0003E8 0040+00 1/0 0/0 0/0 .text            Delete__12daHsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daHsTarget_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/Delete__12daHsTarget_cFv.s"
}
#pragma pop

/* 80C1F768-80C1F794 000428 002C+00 1/0 0/0 0/0 .text            daHsTarget_Draw__FP12daHsTarget_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daHsTarget_Draw(daHsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/daHsTarget_Draw__FP12daHsTarget_c.s"
}
#pragma pop

/* 80C1F794-80C1F7B4 000454 0020+00 1/0 0/0 0/0 .text daHsTarget_Execute__FP12daHsTarget_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daHsTarget_Execute(daHsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/daHsTarget_Execute__FP12daHsTarget_c.s"
}
#pragma pop

/* 80C1F7B4-80C1F7D4 000474 0020+00 1/0 0/0 0/0 .text            daHsTarget_Delete__FP12daHsTarget_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daHsTarget_Delete(daHsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/daHsTarget_Delete__FP12daHsTarget_c.s"
}
#pragma pop

/* 80C1F7D4-80C1F7F4 000494 0020+00 1/0 0/0 0/0 .text            daHsTarget_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daHsTarget_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/daHsTarget_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C1F7F4-80C1F850 0004B4 005C+00 2/1 0/0 0/0 .text            __dt__16daHsTarget_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daHsTarget_HIO_c::~daHsTarget_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/__dt__16daHsTarget_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1F960-80C1F96C 000008 000C+00 1/1 0/0 0/0 .bss             @3621 */
static u8 lit_3621[12];

/* 80C1F96C-80C1F970 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80C1F850-80C1F88C 000510 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_hsTarget_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_hsTarget_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hsTarget/d_a_obj_hsTarget/__sinit_d_a_obj_hsTarget_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C1F850 = (void*)__sinit_d_a_obj_hsTarget_cpp;
#pragma pop

/* 80C1F8B0-80C1F8C0 000010 0010+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C1F8B0 = "hsMato";
SECTION_DEAD static char const* const stringBase_80C1F8B7 = "L7HsMato";
#pragma pop
