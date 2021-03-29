//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crvgate
//

#include "rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {
    /* 80BD0844 */ ~cXyz();
    /* 80BD2E7C */ cXyz();
};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CDD4 */ void transM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct daObjCRVGATE_c {
    /* 80BD0398 */ void initCcCylinder();
    /* 80BD0500 */ void setCcCylinder();
    /* 80BD069C */ void checkOpen();
    /* 80BD0880 */ void actionStartEvent();
    /* 80BD0978 */ void actionWaitEvent();
    /* 80BD0A64 */ void Demo_Set();
    /* 80BD0B7C */ void SetOpen();
    /* 80BD0B88 */ void actionDemoEvent();
    /* 80BD0D28 */ void event_proc_call();
    /* 80BD0D90 */ void CheckVec();
    /* 80BD0E1C */ void KeyVib();
    /* 80BD0F9C */ void DoorVib();
    /* 80BD10C0 */ void VibStop();
    /* 80BD10D0 */ void CloseVibration();
    /* 80BD1110 */ void CloseAction();
    /* 80BD18E0 */ void OpenAction();
    /* 80BD21E4 */ void HakaiMotion();
    /* 80BD22C8 */ void DoorAction();
    /* 80BD2338 */ void B_CloseAction();
    /* 80BD245C */ void SetB_Close();
    /* 80BD2528 */ void setBaseMtx();
    /* 80BD2670 */ void CreateHeap();
    /* 80BD2758 */ void SetDoor();
    /* 80BD28C0 */ void create();
    /* 80BD2E88 */ void Create();
    /* 80BD2ECC */ void Execute(f32 (**)[3][4]);
    /* 80BD2FB8 */ void Draw();
    /* 80BD3074 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80BD2C74 */ ~dCcD_Sph();
    /* 80BD2D40 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct dCamera_c {
    /* 801614AC */ void Start();
    /* 801614D0 */ void Stop();
    /* 8016300C */ void SetTrimSize(s32);
    /* 80180C18 */ void Reset(cXyz, cXyz);
    /* 80181E64 */ void Eye();
    /* 80181E98 */ void Center();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BD2E0C */ ~dBgS_ObjAcch();
};

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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 80BD2DC4 */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 80BD2BE4 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BD2C2C */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjCRVGATE_Create(fopAc_ac_c*);
static void daObjCRVGATE_Delete(daObjCRVGATE_c*);
static void daObjCRVGATE_Draw(daObjCRVGATE_c*);
static void daObjCRVGATE_Execute(daObjCRVGATE_c*);
static bool daObjCRVGATE_IsDelete(daObjCRVGATE_c*);

extern "C" void initCcCylinder__14daObjCRVGATE_cFv();
extern "C" void setCcCylinder__14daObjCRVGATE_cFv();
extern "C" static void daObjCRVGATE_Create__FP10fopAc_ac_c();
extern "C" static void daObjCRVGATE_Delete__FP14daObjCRVGATE_c();
extern "C" void checkOpen__14daObjCRVGATE_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void actionStartEvent__14daObjCRVGATE_cFv();
extern "C" void actionWaitEvent__14daObjCRVGATE_cFv();
extern "C" void Demo_Set__14daObjCRVGATE_cFv();
extern "C" void SetOpen__14daObjCRVGATE_cFv();
extern "C" void actionDemoEvent__14daObjCRVGATE_cFv();
extern "C" void event_proc_call__14daObjCRVGATE_cFv();
extern "C" void CheckVec__14daObjCRVGATE_cFv();
extern "C" void KeyVib__14daObjCRVGATE_cFv();
extern "C" void DoorVib__14daObjCRVGATE_cFv();
extern "C" void VibStop__14daObjCRVGATE_cFv();
extern "C" void CloseVibration__14daObjCRVGATE_cFv();
extern "C" void CloseAction__14daObjCRVGATE_cFv();
extern "C" void OpenAction__14daObjCRVGATE_cFv();
extern "C" void HakaiMotion__14daObjCRVGATE_cFv();
extern "C" void DoorAction__14daObjCRVGATE_cFv();
extern "C" void B_CloseAction__14daObjCRVGATE_cFv();
extern "C" void SetB_Close__14daObjCRVGATE_cFv();
extern "C" void setBaseMtx__14daObjCRVGATE_cFv();
extern "C" static void daObjCRVGATE_Draw__FP14daObjCRVGATE_c();
extern "C" static void daObjCRVGATE_Execute__FP14daObjCRVGATE_c();
extern "C" void CreateHeap__14daObjCRVGATE_cFv();
extern "C" void SetDoor__14daObjCRVGATE_cFv();
extern "C" void create__14daObjCRVGATE_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjCRVGATE_IsDelete__FP14daObjCRVGATE_c();
extern "C" void Create__14daObjCRVGATE_cFv();
extern "C" void Execute__14daObjCRVGATE_cFPPA3_A4_f();
extern "C" void Draw__14daObjCRVGATE_cFv();
extern "C" void Delete__14daObjCRVGATE_cFv();
extern "C" static void func_80BD30A8();
extern "C" static void func_80BD30B0();
extern "C" extern u32 const lit_4671;
extern "C" extern u32 const lit_4672;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_CRVGATE[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_SearchByID(unsigned int, fopAc_ac_c**);
void fopAcM_SearchByName(s16, fopAc_ac_c**);
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
void fopAcM_createChild(s16, unsigned int, u32, cXyz const*, int, csXyz const*, cXyz const*, s8,
                        int (*)(void*));
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void dCam_getBody();
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
void cLib_chaseAngleS(s16*, s16, s16);
void cLib_targetAngleY(Vec const*, Vec const*);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__5csXyzFsss();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void __construct_array();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mGroundY__11fopAcM_gc_c;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BD30C0-80BD3100 0040+00 s=12 e=0 z=0  None .rodata    ccCylSrc$3774 */
SECTION_RODATA static u8 const ccCylSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70, 0x00, 0x00,
};

/* 80BD3100-80BD3104 0004+00 s=2 e=0 z=0  None .rodata    @3792 */
SECTION_RODATA static u32 const lit_3792 = 0x42C80000;

/* 80BD3104-80BD3108 0004+00 s=2 e=0 z=0  None .rodata    @3793 */
SECTION_RODATA static u32 const lit_3793 = 0x42BE0000;

/* 80BD3108-80BD3110 0004+04 s=9 e=0 z=0  None .rodata    @3794 */
SECTION_RODATA static u8 const lit_3794[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BD3110-80BD3118 0008+00 s=6 e=0 z=0  None .rodata    @3796 */
SECTION_RODATA static u8 const lit_3796[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BD0398-80BD0500 0168+00 s=1 e=0 z=0  None .text      initCcCylinder__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/initCcCylinder__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3118-80BD311C 0004+00 s=1 e=0 z=0  None .rodata    @3817 */
SECTION_RODATA static u32 const lit_3817 = 0x42A00000;

/* 80BD311C-80BD3120 0004+00 s=1 e=0 z=0  None .rodata    @3818 */
SECTION_RODATA static u32 const lit_3818 = 0x43020000;

/* 80BD0500-80BD0658 0158+00 s=1 e=0 z=0  None .text      setCcCylinder__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::setCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/setCcCylinder__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0658-80BD0678 0020+00 s=1 e=0 z=0  None .text      daObjCRVGATE_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVGATE_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/daObjCRVGATE_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BD0678-80BD069C 0024+00 s=1 e=0 z=0  None .text      daObjCRVGATE_Delete__FP14daObjCRVGATE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVGATE_Delete(daObjCRVGATE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/daObjCRVGATE_Delete__FP14daObjCRVGATE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3120-80BD3128 0008+00 s=3 e=0 z=0  None .rodata    @3881 */
SECTION_RODATA static u8 const lit_3881[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BD3128-80BD3130 0008+00 s=3 e=0 z=0  None .rodata    @3882 */
SECTION_RODATA static u8 const lit_3882[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BD3130-80BD3138 0008+00 s=4 e=0 z=0  None .rodata    @3883 */
SECTION_RODATA static u8 const lit_3883[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BD3138-80BD313C 0004+00 s=3 e=0 z=0  None .rodata    @3884 */
SECTION_RODATA static u32 const lit_3884 = 0x43480000;

/* 80BD069C-80BD0844 01A8+00 s=1 e=0 z=0  None .text      checkOpen__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::checkOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/checkOpen__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0844-80BD0880 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BD0880-80BD0978 00F8+00 s=1 e=0 z=0  None .text      actionStartEvent__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::actionStartEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/actionStartEvent__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD313C-80BD3140 0004+00 s=5 e=0 z=0  None .rodata    @3937 */
SECTION_RODATA static u32 const lit_3937 = 0x3F800000;

/* 80BD3140-80BD3144 0004+00 s=5 e=0 z=0  None .rodata    @3938 */
SECTION_RODATA static u32 const lit_3938 = 0xBF800000;

/* 80BD0978-80BD0A64 00EC+00 s=1 e=0 z=0  None .text      actionWaitEvent__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::actionWaitEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/actionWaitEvent__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3144-80BD3148 0004+00 s=3 e=0 z=0  None .rodata    @3990 */
SECTION_RODATA static u32 const lit_3990 = 0x43960000;

/* 80BD3148-80BD314C 0004+00 s=3 e=0 z=0  None .rodata    @3991 */
SECTION_RODATA static u32 const lit_3991 = 0x43FA0000;

/* 80BD0A64-80BD0B7C 0118+00 s=1 e=0 z=0  None .text      Demo_Set__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::Demo_Set() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/Demo_Set__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0B7C-80BD0B88 000C+00 s=2 e=0 z=0  None .text      SetOpen__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::SetOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/SetOpen__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD314C-80BD3150 0004+00 s=1 e=0 z=0  None .rodata    @4030 */
SECTION_RODATA static u32 const lit_4030 = 0xC0A00000;

/* 80BD3150-80BD3154 0004+00 s=2 e=0 z=0  None .rodata    @4031 */
SECTION_RODATA static u32 const lit_4031 = 0x425C0000;

/* 80BD3154-80BD3158 0004+00 s=1 e=0 z=0  None .rodata    @4032 */
SECTION_RODATA static u32 const lit_4032 = 0x3F000000;

/* 80BD3158-80BD315C 0004+00 s=1 e=0 z=0  None .rodata    @4033 */
SECTION_RODATA static u32 const lit_4033 = 0x3FD55555;

/* 80BD0B88-80BD0D28 01A0+00 s=1 e=0 z=0  None .text      actionDemoEvent__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::actionDemoEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/actionDemoEvent__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0D28-80BD0D90 0068+00 s=1 e=0 z=0  None .text      event_proc_call__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/event_proc_call__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0D90-80BD0E1C 008C+00 s=1 e=0 z=0  None .text      CheckVec__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::CheckVec() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/CheckVec__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0E1C-80BD0F9C 0180+00 s=1 e=0 z=0  None .text      KeyVib__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::KeyVib() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/KeyVib__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD0F9C-80BD10C0 0124+00 s=1 e=0 z=0  None .text      DoorVib__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::DoorVib() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/DoorVib__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD10C0-80BD10D0 0010+00 s=1 e=0 z=0  None .text      VibStop__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::VibStop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/VibStop__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD10D0-80BD1110 0040+00 s=1 e=0 z=0  None .text      CloseVibration__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::CloseVibration() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/CloseVibration__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD315C-80BD3160 0004+00 s=2 e=0 z=0  None .rodata    @4086 */
SECTION_RODATA static u32 const lit_4086 = 0x43AF0000;

/* 80BD3160-80BD3164 0004+00 s=2 e=0 z=0  None .rodata    @4087 */
SECTION_RODATA static u32 const lit_4087 = 0x42F00000;

/* 80BD3164-80BD3168 0004+00 s=1 e=0 z=0  None .rodata    @4430 */
SECTION_RODATA static u32 const lit_4430 = 0x43F50000;

/* 80BD3168-80BD316C 0004+00 s=1 e=0 z=0  None .rodata    @4431 */
SECTION_RODATA static u32 const lit_4431 = 0x41200000;

/* 80BD316C-80BD3170 0004+00 s=1 e=0 z=0  None .rodata    @4432 */
SECTION_RODATA static u32 const lit_4432 = 0x428C0000;

/* 80BD3170-80BD3174 0004+00 s=1 e=0 z=0  None .rodata    @4433 */
SECTION_RODATA static u32 const lit_4433 = 0xC1F00000;

/* 80BD1110-80BD18E0 07D0+00 s=2 e=0 z=0  None .text      CloseAction__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::CloseAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/CloseAction__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3174-80BD3178 0004+00 s=1 e=0 z=0  None .rodata    @4648 */
SECTION_RODATA static u32 const lit_4648 = 0x43900000;

/* 80BD3178-80BD317C 0004+00 s=1 e=0 z=0  None .rodata    @4649 */
SECTION_RODATA static u32 const lit_4649 = 0x42E00000;

/* 80BD18E0-80BD21E4 0904+00 s=1 e=0 z=0  None .text      OpenAction__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::OpenAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/OpenAction__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD317C-80BD3180 0004+00 s=1 e=0 z=0  None .rodata    @4663 */
SECTION_RODATA static u32 const lit_4663 = 0xBECCCCCD;

/* 80BD21E4-80BD22C8 00E4+00 s=1 e=0 z=0  None .text      HakaiMotion__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::HakaiMotion() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/HakaiMotion__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD22C8-80BD2338 0070+00 s=1 e=0 z=0  None .text      DoorAction__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::DoorAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/DoorAction__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3180-80BD3184 0004+00 s=0 e=0 z=0  None .rodata    @4671 */
SECTION_RODATA u32 const lit_4671 = 0x42480000;

/* 80BD3184-80BD3188 0004+00 s=0 e=0 z=0  None .rodata    @4672 */
SECTION_RODATA u32 const lit_4672 = 0xC1200000;

/* 80BD3188-80BD3190 0004+04 s=1 e=0 z=0  None .rodata    @4700 */
SECTION_RODATA static u32 const lit_4700[1 + 1 /* padding */] = {
    0x3F333333,
    /* padding */
    0x00000000,
};

/* 80BD3190-80BD3198 0008+00 s=1 e=0 z=0  None .rodata    @4701 */
SECTION_RODATA static u8 const lit_4701[8] = {
    0xBF, 0xE6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
};

/* 80BD2338-80BD245C 0124+00 s=1 e=0 z=0  None .text      B_CloseAction__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::B_CloseAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/B_CloseAction__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD245C-80BD2528 00CC+00 s=0 e=0 z=1  None .text      SetB_Close__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::SetB_Close() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/SetB_Close__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD3198-80BD319C 0004+00 s=1 e=0 z=0  None .rodata    @4757 */
SECTION_RODATA static u32 const lit_4757 = 0x420C0000;

/* 80BD319C-80BD31A0 0004+00 s=1 e=0 z=0  None .rodata    @4758 */
SECTION_RODATA static u32 const lit_4758 = 0xC25C0000;

/* 80BD2528-80BD2624 00FC+00 s=1 e=0 z=0  None .text      setBaseMtx__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/setBaseMtx__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD2624-80BD2650 002C+00 s=1 e=0 z=0  None .text      daObjCRVGATE_Draw__FP14daObjCRVGATE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVGATE_Draw(daObjCRVGATE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/daObjCRVGATE_Draw__FP14daObjCRVGATE_c.s"
}
#pragma pop

/* 80BD2650-80BD2670 0020+00 s=2 e=0 z=0  None .text      daObjCRVGATE_Execute__FP14daObjCRVGATE_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVGATE_Execute(daObjCRVGATE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/daObjCRVGATE_Execute__FP14daObjCRVGATE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD31A0-80BD31A4 0004+00 s=1 e=0 z=0  None .rodata    @4833 */
SECTION_RODATA static u32 const lit_4833 = 0x442F0000;

/* 80BD31A4-80BD31A8 0004+00 s=1 e=0 z=0  None .rodata    @4928 */
SECTION_RODATA static u32 const lit_4928 = 0xC1100000;

/* 80BD31A8-80BD31AC 0004+00 s=1 e=0 z=0  None .rodata    @4929 */
SECTION_RODATA static u32 const lit_4929 = 0xC2C80000;

/* 80BD31AC-80BD31B0 0004+00 s=1 e=0 z=0  None .rodata    @4930 */
SECTION_RODATA static u32 const lit_4930 = 0xC3480000;

/* 80BD31B0-80BD31B4 0004+00 s=1 e=0 z=0  None .rodata    @5063 */
SECTION_RODATA static u32 const lit_5063 = 0xC47A0000;

/* 80BD31B4-80BD31B8 0004+00 s=1 e=0 z=0  None .rodata    @5064 */
SECTION_RODATA static u32 const lit_5064 = 0xC3FA0000;

/* 80BD31B8-80BD31BC 0004+00 s=1 e=0 z=0  None .rodata    @5065 */
SECTION_RODATA static u32 const lit_5065 = 0x447A0000;

/* 80BD31BC-80BD31F3 0037+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BD31BC = "CrvGate";
SECTION_DEAD char const* const stringBase_80BD31C4 = "CaravanGate.bmd";
SECTION_DEAD char const* const stringBase_80BD31D4 = "CaravanKey.bmd";
SECTION_DEAD char const* const stringBase_80BD31E3 = "CaravanGate.dzb";
#pragma pop

/* 80BD31F4-80BD31F8 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80BD2670-80BD2758 00E8+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/CreateHeap__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD2758-80BD28C0 0168+00 s=1 e=0 z=0  None .text      SetDoor__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::SetDoor() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/SetDoor__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD31F8-80BD3218 0020+00 s=1 e=0 z=0  None .data      l_daObjCRVGATE_Method */
SECTION_DATA static void* l_daObjCRVGATE_Method[8] = {
    (void*)daObjCRVGATE_Create__FP10fopAc_ac_c,
    (void*)daObjCRVGATE_Delete__FP14daObjCRVGATE_c,
    (void*)daObjCRVGATE_Execute__FP14daObjCRVGATE_c,
    (void*)daObjCRVGATE_IsDelete__FP14daObjCRVGATE_c,
    (void*)daObjCRVGATE_Draw__FP14daObjCRVGATE_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BD3218-80BD3248 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_CRVGATE */
SECTION_DATA void* g_profile_Obj_CRVGATE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x006F0000, (void*)&g_fpcLf_Method,
    (void*)0x00000DE4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D20000, (void*)&l_daObjCRVGATE_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80BD3248-80BD3254 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BD3254-80BD3260 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BD3260-80BD326C 000C+00 s=4 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BD326C-80BD3290 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80BD30B0,
    (void*)NULL, (void*)NULL, (void*)func_80BD30A8,
};

/* 80BD3290-80BD32B8 0028+00 s=1 e=0 z=0  None .data      __vt__14daObjCRVGATE_c */
SECTION_DATA static void* __vt__14daObjCRVGATE_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__14daObjCRVGATE_cFv,
    (void*)Create__14daObjCRVGATE_cFv,
    (void*)Execute__14daObjCRVGATE_cFPPA3_A4_f,
    (void*)Draw__14daObjCRVGATE_cFv,
    (void*)Delete__14daObjCRVGATE_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BD28C0-80BD2BE4 0324+00 s=1 e=0 z=0  None .text      create__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/create__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD2BE4-80BD2C2C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BD2C2C-80BD2C74 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BD2C74-80BD2D40 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80BD2D40-80BD2DC4 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80BD2DC4-80BD2E0C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BD2E0C-80BD2E7C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BD2E7C-80BD2E80 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BD2E80-80BD2E88 0008+00 s=1 e=0 z=0  None .text      daObjCRVGATE_IsDelete__FP14daObjCRVGATE_c
 */
static bool daObjCRVGATE_IsDelete(daObjCRVGATE_c* param_0) {
    return true;
}

/* 80BD2E88-80BD2ECC 0044+00 s=1 e=0 z=0  None .text      Create__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/func_80BD2E88.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD32B8-80BD32BC 0002+02 s=1 e=0 z=0  None .bss       s_CoCount__29@unnamed@d_a_obj_crvgate_cpp@
 */
static u8 data_80BD32B8[2 + 2 /* padding */];

/* 80BD2ECC-80BD2FB8 00EC+00 s=1 e=0 z=0  None .text      Execute__14daObjCRVGATE_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/Execute__14daObjCRVGATE_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BD2FB8-80BD3074 00BC+00 s=1 e=0 z=0  None .text      Draw__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/Draw__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD3074-80BD30A8 0034+00 s=1 e=0 z=0  None .text      Delete__14daObjCRVGATE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVGATE_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/Delete__14daObjCRVGATE_cFv.s"
}
#pragma pop

/* 80BD30A8-80BD30B0 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BD30A8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/func_80BD30A8.s"
}
#pragma pop

/* 80BD30B0-80BD30B8 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BD30B0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/d_a_obj_crvgate/func_80BD30B0.s"
}
#pragma pop
