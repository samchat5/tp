//
// Generated By: dol2asm
// Translation Unit: d_a_e_yc
//

#include "rel/d/a/e/d_a_e_yc/d_a_e_yc.h"
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

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_yc_class {};

struct daE_YC_HIO_c {
    /* 807EFECC */ daE_YC_HIO_c();
    /* 807F27BC */ ~daE_YC_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dStage_roomControl_c {
    /* 800248A8 */ void destroyMemoryBlock();
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

    /* 8004C218 */ void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

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
    /* 807F274C */ ~dBgS_ObjAcch();
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

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 807F26BC */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 807F2704 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

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

struct J3DModel {};

struct J3DFrameCtrl {
    /* 8032842C */ void checkPass(f32);
};

//
// Forward References:
//

static void anm_init(e_yc_class*, int, f32, u8, f32);
static void daE_YC_Draw(e_yc_class*);
static void damage_check(e_yc_class*);
static void e_yc_fly(e_yc_class*);
static void e_yc_f_fly(e_yc_class*);
static void e_yc_hovering(e_yc_class*);
static void e_yc_attack(e_yc_class*);
static void e_yc_wolfbite(e_yc_class*);
static void anm_se_set(e_yc_class*);
static void action(e_yc_class*);
static void daE_YC_Execute(e_yc_class*);
static bool daE_YC_IsDelete(e_yc_class*);
static void daE_YC_Delete(e_yc_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_YC_Create(fopAc_ac_c*);

extern "C" void __ct__12daE_YC_HIO_cFv();
extern "C" static void anm_init__FP10e_yc_classifUcf();
extern "C" static void daE_YC_Draw__FP10e_yc_class();
extern "C" static void damage_check__FP10e_yc_class();
extern "C" static void e_yc_fly__FP10e_yc_class();
extern "C" static void e_yc_f_fly__FP10e_yc_class();
extern "C" static void e_yc_hovering__FP10e_yc_class();
extern "C" static void e_yc_attack__FP10e_yc_class();
extern "C" static void e_yc_wolfbite__FP10e_yc_class();
extern "C" static void anm_se_set__FP10e_yc_class();
extern "C" static void action__FP10e_yc_class();
extern "C" static void daE_YC_Execute__FP10e_yc_class();
extern "C" static bool daE_YC_IsDelete__FP10e_yc_class();
extern "C" static void daE_YC_Delete__FP10e_yc_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_YC_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12daE_YC_HIO_cFv();
extern "C" void __sinit_d_a_e_yc_cpp();
extern "C" static void func_807F2840();
extern "C" static void func_807F2848();
extern "C" extern u32 const lit_3867;
extern "C" extern u32 const lit_3868;
extern "C" extern u32 const lit_3869;
extern "C" extern u32 const lit_3870;
extern "C" extern u32 const lit_3876;
extern "C" extern u32 const lit_4084;
extern "C" extern u32 const lit_4085;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_YC[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&,
                        dKy_tevstr_c*, s16, f32, _GXTexObj*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void JPASetRMtxTVecfromMtx(f32 const (*)[4], f32 (*)[4], JGeometry::TVec3__template0*);
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
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void destroyMemoryBlock__20dStage_roomControl_cFv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
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
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
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
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80451124[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 807F2864-807F2868 0004+00 s=12 e=0 z=0  None .rodata    @3715 */
SECTION_RODATA static u32 const lit_3715 = 0x3F800000;

/* 807F2954-807F2970 001C+00 s=1 e=0 z=0  None .data      @3878 */
SECTION_DATA static void* lit_3878[7] = {
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x168),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x170),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x23C),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x288),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x2CC),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x324),
    (void*)(((char*)e_yc_fly__FP10e_yc_class) + 0x348),
};

/* 807F2970-807F298C 001C+00 s=1 e=0 z=0  None .data      @4087 */
SECTION_DATA static void* lit_4087[7] = {
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0xE8),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x100),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x250),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x27C),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x2AC),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x3D0),
    (void*)(((char*)e_yc_attack__FP10e_yc_class) + 0x414),
};

/* 807F298C-807F29E0 0054+00 s=1 e=0 z=0  None .data      @4315 */
SECTION_DATA static void* lit_4315[21] = {
    (void*)(((char*)action__FP10e_yc_class) + 0x70),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0x7C),
    (void*)(((char*)action__FP10e_yc_class) + 0x88),
    (void*)(((char*)action__FP10e_yc_class) + 0x94),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA8),
    (void*)(((char*)action__FP10e_yc_class) + 0xA0),
};

/* 807F29E0-807F29E8 0008+00 s=1 e=0 z=0  None .data      wing_j$4328 */
SECTION_DATA static u8 wing_j[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x11,
};

/* 807F29E8-807F2A28 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$4529 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807F2A28-807F2A68 0040+00 s=1 e=0 z=0  None .data      at_sph_src$4530 */
SECTION_DATA static u8 at_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807F2A68-807F2A88 0020+00 s=1 e=0 z=0  None .data      l_daE_YC_Method */
SECTION_DATA static void* l_daE_YC_Method[8] = {
    (void*)daE_YC_Create__FP10fopAc_ac_c,
    (void*)daE_YC_Delete__FP10e_yc_class,
    (void*)daE_YC_Execute__FP10e_yc_class,
    (void*)daE_YC_IsDelete__FP10e_yc_class,
    (void*)daE_YC_Draw__FP10e_yc_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807F2A88-807F2AB8 0030+00 s=0 e=0 z=1  None .data      g_profile_E_YC */
SECTION_DATA void* g_profile_E_YC[12] = {
    (void*)0xFFFFFFFD, (void*)0x0004FFFD,
    (void*)0x00F50000, (void*)&g_fpcLf_Method,
    (void*)0x00000BA8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00BB0000, (void*)&l_daE_YC_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 807F2AB8-807F2AC4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807F2AC4-807F2AD0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 807F2AD0-807F2AF4 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_807F2848,
    (void*)NULL, (void*)NULL, (void*)func_807F2840,
};

/* 807F2AF4-807F2B00 000C+00 s=2 e=0 z=0  None .data      __vt__12daE_YC_HIO_c */
SECTION_DATA static void* __vt__12daE_YC_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12daE_YC_HIO_cFv,
};

/* 807EFECC-807EFEF0 0024+00 s=1 e=0 z=0  None .text      __ct__12daE_YC_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_YC_HIO_c::daE_YC_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__ct__12daE_YC_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2868-807F286C 0004+00 s=9 e=0 z=0  None .rodata    @3729 */
SECTION_RODATA static u8 const lit_3729[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 807F286C-807F2870 0004+00 s=1 e=0 z=0  None .rodata    @3730 */
SECTION_RODATA static u32 const lit_3730 = 0xBF800000;

/* 807F2870-807F2874 0004+00 s=3 e=0 z=0  None .rodata    @3771 */
SECTION_RODATA static u32 const lit_3771 = 0x42C80000;

/* 807F2874-807F2878 0004+00 s=1 e=0 z=0  None .rodata    @3772 */
SECTION_RODATA static u32 const lit_3772 = 0x44D48000;

/* 807F2878-807F287C 0004+00 s=2 e=0 z=0  None .rodata    @3859 */
SECTION_RODATA static u32 const lit_3859 = 0x41400000;

/* 807F287C-807F2880 0004+00 s=2 e=0 z=0  None .rodata    @3860 */
SECTION_RODATA static u32 const lit_3860 = 0x428C0000;

/* 807F2880-807F2884 0004+00 s=5 e=0 z=0  None .rodata    @3861 */
SECTION_RODATA static u32 const lit_3861 = 0x41200000;

/* 807F2884-807F2888 0004+00 s=1 e=0 z=0  None .rodata    @3862 */
SECTION_RODATA static u32 const lit_3862 = 0x41C80000;

/* 807F2888-807F288C 0004+00 s=1 e=0 z=0  None .rodata    @3863 */
SECTION_RODATA static u32 const lit_3863 = 0x44FA0000;

/* 807F288C-807F2890 0004+00 s=3 e=0 z=0  None .rodata    @3864 */
SECTION_RODATA static u32 const lit_3864 = 0x43480000;

/* 807F2890-807F2894 0004+00 s=1 e=0 z=0  None .rodata    @3865 */
SECTION_RODATA static u32 const lit_3865 = 0x43160000;

/* 807F2894-807F2898 0004+00 s=2 e=0 z=0  None .rodata    @3866 */
SECTION_RODATA static u32 const lit_3866 = 0x43960000;

/* 807F2898-807F289C 0004+00 s=0 e=0 z=0  None .rodata    @3867 */
SECTION_RODATA u32 const lit_3867 = 0x420C0000;

/* 807F289C-807F28A0 0004+00 s=0 e=0 z=0  None .rodata    @3868 */
SECTION_RODATA u32 const lit_3868 = 0x3E800000;

/* 807F28A0-807F28A4 0004+00 s=0 e=0 z=0  None .rodata    @3869 */
SECTION_RODATA u32 const lit_3869 = 0x3E99999A;

/* 807F28A4-807F28A8 0004+00 s=0 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA u32 const lit_3870 = 0x40800000;

/* 807F28A8-807F28AC 0004+00 s=1 e=0 z=0  None .rodata    @3871 */
SECTION_RODATA static u32 const lit_3871 = 0x43C80000;

/* 807F28AC-807F28B0 0004+00 s=1 e=0 z=0  None .rodata    @3872 */
SECTION_RODATA static u32 const lit_3872 = 0x3D4CCCCD;

/* 807F28B0-807F28B4 0004+00 s=1 e=0 z=0  None .rodata    @3873 */
SECTION_RODATA static u32 const lit_3873 = 0x40400000;

/* 807F28B4-807F28B8 0004+00 s=2 e=0 z=0  None .rodata    @3874 */
SECTION_RODATA static u32 const lit_3874 = 0x3F000000;

/* 807F28B8-807F28BC 0004+00 s=1 e=0 z=0  None .rodata    @3875 */
SECTION_RODATA static u32 const lit_3875 = 0x3D23D70A;

/* 807F28BC-807F28C0 0004+00 s=0 e=0 z=0  None .rodata    @3876 */
SECTION_RODATA u32 const lit_3876 = 0x3C23D70A;

/* 807F28C0-807F28C4 0004+00 s=3 e=0 z=0  None .rodata    @3932 */
SECTION_RODATA static u32 const lit_3932 = 0x447A0000;

/* 807F28C4-807F28C8 0004+00 s=1 e=0 z=0  None .rodata    @3933 */
SECTION_RODATA static u32 const lit_3933 = 0x457A0000;

/* 807F28C8-807F28CC 0004+00 s=1 e=0 z=0  None .rodata    @3959 */
SECTION_RODATA static u32 const lit_3959 = 0x40A00000;

/* 807F28CC-807F28D0 0004+00 s=1 e=0 z=0  None .rodata    @3960 */
SECTION_RODATA static u32 const lit_3960 = 0xC0A00000;

/* 807F28D0-807F28D4 0004+00 s=1 e=0 z=0  None .rodata    @3961 */
SECTION_RODATA static u32 const lit_3961 = 0x453B8000;

/* 807F28D4-807F28D8 0004+00 s=2 e=0 z=0  None .rodata    @3962 */
SECTION_RODATA static u32 const lit_3962 = 0x459C4000;

/* 807F28D8-807F28DC 0004+00 s=3 e=0 z=0  None .rodata    @4078 */
SECTION_RODATA static u32 const lit_4078 = 0x42480000;

/* 807F28DC-807F28E0 0004+00 s=2 e=0 z=0  None .rodata    @4079 */
SECTION_RODATA static u32 const lit_4079 = 0x43FA0000;

/* 807F28E0-807F28E4 0004+00 s=1 e=0 z=0  None .rodata    @4080 */
SECTION_RODATA static u32 const lit_4080 = 0x41F00000;

/* 807F28E4-807F28EC 0008+00 s=1 e=0 z=0  None .rodata    @4081 */
SECTION_RODATA static u8 const lit_4081[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807F28EC-807F28F4 0008+00 s=1 e=0 z=0  None .rodata    @4082 */
SECTION_RODATA static u8 const lit_4082[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807F28F4-807F28FC 0008+00 s=1 e=0 z=0  None .rodata    @4083 */
SECTION_RODATA static u8 const lit_4083[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807F28FC-807F2900 0004+00 s=0 e=0 z=0  None .rodata    @4084 */
SECTION_RODATA u32 const lit_4084 = 0x43AF0000;

/* 807F2900-807F2904 0004+00 s=0 e=0 z=0  None .rodata    @4085 */
SECTION_RODATA u32 const lit_4085 = 0x3F400000;

/* 807F2904-807F2908 0004+00 s=1 e=0 z=0  None .rodata    @4167 */
SECTION_RODATA static u32 const lit_4167 = 0x40000000;

/* 807F2908-807F290C 0004+00 s=1 e=0 z=0  None .rodata    @4267 */
SECTION_RODATA static u32 const lit_4267 = 0x41E00000;

/* 807F290C-807F2910 0004+00 s=1 e=0 z=0  None .rodata    @4268 */
SECTION_RODATA static u32 const lit_4268 = 0x41D80000;

/* 807F2910-807F2914 0004+00 s=1 e=0 z=0  None .rodata    @4269 */
SECTION_RODATA static u32 const lit_4269 = 0x41300000;

/* 807F2914-807F2918 0004+00 s=1 e=0 z=0  None .rodata    @4270 */
SECTION_RODATA static u32 const lit_4270 = 0x42100000;

/* 807F2918-807F291C 0004+00 s=1 e=0 z=0  None .rodata    @4271 */
SECTION_RODATA static u32 const lit_4271 = 0x40E00000;

/* 807F291C-807F2920 0004+00 s=1 e=0 z=0  None .rodata    @4272 */
SECTION_RODATA static u32 const lit_4272 = 0x40C00000;

/* 807F2920-807F2924 0004+00 s=1 e=0 z=0  None .rodata    @4273 */
SECTION_RODATA static u32 const lit_4273 = 0x41600000;

/* 807F2924-807F2928 0004+00 s=1 e=0 z=0  None .rodata    @4274 */
SECTION_RODATA static u32 const lit_4274 = 0x41700000;

/* 807F2928-807F292C 0004+00 s=1 e=0 z=0  None .rodata    @4314 */
SECTION_RODATA static u32 const lit_4314 = 0x3DCCCCCD;

/* 807F292C-807F2930 0004+00 s=1 e=0 z=0  None .rodata    @4480 */
SECTION_RODATA static u32 const lit_4480 = 0xC7C98180;

/* 807F2930-807F2934 0004+00 s=1 e=0 z=0  None .rodata    @4481 */
SECTION_RODATA static u32 const lit_4481 = 0x4715E100;

/* 807F2934-807F2938 0004+00 s=1 e=0 z=0  None .rodata    @4482 */
SECTION_RODATA static u32 const lit_4482 = 0x46A41000;

/* 807F2938-807F293C 0004+00 s=1 e=0 z=0  None .rodata    @4483 */
SECTION_RODATA static u32 const lit_4483 = 0x42A00000;

/* 807F293C-807F2940 0004+00 s=1 e=0 z=0  None .rodata    @4484 */
SECTION_RODATA static u32 const lit_4484 = 0xC1F00000;

/* 807F2940-807F2944 0004+00 s=1 e=0 z=0  None .rodata    @4622 */
SECTION_RODATA static u32 const lit_4622 = 0xC3FA0000;

/* 807F2944-807F2948 0004+00 s=1 e=0 z=0  None .rodata    @4623 */
SECTION_RODATA static u32 const lit_4623 = 0xC3960000;

/* 807F2948-807F294C 0004+00 s=1 e=0 z=0  None .rodata    @4624 */
SECTION_RODATA static u32 const lit_4624 = 0x477FFF00;

/* 807F294C-807F2951 0005+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_807F294C = "E_yc";
#pragma pop

/* 807EFEF0-807EFF9C 00AC+00 s=5 e=0 z=0  None .text      anm_init__FP10e_yc_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(e_yc_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/anm_init__FP10e_yc_classifUcf.s"
}
#pragma pop

/* 807EFF9C-807F00BC 0120+00 s=1 e=0 z=0  None .text      daE_YC_Draw__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YC_Draw(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Draw__FP10e_yc_class.s"
}
#pragma pop

/* 807F00BC-807F01AC 00F0+00 s=1 e=0 z=0  None .text      damage_check__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void damage_check(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/damage_check__FP10e_yc_class.s"
}
#pragma pop

/* 807F01AC-807F06AC 0500+00 s=2 e=0 z=0  None .text      e_yc_fly__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_yc_fly(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_fly__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2B08-807F2B0C 0004+00 s=4 e=0 z=0  None .bss       S_area_dis */
static u8 S_area_dis[4];

/* 807F06AC-807F0AA0 03F4+00 s=1 e=0 z=0  None .text      e_yc_f_fly__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_yc_f_fly(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_f_fly__FP10e_yc_class.s"
}
#pragma pop

/* 807F0AA0-807F0C40 01A0+00 s=1 e=0 z=0  None .text      e_yc_hovering__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_yc_hovering(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_hovering__FP10e_yc_class.s"
}
#pragma pop

/* 807F0C40-807F1218 05D8+00 s=2 e=0 z=0  None .text      e_yc_attack__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_yc_attack(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_attack__FP10e_yc_class.s"
}
#pragma pop

/* 807F1218-807F165C 0444+00 s=1 e=0 z=0  None .text      e_yc_wolfbite__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_yc_wolfbite(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/e_yc_wolfbite__FP10e_yc_class.s"
}
#pragma pop

/* 807F165C-807F1AD4 0478+00 s=1 e=0 z=0  None .text      anm_se_set__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_se_set(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/anm_se_set__FP10e_yc_class.s"
}
#pragma pop

/* 807F1AD4-807F1CE4 0210+00 s=2 e=0 z=0  None .text      action__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/action__FP10e_yc_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807F2B0C-807F2B10 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_807F2B0C[4];

/* 807F2B10-807F2B1C 000C+00 s=1 e=0 z=0  None .bss       @3710 */
static u8 lit_3710[12];

/* 807F2B1C-807F2B28 000C+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[12];

/* 807F1CE4-807F2234 0550+00 s=2 e=0 z=0  None .text      daE_YC_Execute__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YC_Execute(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Execute__FP10e_yc_class.s"
}
#pragma pop

/* 807F2234-807F223C 0008+00 s=1 e=0 z=0  None .text      daE_YC_IsDelete__FP10e_yc_class */
static bool daE_YC_IsDelete(e_yc_class* param_0) {
    return true;
}

/* 807F223C-807F22A4 0068+00 s=1 e=0 z=0  None .text      daE_YC_Delete__FP10e_yc_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YC_Delete(e_yc_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Delete__FP10e_yc_class.s"
}
#pragma pop

/* 807F22A4-807F239C 00F8+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807F239C-807F26BC 0320+00 s=1 e=0 z=0  None .text      daE_YC_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_YC_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/daE_YC_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807F26BC-807F2704 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 807F2704-807F274C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 807F274C-807F27BC 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 807F27BC-807F2804 0048+00 s=2 e=0 z=0  None .text      __dt__12daE_YC_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_YC_HIO_c::~daE_YC_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__dt__12daE_YC_HIO_cFv.s"
}
#pragma pop

/* 807F2804-807F2840 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_yc_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_yc_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/__sinit_d_a_e_yc_cpp.s"
}
#pragma pop

/* 807F2840-807F2848 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_807F2840() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/func_807F2840.s"
}
#pragma pop

/* 807F2848-807F2850 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_807F2848() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_yc/d_a_e_yc/func_807F2848.s"
}
#pragma pop
