//
// Generated By: dol2asm
// Translation Unit: d_a_obj_Y_taihou
//

#include "rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou.h"
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

struct daObjCarry_c {};

struct daObjYtaihou_c {
    /* 80B9FDE8 */ void create1st();
    /* 80B9FEB0 */ void setIronBall(daObjCarry_c*);
    /* 80B9FF08 */ void getEvent(u8);
    /* 80B9FF1C */ void loadAngle();
    /* 80B9FFAC */ void saveAngle();
    /* 80BA0060 */ void setNextAngle();
    /* 80BA0084 */ void setMtx();
    /* 80BA0208 */ void rotateCheck();
    /* 80BA045C */ void shotCheck();
    /* 80BA0964 */ void eventStart();
    /* 80BA0974 */ void CreateHeap();
    /* 80BA09E4 */ void Create();
    /* 80BA0A94 */ void Execute(f32 (**)[3][4]);
    /* 80BA0B4C */ void Draw();
    /* 80BA0C1C */ void Delete();
    /* 80BA0FA4 */ ~daObjYtaihou_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80B9FD20 */ ~cXyz();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
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

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 80BA0F44 */ ~dEvLib_callback_c();
    /* 80BA0F8C */ bool eventStart();
    /* 80BA0F94 */ bool eventRun();
    /* 80BA0F9C */ bool eventEnd();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80BA0E34 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {
    struct PushPullLabel {};
};

struct dBgW {};

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

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80BA0DA4 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BA0DEC */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80BA0EFC */ ~cCcD_GStts();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void ccHitCallback(fopAc_ac_c*, dCcD_GObjInf*, fopAc_ac_c*, dCcD_GObjInf*);
static void pushPullcallBack(fopAc_ac_c*, fopAc_ac_c*, s16, dBgW_Base::PushPullLabel);
static void searchIronBallCallback(void*, void*);
static void daObjYtaihou_create1st(daObjYtaihou_c*);
static void daObjYtaihou_MoveBGDelete(daObjYtaihou_c*);
static void daObjYtaihou_MoveBGExecute(daObjYtaihou_c*);
static void daObjYtaihou_MoveBGDraw(daObjYtaihou_c*);
static void cLib_calcTimer__template0(s16*);

extern "C" static void ccHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void pushPullcallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" void __dt__4cXyzFv();
extern "C" static void searchIronBallCallback__FPvPv();
extern "C" void create1st__14daObjYtaihou_cFv();
extern "C" void setIronBall__14daObjYtaihou_cFP12daObjCarry_c();
extern "C" void getEvent__14daObjYtaihou_cFUc();
extern "C" void loadAngle__14daObjYtaihou_cFv();
extern "C" void saveAngle__14daObjYtaihou_cFv();
extern "C" void setNextAngle__14daObjYtaihou_cFv();
extern "C" void setMtx__14daObjYtaihou_cFv();
extern "C" void rotateCheck__14daObjYtaihou_cFv();
extern "C" void shotCheck__14daObjYtaihou_cFv();
extern "C" void eventStart__14daObjYtaihou_cFv();
extern "C" void CreateHeap__14daObjYtaihou_cFv();
extern "C" void Create__14daObjYtaihou_cFv();
extern "C" void Execute__14daObjYtaihou_cFPPA3_A4_f();
extern "C" void Draw__14daObjYtaihou_cFv();
extern "C" void Delete__14daObjYtaihou_cFv();
extern "C" static void daObjYtaihou_create1st__FP14daObjYtaihou_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c();
extern "C" static void daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c();
extern "C" static void daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__14daObjYtaihou_cFv();
extern "C" static void func_80BA1118();
extern "C" static void func_80BA1134();
extern "C" static void func_80BA113C();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Ytaihou[12];
extern "C" extern u8 lit_1107[1 + 3 /* padding */];
extern "C" extern u8 lit_1105[1 + 3 /* padding */];
extern "C" extern u8 lit_1104[1 + 3 /* padding */];
extern "C" extern u8 lit_1099[1 + 3 /* padding */];
extern "C" extern u8 lit_1097[1 + 3 /* padding */];
extern "C" extern u8 lit_1095[1 + 3 /* padding */];
extern "C" extern u8 lit_1094[1 + 3 /* padding */];
extern "C" extern u8 lit_1057[1 + 3 /* padding */];
extern "C" extern u8 lit_1055[1 + 3 /* padding */];
extern "C" extern u8 lit_1053[1 + 3 /* padding */];
extern "C" extern u8 lit_1052[1 + 3 /* padding */];
extern "C" extern u8 lit_1014[1 + 3 /* padding */];
extern "C" extern u8 lit_1012[1 + 3 /* padding */];
extern "C" extern u8 lit_1010[1 + 3 /* padding */];
extern "C" extern u8 lit_1009[1 + 3 /* padding */];
extern "C" extern u8 data_80BA137C[4];
extern "C" extern u8 data_80BA1380[4];
extern "C" extern u8 data_80BA1384[4];
extern "C" extern u8 data_80BA1388[4];
extern "C" extern u8 data_80BA138C[4];
extern "C" extern u8 data_80BA1390[4];
extern "C" extern u8 data_80BA1394[4];
extern "C" extern u8 data_80BA1398[4];
extern "C" extern u8 data_80BA139C[4];
extern "C" extern u8 data_80BA13A0[4];
extern "C" extern u8 data_80BA13A4[4];
extern "C" extern u8 data_80BA13A8[4];
extern "C" extern u8 data_80BA13AC[4];
extern "C" extern u8 data_80BA13B0[4];
extern "C" extern u8 data_80BA13B4[4];
extern "C" extern u8 data_80BA13B8[4];
extern "C" extern u8 data_80BA13BC[4];
extern "C" extern u8 data_80BA13C0[4];
extern "C" extern u8 data_80BA13C4[4];
extern "C" extern u8 data_80BA13C8[4];
extern "C" extern u8 data_80BA13CC[4];
extern "C" extern u8 data_80BA13D0[4];
extern "C" extern u8 data_80BA13D4[4];
extern "C" extern u8 data_80BA13D8[4];
extern "C" extern u8 data_80BA13DC[4];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistance2(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_chaseAngleS(s16*, s16, s16);
void cLib_distanceAngleS(s16, s16);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BA1154-80BA1158 0004+00 s=4 e=0 z=0  None .rodata    @3695 */
SECTION_RODATA static u32 const lit_3695 = 0x43160000;

/* 80BA1158-80BA115C 0004+00 s=1 e=0 z=0  None .rodata    @3696 */
SECTION_RODATA static u32 const lit_3696 = 0x43480000;

/* 80BA115C-80BA1160 0004+00 s=3 e=0 z=0  None .rodata    @3697 */
SECTION_RODATA static u32 const lit_3697 = 0x3F800000;

/* 80BA1160-80BA1164 0004+00 s=3 e=0 z=0  None .rodata    @3698 */
SECTION_RODATA static u32 const lit_3698 = 0xBF800000;

/* 80B9FAEC-80B9FC40 0154+00 s=1 e=0 z=0  None .text
 * ccHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ccHitCallback(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                              dCcD_GObjInf* param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/func_80B9FAEC.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA1164-80BA1168 0004+00 s=3 e=0 z=0  None .rodata    @3733 */
SECTION_RODATA static u8 const lit_3733[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80B9FC40-80B9FD20 00E0+00 s=1 e=0 z=0  None .text
 * pushPullcallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void pushPullcallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, s16 param_2,
                                 dBgW_Base::PushPullLabel param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/func_80B9FC40.s"
}
#pragma pop

/* 80B9FD20-80B9FD5C 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA1168-80BA116C 0004+00 s=1 e=0 z=0  None .rodata    @3749 */
SECTION_RODATA static u32 const lit_3749 = 0x471C4000;

/* 80B9FD5C-80B9FDE8 008C+00 s=1 e=0 z=0  None .text      searchIronBallCallback__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void searchIronBallCallback(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/searchIronBallCallback__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA116C-80BA1170 0004+00 s=1 e=0 z=0  None .rodata    @3852 */
SECTION_RODATA static u32 const lit_3852 = 0x3F4CCCCD;

/* 80BA1170-80BA1174 0004+00 s=1 e=0 z=0  None .rodata    @3853 */
SECTION_RODATA static u32 const lit_3853 = 0x42700000;

/* 80BA1174-80BA1178 0004+00 s=1 e=0 z=0  None .rodata    @3854 */
SECTION_RODATA static u32 const lit_3854 = 0x426C0000;

/* 80BA1178-80BA117C 0004+00 s=1 e=0 z=0  None .rodata    @3855 */
SECTION_RODATA static u32 const lit_3855 = 0x3F19999A;

/* 80BA117C-80BA1184 0004+04 s=1 e=0 z=0  None .rodata    @3856 */
SECTION_RODATA static u32 const lit_3856[1 + 1 /* padding */] = {
    0x3ECCCCCD,
    /* padding */
    0x00000000,
};

/* 80BA1184-80BA118C 0008+00 s=1 e=0 z=0  None .rodata    @3858 */
SECTION_RODATA static u8 const lit_3858[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BA118C-80BA1190 0004+00 s=1 e=0 z=0  None .rodata    @3915 */
SECTION_RODATA static u32 const lit_3915 = 0x41200000;

/* 80BA1190-80BA119C 000C+00 s=1 e=0 z=0  None .rodata    l_hibanaOffset$3954 */
SECTION_RODATA static u8 const l_hibanaOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80BA119C-80BA11A8 000C+00 s=1 e=0 z=0  None .rodata    l_shotOffset$3961 */
SECTION_RODATA static u8 const l_shotOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00,
};

/* 80BA11A8-80BA11B4 000C+00 s=1 e=0 z=0  None .rodata    l_shotSmokeOffset$3962 */
SECTION_RODATA static u8 const l_shotSmokeOffset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA11B4-80BA11B8 0004+00 s=1 e=0 z=0  None .rodata    @4105 */
SECTION_RODATA static u32 const lit_4105 = 0x425C0000;

/* 80BA11B8-80BA11BC 0004+00 s=1 e=0 z=0  None .rodata    @4106 */
SECTION_RODATA static u32 const lit_4106 = 0x42BE0000;

/* 80BA11BC-80BA11C0 0004+00 s=1 e=0 z=0  None .rodata    @4107 */
SECTION_RODATA static u32 const lit_4107 = 0x3FE66666;

/* 80BA11C0-80BA11C4 0004+00 s=1 e=0 z=0  None .rodata    @4108 */
SECTION_RODATA static u32 const lit_4108 = 0x43520000;

/* 80BA11C4-80BA11C8 0004+00 s=1 e=0 z=0  None .rodata    @4109 */
SECTION_RODATA static u32 const lit_4109 = 0x42200000;

/* 80BA11C8-80BA11D4 000C+00 s=1 e=0 z=0  None .rodata    l_cc_offset$4147 */
SECTION_RODATA static u8 const l_cc_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
};

/* 80BA11D4-80BA11DD 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BA11D4 = "Y_taihou";
#pragma pop

/* 80BA11E0-80BA11E4 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80B9FDE8-80B9FEB0 00C8+00 s=1 e=0 z=0  None .text      create1st__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/create1st__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80B9FEB0-80B9FF08 0058+00 s=3 e=0 z=0  None .text setIronBall__14daObjYtaihou_cFP12daObjCarry_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::setIronBall(daObjCarry_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/setIronBall__14daObjYtaihou_cFP12daObjCarry_c.s"
}
#pragma pop

/* 80B9FF08-80B9FF1C 0014+00 s=1 e=0 z=0  None .text      getEvent__14daObjYtaihou_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::getEvent(u8 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/getEvent__14daObjYtaihou_cFUc.s"
}
#pragma pop

/* 80B9FF1C-80B9FFAC 0090+00 s=1 e=0 z=0  None .text      loadAngle__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::loadAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/loadAngle__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80B9FFAC-80BA0060 00B4+00 s=1 e=0 z=0  None .text      saveAngle__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::saveAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/saveAngle__14daObjYtaihou_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA11E4-80BA1228 0044+00 s=1 e=0 z=0  None .data      l_cc_cyl_src */
SECTION_DATA static u8 l_cc_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xF0, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};

/* 80BA1228-80BA1230 0008+00 s=1 e=0 z=0  None .data      l_offsetAngle$3829 */
SECTION_DATA static u8 l_offsetAngle[8] = {
    0x00, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x40, 0x00,
};

/* 80BA0060-80BA0084 0024+00 s=2 e=0 z=0  None .text      setNextAngle__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::setNextAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/setNextAngle__14daObjYtaihou_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA1318-80BA131C 0001+03 s=1 e=0 z=0  None .bss       @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80BA131C-80BA1320 0001+03 s=0 e=0 z=0  None .bss       @1107 */
u8 lit_1107[1 + 3 /* padding */];

/* 80BA1320-80BA1324 0001+03 s=0 e=0 z=0  None .bss       @1105 */
u8 lit_1105[1 + 3 /* padding */];

/* 80BA1324-80BA1328 0001+03 s=0 e=0 z=0  None .bss       @1104 */
u8 lit_1104[1 + 3 /* padding */];

/* 80BA1328-80BA132C 0001+03 s=0 e=0 z=0  None .bss       @1099 */
u8 lit_1099[1 + 3 /* padding */];

/* 80BA132C-80BA1330 0001+03 s=0 e=0 z=0  None .bss       @1097 */
u8 lit_1097[1 + 3 /* padding */];

/* 80BA1330-80BA1334 0001+03 s=0 e=0 z=0  None .bss       @1095 */
u8 lit_1095[1 + 3 /* padding */];

/* 80BA1334-80BA1338 0001+03 s=0 e=0 z=0  None .bss       @1094 */
u8 lit_1094[1 + 3 /* padding */];

/* 80BA1338-80BA133C 0001+03 s=0 e=0 z=0  None .bss       @1057 */
u8 lit_1057[1 + 3 /* padding */];

/* 80BA133C-80BA1340 0001+03 s=0 e=0 z=0  None .bss       @1055 */
u8 lit_1055[1 + 3 /* padding */];

/* 80BA1340-80BA1344 0001+03 s=0 e=0 z=0  None .bss       @1053 */
u8 lit_1053[1 + 3 /* padding */];

/* 80BA1344-80BA1348 0001+03 s=0 e=0 z=0  None .bss       @1052 */
u8 lit_1052[1 + 3 /* padding */];

/* 80BA1348-80BA134C 0001+03 s=0 e=0 z=0  None .bss       @1014 */
u8 lit_1014[1 + 3 /* padding */];

/* 80BA134C-80BA1350 0001+03 s=0 e=0 z=0  None .bss       @1012 */
u8 lit_1012[1 + 3 /* padding */];

/* 80BA1350-80BA1354 0001+03 s=0 e=0 z=0  None .bss       @1010 */
u8 lit_1010[1 + 3 /* padding */];

/* 80BA1354-80BA1358 0001+03 s=0 e=0 z=0  None .bss       @1009 */
u8 lit_1009[1 + 3 /* padding */];

/* 80BA1358-80BA135C 0004+00 s=1 e=0 z=0  None .bss       l_wheelMinR$3836 */
static u8 l_wheelMinR[4];

/* 80BA135C-80BA1360 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80BA135C[4];

/* 80BA0084-80BA0208 0184+00 s=2 e=0 z=0  None .text      setMtx__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/setMtx__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA0208-80BA045C 0254+00 s=1 e=0 z=0  None .text      rotateCheck__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::rotateCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/rotateCheck__14daObjYtaihou_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA1360-80BA1370 000C+04 s=1 e=0 z=0  None .bss       @3951 */
static u8 lit_3951[12 + 4 /* padding */];

/* 80BA1370-80BA137C 000C+00 s=1 e=0 z=0  None .bss       l_effectScale$3950 */
static u8 l_effectScale[12];

/* 80BA045C-80BA0964 0508+00 s=1 e=0 z=0  None .text      shotCheck__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::shotCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/shotCheck__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA0964-80BA0974 0010+00 s=2 e=0 z=0  None .text      eventStart__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/eventStart__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA0974-80BA09E4 0070+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/CreateHeap__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA09E4-80BA0A94 00B0+00 s=1 e=0 z=0  None .text      Create__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/Create__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA0A94-80BA0B4C 00B8+00 s=1 e=0 z=0  None .text      Execute__14daObjYtaihou_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/Execute__14daObjYtaihou_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BA0B4C-80BA0C1C 00D0+00 s=1 e=0 z=0  None .text      Draw__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/Draw__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA0C1C-80BA0C88 006C+00 s=1 e=0 z=0  None .text      Delete__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjYtaihou_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/Delete__14daObjYtaihou_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA1230-80BA1250 0020+00 s=1 e=0 z=0  None .data      daObjYtaihou_METHODS */
SECTION_DATA static void* daObjYtaihou_METHODS[8] = {
    (void*)daObjYtaihou_create1st__FP14daObjYtaihou_c,
    (void*)daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c,
    (void*)daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c,
    (void*)NULL,
    (void*)daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BA1250-80BA1280 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Ytaihou */
SECTION_DATA void* g_profile_Obj_Ytaihou[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00910000, (void*)&g_fpcLf_Method,
    (void*)0x00000778, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x027B0000, (void*)&daObjYtaihou_METHODS,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80BA1280-80BA128C 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BA128C-80BA1298 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BA1298-80BA12A4 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BA12A4-80BA12B0 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BA12B0-80BA12C8 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c */
SECTION_DATA static void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80BA12C8-80BA1310 0048+00 s=2 e=0 z=0  None .data      __vt__14daObjYtaihou_c */
SECTION_DATA static void* __vt__14daObjYtaihou_c[18] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__14daObjYtaihou_cFv,
    (void*)Create__14daObjYtaihou_cFv,
    (void*)Execute__14daObjYtaihou_cFPPA3_A4_f,
    (void*)Draw__14daObjYtaihou_cFv,
    (void*)Delete__14daObjYtaihou_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BA113C,
    (void*)func_80BA1134,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)eventStart__14daObjYtaihou_cFv,
    (void*)__dt__14daObjYtaihou_cFv,
};

/* 80BA0C88-80BA0DA4 011C+00 s=1 e=0 z=0  None .text      daObjYtaihou_create1st__FP14daObjYtaihou_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjYtaihou_create1st(daObjYtaihou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/daObjYtaihou_create1st__FP14daObjYtaihou_c.s"
}
#pragma pop

/* 80BA0DA4-80BA0DEC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BA0DEC-80BA0E34 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BA0E34-80BA0E90 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BA0E90-80BA0EB0 0020+00 s=1 e=0 z=0  None .text daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjYtaihou_MoveBGDelete(daObjYtaihou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/daObjYtaihou_MoveBGDelete__FP14daObjYtaihou_c.s"
}
#pragma pop

/* 80BA0EB0-80BA0ED0 0020+00 s=1 e=0 z=0  None .text
 * daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjYtaihou_MoveBGExecute(daObjYtaihou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/daObjYtaihou_MoveBGExecute__FP14daObjYtaihou_c.s"
}
#pragma pop

/* 80BA0ED0-80BA0EFC 002C+00 s=1 e=0 z=0  None .text daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjYtaihou_MoveBGDraw(daObjYtaihou_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/daObjYtaihou_MoveBGDraw__FP14daObjYtaihou_c.s"
}
#pragma pop

/* 80BA0EFC-80BA0F44 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BA0F44-80BA0F8C 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 80BA0F8C-80BA0F94 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 80BA0F94-80BA0F9C 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 80BA0F9C-80BA0FA4 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 80BA0FA4-80BA1118 0174+00 s=2 e=0 z=0  None .text      __dt__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjYtaihou_c::~daObjYtaihou_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/__dt__14daObjYtaihou_cFv.s"
}
#pragma pop

/* 80BA1118-80BA1134 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(s16* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/func_80BA1118.s"
}
#pragma pop

/* 80BA1134-80BA113C 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BA1134() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/func_80BA1134.s"
}
#pragma pop

/* 80BA113C-80BA1144 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__14daObjYtaihou_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BA113C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/d_a_obj_Y_taihou/func_80BA113C.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA137C-80BA1380 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
u8 data_80BA137C[4];

/* 80BA1380-80BA1384 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
u8 data_80BA1380[4];

/* 80BA1384-80BA1388 0004+00 s=0 e=0 z=0  None .bss       sInstance__27JASGlobalInstance<7Z2SeMgr>
 */
u8 data_80BA1384[4];

/* 80BA1388-80BA138C 0004+00 s=0 e=0 z=0  None .bss       sInstance__28JASGlobalInstance<8Z2SeqMgr>
 */
u8 data_80BA1388[4];

/* 80BA138C-80BA1390 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
u8 data_80BA138C[4];

/* 80BA1390-80BA1394 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
u8 data_80BA1390[4];

/* 80BA1394-80BA1398 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
u8 data_80BA1394[4];

/* 80BA1398-80BA139C 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
u8 data_80BA1398[4];

/* 80BA139C-80BA13A0 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
u8 data_80BA139C[4];

/* 80BA13A0-80BA13A4 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12Z2SpeechMgr2>
 */
u8 data_80BA13A0[4];

/* 80BA13A4-80BA13A8 0004+00 s=0 e=0 z=0  None .bss       sInstance__28JASGlobalInstance<8JAISeMgr>
 */
u8 data_80BA13A4[4];

/* 80BA13A8-80BA13AC 0004+00 s=0 e=0 z=0  None .bss       sInstance__29JASGlobalInstance<9JAISeqMgr>
 */
u8 data_80BA13A8[4];

/* 80BA13AC-80BA13B0 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAIStreamMgr>
 */
u8 data_80BA13AC[4];

/* 80BA13B0-80BA13B4 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
u8 data_80BA13B0[4];

/* 80BA13B4-80BA13B8 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAISoundInfo>
 */
u8 data_80BA13B4[4];

/* 80BA13B8-80BA13BC 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
u8 data_80BA13B8[4];

/* 80BA13BC-80BA13C0 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
u8 data_80BA13BC[4];

/* 80BA13C0-80BA13C4 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAUSoundInfo>
 */
u8 data_80BA13C0[4];

/* 80BA13C4-80BA13C8 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
u8 data_80BA13C4[4];

/* 80BA13C8-80BA13CC 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
u8 data_80BA13C8[4];

/* 80BA13CC-80BA13D0 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
u8 data_80BA13CC[4];

/* 80BA13D0-80BA13D4 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
u8 data_80BA13D0[4];

/* 80BA13D4-80BA13D8 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
u8 data_80BA13D4[4];

/* 80BA13D8-80BA13DC 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
u8 data_80BA13D8[4];

/* 80BA13DC-80BA13E0 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
u8 data_80BA13DC[4];
