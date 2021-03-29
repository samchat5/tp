//
// Generated By: dol2asm
// Translation Unit: d_a_L7op_demo_dr
//

#include "rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 8026702C */ bool operator==(Vec const&) const;
    /* 805ADDD8 */ void abs(Vec const&) const;
    /* 805ADEEC */ cXyz(cXyz const&);
    /* 805ADF2C */ void operator=(cXyz const&);
};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
    /* 805ADF08 */ void multVecZero(Vec*);
};

struct mDoExt_morf_c {
    /* 805ADDA8 */ void isStop();
};

struct mDoExt_McaMorfCallBack2_c {};

struct Z2Creature {};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DAnmTransform {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daPy_py_c {
    /* 805ADD78 */ void changeDemoPos0(cXyz const*);
    /* 805ADD94 */ void changeDemoMode(u32, int, int, s16);
};

struct daL7ODR_c {
    /* 805AB098 */ void setAction(void (daL7ODR_c::*)());
    /* 805AB13C */ void action();
    /* 805AB164 */ void setDrAction(void (daL7ODR_c::*)());
    /* 805AB208 */ void dr_action();
    /* 805AB230 */ void mtx_set();
    /* 805AB2E8 */ void draw();
    /* 805AB3F0 */ void wait();
    /* 805AB520 */ void pl_walk();
    /* 805ABC2C */ void setZoomOutCamPos(cXyz&, cXyz&, f32);
    /* 805ABCF8 */ void dr_wait();
    /* 805ABE0C */ void dr_fly();
    /* 805AD7B4 */ void execute();
    /* 805AD87C */ void _delete();
    /* 805AD90C */ void CreateHeap();
    /* 805ADA2C */ void check_start();
    /* 805ADAC0 */ void create();
};

struct dVibration_c {
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
};

struct dSv_restart_c {
    /* 80034F80 */ void setRoom(cXyz const&, s16, s8);
};

struct dKy_tevstr_c {};

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

struct dCamera_c {
    /* 801614AC */ void Start();
    /* 801614D0 */ void Stop();
    /* 8016300C */ void SetTrimSize(s32);
    /* 80180AE0 */ void Set(cXyz, cXyz, f32, s16);
    /* 80180AA8 */ void Set(cXyz, cXyz);
    /* 80180C18 */ void Reset(cXyz, cXyz);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 805ADCD8 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

struct Z2SeqMgr {
    /* 802AF49C */ void subBgmStart(u32);
    /* 802AF884 */ void subBgmStop();
};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daL7ODR_Draw(daL7ODR_c*);
static void daL7ODR_Execute(daL7ODR_c*);
static bool daL7ODR_IsDelete(daL7ODR_c*);
static void daL7ODR_Delete(daL7ODR_c*);
static void useHeapInit(fopAc_ac_c*);
static void daL7ODR_Create(daL7ODR_c*);

extern "C" void setAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v();
extern "C" void action__9daL7ODR_cFv();
extern "C" void setDrAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v();
extern "C" void dr_action__9daL7ODR_cFv();
extern "C" void mtx_set__9daL7ODR_cFv();
extern "C" void draw__9daL7ODR_cFv();
extern "C" static void daL7ODR_Draw__FP9daL7ODR_c();
extern "C" void wait__9daL7ODR_cFv();
extern "C" void pl_walk__9daL7ODR_cFv();
extern "C" void setZoomOutCamPos__9daL7ODR_cFR4cXyzR4cXyzf();
extern "C" void dr_wait__9daL7ODR_cFv();
extern "C" void dr_fly__9daL7ODR_cFv();
extern "C" void execute__9daL7ODR_cFv();
extern "C" static void daL7ODR_Execute__FP9daL7ODR_c();
extern "C" static bool daL7ODR_IsDelete__FP9daL7ODR_c();
extern "C" void _delete__9daL7ODR_cFv();
extern "C" static void daL7ODR_Delete__FP9daL7ODR_c();
extern "C" void CreateHeap__9daL7ODR_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void check_start__9daL7ODR_cFv();
extern "C" void create__9daL7ODR_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daL7ODR_Create__FP9daL7ODR_c();
extern "C" static void func_805ADD68();
extern "C" static void func_805ADD70();
extern "C" void changeDemoPos0__9daPy_py_cFPC4cXyz();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void isStop__13mDoExt_morf_cFv();
extern "C" void abs__4cXyzCFRC3Vec();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void multVecZero__14mDoMtx_stack_cFP3Vec();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_L7ODR[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void fopMsgM_messageSetDemo(u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dComIfGs_onZoneSwitch(int, int);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&,
                        dKy_tevstr_c*, s16, f32, _GXTexObj*);
void daNpcF_getPlayerInfoFromPlayerList(int, int, cXyz&, csXyz&);
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
void cLib_chaseF(f32*, f32, f32);
void cLib_chasePos(cXyz*, cXyz const&, f32);
void cLib_chaseAngleS(s16*, s16, s16);
void cLib_targetAngleY(Vec const*, Vec const*);
void cLib_targetAngleX(cXyz const*, cXyz const*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopMsgM_messageSetDemo__FUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void setRoom__13dSv_restart_cFRC4cXyzsSc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void daNpcF_getPlayerInfoFromPlayerList__FiiR4cXyzR5csXyz();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" bool __eq__4cXyzCFRC3Vec();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareDistance();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 805AB098-805AB13C 00A4+00 s=2 e=0 z=0  None .text      setAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::setAction(void (daL7ODR_c::*)()) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/setAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v.s"
}
#pragma pop

/* 805AB13C-805AB164 0028+00 s=1 e=0 z=0  None .text      action__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::action() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/action__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AB164-805AB208 00A4+00 s=2 e=0 z=0  None .text setDrAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::setDrAction(void (daL7ODR_c::*)()) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/setDrAction__9daL7ODR_cFM9daL7ODR_cFPCvPv_v.s"
}
#pragma pop

/* 805AB208-805AB230 0028+00 s=1 e=0 z=0  None .text      dr_action__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::dr_action() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/dr_action__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AB230-805AB2E8 00B8+00 s=1 e=0 z=0  None .text      mtx_set__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::mtx_set() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/mtx_set__9daL7ODR_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805ADF50-805ADF54 0004+00 s=7 e=0 z=0  None .rodata    @3850 */
SECTION_RODATA static u32 const lit_3850 = 0x41200000;

/* 805ADF54-805ADF58 0004+00 s=1 e=0 z=0  None .rodata    @3851 */
SECTION_RODATA static u32 const lit_3851 = 0x45BB8000;

/* 805ADF58-805ADF5C 0004+00 s=8 e=0 z=0  None .rodata    @3852 */
SECTION_RODATA static u8 const lit_3852[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 805ADF5C-805ADF60 0004+00 s=6 e=0 z=0  None .rodata    @3853 */
SECTION_RODATA static u32 const lit_3853 = 0x3F800000;

/* 805AB2E8-805AB3D0 00E8+00 s=1 e=0 z=0  None .text      draw__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/draw__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AB3D0-805AB3F0 0020+00 s=1 e=0 z=0  None .text      daL7ODR_Draw__FP9daL7ODR_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daL7ODR_Draw(daL7ODR_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/daL7ODR_Draw__FP9daL7ODR_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AE0B8-805AE0C4 000C+00 s=1 e=0 z=0  None .data      @3871 */
SECTION_DATA static void* lit_3871[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)pl_walk__9daL7ODR_cFv,
};

/* 805AB3F0-805AB520 0130+00 s=1 e=0 z=0  None .text      wait__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::wait() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/wait__9daL7ODR_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805ADF60-805ADF64 0004+00 s=1 e=0 z=0  None .rodata    @4115 */
SECTION_RODATA static u32 const lit_4115 = 0xC4458000;

/* 805ADF64-805ADF68 0004+00 s=1 e=0 z=0  None .rodata    @4116 */
SECTION_RODATA static u32 const lit_4116 = 0x45435000;

/* 805ADF68-805ADF6C 0004+00 s=1 e=0 z=0  None .rodata    @4117 */
SECTION_RODATA static u32 const lit_4117 = 0xC4610000;

/* 805ADF6C-805ADF70 0004+00 s=1 e=0 z=0  None .rodata    @4118 */
SECTION_RODATA static u32 const lit_4118 = 0x43FA0000;

/* 805ADF70-805ADF74 0004+00 s=1 e=0 z=0  None .rodata    @4119 */
SECTION_RODATA static u32 const lit_4119 = 0x45960000;

/* 805ADF74-805ADF78 0004+00 s=1 e=0 z=0  None .rodata    @4120 */
SECTION_RODATA static u32 const lit_4120 = 0xC4638000;

/* 805ADF78-805ADF7C 0004+00 s=1 e=0 z=0  None .rodata    @4121 */
SECTION_RODATA static u32 const lit_4121 = 0x44020000;

/* 805ADF7C-805ADF80 0004+00 s=1 e=0 z=0  None .rodata    @4122 */
SECTION_RODATA static u32 const lit_4122 = 0x45ABE000;

/* 805ADF80-805ADF84 0004+00 s=1 e=0 z=0  None .rodata    @4123 */
SECTION_RODATA static u32 const lit_4123 = 0x42800000;

/* 805ADF84-805ADF88 0004+00 s=2 e=0 z=0  None .rodata    @4124 */
SECTION_RODATA static u32 const lit_4124 = 0x40000000;

/* 805ADF88-805ADF8C 0004+00 s=1 e=0 z=0  None .rodata    @4125 */
SECTION_RODATA static u32 const lit_4125 = 0x3E4CCCCD;

/* 805ADF8C-805ADF90 0004+00 s=1 e=0 z=0  None .rodata    @4126 */
SECTION_RODATA static u32 const lit_4126 = 0x42F00000;

/* 805ADF90-805ADF94 0004+00 s=1 e=0 z=0  None .rodata    @4127 */
SECTION_RODATA static u32 const lit_4127 = 0x450FC000;

/* 805ADF94-805ADF98 0004+00 s=2 e=0 z=0  None .rodata    @4128 */
SECTION_RODATA static u32 const lit_4128 = 0x42C80000;

/* 805ADF98-805ADF9C 0004+00 s=3 e=0 z=0  None .rodata    @4129 */
SECTION_RODATA static u32 const lit_4129 = 0x453B8000;

/* 805ADF9C-805ADFA0 0004+00 s=2 e=0 z=0  None .rodata    @4130 */
SECTION_RODATA static u32 const lit_4130 = 0x44AF0000;

/* 805AE0C4-805AE0D0 000C+00 s=1 e=0 z=0  None .data      @3940 */
SECTION_DATA static void* lit_3940[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dr_fly__9daL7ODR_cFv,
};

/* 805AE0D0-805AE0DC 000C+00 s=1 e=0 z=0  None .data      @3947 */
SECTION_DATA static void* lit_3947[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dr_fly__9daL7ODR_cFv,
};

/* 805AB520-805ABC2C 070C+00 s=1 e=0 z=0  None .text      pl_walk__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::pl_walk() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/pl_walk__9daL7ODR_cFv.s"
}
#pragma pop

/* 805ABC2C-805ABCF8 00CC+00 s=1 e=0 z=0  None .text      setZoomOutCamPos__9daL7ODR_cFR4cXyzR4cXyzf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::setZoomOutCamPos(cXyz& param_0, cXyz& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/setZoomOutCamPos__9daL7ODR_cFR4cXyzR4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 805ADFA0-805ADFA4 0004+00 s=1 e=0 z=0  None .rodata    @4181 */
SECTION_RODATA static u32 const lit_4181 = 0x459C4000;

/* 805ADFA4-805ADFA8 0004+00 s=1 e=0 z=0  None .rodata    @4182 */
SECTION_RODATA static u32 const lit_4182 = 0x45DAC000;

/* 805ADFA8-805ADFAC 0004+00 s=2 e=0 z=0  None .rodata    @4183 */
SECTION_RODATA static u32 const lit_4183 = 0x40400000;

/* 805ADFAC-805ADFB0 0004+00 s=2 e=0 z=0  None .rodata    @4184 */
SECTION_RODATA static u32 const lit_4184 = 0xBF800000;

/* 805ADFB0-805ADFB4 0004+00 s=3 e=0 z=0  None .rodata    @4185 */
SECTION_RODATA static u32 const lit_4185 = 0x41A00000;

/* 805ADFB4-805ADFB8 0004+00 s=1 e=0 z=0  None .rodata    @4635 */
SECTION_RODATA static u32 const lit_4635 = 0x44160000;

/* 805ADFB8-805ADFBC 0004+00 s=1 e=0 z=0  None .rodata    @4636 */
SECTION_RODATA static u32 const lit_4636 = 0x43200000;

/* 805ADFBC-805ADFC0 0004+00 s=1 e=0 z=0  None .rodata    @4637 */
SECTION_RODATA static u32 const lit_4637 = 0x43C80000;

/* 805ADFC0-805ADFC4 0004+00 s=1 e=0 z=0  None .rodata    @4638 */
SECTION_RODATA static u32 const lit_4638 = 0x42700000;

/* 805ADFC4-805ADFC8 0004+00 s=1 e=0 z=0  None .rodata    @4639 */
SECTION_RODATA static u32 const lit_4639 = 0x41000000;

/* 805ADFC8-805ADFCC 0004+00 s=1 e=0 z=0  None .rodata    @4640 */
SECTION_RODATA static u32 const lit_4640 = 0x44E10000;

/* 805ADFCC-805ADFD0 0004+00 s=1 e=0 z=0  None .rodata    @4641 */
SECTION_RODATA static u32 const lit_4641 = 0x430C0000;

/* 805ADFD0-805ADFD4 0004+00 s=1 e=0 z=0  None .rodata    @4642 */
SECTION_RODATA static u32 const lit_4642 = 0x40800000;

/* 805ADFD4-805ADFD8 0004+00 s=1 e=0 z=0  None .rodata    @4643 */
SECTION_RODATA static u32 const lit_4643 = 0x42A00000;

/* 805ADFD8-805ADFDC 0004+00 s=1 e=0 z=0  None .rodata    @4644 */
SECTION_RODATA static u32 const lit_4644 = 0x3F000000;

/* 805ADFDC-805ADFE0 0004+00 s=1 e=0 z=0  None .rodata    @4645 */
SECTION_RODATA static u32 const lit_4645 = 0xC4AF0000;

/* 805ADFE0-805ADFE4 0004+00 s=1 e=0 z=0  None .rodata    @4646 */
SECTION_RODATA static u32 const lit_4646 = 0x42040000;

/* 805ADFE4-805ADFE8 0004+00 s=1 e=0 z=0  None .rodata    @4647 */
SECTION_RODATA static u32 const lit_4647 = 0x45272000;

/* 805ADFE8-805ADFEC 0004+00 s=1 e=0 z=0  None .rodata    @4648 */
SECTION_RODATA static u32 const lit_4648 = 0x453DE000;

/* 805ADFEC-805ADFF0 0004+00 s=1 e=0 z=0  None .rodata    @4649 */
SECTION_RODATA static u32 const lit_4649 = 0x43700000;

/* 805ADFF0-805ADFF4 0004+00 s=1 e=0 z=0  None .rodata    @4650 */
SECTION_RODATA static u32 const lit_4650 = 0x42B40000;

/* 805ADFF4-805ADFF8 0004+00 s=1 e=0 z=0  None .rodata    @4651 */
SECTION_RODATA static u32 const lit_4651 = 0xC30C0000;

/* 805ADFF8-805ADFFC 0004+00 s=1 e=0 z=0  None .rodata    @4652 */
SECTION_RODATA static u32 const lit_4652 = 0x44FFA000;

/* 805ADFFC-805AE000 0004+00 s=1 e=0 z=0  None .rodata    @4653 */
SECTION_RODATA static u32 const lit_4653 = 0x43E60000;

/* 805AE000-805AE004 0004+00 s=1 e=0 z=0  None .rodata    @4654 */
SECTION_RODATA static u32 const lit_4654 = 0x452F0000;

/* 805AE004-805AE008 0004+00 s=2 e=0 z=0  None .rodata    @4655 */
SECTION_RODATA static u32 const lit_4655 = 0x42200000;

/* 805AE008-805AE00C 0004+00 s=1 e=0 z=0  None .rodata    @4656 */
SECTION_RODATA static u32 const lit_4656 = 0x435C0000;

/* 805AE00C-805AE010 0004+00 s=1 e=0 z=0  None .rodata    @4657 */
SECTION_RODATA static u32 const lit_4657 = 0x44960000;

/* 805AE010-805AE014 0004+00 s=1 e=0 z=0  None .rodata    @4658 */
SECTION_RODATA static u32 const lit_4658 = 0x40900000;

/* 805AE014-805AE018 0004+00 s=1 e=0 z=0  None .rodata    @4659 */
SECTION_RODATA static u32 const lit_4659 = 0x42AA0000;

/* 805AE018-805AE01C 0004+00 s=1 e=0 z=0  None .rodata    @4660 */
SECTION_RODATA static u32 const lit_4660 = 0x44480000;

/* 805AE01C-805AE020 0004+00 s=1 e=0 z=0  None .rodata    @4661 */
SECTION_RODATA static u32 const lit_4661 = 0x44D70000;

/* 805AE020-805AE024 0004+00 s=1 e=0 z=0  None .rodata    @4662 */
SECTION_RODATA static u32 const lit_4662 = 0x43070000;

/* 805AE024-805AE028 0004+00 s=1 e=0 z=0  None .rodata    @4663 */
SECTION_RODATA static u32 const lit_4663 = 0xC1A80000;

/* 805AE028-805AE02C 0004+00 s=1 e=0 z=0  None .rodata    @4664 */
SECTION_RODATA static u32 const lit_4664 = 0x43000000;

/* 805AE02C-805AE030 0004+00 s=1 e=0 z=0  None .rodata    @4665 */
SECTION_RODATA static u32 const lit_4665 = 0xC4688000;

/* 805AE030-805AE034 0004+00 s=1 e=0 z=0  None .rodata    @4666 */
SECTION_RODATA static u32 const lit_4666 = 0x447A0000;

/* 805AE034-805AE038 0004+00 s=1 e=0 z=0  None .rodata    @4667 */
SECTION_RODATA static u32 const lit_4667 = 0x45400000;

/* 805AE038-805AE03C 0004+00 s=1 e=0 z=0  None .rodata    @4668 */
SECTION_RODATA static u32 const lit_4668 = 0x42C00000;

/* 805AE03C-805AE040 0004+00 s=1 e=0 z=0  None .rodata    @4669 */
SECTION_RODATA static u32 const lit_4669 = 0x3E99999A;

/* 805AE040-805AE044 0004+00 s=1 e=0 z=0  None .rodata    @4670 */
SECTION_RODATA static u32 const lit_4670 = 0xC3C80000;

/* 805AE044-805AE048 0004+00 s=1 e=0 z=0  None .rodata    @4671 */
SECTION_RODATA static u32 const lit_4671 = 0x40A00000;

/* 805AE048-805AE04C 0004+00 s=1 e=0 z=0  None .rodata    @4672 */
SECTION_RODATA static u32 const lit_4672 = 0x420C0000;

/* 805AE04C-805AE050 0004+00 s=1 e=0 z=0  None .rodata    @4673 */
SECTION_RODATA static u32 const lit_4673 = 0x44D48000;

/* 805AE050-805AE054 0004+00 s=1 e=0 z=0  None .rodata    @4674 */
SECTION_RODATA static u32 const lit_4674 = 0xC42A0000;

/* 805AE054-805AE058 0004+00 s=1 e=0 z=0  None .rodata    @4675 */
SECTION_RODATA static u32 const lit_4675 = 0x41B00000;

/* 805AE058-805AE05C 0004+00 s=1 e=0 z=0  None .rodata    @4676 */
SECTION_RODATA static u32 const lit_4676 = 0x426C0000;

/* 805AE05C-805AE060 0004+00 s=1 e=0 z=0  None .rodata    @4677 */
SECTION_RODATA static u32 const lit_4677 = 0x42B80000;

/* 805AE060-805AE064 0004+00 s=1 e=0 z=0  None .rodata    @4678 */
SECTION_RODATA static u32 const lit_4678 = 0x42FA0000;

/* 805AE064-805AE068 0004+00 s=1 e=0 z=0  None .rodata    @4679 */
SECTION_RODATA static u32 const lit_4679 = 0x41E80000;

/* 805AE068-805AE06C 0004+00 s=1 e=0 z=0  None .rodata    @4680 */
SECTION_RODATA static u32 const lit_4680 = 0x43040000;

/* 805AE06C-805AE070 0004+00 s=1 e=0 z=0  None .rodata    @4681 */
SECTION_RODATA static u32 const lit_4681 = 0x43480000;

/* 805AE070-805AE074 0004+00 s=1 e=0 z=0  None .rodata    @4682 */
SECTION_RODATA static u32 const lit_4682 = 0x40E00000;

/* 805AE074-805AE078 0004+00 s=1 e=0 z=0  None .rodata    @4683 */
SECTION_RODATA static u32 const lit_4683 = 0x42140000;

/* 805AE078-805AE07C 0004+00 s=1 e=0 z=0  None .rodata    @4684 */
SECTION_RODATA static u32 const lit_4684 = 0x42780000;

/* 805AE07C-805AE080 0004+00 s=1 e=0 z=0  None .rodata    @4685 */
SECTION_RODATA static u32 const lit_4685 = 0x45098000;

/* 805AE080-805AE088 0008+00 s=1 e=0 z=0  None .rodata    @4727 */
SECTION_RODATA static u8 const lit_4727[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805AE088-805AE090 0008+00 s=1 e=0 z=0  None .rodata    @4728 */
SECTION_RODATA static u8 const lit_4728[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805AE090-805AE098 0008+00 s=1 e=0 z=0  None .rodata    @4729 */
SECTION_RODATA static u8 const lit_4729[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805AE098-805AE09C 0004+00 s=1 e=0 z=0  None .rodata    @4826 */
SECTION_RODATA static u32 const lit_4826 = 0xC45E8000;

/* 805AE09C-805AE0A0 0004+00 s=1 e=0 z=0  None .rodata    @4827 */
SECTION_RODATA static u32 const lit_4827 = 0xC42C8000;

/* 805AE0A0-805AE0A4 0004+00 s=1 e=0 z=0  None .rodata    @4828 */
SECTION_RODATA static u32 const lit_4828 = 0x45480000;

/* 805AE0A4-805AE0A8 0004+00 s=1 e=0 z=0  None .rodata    @4888 */
SECTION_RODATA static u32 const lit_4888 = 0xC69C4000;

/* 805AE0A8-805AE0AC 0004+00 s=1 e=0 z=0  None .rodata    @4889 */
SECTION_RODATA static u32 const lit_4889 = 0x469C4000;

/* 805AE0AC-805AE0B6 000A+00 s=5 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_805AE0AC = "B_dr";
SECTION_DEAD char const* const stringBase_805AE0B1 = "B_DR";
#pragma pop

/* 805ABCF8-805ABE0C 0114+00 s=1 e=0 z=0  None .text      dr_wait__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::dr_wait() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/dr_wait__9daL7ODR_cFv.s"
}
#pragma pop

/* 805ABE0C-805AD7B4 19A8+00 s=2 e=0 z=0  None .text      dr_fly__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::dr_fly() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/dr_fly__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AD7B4-805AD854 00A0+00 s=1 e=0 z=0  None .text      execute__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/execute__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AD854-805AD874 0020+00 s=2 e=0 z=0  None .text      daL7ODR_Execute__FP9daL7ODR_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daL7ODR_Execute(daL7ODR_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/daL7ODR_Execute__FP9daL7ODR_c.s"
}
#pragma pop

/* 805AD874-805AD87C 0008+00 s=1 e=0 z=0  None .text      daL7ODR_IsDelete__FP9daL7ODR_c */
static bool daL7ODR_IsDelete(daL7ODR_c* param_0) {
    return true;
}

/* 805AD87C-805AD8EC 0070+00 s=1 e=0 z=0  None .text      _delete__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::_delete() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/_delete__9daL7ODR_cFv.s"
}
#pragma pop

/* 805AD8EC-805AD90C 0020+00 s=1 e=0 z=0  None .text      daL7ODR_Delete__FP9daL7ODR_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daL7ODR_Delete(daL7ODR_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/daL7ODR_Delete__FP9daL7ODR_c.s"
}
#pragma pop

/* 805AD90C-805ADA0C 0100+00 s=1 e=0 z=0  None .text      CreateHeap__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/CreateHeap__9daL7ODR_cFv.s"
}
#pragma pop

/* 805ADA0C-805ADA2C 0020+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805ADA2C-805ADAC0 0094+00 s=1 e=0 z=0  None .text      check_start__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::check_start() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/check_start__9daL7ODR_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805AE0DC-805AE0E8 000C+00 s=1 e=0 z=0  None .data      @4839 */
SECTION_DATA static void* lit_4839[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__9daL7ODR_cFv,
};

/* 805AE0E8-805AE0F4 000C+00 s=1 e=0 z=0  None .data      @4841 */
SECTION_DATA static void* lit_4841[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dr_wait__9daL7ODR_cFv,
};

/* 805AE0F4-805AE114 0020+00 s=1 e=0 z=0  None .data      l_daL7ODR_Method */
SECTION_DATA static void* l_daL7ODR_Method[8] = {
    (void*)daL7ODR_Create__FP9daL7ODR_c,
    (void*)daL7ODR_Delete__FP9daL7ODR_c,
    (void*)daL7ODR_Execute__FP9daL7ODR_c,
    (void*)daL7ODR_IsDelete__FP9daL7ODR_c,
    (void*)daL7ODR_Draw__FP9daL7ODR_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805AE114-805AE144 0030+00 s=0 e=0 z=1  None .data      g_profile_L7ODR */
SECTION_DATA void* g_profile_L7ODR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02050000, (void*)&g_fpcLf_Method,
    (void*)0x000008B8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00DE0000, (void*)&l_daL7ODR_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 805AE144-805AE168 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_805ADD70,
    (void*)NULL, (void*)NULL, (void*)func_805ADD68,
};

/* 805ADAC0-805ADCD8 0218+00 s=1 e=0 z=0  None .text      create__9daL7ODR_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daL7ODR_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/create__9daL7ODR_cFv.s"
}
#pragma pop

/* 805ADCD8-805ADD48 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 805ADD48-805ADD68 0020+00 s=1 e=0 z=0  None .text      daL7ODR_Create__FP9daL7ODR_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daL7ODR_Create(daL7ODR_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/daL7ODR_Create__FP9daL7ODR_c.s"
}
#pragma pop

/* 805ADD68-805ADD70 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_805ADD68() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/func_805ADD68.s"
}
#pragma pop

/* 805ADD70-805ADD78 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_805ADD70() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/func_805ADD70.s"
}
#pragma pop

/* 805ADD78-805ADD94 001C+00 s=1 e=0 z=0  None .text      changeDemoPos0__9daPy_py_cFPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::changeDemoPos0(cXyz const* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/changeDemoPos0__9daPy_py_cFPC4cXyz.s"
}
#pragma pop

/* 805ADD94-805ADDA8 0014+00 s=1 e=0 z=0  None .text      changeDemoMode__9daPy_py_cFUliis */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/changeDemoMode__9daPy_py_cFUliis.s"
}
#pragma pop

/* 805ADDA8-805ADDD8 0030+00 s=1 e=0 z=0  None .text      isStop__13mDoExt_morf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoExt_morf_c::isStop() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/isStop__13mDoExt_morf_cFv.s"
}
#pragma pop

/* 805ADDD8-805ADEEC 0114+00 s=1 e=0 z=0  None .text      abs__4cXyzCFRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::abs(Vec const& param_0) const {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/abs__4cXyzCFRC3Vec.s"
}
#pragma pop

/* 805ADEEC-805ADF08 001C+00 s=1 e=0 z=0  None .text      __ct__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::cXyz(cXyz const& param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/__ct__4cXyzFRC4cXyz.s"
}
#pragma pop

/* 805ADF08-805ADF2C 0024+00 s=1 e=0 z=0  None .text      multVecZero__14mDoMtx_stack_cFP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoMtx_stack_c::multVecZero(Vec* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/multVecZero__14mDoMtx_stack_cFP3Vec.s"
}
#pragma pop

/* 805ADF2C-805ADF48 001C+00 s=1 e=0 z=0  None .text      __as__4cXyzFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cXyz::operator=(cXyz const& param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/d_a_L7op_demo_dr/__as__4cXyzFRC4cXyz.s"
}
#pragma pop
