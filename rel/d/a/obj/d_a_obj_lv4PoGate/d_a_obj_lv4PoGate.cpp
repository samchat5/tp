//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4PoGate
//

#include "rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80C5FC5C */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daLv4PoGate_c {
    /* 80C5FCA4 */ void setBaseMtx();
    /* 80C5FD40 */ void CreateHeap();
    /* 80C5FDAC */ void create();
    /* 80C5FEDC */ void Execute(f32 (**)[3][4]);
    /* 80C5FF2C */ void moveGate();
    /* 80C60090 */ void init_modeWait();
    /* 80C6009C */ void modeWait();
    /* 80C600A0 */ void init_modeMoveOpen();
    /* 80C60150 */ void modeMoveOpen();
    /* 80C60200 */ void init_modeMoveClose();
    /* 80C602B0 */ void modeMoveClose();
    /* 80C6031C */ void init_modeMoveCloseWait();
    /* 80C60338 */ void modeMoveCloseWait();
    /* 80C60370 */ void init_modeMoveClose2();
    /* 80C6037C */ void modeMoveClose2();
    /* 80C603E0 */ void init_modeMoveClose2Wait();
    /* 80C603FC */ void modeMoveClose2Wait();
    /* 80C60434 */ void init_modeMoveClose3();
    /* 80C60450 */ void modeMoveClose3();
    /* 80C604D8 */ void setSe();
    /* 80C60534 */ void setEffect(int);
    /* 80C605F8 */ void Draw();
    /* 80C6069C */ void Delete();
};

struct daLv4PoGate_HIO_c {
    /* 80C5FBEC */ daLv4PoGate_HIO_c();
    /* 80C60758 */ ~daLv4PoGate_HIO_c();
};

struct cXyz {};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
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

struct dPa_levelEcallBack {};

struct _GXColor {};

struct csXyz {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dBgW {};

struct cBgS_PolyInfo {};

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
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__17daLv4PoGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daLv4PoGate_cFv();
extern "C" void CreateHeap__13daLv4PoGate_cFv();
extern "C" void create__13daLv4PoGate_cFv();
extern "C" void Execute__13daLv4PoGate_cFPPA3_A4_f();
extern "C" void moveGate__13daLv4PoGate_cFv();
extern "C" void init_modeWait__13daLv4PoGate_cFv();
extern "C" void modeWait__13daLv4PoGate_cFv();
extern "C" void init_modeMoveOpen__13daLv4PoGate_cFv();
extern "C" void modeMoveOpen__13daLv4PoGate_cFv();
extern "C" void init_modeMoveClose__13daLv4PoGate_cFv();
extern "C" void modeMoveClose__13daLv4PoGate_cFv();
extern "C" void init_modeMoveCloseWait__13daLv4PoGate_cFv();
extern "C" void modeMoveCloseWait__13daLv4PoGate_cFv();
extern "C" void init_modeMoveClose2__13daLv4PoGate_cFv();
extern "C" void modeMoveClose2__13daLv4PoGate_cFv();
extern "C" void init_modeMoveClose2Wait__13daLv4PoGate_cFv();
extern "C" void modeMoveClose2Wait__13daLv4PoGate_cFv();
extern "C" void init_modeMoveClose3__13daLv4PoGate_cFv();
extern "C" void modeMoveClose3__13daLv4PoGate_cFv();
extern "C" void setSe__13daLv4PoGate_cFv();
extern "C" void setEffect__13daLv4PoGate_cFi();
extern "C" void Draw__13daLv4PoGate_cFv();
extern "C" void Delete__13daLv4PoGate_cFv();
extern "C" static void daLv4PoGate_Draw__FP13daLv4PoGate_c();
extern "C" static void daLv4PoGate_Execute__FP13daLv4PoGate_c();
extern "C" static void daLv4PoGate_Delete__FP13daLv4PoGate_c();
extern "C" static void daLv4PoGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daLv4PoGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv4PoGate_cpp();
extern "C" extern char const* const d_a_obj_lv4PoGate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
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
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
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
/* 80C60804-80C60808 000000 0004+00 4/4 0/0 0/0 .rodata          @3629 */
SECTION_RODATA static f32 const lit_3629 = 10.0f;
COMPILER_STRIP_GATE(80C60804, &lit_3629);

/* 80C60808-80C6080C 000004 0004+00 0/1 0/0 0/0 .rodata          @3630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3630 = 2.0f;
COMPILER_STRIP_GATE(80C60808, &lit_3630);
#pragma pop

/* 80C6080C-80C60810 000008 0004+00 0/1 0/0 0/0 .rodata          @3631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3631 = 995.0f;
COMPILER_STRIP_GATE(80C6080C, &lit_3631);
#pragma pop

/* 80C60810-80C60814 00000C 0004+00 0/1 0/0 0/0 .rodata          @3632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3632 = 980.0f;
COMPILER_STRIP_GATE(80C60810, &lit_3632);
#pragma pop

/* 80C60814-80C60818 000010 0004+00 0/2 0/0 0/0 .rodata          @3633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3633 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(80C60814, &lit_3633);
#pragma pop

/* 80C60818-80C6081C 000014 0004+00 0/1 0/0 0/0 .rodata          @3634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3634 = 45.0f;
COMPILER_STRIP_GATE(80C60818, &lit_3634);
#pragma pop

/* 80C60854-80C60860 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C60860-80C60874 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80C60874-80C60880 -00001 000C+00 0/1 0/0 0/0 .data            @3727 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3727[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C60880-80C6088C -00001 000C+00 0/1 0/0 0/0 .data            @3728 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3728[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveOpen__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C6088C-80C60898 -00001 000C+00 0/1 0/0 0/0 .data            @3729 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3729[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveClose__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C60898-80C608A4 -00001 000C+00 0/1 0/0 0/0 .data            @3730 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3730[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveCloseWait__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C608A4-80C608B0 -00001 000C+00 0/1 0/0 0/0 .data            @3731 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3731[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveClose2__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C608B0-80C608BC -00001 000C+00 0/1 0/0 0/0 .data            @3732 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3732[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveClose2Wait__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C608BC-80C608C8 -00001 000C+00 0/1 0/0 0/0 .data            @3733 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3733[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveClose3__13daLv4PoGate_cFv,
};
#pragma pop

/* 80C608C8-80C6091C 000074 0054+00 0/1 0/0 0/0 .data            mode_proc$3726 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[84] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C6091C-80C6093C -00001 0020+00 1/0 0/0 0/0 .data            l_daLv4PoGate_Method */
SECTION_DATA static void* l_daLv4PoGate_Method[8] = {
    (void*)daLv4PoGate_Create__FP10fopAc_ac_c,
    (void*)daLv4PoGate_Delete__FP13daLv4PoGate_c,
    (void*)daLv4PoGate_Execute__FP13daLv4PoGate_c,
    (void*)NULL,
    (void*)daLv4PoGate_Draw__FP13daLv4PoGate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C6093C-80C6096C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv4PoGate */
SECTION_DATA extern void* g_profile_Obj_Lv4PoGate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x009D0000, (void*)&g_fpcLf_Method,
    (void*)0x000005BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x027E0000, (void*)&l_daLv4PoGate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C6096C-80C60994 000118 0028+00 1/1 0/0 0/0 .data            __vt__13daLv4PoGate_c */
SECTION_DATA extern void* __vt__13daLv4PoGate_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daLv4PoGate_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daLv4PoGate_cFPPA3_A4_f,
    (void*)Draw__13daLv4PoGate_cFv,
    (void*)Delete__13daLv4PoGate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C60994-80C609A0 000140 000C+00 2/2 0/0 0/0 .data            __vt__17daLv4PoGate_HIO_c */
SECTION_DATA extern void* __vt__17daLv4PoGate_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daLv4PoGate_HIO_cFv,
};

/* 80C609A0-80C609AC 00014C 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C5FBEC-80C5FC5C 0000EC 0070+00 1/1 0/0 0/0 .text            __ct__17daLv4PoGate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4PoGate_HIO_c::daLv4PoGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/__ct__17daLv4PoGate_HIO_cFv.s"
}
#pragma pop

/* 80C5FC5C-80C5FCA4 00015C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6081C-80C60820 000018 0004+00 4/7 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static u8 const lit_3655[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C6081C, &lit_3655);

/* 80C5FCA4-80C5FD40 0001A4 009C+00 2/2 0/0 0/0 .text            setBaseMtx__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/setBaseMtx__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C5FD40-80C5FDAC 000240 006C+00 1/0 0/0 0/0 .text            CreateHeap__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/CreateHeap__13daLv4PoGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C60820-80C60824 00001C 0004+00 1/1 0/0 0/0 .rodata          @3713 */
SECTION_RODATA static f32 const lit_3713 = 1000.0f;
COMPILER_STRIP_GATE(80C60820, &lit_3713);

/* 80C5FDAC-80C5FEDC 0002AC 0130+00 1/1 0/0 0/0 .text            create__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/create__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C5FEDC-80C5FF2C 0003DC 0050+00 1/0 0/0 0/0 .text            Execute__13daLv4PoGate_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/Execute__13daLv4PoGate_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C609B8-80C609C4 000008 000C+00 1/1 0/0 0/0 .bss             @3623 */
static u8 lit_3623[12];

/* 80C609C4-80C609EC 000014 0028+00 9/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 80C609EC-80C609F0 00003C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80C609EC[4];

/* 80C5FF2C-80C60090 00042C 0164+00 1/1 0/0 0/0 .text            moveGate__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::moveGate() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/moveGate__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C60090-80C6009C 000590 000C+00 3/3 0/0 0/0 .text            init_modeWait__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeWait__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C6009C-80C600A0 00059C 0004+00 1/0 0/0 0/0 .text            modeWait__13daLv4PoGate_cFv */
void daLv4PoGate_c::modeWait() {
    /* empty function */
}

/* ############################################################################################## */
/* 80C60824-80C60828 000020 0004+00 4/6 0/0 0/0 .rodata          @3772 */
SECTION_RODATA static f32 const lit_3772 = 1.0f;
COMPILER_STRIP_GATE(80C60824, &lit_3772);

/* 80C60828-80C6082C 000024 0004+00 2/3 0/0 0/0 .rodata          @3773 */
SECTION_RODATA static f32 const lit_3773 = -1.0f;
COMPILER_STRIP_GATE(80C60828, &lit_3773);

/* 80C600A0-80C60150 0005A0 00B0+00 1/1 0/0 0/0 .text init_modeMoveOpen__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveOpen__13daLv4PoGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6082C-80C60830 000028 0004+00 1/3 0/0 0/0 .rodata          @3786 */
SECTION_RODATA static f32 const lit_3786 = 0.5f;
COMPILER_STRIP_GATE(80C6082C, &lit_3786);

/* 80C60150-80C60200 000650 00B0+00 1/0 0/0 0/0 .text            modeMoveOpen__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveOpen__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C60200-80C602B0 000700 00B0+00 1/1 0/0 0/0 .text init_modeMoveClose__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveClose__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C602B0-80C6031C 0007B0 006C+00 1/0 0/0 0/0 .text            modeMoveClose__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveClose__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C6031C-80C60338 00081C 001C+00 1/1 0/0 0/0 .text init_modeMoveCloseWait__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveCloseWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveCloseWait__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C60338-80C60370 000838 0038+00 1/0 0/0 0/0 .text modeMoveCloseWait__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveCloseWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveCloseWait__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C60370-80C6037C 000870 000C+00 1/1 0/0 0/0 .text init_modeMoveClose2__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveClose2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveClose2__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C6037C-80C603E0 00087C 0064+00 1/0 0/0 0/0 .text            modeMoveClose2__13daLv4PoGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveClose2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveClose2__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C603E0-80C603FC 0008E0 001C+00 1/1 0/0 0/0 .text init_modeMoveClose2Wait__13daLv4PoGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveClose2Wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveClose2Wait__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C603FC-80C60434 0008FC 0038+00 1/0 0/0 0/0 .text modeMoveClose2Wait__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveClose2Wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveClose2Wait__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C60434-80C60450 000934 001C+00 1/1 0/0 0/0 .text init_modeMoveClose3__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::init_modeMoveClose3() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/init_modeMoveClose3__13daLv4PoGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C60830-80C60834 00002C 0004+00 0/1 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853 = 30.0f;
COMPILER_STRIP_GATE(80C60830, &lit_3853);
#pragma pop

/* 80C60450-80C604D8 000950 0088+00 1/0 0/0 0/0 .text            modeMoveClose3__13daLv4PoGate_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::modeMoveClose3() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/modeMoveClose3__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C604D8-80C60534 0009D8 005C+00 2/2 0/0 0/0 .text            setSe__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::setSe() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/setSe__13daLv4PoGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C60834-80C60848 000030 0014+00 1/1 0/0 0/0 .rodata          particle_id$3866 */
SECTION_RODATA static u8 const particle_id[20] = {
    0x88, 0xC9, 0x88, 0xCA, 0x88, 0xCB, 0x88, 0xCC, 0x88, 0xCD,
    0x88, 0xCE, 0x88, 0xCF, 0x88, 0xD0, 0x88, 0xD1, 0x88, 0xD2,
};
COMPILER_STRIP_GATE(80C60834, &particle_id);

/* 80C60534-80C605F8 000A34 00C4+00 2/2 0/0 0/0 .text            setEffect__13daLv4PoGate_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::setEffect(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/setEffect__13daLv4PoGate_cFi.s"
}
#pragma pop

/* 80C605F8-80C6069C 000AF8 00A4+00 1/0 0/0 0/0 .text            Draw__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/Draw__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C6069C-80C606CC 000B9C 0030+00 1/0 0/0 0/0 .text            Delete__13daLv4PoGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv4PoGate_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/Delete__13daLv4PoGate_cFv.s"
}
#pragma pop

/* 80C606CC-80C606F8 000BCC 002C+00 1/0 0/0 0/0 .text            daLv4PoGate_Draw__FP13daLv4PoGate_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4PoGate_Draw(daLv4PoGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/daLv4PoGate_Draw__FP13daLv4PoGate_c.s"
}
#pragma pop

/* 80C606F8-80C60718 000BF8 0020+00 1/0 0/0 0/0 .text daLv4PoGate_Execute__FP13daLv4PoGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4PoGate_Execute(daLv4PoGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/daLv4PoGate_Execute__FP13daLv4PoGate_c.s"
}
#pragma pop

/* 80C60718-80C60738 000C18 0020+00 1/0 0/0 0/0 .text daLv4PoGate_Delete__FP13daLv4PoGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4PoGate_Delete(daLv4PoGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/daLv4PoGate_Delete__FP13daLv4PoGate_c.s"
}
#pragma pop

/* 80C60738-80C60758 000C38 0020+00 1/0 0/0 0/0 .text            daLv4PoGate_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv4PoGate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/daLv4PoGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C60758-80C607B4 000C58 005C+00 2/1 0/0 0/0 .text            __dt__17daLv4PoGate_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv4PoGate_HIO_c::~daLv4PoGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/__dt__17daLv4PoGate_HIO_cFv.s"
}
#pragma pop

/* 80C607B4-80C607F0 000CB4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv4PoGate_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv4PoGate_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4PoGate/d_a_obj_lv4PoGate/__sinit_d_a_obj_lv4PoGate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C607B4 = (void*)__sinit_d_a_obj_lv4PoGate_cpp;
#pragma pop

/* 80C60848-80C60852 000044 000A+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C60848 = "L4R02Gate";
#pragma pop
