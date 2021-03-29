//
// Generated By: dol2asm
// Translation Unit: d_a_obj_rstair
//

#include "rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daObjRotStair_c {
    /* 80CC1558 */ void initBaseMtx();
    /* 80CC1614 */ void setBaseMtx();
    /* 80CC16B0 */ void Create();
    /* 80CC17F0 */ void CreateHeap();
    /* 80CC1A28 */ void create1st();
    /* 80CC1AF0 */ void Execute(f32 (**)[3][4]);
    /* 80CC1BA4 */ void move_proc_call();
    /* 80CC1C30 */ void init_modeWait();
    /* 80CC1CF0 */ void modeWait();
    /* 80CC1DF8 */ void init_modeRotate();
    /* 80CC1EC8 */ void modeRotate();
    /* 80CC2024 */ void event_proc_call();
    /* 80CC20E0 */ void actionWait();
    /* 80CC2158 */ void actionOrderEvent();
    /* 80CC21C0 */ void actionEvent();
    /* 80CC221C */ void actionDead();
    /* 80CC2220 */ void checkChangeSw();
    /* 80CC22A0 */ void offSwitch(int);
    /* 80CC2310 */ void onWaterModel();
    /* 80CC2364 */ void offWaterModel();
    /* 80CC23C4 */ void Draw();
    /* 80CC25C0 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {
    /* 8032600C */ void simpleCalcMaterial(u16, f32 (*)[4]);
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
    /* 80047A78 */ void endCheck(s16);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct csXyz {};

struct cBgS_PolyInfo {};

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

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DTexMtxInfo {
    /* 80325794 */ void setEffectMtx(f32 (*)[4]);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CC19E0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObjRotStair_create1st(daObjRotStair_c*);
static void daObjRotStair_MoveBGDelete(daObjRotStair_c*);
static void daObjRotStair_MoveBGExecute(daObjRotStair_c*);
static void daObjRotStair_MoveBGDraw(daObjRotStair_c*);

extern "C" void initBaseMtx__15daObjRotStair_cFv();
extern "C" void setBaseMtx__15daObjRotStair_cFv();
extern "C" void Create__15daObjRotStair_cFv();
extern "C" void CreateHeap__15daObjRotStair_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__15daObjRotStair_cFv();
extern "C" void Execute__15daObjRotStair_cFPPA3_A4_f();
extern "C" void move_proc_call__15daObjRotStair_cFv();
extern "C" void init_modeWait__15daObjRotStair_cFv();
extern "C" void modeWait__15daObjRotStair_cFv();
extern "C" void init_modeRotate__15daObjRotStair_cFv();
extern "C" void modeRotate__15daObjRotStair_cFv();
extern "C" void event_proc_call__15daObjRotStair_cFv();
extern "C" void actionWait__15daObjRotStair_cFv();
extern "C" void actionOrderEvent__15daObjRotStair_cFv();
extern "C" void actionEvent__15daObjRotStair_cFv();
extern "C" void actionDead__15daObjRotStair_cFv();
extern "C" void checkChangeSw__15daObjRotStair_cFv();
extern "C" void offSwitch__15daObjRotStair_cFi();
extern "C" void onWaterModel__15daObjRotStair_cFv();
extern "C" void offWaterModel__15daObjRotStair_cFv();
extern "C" void Draw__15daObjRotStair_cFv();
extern "C" void Delete__15daObjRotStair_cFv();
extern "C" static void daObjRotStair_create1st__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGDelete__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGExecute__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGDraw__FP15daObjRotStair_c();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern u8 l_water_check_offset[12];
extern "C" extern void* g_profile_Obj_RotStair[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void C_MTXLightPerspective();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_19();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" extern u8 const j3dDefaultMtx[48];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80CC2880[4];

//
// Declarations:
//

/* 80CC1558-80CC1614 00BC+00 s=1 e=0 z=0  None .text      initBaseMtx__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/initBaseMtx__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1614-80CC16B0 009C+00 s=2 e=0 z=0  None .text      setBaseMtx__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/setBaseMtx__15daObjRotStair_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CC2700-80CC2708 0008+00 s=3 e=0 z=0  None .rodata    l_wtr_bmd */
SECTION_RODATA static u8 const l_wtr_bmd[8] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07,
};

/* 80CC2708-80CC2710 0008+00 s=1 e=0 z=0  None .rodata    l_wtr_btk */
SECTION_RODATA static u8 const l_wtr_btk[8] = {
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B,
};

/* 80CC2710-80CC2720 0010+00 s=2 e=0 z=0  None .rodata    l_target_angleY */
SECTION_RODATA static u8 const l_target_angleY[16] = {
    0x7F, 0xFF, 0x40, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x7F, 0xFF, 0x40, 0x00,
};

/* 80CC16B0-80CC17F0 0140+00 s=1 e=0 z=0  None .text      Create__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/Create__15daObjRotStair_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CC2720-80CC2724 0004+00 s=3 e=0 z=0  None .rodata    @3770 */
SECTION_RODATA static u32 const lit_3770 = 0x3F800000;

/* 80CC2724-80CC2728 0004+00 s=2 e=0 z=0  None .rodata    @3911 */
SECTION_RODATA static u8 const lit_3911[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CC2728-80CC272C 0004+00 s=1 e=0 z=0  None .rodata    @3912 */
SECTION_RODATA static u32 const lit_3912 = 0xBF800000;

/* 80CC272C-80CC2730 0004+00 s=1 e=0 z=0  None .rodata    @4107 */
SECTION_RODATA static u32 const lit_4107 = 0xBC23D70A;

/* 80CC2730-80CC273A 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80CC2730 = "K_spkai00";
#pragma pop

/* 80CC273C-80CC2748 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC2748-80CC275C 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80CC275C-80CC2760 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80CC2760-80CC276C 000C+00 s=0 e=0 z=0  None .data      l_water_check_offset */
SECTION_DATA u8 l_water_check_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x44, 0xFA, 0x00, 0x00, 0xC4, 0xFA, 0x00, 0x00,
};

/* 80CC276C-80CC2778 000C+00 s=1 e=0 z=0  None .data      @3811 */
SECTION_DATA static void* lit_3811[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__15daObjRotStair_cFv,
};

/* 80CC2778-80CC2784 000C+00 s=1 e=0 z=0  None .data      @3812 */
SECTION_DATA static void* lit_3812[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeRotate__15daObjRotStair_cFv,
};

/* 80CC2784-80CC279C 0018+00 s=1 e=0 z=0  None .data      l_func$3810 */
SECTION_DATA static u8 l_func_3810[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC279C-80CC27A8 000C+00 s=1 e=0 z=0  None .data      @3919 */
SECTION_DATA static void* lit_3919[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daObjRotStair_cFv,
};

/* 80CC27A8-80CC27B4 000C+00 s=1 e=0 z=0  None .data      @3920 */
SECTION_DATA static void* lit_3920[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__15daObjRotStair_cFv,
};

/* 80CC27B4-80CC27C0 000C+00 s=1 e=0 z=0  None .data      @3921 */
SECTION_DATA static void* lit_3921[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__15daObjRotStair_cFv,
};

/* 80CC27C0-80CC27CC 000C+00 s=1 e=0 z=0  None .data      @3922 */
SECTION_DATA static void* lit_3922[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__15daObjRotStair_cFv,
};

/* 80CC27CC-80CC27FC 0030+00 s=1 e=0 z=0  None .data      l_func$3918 */
SECTION_DATA static u8 l_func_3918[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC27FC-80CC281C 0020+00 s=1 e=0 z=0  None .data      daObjRotStair_METHODS */
SECTION_DATA static void* daObjRotStair_METHODS[8] = {
    (void*)daObjRotStair_create1st__FP15daObjRotStair_c,
    (void*)daObjRotStair_MoveBGDelete__FP15daObjRotStair_c,
    (void*)daObjRotStair_MoveBGExecute__FP15daObjRotStair_c,
    (void*)NULL,
    (void*)daObjRotStair_MoveBGDraw__FP15daObjRotStair_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CC281C-80CC284C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_RotStair */
SECTION_DATA void* g_profile_Obj_RotStair[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00C50000, (void*)&g_fpcLf_Method,
    (void*)0x000005E4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02650000, (void*)&daObjRotStair_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80CC284C-80CC2858 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CC17F0-80CC19E0 01F0+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/CreateHeap__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC19E0-80CC1A28 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80CC1A28-80CC1AF0 00C8+00 s=1 e=0 z=0  None .text      create1st__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/create1st__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1AF0-80CC1BA4 00B4+00 s=1 e=0 z=0  None .text      Execute__15daObjRotStair_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/Execute__15daObjRotStair_cFPPA3_A4_f.s"
}
#pragma pop

/* 80CC1BA4-80CC1C30 008C+00 s=1 e=0 z=0  None .text      move_proc_call__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::move_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/move_proc_call__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1C30-80CC1CF0 00C0+00 s=2 e=0 z=0  None .text      init_modeWait__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/init_modeWait__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1CF0-80CC1DF8 0108+00 s=1 e=0 z=0  None .text      modeWait__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/modeWait__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1DF8-80CC1EC8 00D0+00 s=1 e=0 z=0  None .text      init_modeRotate__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::init_modeRotate() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/init_modeRotate__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC1EC8-80CC2024 015C+00 s=1 e=0 z=0  None .text      modeRotate__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::modeRotate() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/modeRotate__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC2024-80CC20E0 00BC+00 s=1 e=0 z=0  None .text      event_proc_call__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/event_proc_call__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC20E0-80CC2158 0078+00 s=1 e=0 z=0  None .text      actionWait__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/actionWait__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC2158-80CC21C0 0068+00 s=1 e=0 z=0  None .text      actionOrderEvent__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/actionOrderEvent__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC21C0-80CC221C 005C+00 s=1 e=0 z=0  None .text      actionEvent__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/actionEvent__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC221C-80CC2220 0004+00 s=1 e=0 z=0  None .text      actionDead__15daObjRotStair_cFv */
void daObjRotStair_c::actionDead() {
    /* empty function */
}

/* 80CC2220-80CC22A0 0080+00 s=1 e=0 z=0  None .text      checkChangeSw__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::checkChangeSw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/checkChangeSw__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC22A0-80CC2310 0070+00 s=1 e=0 z=0  None .text      offSwitch__15daObjRotStair_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::offSwitch(int param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/offSwitch__15daObjRotStair_cFi.s"
}
#pragma pop

/* 80CC2310-80CC2364 0054+00 s=3 e=0 z=0  None .text      onWaterModel__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::onWaterModel() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/onWaterModel__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC2364-80CC23C4 0060+00 s=3 e=0 z=0  None .text      offWaterModel__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::offWaterModel() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/offWaterModel__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC23C4-80CC25C0 01FC+00 s=1 e=0 z=0  None .text      Draw__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/Draw__15daObjRotStair_cFv.s"
}
#pragma pop

/* 80CC25C0-80CC262C 006C+00 s=1 e=0 z=0  None .text      Delete__15daObjRotStair_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjRotStair_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/Delete__15daObjRotStair_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CC2858-80CC2880 0028+00 s=1 e=0 z=0  None .data      __vt__15daObjRotStair_c */
SECTION_DATA static void* __vt__15daObjRotStair_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__15daObjRotStair_cFv,
    (void*)Create__15daObjRotStair_cFv,
    (void*)Execute__15daObjRotStair_cFPPA3_A4_f,
    (void*)Draw__15daObjRotStair_cFv,
    (void*)Delete__15daObjRotStair_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CC262C-80CC268C 0060+00 s=1 e=0 z=0  None .text daObjRotStair_create1st__FP15daObjRotStair_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjRotStair_create1st(daObjRotStair_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/daObjRotStair_create1st__FP15daObjRotStair_c.s"
}
#pragma pop

/* 80CC268C-80CC26AC 0020+00 s=1 e=0 z=0  None .text
 * daObjRotStair_MoveBGDelete__FP15daObjRotStair_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjRotStair_MoveBGDelete(daObjRotStair_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/daObjRotStair_MoveBGDelete__FP15daObjRotStair_c.s"
}
#pragma pop

/* 80CC26AC-80CC26CC 0020+00 s=1 e=0 z=0  None .text
 * daObjRotStair_MoveBGExecute__FP15daObjRotStair_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjRotStair_MoveBGExecute(daObjRotStair_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/daObjRotStair_MoveBGExecute__FP15daObjRotStair_c.s"
}
#pragma pop

/* 80CC26CC-80CC26F8 002C+00 s=1 e=0 z=0  None .text daObjRotStair_MoveBGDraw__FP15daObjRotStair_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjRotStair_MoveBGDraw(daObjRotStair_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rstair/d_a_obj_rstair/daObjRotStair_MoveBGDraw__FP15daObjRotStair_c.s"
}
#pragma pop
