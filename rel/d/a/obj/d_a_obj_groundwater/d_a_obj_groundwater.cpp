//
// Generated By: dol2asm
// Translation Unit: d_a_obj_groundwater
//

#include "rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80C134F8 */ ~mDoHIO_entry_c();
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTransform {};

struct J3DModelData {
    /* 8032600C */ void simpleCalcMaterial(u16, f32 (*)[4]);
};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daGrdWater_c {
    /* 80C13540 */ void setBaseMtx();
    /* 80C13618 */ void CreateHeap();
    /* 80C139E4 */ void create();
    /* 80C13DB0 */ daGrdWater_c();
    /* 80C13FEC */ void Execute(f32 (**)[3][4]);
    /* 80C14194 */ void init_modeWait();
    /* 80C141A0 */ void modeWait();
    /* 80C141A4 */ void init_modeLevelUpA();
    /* 80C1423C */ void modeLevelUpA();
    /* 80C142AC */ void init_modeLevelDownA();
    /* 80C14320 */ void modeLevelDownA();
    /* 80C1437C */ void init_modeLevelUpB();
    /* 80C14414 */ void modeLevelUpB();
    /* 80C14484 */ void init_modeLevelDownB();
    /* 80C144F8 */ void modeLevelDownB();
    /* 80C14554 */ void Draw();
    /* 80C147EC */ void Delete();
};

struct daGrdWater_HIO_c {
    /* 80C134AC */ daGrdWater_HIO_c();
    /* 80C148A8 */ ~daGrdWater_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct cXyz {};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW {};

struct csXyz {};

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

struct J3DTexMtxInfo {
    /* 80325794 */ void setEffectMtx(f32 (*)[4]);
};

struct J3DModel {
    /* 80327BD4 */ void calcAnmMtx();
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C13FA4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daGrdWater_Draw(daGrdWater_c*);
static void daGrdWater_Execute(daGrdWater_c*);
static void daGrdWater_Delete(daGrdWater_c*);
static void daGrdWater_Create(fopAc_ac_c*);

extern "C" void __ct__16daGrdWater_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daGrdWater_cFv();
extern "C" void CreateHeap__12daGrdWater_cFv();
extern "C" void create__12daGrdWater_cFv();
extern "C" void __ct__12daGrdWater_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__12daGrdWater_cFPPA3_A4_f();
extern "C" void init_modeWait__12daGrdWater_cFv();
extern "C" void modeWait__12daGrdWater_cFv();
extern "C" void init_modeLevelUpA__12daGrdWater_cFv();
extern "C" void modeLevelUpA__12daGrdWater_cFv();
extern "C" void init_modeLevelDownA__12daGrdWater_cFv();
extern "C" void modeLevelDownA__12daGrdWater_cFv();
extern "C" void init_modeLevelUpB__12daGrdWater_cFv();
extern "C" void modeLevelUpB__12daGrdWater_cFv();
extern "C" void init_modeLevelDownB__12daGrdWater_cFv();
extern "C" void modeLevelDownB__12daGrdWater_cFv();
extern "C" void Draw__12daGrdWater_cFv();
extern "C" void Delete__12daGrdWater_cFv();
extern "C" static void daGrdWater_Draw__FP12daGrdWater_c();
extern "C" static void daGrdWater_Execute__FP12daGrdWater_c();
extern "C" static void daGrdWater_Delete__FP12daGrdWater_c();
extern "C" static void daGrdWater_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daGrdWater_HIO_cFv();
extern "C" void __sinit_d_a_obj_groundwater_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_GRDWATER[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void dKy_bg_MAxx_proc(void*);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void calcAnmMtx__8J3DModelFv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void C_MTXLightPerspective();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultMtx[48];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C149E0-80C149E4 0004+00 s=3 e=0 z=0  None .rodata    @3642 */
SECTION_RODATA static u8 const lit_3642[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C149FC-80C14A08 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C14A08-80C14A1C 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80C14A1C-80C14A28 000C+00 s=1 e=0 z=0  None .data      @3993 */
SECTION_DATA static void* lit_3993[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daGrdWater_cFv,
};

/* 80C14A28-80C14A34 000C+00 s=1 e=0 z=0  None .data      @3994 */
SECTION_DATA static void* lit_3994[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelUpA__12daGrdWater_cFv,
};

/* 80C14A34-80C14A40 000C+00 s=1 e=0 z=0  None .data      @3995 */
SECTION_DATA static void* lit_3995[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelDownA__12daGrdWater_cFv,
};

/* 80C14A40-80C14A4C 000C+00 s=1 e=0 z=0  None .data      @3996 */
SECTION_DATA static void* lit_3996[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelUpB__12daGrdWater_cFv,
};

/* 80C14A4C-80C14A58 000C+00 s=2 e=0 z=0  None .data      @3997 */
SECTION_DATA static void* lit_3997[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLevelDownB__12daGrdWater_cFv,
};

/* 80C14A58-80C14A94 003C+00 s=2 e=0 z=0  None .data      l_mode_func */
SECTION_DATA static u8 l_mode_func[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C14A94-80C14AB4 0020+00 s=1 e=0 z=0  None .data      l_daGrdWater_Method */
SECTION_DATA static void* l_daGrdWater_Method[8] = {
    (void*)daGrdWater_Create__FP10fopAc_ac_c,
    (void*)daGrdWater_Delete__FP12daGrdWater_c,
    (void*)daGrdWater_Execute__FP12daGrdWater_c,
    (void*)NULL,
    (void*)daGrdWater_Draw__FP12daGrdWater_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C14AB4-80C14AE4 0030+00 s=0 e=0 z=1  None .data      g_profile_GRDWATER */
SECTION_DATA void* g_profile_GRDWATER[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00350000, (void*)&g_fpcLf_Method,
    (void*)0x000006F4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01E90000, (void*)&l_daGrdWater_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C14AE4-80C14AF0 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C14AF0-80C14B18 0028+00 s=1 e=0 z=0  None .data      __vt__12daGrdWater_c */
SECTION_DATA static void* __vt__12daGrdWater_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__12daGrdWater_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daGrdWater_cFPPA3_A4_f,
    (void*)Draw__12daGrdWater_cFv,
    (void*)Delete__12daGrdWater_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C14B18-80C14B24 000C+00 s=2 e=0 z=0  None .data      __vt__16daGrdWater_HIO_c */
SECTION_DATA static void* __vt__16daGrdWater_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__16daGrdWater_HIO_cFv,
};

/* 80C14B24-80C14B30 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C134AC-80C134F8 004C+00 s=1 e=0 z=0  None .text      __ct__16daGrdWater_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daGrdWater_HIO_c::daGrdWater_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__ct__16daGrdWater_HIO_cFv.s"
}
#pragma pop

/* 80C134F8-80C13540 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C13540-80C13618 00D8+00 s=2 e=0 z=0  None .text      setBaseMtx__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/setBaseMtx__12daGrdWater_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C149E4-80C149E8 0004+00 s=6 e=0 z=0  None .rodata    @3712 */
SECTION_RODATA static u32 const lit_3712 = 0x3F800000;

/* 80C149E8-80C149F0 0008+00 s=5 e=0 z=0  None .rodata    @3891 */
SECTION_RODATA static u8 const lit_3891[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C149F0-80C149F4 0004+00 s=1 e=0 z=0  None .rodata    @4253 */
SECTION_RODATA static u32 const lit_4253 = 0xBC23D70A;

/* 80C149F4-80C149FA 0006+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C149F4 = "Water";
#pragma pop

/* 80C13618-80C139E4 03CC+00 s=1 e=0 z=0  None .text      CreateHeap__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/CreateHeap__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C139E4-80C13DB0 03CC+00 s=1 e=0 z=0  None .text      create__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/create__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C13DB0-80C13FA4 01F4+00 s=1 e=0 z=0  None .text      __ct__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daGrdWater_c::daGrdWater_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__ct__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C13FA4-80C13FEC 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C13FEC-80C14194 01A8+00 s=1 e=0 z=0  None .text      Execute__12daGrdWater_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/Execute__12daGrdWater_cFPPA3_A4_f.s"
}
#pragma pop

/* 80C14194-80C141A0 000C+00 s=5 e=0 z=0  None .text      init_modeWait__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/init_modeWait__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C141A0-80C141A4 0004+00 s=1 e=0 z=0  None .text      modeWait__12daGrdWater_cFv */
void daGrdWater_c::modeWait() {
    /* empty function */
}

/* 80C141A4-80C1423C 0098+00 s=1 e=0 z=0  None .text      init_modeLevelUpA__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::init_modeLevelUpA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/init_modeLevelUpA__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C1423C-80C142AC 0070+00 s=1 e=0 z=0  None .text      modeLevelUpA__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::modeLevelUpA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/modeLevelUpA__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C142AC-80C14320 0074+00 s=1 e=0 z=0  None .text      init_modeLevelDownA__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::init_modeLevelDownA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/init_modeLevelDownA__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C14320-80C1437C 005C+00 s=1 e=0 z=0  None .text      modeLevelDownA__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::modeLevelDownA() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/modeLevelDownA__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C1437C-80C14414 0098+00 s=1 e=0 z=0  None .text      init_modeLevelUpB__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::init_modeLevelUpB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/init_modeLevelUpB__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C14414-80C14484 0070+00 s=1 e=0 z=0  None .text      modeLevelUpB__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::modeLevelUpB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/modeLevelUpB__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C14484-80C144F8 0074+00 s=1 e=0 z=0  None .text      init_modeLevelDownB__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::init_modeLevelDownB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/init_modeLevelDownB__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C144F8-80C14554 005C+00 s=1 e=0 z=0  None .text      modeLevelDownB__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::modeLevelDownB() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/modeLevelDownB__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C14554-80C147EC 0298+00 s=1 e=0 z=0  None .text      Draw__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/Draw__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C147EC-80C1481C 0030+00 s=1 e=0 z=0  None .text      Delete__12daGrdWater_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrdWater_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/Delete__12daGrdWater_cFv.s"
}
#pragma pop

/* 80C1481C-80C14848 002C+00 s=1 e=0 z=0  None .text      daGrdWater_Draw__FP12daGrdWater_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGrdWater_Draw(daGrdWater_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/daGrdWater_Draw__FP12daGrdWater_c.s"
}
#pragma pop

/* 80C14848-80C14868 0020+00 s=1 e=0 z=0  None .text      daGrdWater_Execute__FP12daGrdWater_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGrdWater_Execute(daGrdWater_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/daGrdWater_Execute__FP12daGrdWater_c.s"
}
#pragma pop

/* 80C14868-80C14888 0020+00 s=1 e=0 z=0  None .text      daGrdWater_Delete__FP12daGrdWater_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGrdWater_Delete(daGrdWater_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/daGrdWater_Delete__FP12daGrdWater_c.s"
}
#pragma pop

/* 80C14888-80C148A8 0020+00 s=1 e=0 z=0  None .text      daGrdWater_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daGrdWater_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/daGrdWater_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C148A8-80C14904 005C+00 s=2 e=0 z=0  None .text      __dt__16daGrdWater_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daGrdWater_HIO_c::~daGrdWater_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__dt__16daGrdWater_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C14B38-80C14B44 000C+00 s=1 e=0 z=0  None .bss       @3636 */
static u8 lit_3636[12];

/* 80C14B44-80C14B58 0014+00 s=1 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[20];

/* 80C14904-80C149CC 00C8+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_groundwater_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_groundwater_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_groundwater/d_a_obj_groundwater/__sinit_d_a_obj_groundwater_cpp.s"
}
#pragma pop
