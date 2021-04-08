//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4HsTarget
//

#include "rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80C5F648 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daLv4HsTarget_c {
    /* 80C5F690 */ void setBaseMtx();
    /* 80C5F718 */ void CreateHeap();
    /* 80C5F784 */ void create();
    /* 80C5F85C */ void Execute(f32 (**)[3][4]);
    /* 80C5F870 */ void Draw();
    /* 80C5F8D4 */ void Delete();
};

struct daLv4HsTarget_HIO_c {
    /* 80C5F62C */ daLv4HsTarget_HIO_c();
    /* 80C5F990 */ ~daLv4HsTarget_HIO_c();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

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

extern "C" void __ct__19daLv4HsTarget_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__15daLv4HsTarget_cFv();
extern "C" void CreateHeap__15daLv4HsTarget_cFv();
extern "C" void create__15daLv4HsTarget_cFv();
extern "C" void Execute__15daLv4HsTarget_cFPPA3_A4_f();
extern "C" void Draw__15daLv4HsTarget_cFv();
extern "C" void Delete__15daLv4HsTarget_cFv();
extern "C" static void daLv4HsTarget_Draw__FP15daLv4HsTarget_c();
extern "C" static void daLv4HsTarget_Execute__FP15daLv4HsTarget_c();
extern "C" static void daLv4HsTarget_Delete__FP15daLv4HsTarget_c();
extern "C" static void daLv4HsTarget_Create__FP10fopAc_ac_c();
extern "C" void __dt__19daLv4HsTarget_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv4HsTarget_cpp();
extern "C" extern char const* const d_a_obj_lv4HsTarget__stringBase0;

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
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C5FA48-80C5FA68 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv4HsTarget_Method */
SECTION_DATA static void* l_daLv4HsTarget_Method[8] = {
    (void*)daLv4HsTarget_Create__FP10fopAc_ac_c,
    (void*)daLv4HsTarget_Delete__FP15daLv4HsTarget_c,
    (void*)daLv4HsTarget_Execute__FP15daLv4HsTarget_c,
    (void*)NULL,
    (void*)daLv4HsTarget_Draw__FP15daLv4HsTarget_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C5FA68-80C5FA98 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv4HsTarget */
SECTION_DATA extern void* g_profile_Obj_Lv4HsTarget[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x009F0000, (void*)&g_fpcLf_Method,
    (void*)0x000005AC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02800000, (void*)&l_daLv4HsTarget_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C5FA98-80C5FAC0 000050 0028+00 1/1 0/0 0/0 .data            __vt__15daLv4HsTarget_c */
SECTION_DATA extern void* __vt__15daLv4HsTarget_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daLv4HsTarget_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__15daLv4HsTarget_cFPPA3_A4_f,
    (void*)Draw__15daLv4HsTarget_cFv,
    (void*)Delete__15daLv4HsTarget_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C5FAC0-80C5FACC 000078 000C+00 2/2 0/0 0/0 .data            __vt__19daLv4HsTarget_HIO_c */
SECTION_DATA extern void* __vt__19daLv4HsTarget_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19daLv4HsTarget_HIO_cFv,
};

/* 80C5FACC-80C5FAD8 000084 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C5F62C-80C5F648 0000EC 001C+00 1/1 0/0 0/0 .text            __ct__19daLv4HsTarget_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4HsTarget_HIO_c::daLv4HsTarget_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/__ct__19daLv4HsTarget_HIO_cFv.s"
}
#pragma pop

/* 80C5F648-80C5F690 000108 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C5F690-80C5F718 000150 0088+00 1/1 0/0 0/0 .text            setBaseMtx__15daLv4HsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/setBaseMtx__15daLv4HsTarget_cFv.s"
}
#pragma pop

/* 80C5F718-80C5F784 0001D8 006C+00 1/0 0/0 0/0 .text            CreateHeap__15daLv4HsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/CreateHeap__15daLv4HsTarget_cFv.s"
}
#pragma pop

/* 80C5F784-80C5F85C 000244 00D8+00 1/1 0/0 0/0 .text            create__15daLv4HsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/create__15daLv4HsTarget_cFv.s"
}
#pragma pop

/* 80C5F85C-80C5F870 00031C 0014+00 1/0 0/0 0/0 .text Execute__15daLv4HsTarget_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/Execute__15daLv4HsTarget_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C5F870-80C5F8D4 000330 0064+00 1/0 0/0 0/0 .text            Draw__15daLv4HsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/Draw__15daLv4HsTarget_cFv.s"
}
#pragma pop

/* 80C5F8D4-80C5F904 000394 0030+00 1/0 0/0 0/0 .text            Delete__15daLv4HsTarget_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4HsTarget_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/Delete__15daLv4HsTarget_cFv.s"
}
#pragma pop

/* 80C5F904-80C5F930 0003C4 002C+00 1/0 0/0 0/0 .text daLv4HsTarget_Draw__FP15daLv4HsTarget_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4HsTarget_Draw(daLv4HsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/daLv4HsTarget_Draw__FP15daLv4HsTarget_c.s"
}
#pragma pop

/* 80C5F930-80C5F950 0003F0 0020+00 1/0 0/0 0/0 .text daLv4HsTarget_Execute__FP15daLv4HsTarget_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4HsTarget_Execute(daLv4HsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/daLv4HsTarget_Execute__FP15daLv4HsTarget_c.s"
}
#pragma pop

/* 80C5F950-80C5F970 000410 0020+00 1/0 0/0 0/0 .text daLv4HsTarget_Delete__FP15daLv4HsTarget_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4HsTarget_Delete(daLv4HsTarget_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/daLv4HsTarget_Delete__FP15daLv4HsTarget_c.s"
}
#pragma pop

/* 80C5F970-80C5F990 000430 0020+00 1/0 0/0 0/0 .text daLv4HsTarget_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4HsTarget_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/daLv4HsTarget_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C5F990-80C5F9EC 000450 005C+00 2/1 0/0 0/0 .text            __dt__19daLv4HsTarget_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4HsTarget_HIO_c::~daLv4HsTarget_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/__dt__19daLv4HsTarget_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C5FAE0-80C5FAEC 000008 000C+00 1/1 0/0 0/0 .bss             @3618 */
static u8 lit_3618[12];

/* 80C5FAEC-80C5FAF0 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80C5F9EC-80C5FA28 0004AC 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv4HsTarget_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv4HsTarget_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4HsTarget/d_a_obj_lv4HsTarget/__sinit_d_a_obj_lv4HsTarget_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C5F9EC = (void*)__sinit_d_a_obj_lv4HsTarget_cpp;
#pragma pop

/* 80C5FA3C-80C5FA48 000000 0009+03 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C5FA3C = "L4HsMato";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80C5FA45 = "\0\0";
#pragma pop
