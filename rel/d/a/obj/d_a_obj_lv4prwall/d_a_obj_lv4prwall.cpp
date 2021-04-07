//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4prwall
//

#include "rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjLv4PRwall_c {
    /* 80C68C98 */ void create1st();
    /* 80C68DD8 */ void setMtx();
    /* 80C68F20 */ void CreateHeap();
    /* 80C68FA0 */ void Create();
    /* 80C690D8 */ void Execute(f32 (**)[3][4]);
    /* 80C696BC */ void Draw();
    /* 80C69760 */ void Delete();
    /* 80C69870 */ ~daObjLv4PRwall_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

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

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void create1st__16daObjLv4PRwall_cFv();
extern "C" void setMtx__16daObjLv4PRwall_cFv();
extern "C" void CreateHeap__16daObjLv4PRwall_cFv();
extern "C" void Create__16daObjLv4PRwall_cFv();
extern "C" static void searchObjSwTurn__FPvPv();
extern "C" void Execute__16daObjLv4PRwall_cFPPA3_A4_f();
extern "C" void Draw__16daObjLv4PRwall_cFv();
extern "C" void Delete__16daObjLv4PRwall_cFv();
extern "C" static void daObjLv4PRwall_create1st__FP16daObjLv4PRwall_c();
extern "C" static void daObjLv4PRwall_MoveBGDelete__FP16daObjLv4PRwall_c();
extern "C" static void daObjLv4PRwall_MoveBGExecute__FP16daObjLv4PRwall_c();
extern "C" static void daObjLv4PRwall_MoveBGDraw__FP16daObjLv4PRwall_c();
extern "C" void __dt__16daObjLv4PRwall_cFv();
extern "C" extern char const* const d_a_obj_lv4prwall__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndFX__Ff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C698E8-80C698F4 000000 000C+00 2/2 0/0 0/0 .rodata          l_dzbidx */
SECTION_RODATA static u8 const l_dzbidx[12] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(80C698E8, &l_dzbidx);

/* 80C69990-80C6999C -00001 000C+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[3] = {
    (void*)&d_a_obj_lv4prwall__stringBase0,
    (void*)(((char*)&d_a_obj_lv4prwall__stringBase0) + 0xA),
    (void*)(((char*)&d_a_obj_lv4prwall__stringBase0) + 0x12),
};

/* 80C68C98-80C68DD8 000078 0140+00 1/1 0/0 0/1 .text            create1st__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/create1st__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C698F4-80C69900 00000C 000C+00 1/1 0/0 0/0 .rodata          l_bmdidx */
SECTION_RODATA static u8 const l_bmdidx[12] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(80C698F4, &l_bmdidx);

/* 80C69900-80C69948 000018 0048+00 1/1 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[72] = {
    0xC4, 0xC8, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0xC4, 0xC8, 0x00, 0x00, 0x44, 0xC8, 0x00,
    0x00, 0x44, 0xB3, 0xB6, 0x66, 0x44, 0xC8, 0x00, 0x00, 0xC4, 0x89, 0x81, 0x48, 0xC2, 0x70,
    0x00, 0x00, 0xC4, 0x89, 0x90, 0x00, 0x44, 0x89, 0x80, 0x00, 0x44, 0xAF, 0x00, 0x00, 0x44,
    0x89, 0x90, 0x00, 0xC4, 0x89, 0x87, 0x5C, 0xC3, 0x48, 0x33, 0x33, 0xC4, 0x89, 0x87, 0x5C,
    0x44, 0x89, 0x87, 0x5C, 0x44, 0x7A, 0x2C, 0xCD, 0x44, 0x89, 0x87, 0x5C,
};
COMPILER_STRIP_GATE(80C69900, &l_cull_box);

/* 80C69948-80C6994C 000060 0004+00 1/1 0/0 0/0 .rodata          @3688 */
SECTION_RODATA static u32 const lit_3688 = 0x3C800000;
COMPILER_STRIP_GATE(80C69948, &lit_3688);

/* 80C6994C-80C69950 000064 0004+00 1/1 0/0 0/0 .rodata          @3689 */
SECTION_RODATA static f32 const lit_3689 = 2.0f;
COMPILER_STRIP_GATE(80C6994C, &lit_3689);

/* 80C69950-80C69958 000068 0008+00 1/1 0/0 0/0 .rodata          @3691 */
SECTION_RODATA static u8 const lit_3691[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C69950, &lit_3691);

/* 80C68DD8-80C68F20 0001B8 0148+00 3/3 0/0 0/0 .text            setMtx__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/setMtx__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* 80C68F20-80C68FA0 000300 0080+00 1/0 0/0 0/0 .text            CreateHeap__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/CreateHeap__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C69958-80C6995C 000070 0004+00 1/2 0/0 0/0 .rodata          @3713 */
SECTION_RODATA static u8 const lit_3713[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C69958, &lit_3713);

/* 80C68FA0-80C69064 000380 00C4+00 1/0 0/0 0/0 .text            Create__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/Create__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* 80C69064-80C690D8 000444 0074+00 1/1 0/0 0/0 .text            searchObjSwTurn__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void searchObjSwTurn(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/searchObjSwTurn__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6995C-80C69960 000074 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = -2.0f;
COMPILER_STRIP_GATE(80C6995C, &lit_3959);
#pragma pop

/* 80C69960-80C69964 000078 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 1.0f;
COMPILER_STRIP_GATE(80C69960, &lit_3960);
#pragma pop

/* 80C69964-80C69968 00007C 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = -1.0f;
COMPILER_STRIP_GATE(80C69964, &lit_3961);
#pragma pop

/* 80C69968-80C6996C 000080 0004+00 0/1 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 0.5f;
COMPILER_STRIP_GATE(80C69968, &lit_3962);
#pragma pop

/* 80C6996C-80C69970 000084 0004+00 0/1 0/0 0/0 .rodata          @3963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3963 = -1.0f / 5.0f;
COMPILER_STRIP_GATE(80C6996C, &lit_3963);
#pragma pop

/* 80C69970-80C69974 000088 0004+00 0/1 0/0 0/0 .rodata          @3964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3964 = 20.0f;
COMPILER_STRIP_GATE(80C69970, &lit_3964);
#pragma pop

/* 80C690D8-80C696BC 0004B8 05E4+00 1/0 0/0 0/0 .text Execute__16daObjLv4PRwall_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/Execute__16daObjLv4PRwall_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C696BC-80C69760 000A9C 00A4+00 1/0 0/0 0/0 .text            Draw__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/Draw__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* 80C69760-80C697A4 000B40 0044+00 1/0 0/0 0/0 .text            Delete__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLv4PRwall_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/Delete__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6999C-80C699BC -00001 0020+00 1/0 0/0 0/0 .data            daObjLv4PRwall_METHODS */
SECTION_DATA static void* daObjLv4PRwall_METHODS[8] = {
    (void*)daObjLv4PRwall_create1st__FP16daObjLv4PRwall_c,
    (void*)daObjLv4PRwall_MoveBGDelete__FP16daObjLv4PRwall_c,
    (void*)daObjLv4PRwall_MoveBGExecute__FP16daObjLv4PRwall_c,
    (void*)NULL,
    (void*)daObjLv4PRwall_MoveBGDraw__FP16daObjLv4PRwall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C699BC-80C699EC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv4PRwall */
SECTION_DATA extern void* g_profile_Obj_Lv4PRwall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00D00000, (void*)&g_fpcLf_Method,
    (void*)0x0000062C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02A00000, (void*)&daObjLv4PRwall_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C699EC-80C69A18 00005C 002C+00 2/2 0/0 0/0 .data            __vt__16daObjLv4PRwall_c */
SECTION_DATA extern void* __vt__16daObjLv4PRwall_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16daObjLv4PRwall_cFv,
    (void*)Create__16daObjLv4PRwall_cFv,
    (void*)Execute__16daObjLv4PRwall_cFPPA3_A4_f,
    (void*)Draw__16daObjLv4PRwall_cFv,
    (void*)Delete__16daObjLv4PRwall_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__16daObjLv4PRwall_cFv,
};

/* 80C697A4-80C69804 000B84 0060+00 1/0 0/0 0/0 .text
 * daObjLv4PRwall_create1st__FP16daObjLv4PRwall_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv4PRwall_create1st(daObjLv4PRwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/daObjLv4PRwall_create1st__FP16daObjLv4PRwall_c.s"
}
#pragma pop

/* 80C69804-80C69824 000BE4 0020+00 1/0 0/0 0/0 .text
 * daObjLv4PRwall_MoveBGDelete__FP16daObjLv4PRwall_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv4PRwall_MoveBGDelete(daObjLv4PRwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/daObjLv4PRwall_MoveBGDelete__FP16daObjLv4PRwall_c.s"
}
#pragma pop

/* 80C69824-80C69844 000C04 0020+00 1/0 0/0 0/0 .text
 * daObjLv4PRwall_MoveBGExecute__FP16daObjLv4PRwall_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv4PRwall_MoveBGExecute(daObjLv4PRwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/daObjLv4PRwall_MoveBGExecute__FP16daObjLv4PRwall_c.s"
}
#pragma pop

/* 80C69844-80C69870 000C24 002C+00 1/0 0/0 0/0 .text
 * daObjLv4PRwall_MoveBGDraw__FP16daObjLv4PRwall_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjLv4PRwall_MoveBGDraw(daObjLv4PRwall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/daObjLv4PRwall_MoveBGDraw__FP16daObjLv4PRwall_c.s"
}
#pragma pop

/* 80C69870-80C698E0 000C50 0070+00 1/0 0/0 0/0 .text            __dt__16daObjLv4PRwall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjLv4PRwall_c::~daObjLv4PRwall_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4prwall/d_a_obj_lv4prwall/__dt__16daObjLv4PRwall_cFv.s"
}
#pragma pop

/* 80C69974-80C69990 00008C 001C+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C69974 = "PRWallR09";
SECTION_DEAD static char const* const stringBase_80C6997E = "P_Rwall";
SECTION_DEAD static char const* const stringBase_80C69986 = "PRWallR04";
#pragma pop
