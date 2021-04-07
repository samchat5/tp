//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv6Lblock
//

#include "rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80C7341C */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daLv6Lblock_c {
    /* 80C73464 */ void setBaseMtx();
    /* 80C734EC */ void CreateHeap();
    /* 80C73558 */ void create();
    /* 80C736C0 */ void isSwitch();
    /* 80C7370C */ void Execute(f32 (**)[3][4]);
    /* 80C7375C */ void moveBlock();
    /* 80C73850 */ void init_modeWait();
    /* 80C7385C */ void modeWait();
    /* 80C73860 */ void init_modeLiftUp();
    /* 80C7386C */ void modeLiftUp();
    /* 80C7398C */ void init_modeLiftDown();
    /* 80C73998 */ void modeLiftDown();
    /* 80C73AB0 */ void Draw();
    /* 80C73B54 */ void Delete();
};

struct daLv6Lblock_HIO_c {
    /* 80C733EC */ daLv6Lblock_HIO_c();
    /* 80C73C10 */ ~daLv6Lblock_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
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

extern "C" void __ct__17daLv6Lblock_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv6Lblock_cFv();
extern "C" void CreateHeap__13daLv6Lblock_cFv();
extern "C" void create__13daLv6Lblock_cFv();
extern "C" void isSwitch__13daLv6Lblock_cFv();
extern "C" void Execute__13daLv6Lblock_cFPPA3_A4_f();
extern "C" void moveBlock__13daLv6Lblock_cFv();
extern "C" void init_modeWait__13daLv6Lblock_cFv();
extern "C" void modeWait__13daLv6Lblock_cFv();
extern "C" void init_modeLiftUp__13daLv6Lblock_cFv();
extern "C" void modeLiftUp__13daLv6Lblock_cFv();
extern "C" void init_modeLiftDown__13daLv6Lblock_cFv();
extern "C" void modeLiftDown__13daLv6Lblock_cFv();
extern "C" void Draw__13daLv6Lblock_cFv();
extern "C" void Delete__13daLv6Lblock_cFv();
extern "C" static void daLv6Lblock_Draw__FP13daLv6Lblock_c();
extern "C" static void daLv6Lblock_Execute__FP13daLv6Lblock_c();
extern "C" static void daLv6Lblock_Delete__FP13daLv6Lblock_c();
extern "C" static void daLv6Lblock_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv6Lblock_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6Lblock_cpp();
extern "C" extern char const* const d_a_obj_lv6Lblock__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
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
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C73CBC-80C73CC0 000000 0004+00 3/3 0/0 0/0 .rodata          @3627 */
SECTION_RODATA static f32 const lit_3627 = 15.0f;
COMPILER_STRIP_GATE(80C73CBC, &lit_3627);

/* 80C73CE4-80C73CF0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C73CF0-80C73D04 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C73D04-80C73D0C 000020 0008+00 1/1 0/0 0/0 .data            l_liftUpMax */
SECTION_DATA static u8 l_liftUpMax[8] = {
    0x43, 0x96, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};

/* 80C73D0C-80C73D18 -00001 000C+00 0/1 0/0 0/0 .data            @3734 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3734[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daLv6Lblock_cFv,
};
#pragma pop

/* 80C73D18-80C73D24 -00001 000C+00 0/1 0/0 0/0 .data            @3735 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3735[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLiftUp__13daLv6Lblock_cFv,
};
#pragma pop

/* 80C73D24-80C73D30 -00001 000C+00 0/1 0/0 0/0 .data            @3736 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3736[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLiftDown__13daLv6Lblock_cFv,
};
#pragma pop

/* 80C73D30-80C73D54 00004C 0024+00 0/1 0/0 0/0 .data            mode_proc$3733 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C73D54-80C73D74 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv6Lblock_Method */
SECTION_DATA static void* l_daLv6Lblock_Method[8] = {
    (void*)daLv6Lblock_Create__FP10fopAc_ac_c,
    (void*)daLv6Lblock_Delete__FP13daLv6Lblock_c,
    (void*)daLv6Lblock_Execute__FP13daLv6Lblock_c,
    (void*)NULL,
    (void*)daLv6Lblock_Draw__FP13daLv6Lblock_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C73D74-80C73DA4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv6Lblock */
SECTION_DATA extern void* g_profile_Obj_Lv6Lblock[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00970000, (void*)&g_fpcLf_Method,
    (void*)0x000005B8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02710000, (void*)&l_daLv6Lblock_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C73DA4-80C73DCC 0000C0 0028+00 1/1 0/0 0/0 .data            __vt__13daLv6Lblock_c */
SECTION_DATA extern void* __vt__13daLv6Lblock_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daLv6Lblock_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daLv6Lblock_cFPPA3_A4_f,
    (void*)Draw__13daLv6Lblock_cFv,
    (void*)Delete__13daLv6Lblock_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C73DCC-80C73DD8 0000E8 000C+00 2/2 0/0 0/0 .data            __vt__17daLv6Lblock_HIO_c */
SECTION_DATA extern void* __vt__17daLv6Lblock_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daLv6Lblock_HIO_cFv,
};

/* 80C73DD8-80C73DE4 0000F4 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C733EC-80C7341C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__17daLv6Lblock_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6Lblock_HIO_c::daLv6Lblock_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/__ct__17daLv6Lblock_HIO_cFv.s"
}
#pragma pop

/* 80C7341C-80C73464 00011C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C73464-80C734EC 000164 0088+00 2/2 0/0 0/0 .text            setBaseMtx__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/setBaseMtx__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C734EC-80C73558 0001EC 006C+00 1/0 0/0 0/0 .text            CreateHeap__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/CreateHeap__13daLv6Lblock_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C73CC0-80C73CC4 000004 0004+00 1/1 0/0 0/0 .rodata          @3709 */
SECTION_RODATA static f32 const lit_3709 = 300.0f;
COMPILER_STRIP_GATE(80C73CC0, &lit_3709);

/* 80C73558-80C736C0 000258 0168+00 1/1 0/0 0/0 .text            create__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/create__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C736C0-80C7370C 0003C0 004C+00 2/2 0/0 0/0 .text            isSwitch__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::isSwitch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/isSwitch__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C7370C-80C7375C 00040C 0050+00 1/0 0/0 0/0 .text            Execute__13daLv6Lblock_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/Execute__13daLv6Lblock_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C73DF0-80C73DFC 000008 000C+00 1/1 0/0 0/0 .bss             @3621 */
static u8 lit_3621[12];

/* 80C73DFC-80C73E0C 000014 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80C73E0C-80C73E10 000024 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C73E0C[4];

/* 80C7375C-80C73850 00045C 00F4+00 1/1 0/0 0/0 .text            moveBlock__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::moveBlock() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/moveBlock__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C73850-80C7385C 000550 000C+00 3/3 0/0 0/0 .text            init_modeWait__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/init_modeWait__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C7385C-80C73860 00055C 0004+00 1/0 0/0 0/0 .text            modeWait__13daLv6Lblock_cFv */
void daLv6Lblock_c::modeWait() {
    /* empty function */
}

/* 80C73860-80C7386C 000560 000C+00 1/1 0/0 0/0 .text            init_modeLiftUp__13daLv6Lblock_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::init_modeLiftUp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/init_modeLiftUp__13daLv6Lblock_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C73CC4-80C73CC8 000008 0004+00 0/2 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(80C73CC4, &lit_3777);
#pragma pop

/* 80C73CC8-80C73CCC 00000C 0004+00 0/2 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = 5.0f;
COMPILER_STRIP_GATE(80C73CC8, &lit_3778);
#pragma pop

/* 80C73CCC-80C73CD0 000010 0004+00 0/2 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = 1.0f;
COMPILER_STRIP_GATE(80C73CCC, &lit_3779);
#pragma pop

/* 80C73CD0-80C73CD4 000014 0004+00 0/2 0/0 0/0 .rodata          @3780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3780 = -1.0f;
COMPILER_STRIP_GATE(80C73CD0, &lit_3780);
#pragma pop

/* 80C73CD4-80C73CD8 000018 0004+00 0/2 0/0 0/0 .rodata          @3781 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3781[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C73CD4, &lit_3781);
#pragma pop

/* 80C7386C-80C7398C 00056C 0120+00 1/0 0/0 0/0 .text            modeLiftUp__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::modeLiftUp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/modeLiftUp__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C7398C-80C73998 00068C 000C+00 1/1 0/0 0/0 .text init_modeLiftDown__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::init_modeLiftDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/init_modeLiftDown__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C73998-80C73AB0 000698 0118+00 1/0 0/0 0/0 .text            modeLiftDown__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::modeLiftDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/modeLiftDown__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C73AB0-80C73B54 0007B0 00A4+00 1/0 0/0 0/0 .text            Draw__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/Draw__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C73B54-80C73B84 000854 0030+00 1/0 0/0 0/0 .text            Delete__13daLv6Lblock_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6Lblock_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/Delete__13daLv6Lblock_cFv.s"
}
#pragma pop

/* 80C73B84-80C73BB0 000884 002C+00 1/0 0/0 0/0 .text            daLv6Lblock_Draw__FP13daLv6Lblock_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6Lblock_Draw(daLv6Lblock_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/daLv6Lblock_Draw__FP13daLv6Lblock_c.s"
}
#pragma pop

/* 80C73BB0-80C73BD0 0008B0 0020+00 1/0 0/0 0/0 .text daLv6Lblock_Execute__FP13daLv6Lblock_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6Lblock_Execute(daLv6Lblock_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/daLv6Lblock_Execute__FP13daLv6Lblock_c.s"
}
#pragma pop

/* 80C73BD0-80C73BF0 0008D0 0020+00 1/0 0/0 0/0 .text daLv6Lblock_Delete__FP13daLv6Lblock_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6Lblock_Delete(daLv6Lblock_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/daLv6Lblock_Delete__FP13daLv6Lblock_c.s"
}
#pragma pop

/* 80C73BF0-80C73C10 0008F0 0020+00 1/0 0/0 0/0 .text            daLv6Lblock_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv6Lblock_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/daLv6Lblock_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C73C10-80C73C6C 000910 005C+00 2/1 0/0 0/0 .text            __dt__17daLv6Lblock_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6Lblock_HIO_c::~daLv6Lblock_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/__dt__17daLv6Lblock_HIO_cFv.s"
}
#pragma pop

/* 80C73C6C-80C73CA8 00096C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv6Lblock_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv6Lblock_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Lblock/d_a_obj_lv6Lblock/__sinit_d_a_obj_lv6Lblock_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C73C6C = (void*)__sinit_d_a_obj_lv6Lblock_cpp;
#pragma pop

/* 80C73CD8-80C73CE1 00001C 0009+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C73CD8 = "L6Lblock";
#pragma pop
