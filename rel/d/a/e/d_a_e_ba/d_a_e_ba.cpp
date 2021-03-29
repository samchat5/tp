//
// Generated By: dol2asm
// Translation Unit: d_a_e_ba
//

#include "rel/d/a/e/d_a_e_ba/d_a_e_ba.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
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

struct fopEn_enemy_c {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_ba_class {};

struct daPy_py_c {
    /* 8015F89C */ void checkBoomerangCharge();
};

struct daE_BA_HIO_c {
    /* 8067ECEC */ daE_BA_HIO_c();
    /* 80681F00 */ ~daE_BA_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 80681D7C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80681DD8 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80681E48 */ ~dBgS_AcchCir();
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80681CEC */ ~cM3dGSph();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80681D34 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80681EB8 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
    /* 802C1B7C */ void setLinkSearch(bool);
    /* 802C1B90 */ void setEnemyName(char const*);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct J3DFrameCtrl {
    /* 8032842C */ void checkPass(f32);
};

//
// Forward References:
//

static void ba_disappear(fopAc_ac_c*);
static void anm_init(e_ba_class*, int, f32, u8, f32);
static void daE_BA_Draw(e_ba_class*);
static void shot_b_sub(void*, void*);
static void other_bg_check(e_ba_class*, fopAc_ac_c*);
static void pl_check(e_ba_class*, f32, s16);
static void damage_check(e_ba_class*);
static void path_check(e_ba_class*);
static void fly_move(e_ba_class*);
static void e_ba_roof(e_ba_class*);
static void e_ba_fight_fly(e_ba_class*);
static void e_ba_fight(e_ba_class*);
static void e_ba_attack(e_ba_class*);
static void e_ba_fly(e_ba_class*);
static void e_ba_return(e_ba_class*);
static void e_ba_path_fly(e_ba_class*);
static void e_ba_chance(e_ba_class*);
static void e_ba_wolfbite(e_ba_class*);
static void e_ba_wind(e_ba_class*);
static void e_ba_appear(e_ba_class*);
static void action(e_ba_class*);
static void daE_BA_Execute(e_ba_class*);
static bool daE_BA_IsDelete(e_ba_class*);
static void daE_BA_Delete(e_ba_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_BA_Create(fopAc_ac_c*);
static void setMidnaBindEffect(fopEn_enemy_c*, Z2CreatureEnemy*, cXyz*, cXyz*);

extern "C" void __ct__12daE_BA_HIO_cFv();
extern "C" static void ba_disappear__FP10fopAc_ac_c();
extern "C" static void anm_init__FP10e_ba_classifUcf();
extern "C" static void daE_BA_Draw__FP10e_ba_class();
extern "C" static void shot_b_sub__FPvPv();
extern "C" static void other_bg_check__FP10e_ba_classP10fopAc_ac_c();
extern "C" static void pl_check__FP10e_ba_classfs();
extern "C" static void damage_check__FP10e_ba_class();
extern "C" static void path_check__FP10e_ba_class();
extern "C" static void fly_move__FP10e_ba_class();
extern "C" static void e_ba_roof__FP10e_ba_class();
extern "C" static void e_ba_fight_fly__FP10e_ba_class();
extern "C" static void e_ba_fight__FP10e_ba_class();
extern "C" static void e_ba_attack__FP10e_ba_class();
extern "C" static void e_ba_fly__FP10e_ba_class();
extern "C" static void e_ba_return__FP10e_ba_class();
extern "C" static void e_ba_path_fly__FP10e_ba_class();
extern "C" static void e_ba_chance__FP10e_ba_class();
extern "C" static void e_ba_wolfbite__FP10e_ba_class();
extern "C" static void e_ba_wind__FP10e_ba_class();
extern "C" static void e_ba_appear__FP10e_ba_class();
extern "C" static void action__FP10e_ba_class();
extern "C" static void daE_BA_Execute__FP10e_ba_class();
extern "C" static bool daE_BA_IsDelete__FP10e_ba_class();
extern "C" static void daE_BA_Delete__FP10e_ba_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_BA_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_BA_HIO_cFv();
extern "C" void __sinit_d_a_e_ba_cpp();
extern "C" static void func_80681F84();
extern "C" static void func_80681F8C();
extern "C" static void setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz();
extern "C" extern u32 const lit_4747;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_E_BA[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_createItem(cXyz const*, int, int, int, csXyz const*, cXyz const*, int);
void fopAcM_createDisappear(fopAc_ac_c const*, cXyz const*, u8, u8, u8);
void fopAcM_effSmokeSet1(u32*, u32*, cXyz const*, csXyz const*, f32, dKy_tevstr_c const*, int);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcSch_JudgeForPName(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dPath_GetRoomPath(int, int);
void cc_at_check(fopAc_ac_c*, dCcU_AtInfo*);
void dKy_darkworld_check();
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void JPASetRMtxSTVecfromMtx(f32 const (*)[4], f32 (*)[4], JGeometry::TVec3__template0*,
                            JGeometry::TVec3__template0*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void checkBoomerangCharge__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_80280808();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mParticleTracePCB__13dPa_control_c[4 + 4 /* padding */];
extern "C" extern u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 struct_80451124[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806823BC-806823C0 0004+00 s=20 e=0 z=0  None .rodata    @3947 */
SECTION_RODATA static u32 const lit_3947 = 0x42C80000;

/* 806823C0-806823C4 0004+00 s=16 e=0 z=0  None .rodata    @3948 */
SECTION_RODATA static u8 const lit_3948[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 806823C4-806823CC 0004+04 s=17 e=0 z=0  None .rodata    @3949 */
SECTION_RODATA static u32 const lit_3949[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 806823CC-806823D4 0008+00 s=3 e=0 z=0  None .rodata    @3950 */
SECTION_RODATA static u8 const lit_3950[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806823D4-806823DC 0008+00 s=3 e=0 z=0  None .rodata    @3951 */
SECTION_RODATA static u8 const lit_3951[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806823DC-806823E4 0008+00 s=3 e=0 z=0  None .rodata    @3952 */
SECTION_RODATA static u8 const lit_3952[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806823E4-806823E8 0004+00 s=1 e=0 z=0  None .rodata    @3953 */
SECTION_RODATA static u32 const lit_3953 = 0x3C23D70A;

/* 806823E8-806823EC 0004+00 s=3 e=0 z=0  None .rodata    @3968 */
SECTION_RODATA static u32 const lit_3968 = 0x41700000;

/* 806823EC-806823F0 0004+00 s=1 e=0 z=0  None .rodata    @3969 */
SECTION_RODATA static u32 const lit_3969 = 0x437A0000;

/* 806823F0-806823F4 0004+00 s=3 e=0 z=0  None .rodata    @3970 */
SECTION_RODATA static u32 const lit_3970 = 0x42200000;

/* 806823F4-806823F8 0004+00 s=1 e=0 z=0  None .rodata    @3996 */
SECTION_RODATA static u32 const lit_3996 = 0xBF800000;

/* 806823F8-806823FC 0004+00 s=2 e=0 z=0  None .rodata    @4122 */
SECTION_RODATA static u32 const lit_4122 = 0x428C0000;

/* 806823FC-80682400 0004+00 s=1 e=0 z=0  None .rodata    @4123 */
SECTION_RODATA static u32 const lit_4123 = 0x42A00000;

/* 80682400-80682404 0004+00 s=3 e=0 z=0  None .rodata    @4124 */
SECTION_RODATA static u32 const lit_4124 = 0x3E4CCCCD;

/* 80682404-80682408 0004+00 s=5 e=0 z=0  None .rodata    @4156 */
SECTION_RODATA static u32 const lit_4156 = 0x42480000;

/* 80682408-8068240C 0004+00 s=1 e=0 z=0  None .rodata    @4242 */
SECTION_RODATA static u32 const lit_4242 = 0x44FA0000;

/* 8068240C-80682410 0004+00 s=1 e=0 z=0  None .rodata    @4243 */
SECTION_RODATA static u32 const lit_4243 = 0x3D23D70A;

/* 80682410-80682414 0004+00 s=1 e=0 z=0  None .rodata    @4275 */
SECTION_RODATA static u32 const lit_4275 = 0x3F666666;

/* 80682414-80682418 0004+00 s=3 e=0 z=0  None .rodata    @4276 */
SECTION_RODATA static u32 const lit_4276 = 0x3DCCCCCD;

/* 80682418-8068241C 0004+00 s=5 e=0 z=0  None .rodata    @4277 */
SECTION_RODATA static u32 const lit_4277 = 0x3F000000;

/* 8068241C-80682420 0004+00 s=6 e=0 z=0  None .rodata    @4307 */
SECTION_RODATA static u32 const lit_4307 = 0x40400000;

/* 80682420-80682424 0004+00 s=4 e=0 z=0  None .rodata    @4308 */
SECTION_RODATA static u32 const lit_4308 = 0x3E99999A;

/* 80682424-80682428 0004+00 s=3 e=0 z=0  None .rodata    @4376 */
SECTION_RODATA static u32 const lit_4376 = 0x40000000;

/* 80682428-8068242C 0004+00 s=5 e=0 z=0  None .rodata    @4377 */
SECTION_RODATA static u32 const lit_4377 = 0x41F00000;

/* 8068242C-80682430 0004+00 s=1 e=0 z=0  None .rodata    @4378 */
SECTION_RODATA static u32 const lit_4378 = 0x46400000;

/* 80682430-80682434 0004+00 s=2 e=0 z=0  None .rodata    @4379 */
SECTION_RODATA static u32 const lit_4379 = 0x43160000;

/* 80682434-80682438 0004+00 s=3 e=0 z=0  None .rodata    @4380 */
SECTION_RODATA static u32 const lit_4380 = 0x41200000;

/* 80682438-8068243C 0004+00 s=1 e=0 z=0  None .rodata    @4417 */
SECTION_RODATA static u32 const lit_4417 = 0x42F00000;

/* 8068243C-80682440 0004+00 s=1 e=0 z=0  None .rodata    @4459 */
SECTION_RODATA static u32 const lit_4459 = 0x43FA0000;

/* 80682440-80682444 0004+00 s=3 e=0 z=0  None .rodata    @4460 */
SECTION_RODATA static u32 const lit_4460 = 0x43480000;

/* 80682444-80682448 0004+00 s=1 e=0 z=0  None .rodata    @4587 */
SECTION_RODATA static u32 const lit_4587 = 0x3FC00000;

/* 80682448-8068244C 0004+00 s=1 e=0 z=0  None .rodata    @4588 */
SECTION_RODATA static u32 const lit_4588 = 0x47800000;

/* 8068244C-80682450 0004+00 s=1 e=0 z=0  None .rodata    @4589 */
SECTION_RODATA static u32 const lit_4589 = 0x3F4CCCCD;

/* 80682450-80682454 0004+00 s=1 e=0 z=0  None .rodata    @4629 */
SECTION_RODATA static u32 const lit_4629 = 0xC1A00000;

/* 80682454-80682458 0004+00 s=2 e=0 z=0  None .rodata    @4630 */
SECTION_RODATA static u32 const lit_4630 = 0x40800000;

/* 80682458-8068245C 0004+00 s=1 e=0 z=0  None .rodata    @4654 */
SECTION_RODATA static u32 const lit_4654 = 0x466A6000;

/* 8068245C-80682460 0004+00 s=1 e=0 z=0  None .rodata    @4655 */
SECTION_RODATA static u32 const lit_4655 = 0x447A0000;

/* 80682460-80682464 0004+00 s=2 e=0 z=0  None .rodata    @4678 */
SECTION_RODATA static u32 const lit_4678 = 0x41A00000;

/* 80682464-80682468 0004+00 s=2 e=0 z=0  None .rodata    @4679 */
SECTION_RODATA static u32 const lit_4679 = 0x47C35000;

/* 80682468-8068246C 0004+00 s=1 e=0 z=0  None .rodata    @4680 */
SECTION_RODATA static u32 const lit_4680 = 0x3F333333;

/* 8068246C-80682470 0004+00 s=0 e=0 z=0  None .rodata    @4747 */
SECTION_RODATA u32 const lit_4747 = 0x40A00000;

/* 80682470-80682474 0004+00 s=1 e=0 z=0  None .rodata    @4938 */
SECTION_RODATA static u32 const lit_4938 = 0x469C4000;

/* 80682474-80682478 0004+00 s=1 e=0 z=0  None .rodata    @4939 */
SECTION_RODATA static u32 const lit_4939 = 0x3F19999A;

/* 80682478-8068247C 0004+00 s=1 e=0 z=0  None .rodata    @5134 */
SECTION_RODATA static u32 const lit_5134 = 0xC3480000;

/* 8068247C-80682484 0004+04 s=1 e=0 z=0  None .rodata    @5135 */
SECTION_RODATA static u32 const lit_5135[1 + 1 /* padding */] = {
    0x477FFF00,
    /* padding */
    0x00000000,
};

/* 80682484-8068248C 0008+00 s=1 e=0 z=0  None .rodata    @5137 */
SECTION_RODATA static u8 const lit_5137[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8068248C-8068249C 0010+00 s=2 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_8068248C[16] = {
    /* 8068248C 0005 stringBase_8068248C @stringBase0 */
    0x45,
    0x5F,
    0x62,
    0x61,
    0x00,
    /* 80682491 0005 data_80682491 None */
    0x45,
    0x5F,
    0x66,
    0x62,
    0x00,
    /* 80682496 0006 data_80682496 None */
    0x45,
    0x5F,
    0x69,
    0x62,
    0x00,
    0x00,
};

/* 8068249C-806824A8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806824A8-806824BC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 806824BC-806824C4 0008+00 s=1 e=0 z=0  None .data      e_prim$3826 */
SECTION_DATA static u8 e_prim[8] = {
    0xFF, 0x78, 0x00, 0x00, 0xFF, 0x64, 0x78, 0x00,
};

/* 806824C4-806824CC 0008+00 s=1 e=0 z=0  None .data      e_env$3827 */
SECTION_DATA static u8 e_env[8] = {
    0x5A, 0x2D, 0x2D, 0x00, 0x3C, 0x1E, 0x1E, 0x00,
};

/* 806824CC-806824D4 0006+02 s=1 e=0 z=0  None .data      eff_id$3835 */
SECTION_DATA static u8 eff_id[6 + 2 /* padding */] = {
    0x02,
    0x9D,
    0x02,
    0x9E,
    0x02,
    0x9F,
    /* padding */
    0x00,
    0x00,
};

/* 806824D4-80682514 0040+00 s=1 e=0 z=0  None .data      @4748 */
SECTION_DATA static void* lit_4748[16] = {
    (void*)(((char*)action__FP10e_ba_class) + 0x88),
    (void*)(((char*)action__FP10e_ba_class) + 0x94),
    (void*)(((char*)action__FP10e_ba_class) + 0xAC),
    (void*)(((char*)action__FP10e_ba_class) + 0xC4),
    (void*)(((char*)action__FP10e_ba_class) + 0xE8),
    (void*)(((char*)action__FP10e_ba_class) + 0xF4),
    (void*)(((char*)action__FP10e_ba_class) + 0x108),
    (void*)(((char*)action__FP10e_ba_class) + 0x144),
    (void*)(((char*)action__FP10e_ba_class) + 0x144),
    (void*)(((char*)action__FP10e_ba_class) + 0x144),
    (void*)(((char*)action__FP10e_ba_class) + 0x114),
    (void*)(((char*)action__FP10e_ba_class) + 0x144),
    (void*)(((char*)action__FP10e_ba_class) + 0x144),
    (void*)(((char*)action__FP10e_ba_class) + 0x120),
    (void*)(((char*)action__FP10e_ba_class) + 0x12C),
    (void*)(((char*)action__FP10e_ba_class) + 0x138),
};

/* 80682514-8068251C 0008+00 s=1 e=0 z=0  None .data      fire_name$4786 */
SECTION_DATA static u8 fire_name[8] = {
    0x82, 0x16, 0x82, 0x17, 0x82, 0x18, 0x82, 0x19,
};

/* 8068251C-80682524 0006+02 s=1 e=0 z=0  None .data      ice_name$4787 */
SECTION_DATA static u8 ice_name[6 + 2 /* padding */] = {
    0x82,
    0x1A,
    0x82,
    0x1B,
    0x82,
    0x1C,
    /* padding */
    0x00,
    0x00,
};

/* 80682524-80682530 000C+00 s=1 e=0 z=0  None .data      arc_name$4985 */
SECTION_DATA static void* arc_name[3] = {
    (void*)(((char*)&struct_8068248C) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_8068248C) + 0x5) /* None */,
    (void*)(((char*)&struct_8068248C) + 0xA) /* None */,
};

/* 80682530-80682570 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$5011 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80682570-80682590 0020+00 s=1 e=0 z=0  None .data      l_daE_BA_Method */
SECTION_DATA static void* l_daE_BA_Method[8] = {
    (void*)daE_BA_Create__FP10fopAc_ac_c,
    (void*)daE_BA_Delete__FP10e_ba_class,
    (void*)daE_BA_Execute__FP10e_ba_class,
    (void*)daE_BA_IsDelete__FP10e_ba_class,
    (void*)daE_BA_Draw__FP10e_ba_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80682590-806825C0 0030+00 s=0 e=0 z=1  None .data      g_profile_E_BA */
SECTION_DATA void* g_profile_E_BA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01EA0000, (void*)&g_fpcLf_Method,
    (void*)0x00000AA4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00B40000, (void*)&l_daE_BA_Method,
    (void*)0x10050100, (void*)0x020E0000,
};

/* 806825C0-806825CC 000C+00 s=1 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 806825CC-806825D8 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 806825D8-806825E4 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 806825E4-806825F0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806825F0-806825FC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806825FC-80682620 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80681F8C,
    (void*)NULL, (void*)NULL, (void*)func_80681F84,
};

/* 80682620-8068262C 000C+00 s=2 e=0 z=0  None .data      __vt__12daE_BA_HIO_c */
SECTION_DATA static void* __vt__12daE_BA_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12daE_BA_HIO_cFv,
};

/* 8067ECEC-8067ED30 0044+00 s=1 e=0 z=0  None .text      __ct__12daE_BA_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_BA_HIO_c::daE_BA_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__ct__12daE_BA_HIO_cFv.s"
}
#pragma pop

/* 8067ED30-8067ED90 0060+00 s=2 e=0 z=0  None .text      ba_disappear__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ba_disappear(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/ba_disappear__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8067ED90-8067EE38 00A8+00 s=11 e=0 z=0  None .text      anm_init__FP10e_ba_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(e_ba_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/anm_init__FP10e_ba_classifUcf.s"
}
#pragma pop

/* 8067EE38-8067EEA8 0070+00 s=1 e=0 z=0  None .text      daE_BA_Draw__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_BA_Draw(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/daE_BA_Draw__FP10e_ba_class.s"
}
#pragma pop

/* 8067EEA8-8067EF20 0078+00 s=1 e=0 z=0  None .text      shot_b_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void shot_b_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/shot_b_sub__FPvPv.s"
}
#pragma pop

/* 8067EF20-8067EFF8 00D8+00 s=1 e=0 z=0  None .text other_bg_check__FP10e_ba_classP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void other_bg_check(e_ba_class* param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/other_bg_check__FP10e_ba_classP10fopAc_ac_c.s"
}
#pragma pop

/* 8067EFF8-8067F0AC 00B4+00 s=5 e=0 z=0  None .text      pl_check__FP10e_ba_classfs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void pl_check(e_ba_class* param_0, f32 param_1, s16 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/pl_check__FP10e_ba_classfs.s"
}
#pragma pop

/* 8067F0AC-8067F2DC 0230+00 s=1 e=0 z=0  None .text      damage_check__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void damage_check(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/damage_check__FP10e_ba_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80682638-8068263C 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80682638[4];

/* 8068263C-80682648 000C+00 s=1 e=0 z=0  None .bss       @3963 */
static u8 lit_3963[12];

/* 80682648-80682664 001C+00 s=9 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[28];

/* 80682664-80682763 00FF+00 s=1 e=0 z=0  None .bss       check_index$4162 */
static u8 check_index[255];

/* 8067F2DC-8067F544 0268+00 s=3 e=0 z=0  None .text      path_check__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void path_check(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/path_check__FP10e_ba_class.s"
}
#pragma pop

/* 8067F544-8067F6D4 0190+00 s=6 e=0 z=0  None .text      fly_move__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fly_move(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/fly_move__FP10e_ba_class.s"
}
#pragma pop

/* 8067F6D4-8067F81C 0148+00 s=1 e=0 z=0  None .text      e_ba_roof__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_roof(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_roof__FP10e_ba_class.s"
}
#pragma pop

/* 8067F81C-8067F9E0 01C4+00 s=1 e=0 z=0  None .text      e_ba_fight_fly__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_fight_fly(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_fight_fly__FP10e_ba_class.s"
}
#pragma pop

/* 8067F9E0-8067FD68 0388+00 s=1 e=0 z=0  None .text      e_ba_fight__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_fight(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_fight__FP10e_ba_class.s"
}
#pragma pop

/* 8067FD68-8067FF60 01F8+00 s=1 e=0 z=0  None .text      e_ba_attack__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_attack(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_attack__FP10e_ba_class.s"
}
#pragma pop

/* 8067FF60-8068018C 022C+00 s=1 e=0 z=0  None .text      e_ba_fly__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_fly(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_fly__FP10e_ba_class.s"
}
#pragma pop

/* 8068018C-8068039C 0210+00 s=1 e=0 z=0  None .text      e_ba_return__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_return(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_return__FP10e_ba_class.s"
}
#pragma pop

/* 8068039C-806806B4 0318+00 s=1 e=0 z=0  None .text      e_ba_path_fly__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_path_fly(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_path_fly__FP10e_ba_class.s"
}
#pragma pop

/* 806806B4-806808AC 01F8+00 s=1 e=0 z=0  None .text      e_ba_chance__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_chance(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_chance__FP10e_ba_class.s"
}
#pragma pop

/* 806808AC-80680AF4 0248+00 s=1 e=0 z=0  None .text      e_ba_wolfbite__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_wolfbite(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_wolfbite__FP10e_ba_class.s"
}
#pragma pop

/* 80680AF4-80680C98 01A4+00 s=1 e=0 z=0  None .text      e_ba_wind__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_wind(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_wind__FP10e_ba_class.s"
}
#pragma pop

/* 80680C98-80680DCC 0134+00 s=1 e=0 z=0  None .text      e_ba_appear__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_ba_appear(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/e_ba_appear__FP10e_ba_class.s"
}
#pragma pop

/* 80680DCC-80681128 035C+00 s=2 e=0 z=0  None .text      action__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/action__FP10e_ba_class.s"
}
#pragma pop

/* 80681128-80681734 060C+00 s=2 e=0 z=0  None .text      daE_BA_Execute__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_BA_Execute(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/daE_BA_Execute__FP10e_ba_class.s"
}
#pragma pop

/* 80681734-8068173C 0008+00 s=1 e=0 z=0  None .text      daE_BA_IsDelete__FP10e_ba_class */
static bool daE_BA_IsDelete(e_ba_class* param_0) {
    return true;
}

/* 8068173C-806817A0 0064+00 s=1 e=0 z=0  None .text      daE_BA_Delete__FP10e_ba_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_BA_Delete(e_ba_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/daE_BA_Delete__FP10e_ba_class.s"
}
#pragma pop

/* 806817A0-80681890 00F0+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80681890-80681CEC 045C+00 s=1 e=0 z=0  None .text      daE_BA_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_BA_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/daE_BA_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80681CEC-80681D34 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80681D34-80681D7C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80681D7C-80681DD8 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80681DD8-80681E48 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80681E48-80681EB8 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80681EB8-80681F00 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80681F00-80681F48 0048+00 s=2 e=0 z=0  None .text      __dt__12daE_BA_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_BA_HIO_c::~daE_BA_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__dt__12daE_BA_HIO_cFv.s"
}
#pragma pop

/* 80681F48-80681F84 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_ba_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_ba_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/__sinit_d_a_e_ba_cpp.s"
}
#pragma pop

/* 80681F84-80681F8C 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80681F84() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/func_80681F84.s"
}
#pragma pop

/* 80681F8C-80681F94 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80681F8C() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/func_80681F8C.s"
}
#pragma pop

/* 80681F94-806823A8 0414+00 s=1 e=0 z=0  None .text
 * setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void setMidnaBindEffect(fopEn_enemy_c* param_0, Z2CreatureEnemy* param_1, cXyz* param_2,
                                   cXyz* param_3) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ba/d_a_e_ba/setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz.s"
}
#pragma pop
