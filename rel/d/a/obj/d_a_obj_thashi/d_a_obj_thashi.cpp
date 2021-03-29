//
// Generated By: dol2asm
// Translation Unit: d_a_obj_thashi
//

#include "rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {
    /* 80D0C2DC */ ~cXyz();
    /* 80D0CE64 */ cXyz();
};

struct csXyz {
    /* 80D0C318 */ ~csXyz();
    /* 80D0CE60 */ csXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct daObjTHASHI_c {
    /* 80D0C238 */ void initCcCylinder();
    /* 80D0C354 */ void setBaseMtx();
    /* 80D0C654 */ void CreateHeap();
    /* 80D0C8B4 */ void create();
    /* 80D0CE70 */ void Create();
    /* 80D0CEB4 */ void Execute(f32 (**)[3][4]);
    /* 80D0CEE0 */ void Draw();
    /* 80D0D140 */ void Delete();
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
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_Sph {
    /* 80D0CC58 */ ~dCcD_Sph();
    /* 80D0CD24 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW {
    /* 8007B970 */ dBgW();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80D0CDF0 */ ~dBgS_ObjAcch();
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
};

struct cM3dGSph {
    /* 80D0CDA8 */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 80D0CBC8 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D0CC10 */ ~cM3dGAab();
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct J3DModel {};

//
// Forward References:
//

static void daObjTHASHI_Create(fopAc_ac_c*);
static void daObjTHASHI_Delete(daObjTHASHI_c*);
static void daObjTHASHI_Draw(daObjTHASHI_c*);
static void daObjTHASHI_Execute(daObjTHASHI_c*);
static bool daObjTHASHI_IsDelete(daObjTHASHI_c*);

extern "C" void initCcCylinder__13daObjTHASHI_cFv();
extern "C" static void daObjTHASHI_Create__FP10fopAc_ac_c();
extern "C" static void daObjTHASHI_Delete__FP13daObjTHASHI_c();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void setBaseMtx__13daObjTHASHI_cFv();
extern "C" static void daObjTHASHI_Draw__FP13daObjTHASHI_c();
extern "C" static void daObjTHASHI_Execute__FP13daObjTHASHI_c();
extern "C" void CreateHeap__13daObjTHASHI_cFv();
extern "C" void create__13daObjTHASHI_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjTHASHI_IsDelete__FP13daObjTHASHI_c();
extern "C" void Create__13daObjTHASHI_cFv();
extern "C" void Execute__13daObjTHASHI_cFPPA3_A4_f();
extern "C" void Draw__13daObjTHASHI_cFv();
extern "C" void Delete__13daObjTHASHI_cFv();
extern "C" static void func_80D0D174();
extern "C" static void func_80D0D17C();
extern "C" extern u8 const lit_3693[4];
extern "C" extern u32 const lit_3694;
extern "C" extern u32 const lit_3695[1 + 1 /* padding */];
extern "C" extern u8 const lit_3697[8];
extern "C" extern u32 const lit_3795;
extern "C" extern u32 const lit_3796;
extern "C" extern u32 const lit_3797;
extern "C" extern u32 const lit_3833;
extern "C" extern u32 const lit_3834;
extern "C" extern u32 const lit_3855;
extern "C" extern u32 const lit_3856;
extern "C" extern u32 const lit_3857;
extern "C" extern u32 const lit_3858;
extern "C" extern u32 const lit_3859;
extern "C" extern u32 const lit_3860;
extern "C" extern u32 const lit_3861;
extern "C" extern u32 const lit_3862;
extern "C" extern u32 const lit_3863;
extern "C" extern u32 const lit_3864;
extern "C" extern u32 const lit_3947;
extern "C" extern u32 const lit_3973;
extern "C" extern u32 const lit_3974;
extern "C" extern u32 const lit_3975;
extern "C" extern u32 const lit_3976;
extern "C" extern u32 const lit_3977;
extern "C" extern u32 const lit_3978;
extern "C" extern u32 const lit_4017;
extern "C" extern u32 const lit_4018;
extern "C" extern u32 const lit_4019[1 + 1 /* padding */];
extern "C" extern u8 const lit_4270[8];
extern "C" extern u8 const lit_4271[8];
extern "C" extern u8 const lit_4272[8];
extern "C" extern u32 const lit_4310;
extern "C" extern u32 const lit_4433;
extern "C" extern u32 const lit_4446;
extern "C" extern u32 const lit_4447;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_THASHI[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
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
extern "C" extern u8 m_set_func__16dBgS_MoveBgActor[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D0D18C-80D0D1CC 0040+00 s=2 e=0 z=0  None .rodata    ccCylSrc$3671 */
SECTION_RODATA static u8 const ccCylSrc_3671[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xF0, 0x00, 0x00,
};

/* 80D0D1CC-80D0D1D0 0004+00 s=0 e=0 z=0  None .rodata    @3693 */
SECTION_RODATA u8 const lit_3693[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D0D1D0-80D0D1D4 0004+00 s=0 e=0 z=0  None .rodata    @3694 */
SECTION_RODATA u32 const lit_3694 = 0x43480000;

/* 80D0D1D4-80D0D1DC 0004+04 s=0 e=0 z=0  None .rodata    @3695 */
SECTION_RODATA u32 const lit_3695[1 + 1 /* padding */] = {
    0x43960000,
    /* padding */
    0x00000000,
};

/* 80D0D1DC-80D0D1E4 0008+00 s=0 e=0 z=0  None .rodata    @3697 */
SECTION_RODATA u8 const lit_3697[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80D0D1E4-80D0D228 0044+00 s=1 e=0 z=0  None .rodata    ccCylSrc$3701 */
SECTION_RODATA static u8 const ccCylSrc_3701[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x75,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0xDC, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00,
};

/* 80D0C238-80D0C298 0060+00 s=1 e=0 z=0  None .text      initCcCylinder__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::initCcCylinder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/initCcCylinder__13daObjTHASHI_cFv.s"
}
#pragma pop

/* 80D0C298-80D0C2B8 0020+00 s=1 e=0 z=0  None .text      daObjTHASHI_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTHASHI_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/daObjTHASHI_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D0C2B8-80D0C2DC 0024+00 s=1 e=0 z=0  None .text      daObjTHASHI_Delete__FP13daObjTHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTHASHI_Delete(daObjTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/daObjTHASHI_Delete__FP13daObjTHASHI_c.s"
}
#pragma pop

/* 80D0C2DC-80D0C318 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__4cXyzFv.s"
}
#pragma pop

/* 80D0C318-80D0C354 003C+00 s=1 e=0 z=0  None .text      __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__5csXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0D228-80D0D22C 0004+00 s=0 e=0 z=0  None .rodata    @3795 */
SECTION_RODATA u32 const lit_3795 = 0x41700000;

/* 80D0D22C-80D0D230 0004+00 s=0 e=0 z=0  None .rodata    @3796 */
SECTION_RODATA u32 const lit_3796 = 0x42700000;

/* 80D0D230-80D0D234 0004+00 s=0 e=0 z=0  None .rodata    @3797 */
SECTION_RODATA u32 const lit_3797 = 0x41F00000;

/* 80D0D234-80D0D238 0004+00 s=0 e=0 z=0  None .rodata    @3833 */
SECTION_RODATA u32 const lit_3833 = 0x43160000;

/* 80D0D238-80D0D23C 0004+00 s=0 e=0 z=0  None .rodata    @3834 */
SECTION_RODATA u32 const lit_3834 = 0x41200000;

/* 80D0D23C-80D0D240 0004+00 s=0 e=0 z=0  None .rodata    @3855 */
SECTION_RODATA u32 const lit_3855 = 0x428C0000;

/* 80D0D240-80D0D244 0004+00 s=0 e=0 z=0  None .rodata    @3856 */
SECTION_RODATA u32 const lit_3856 = 0x3F266666;

/* 80D0D244-80D0D248 0004+00 s=0 e=0 z=0  None .rodata    @3857 */
SECTION_RODATA u32 const lit_3857 = 0x3E800000;

/* 80D0D248-80D0D24C 0004+00 s=0 e=0 z=0  None .rodata    @3858 */
SECTION_RODATA u32 const lit_3858 = 0x3FC00000;

/* 80D0D24C-80D0D250 0004+00 s=0 e=0 z=0  None .rodata    @3859 */
SECTION_RODATA u32 const lit_3859 = 0x3F19999A;

/* 80D0D250-80D0D254 0004+00 s=0 e=0 z=0  None .rodata    @3860 */
SECTION_RODATA u32 const lit_3860 = 0x3F800000;

/* 80D0D254-80D0D258 0004+00 s=0 e=0 z=0  None .rodata    @3861 */
SECTION_RODATA u32 const lit_3861 = 0x46000000;

/* 80D0D258-80D0D25C 0004+00 s=0 e=0 z=0  None .rodata    @3862 */
SECTION_RODATA u32 const lit_3862 = 0x46FA0000;

/* 80D0D25C-80D0D260 0004+00 s=0 e=0 z=0  None .rodata    @3863 */
SECTION_RODATA u32 const lit_3863 = 0x466A6000;

/* 80D0D260-80D0D264 0004+00 s=0 e=0 z=0  None .rodata    @3864 */
SECTION_RODATA u32 const lit_3864 = 0x47800000;

/* 80D0D264-80D0D268 0004+00 s=0 e=0 z=0  None .rodata    @3947 */
SECTION_RODATA u32 const lit_3947 = 0xBD4CCCCD;

/* 80D0D268-80D0D26C 0004+00 s=0 e=0 z=0  None .rodata    @3973 */
SECTION_RODATA u32 const lit_3973 = 0x3E4CCCCD;

/* 80D0D26C-80D0D270 0004+00 s=0 e=0 z=0  None .rodata    @3974 */
SECTION_RODATA u32 const lit_3974 = 0x40800000;

/* 80D0D270-80D0D274 0004+00 s=0 e=0 z=0  None .rodata    @3975 */
SECTION_RODATA u32 const lit_3975 = 0x3F333333;

/* 80D0D274-80D0D278 0004+00 s=0 e=0 z=0  None .rodata    @3976 */
SECTION_RODATA u32 const lit_3976 = 0x3E99999A;

/* 80D0D278-80D0D27C 0004+00 s=0 e=0 z=0  None .rodata    @3977 */
SECTION_RODATA u32 const lit_3977 = 0x459C4000;

/* 80D0D27C-80D0D280 0004+00 s=0 e=0 z=0  None .rodata    @3978 */
SECTION_RODATA u32 const lit_3978 = 0x40A00000;

/* 80D0D280-80D0D284 0004+00 s=1 e=0 z=0  None .rodata    @3988 */
SECTION_RODATA static u32 const lit_3988 = 0xC1100000;

/* 80D0D284-80D0D288 0004+00 s=0 e=0 z=0  None .rodata    @4017 */
SECTION_RODATA u32 const lit_4017 = 0x46800000;

/* 80D0D288-80D0D28C 0004+00 s=0 e=0 z=0  None .rodata    @4018 */
SECTION_RODATA u32 const lit_4018 = 0xBF800000;

/* 80D0D28C-80D0D294 0004+04 s=0 e=0 z=0  None .rodata    @4019 */
SECTION_RODATA u32 const lit_4019[1 + 1 /* padding */] = {
    0x43E10000,
    /* padding */
    0x00000000,
};

/* 80D0D294-80D0D29C 0008+00 s=0 e=0 z=0  None .rodata    @4270 */
SECTION_RODATA u8 const lit_4270[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D0D29C-80D0D2A4 0008+00 s=0 e=0 z=0  None .rodata    @4271 */
SECTION_RODATA u8 const lit_4271[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D0D2A4-80D0D2AC 0008+00 s=0 e=0 z=0  None .rodata    @4272 */
SECTION_RODATA u8 const lit_4272[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D0D2AC-80D0D2B0 0004+00 s=0 e=0 z=0  None .rodata    @4310 */
SECTION_RODATA u32 const lit_4310 = 0x40400000;

/* 80D0D2B0-80D0D2B4 0004+00 s=0 e=0 z=0  None .rodata    @4433 */
SECTION_RODATA u32 const lit_4433 = 0x44FA0000;

/* 80D0D2B4-80D0D2B8 0004+00 s=0 e=0 z=0  None .rodata    @4446 */
SECTION_RODATA u32 const lit_4446 = 0x44180000;

/* 80D0D2B8-80D0D2BC 0004+00 s=0 e=0 z=0  None .rodata    @4447 */
SECTION_RODATA u32 const lit_4447 = 0x43E00000;

/* 80D0D2BC-80D0D2C0 0004+00 s=1 e=0 z=0  None .rodata    @4656 */
SECTION_RODATA static u32 const lit_4656 = 0x80000000;

/* 80D0D2C0-80D0D2C4 0004+00 s=1 e=0 z=0  None .rodata    @4790 */
SECTION_RODATA static u32 const lit_4790 = 0xC47A0000;

/* 80D0D2C4-80D0D2C8 0004+00 s=1 e=0 z=0  None .rodata    @4791 */
SECTION_RODATA static u32 const lit_4791 = 0xC3FA0000;

/* 80D0D2C8-80D0D2CC 0004+00 s=1 e=0 z=0  None .rodata    @4792 */
SECTION_RODATA static u32 const lit_4792 = 0x447A0000;

/* 80D0D2CC-80D0D2D0 0004+00 s=1 e=0 z=0  None .rodata    @4793 */
SECTION_RODATA static u32 const lit_4793 = 0x43FA0000;

/* 80D0D2D0-80D0D333 0063+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D0D2D0 = "S_thashi";
SECTION_DEAD char const* const stringBase_80D0D2D9 = "S_thashi00.bmd";
SECTION_DEAD char const* const stringBase_80D0D2E8 = "S_thashi01.bmd";
SECTION_DEAD char const* const stringBase_80D0D2F7 = "S_thashi03.bmd";
SECTION_DEAD char const* const stringBase_80D0D306 = "S_thashi02.bmd";
SECTION_DEAD char const* const stringBase_80D0D315 = "S_thashi01.dzb";
SECTION_DEAD char const* const stringBase_80D0D324 = "S_thashi00.dzb";
#pragma pop

/* 80D0D334-80D0D338 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D0D338-80D0D35C 0024+00 s=1 e=0 z=0  None .data      @4521 */
SECTION_DATA static void* lit_4521[9] = {
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x44),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x6C),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x6C),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x1AC),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x214),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x29C),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x29C),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x6C),
    (void*)(((char*)setBaseMtx__13daObjTHASHI_cFv) + 0x214),
};

/* 80D0C354-80D0C608 02B4+00 s=2 e=0 z=0  None .text      setBaseMtx__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/setBaseMtx__13daObjTHASHI_cFv.s"
}
#pragma pop

/* 80D0C608-80D0C634 002C+00 s=1 e=0 z=0  None .text      daObjTHASHI_Draw__FP13daObjTHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTHASHI_Draw(daObjTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/daObjTHASHI_Draw__FP13daObjTHASHI_c.s"
}
#pragma pop

/* 80D0C634-80D0C654 0020+00 s=2 e=0 z=0  None .text      daObjTHASHI_Execute__FP13daObjTHASHI_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTHASHI_Execute(daObjTHASHI_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/daObjTHASHI_Execute__FP13daObjTHASHI_c.s"
}
#pragma pop

/* 80D0C654-80D0C8B4 0260+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/CreateHeap__13daObjTHASHI_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0D35C-80D0D37C 0020+00 s=1 e=0 z=0  None .data      l_daObjTHASHI_Method */
SECTION_DATA static void* l_daObjTHASHI_Method[8] = {
    (void*)daObjTHASHI_Create__FP10fopAc_ac_c,
    (void*)daObjTHASHI_Delete__FP13daObjTHASHI_c,
    (void*)daObjTHASHI_Execute__FP13daObjTHASHI_c,
    (void*)daObjTHASHI_IsDelete__FP13daObjTHASHI_c,
    (void*)daObjTHASHI_Draw__FP13daObjTHASHI_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D0D37C-80D0D3AC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_THASHI */
SECTION_DATA void* g_profile_Obj_THASHI[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x006E0000, (void*)&g_fpcLf_Method,
    (void*)0x00001BBC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01CD0000, (void*)&l_daObjTHASHI_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D0D3AC-80D0D3B8 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D0D3B8-80D0D3C4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D0D3C4-80D0D3D0 000C+00 s=4 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D0D3D0-80D0D3F4 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80D0D17C,
    (void*)NULL, (void*)NULL, (void*)func_80D0D174,
};

/* 80D0D3F4-80D0D41C 0028+00 s=1 e=0 z=0  None .data      __vt__13daObjTHASHI_c */
SECTION_DATA static void* __vt__13daObjTHASHI_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__13daObjTHASHI_cFv,
    (void*)Create__13daObjTHASHI_cFv,
    (void*)Execute__13daObjTHASHI_cFPPA3_A4_f,
    (void*)Draw__13daObjTHASHI_cFv,
    (void*)Delete__13daObjTHASHI_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D0C8B4-80D0CBC8 0314+00 s=1 e=0 z=0  None .text      create__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/create__13daObjTHASHI_cFv.s"
}
#pragma pop

/* 80D0CBC8-80D0CC10 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D0CC10-80D0CC58 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D0CC58-80D0CD24 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80D0CD24-80D0CDA8 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80D0CDA8-80D0CDF0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80D0CDF0-80D0CE60 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80D0CE60-80D0CE64 0004+00 s=1 e=0 z=0  None .text      __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80D0CE64-80D0CE68 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80D0CE68-80D0CE70 0008+00 s=1 e=0 z=0  None .text      daObjTHASHI_IsDelete__FP13daObjTHASHI_c */
static bool daObjTHASHI_IsDelete(daObjTHASHI_c* param_0) {
    return true;
}

/* 80D0CE70-80D0CEB4 0044+00 s=1 e=0 z=0  None .text      Create__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/func_80D0CE70.s"
}
#pragma pop

/* 80D0CEB4-80D0CEE0 002C+00 s=1 e=0 z=0  None .text      Execute__13daObjTHASHI_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/Execute__13daObjTHASHI_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0D41C-80D0D440 0024+00 s=1 e=0 z=0  None .data      @4855 */
SECTION_DATA static void* lit_4855[9] = {
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x1AC),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x1B8),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x1B8),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x1F0),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x218),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x244),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x244),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x1B8),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x218),
};

/* 80D0D440-80D0D464 0024+00 s=1 e=0 z=0  None .data      @4854 */
SECTION_DATA static void* lit_4854[9] = {
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x54),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x70),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x70),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0xDC),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x118),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x168),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x168),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x70),
    (void*)(((char*)Draw__13daObjTHASHI_cFv) + 0x118),
};

/* 80D0CEE0-80D0D140 0260+00 s=3 e=0 z=0  None .text      Draw__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/Draw__13daObjTHASHI_cFv.s"
}
#pragma pop

/* 80D0D140-80D0D174 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjTHASHI_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTHASHI_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/Delete__13daObjTHASHI_cFv.s"
}
#pragma pop

/* 80D0D174-80D0D17C 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D0D174() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/func_80D0D174.s"
}
#pragma pop

/* 80D0D17C-80D0D184 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D0D17C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_thashi/d_a_obj_thashi/func_80D0D17C.s"
}
#pragma pop
