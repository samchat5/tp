//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crvfence
//

#include "rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {
    /* 80BCED24 */ ~cXyz();
    /* 80BCFFBC */ cXyz();
};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct daObjCRVFENCE_c {
    /* 80BCEC98 */ void CheckVec();
    /* 80BCED60 */ void Wall_Check(cXyz, cXyz);
    /* 80BCEE60 */ void BgRelease();
    /* 80BCEED0 */ void PosSet(cXyz*);
    /* 80BCEF30 */ void FenceMove(u8&, cXyz*, csXyz*, cXyz*, s16&);
    /* 80BCF0B0 */ void BrokenAction();
    /* 80BCF404 */ void NormalAction();
    /* 80BCF7DC */ void checkViewArea(cXyz*);
    /* 80BCF860 */ void Action();
    /* 80BCF8A4 */ void setBaseMtx();
    /* 80BCF9E4 */ void CreateHeap();
    /* 80BCFAE4 */ void create();
    /* 80BCFFC8 */ void Create();
    /* 80BD000C */ void Execute(f32 (**)[3][4]);
    /* 80BD0058 */ void Draw();
    /* 80BD013C */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
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
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Sph {
    /* 80BCFD6C */ ~dCcD_Sph();
    /* 80BCFE38 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dBgW_Base {};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BCFF4C */ ~dBgS_ObjAcch();
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

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
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
    /* 80BCFEBC */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80BCFF04 */ ~cM3dGAab();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS_LinChk {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
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

extern "C" void CheckVec__15daObjCRVFENCE_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz();
extern "C" static void daObjCRVFENCE_Create__FP10fopAc_ac_c();
extern "C" static void daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c();
extern "C" void BgRelease__15daObjCRVFENCE_cFv();
extern "C" void PosSet__15daObjCRVFENCE_cFP4cXyz();
extern "C" void FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs();
extern "C" void BrokenAction__15daObjCRVFENCE_cFv();
extern "C" static void s_obj_sub__FPvPv();
extern "C" void NormalAction__15daObjCRVFENCE_cFv();
extern "C" void checkViewArea__15daObjCRVFENCE_cFP4cXyz();
extern "C" void Action__15daObjCRVFENCE_cFv();
extern "C" void setBaseMtx__15daObjCRVFENCE_cFv();
extern "C" static void daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c();
extern "C" static void daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c();
extern "C" void CreateHeap__15daObjCRVFENCE_cFv();
extern "C" void create__15daObjCRVFENCE_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c();
extern "C" void Create__15daObjCRVFENCE_cFv();
extern "C" void Execute__15daObjCRVFENCE_cFPPA3_A4_f();
extern "C" void Draw__15daObjCRVFENCE_cFv();
extern "C" void Delete__15daObjCRVFENCE_cFv();
extern "C" static void func_80BD0170();
extern "C" static void func_80BD0178();
extern "C" extern char const* const d_a_obj_crvfence__stringBase0;

//
// External References:
//

extern "C" void OSReport();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
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
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
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
extern "C" extern u8 j3dSys[284];
extern "C" extern f32 mGroundY__11fopAcM_gc_c;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BD0188-80BD018C 000000 0004+00 7/7 0/0 0/0 .rodata          @3685 */
SECTION_RODATA static u8 const lit_3685[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80BD0188, &lit_3685);

/* 80BCEC98-80BCED24 000078 008C+00 2/2 0/0 0/0 .text            CheckVec__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::CheckVec() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/CheckVec__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BCED24-80BCED60 000104 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BCED60-80BCEE1C 000140 00BC+00 1/1 0/0 0/0 .text Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Wall_Check(cXyz param_0, cXyz param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz.s"
}
#pragma pop

/* 80BCEE1C-80BCEE3C 0001FC 0020+00 1/0 0/0 0/0 .text daObjCRVFENCE_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVFENCE_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/daObjCRVFENCE_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BCEE3C-80BCEE60 00021C 0024+00 1/0 0/0 0/0 .text daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVFENCE_Delete(daObjCRVFENCE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c.s"
}
#pragma pop

/* 80BCEE60-80BCEED0 000240 0070+00 1/1 0/0 0/0 .text            BgRelease__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::BgRelease() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/BgRelease__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BCEED0-80BCEF30 0002B0 0060+00 1/1 0/0 0/0 .text            PosSet__15daObjCRVFENCE_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::PosSet(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/PosSet__15daObjCRVFENCE_cFP4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD018C-80BD0190 000004 0004+00 0/3 0/0 0/0 .rodata          @3761 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3761 = 20.0f;
COMPILER_STRIP_GATE(80BD018C, &lit_3761);
#pragma pop

/* 80BD0190-80BD0194 000008 0004+00 0/2 0/0 0/0 .rodata          @3762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3762 = -9.0f;
COMPILER_STRIP_GATE(80BD0190, &lit_3762);
#pragma pop

/* 80BD0194-80BD0198 00000C 0004+00 0/1 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3763 = -0.5f;
COMPILER_STRIP_GATE(80BD0194, &lit_3763);
#pragma pop

/* 80BD0198-80BD019C 000010 0004+00 0/2 0/0 0/0 .rodata          @3764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3764 = 100.0f;
COMPILER_STRIP_GATE(80BD0198, &lit_3764);
#pragma pop

/* 80BD019C-80BD01A0 000014 0004+00 0/1 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3765 = -7.0f / 10.0f;
COMPILER_STRIP_GATE(80BD019C, &lit_3765);
#pragma pop

/* 80BD01A0-80BD01A4 000018 0004+00 0/1 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3766 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(80BD01A0, &lit_3766);
#pragma pop

/* 80BCEF30-80BCF0B0 000310 0180+00 1/1 0/0 0/0 .text
 * FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::FenceMove(u8& param_0, cXyz* param_1, csXyz* param_2, cXyz* param_3,
                                    s16& param_4) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01A4-80BD01A8 00001C 0004+00 0/1 0/0 0/0 .rodata          @3825 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3825 = 180.0f;
COMPILER_STRIP_GATE(80BD01A4, &lit_3825);
#pragma pop

/* 80BD01A8-80BD01AC 000020 0004+00 0/1 0/0 0/0 .rodata          @3826 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3826 = -180.0f;
COMPILER_STRIP_GATE(80BD01A8, &lit_3826);
#pragma pop

/* 80BD01AC-80BD01B0 000024 0004+00 0/1 0/0 0/0 .rodata          @3827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3827 = 15.0f;
COMPILER_STRIP_GATE(80BD01AC, &lit_3827);
#pragma pop

/* 80BD01B0-80BD01B4 000028 0004+00 0/2 0/0 0/0 .rodata          @3828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3828 = 30.0f;
COMPILER_STRIP_GATE(80BD01B0, &lit_3828);
#pragma pop

/* 80BD01B4-80BD01B8 00002C 0004+00 0/1 0/0 0/0 .rodata          @3829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3829 = -25.0f;
COMPILER_STRIP_GATE(80BD01B4, &lit_3829);
#pragma pop

/* 80BD01B8-80BD01BC 000030 0004+00 0/1 0/0 0/0 .rodata          @3830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3830 = 40.0f;
COMPILER_STRIP_GATE(80BD01B8, &lit_3830);
#pragma pop

/* 80BD01BC-80BD01C0 000034 0004+00 0/2 0/0 0/0 .rodata          @3831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3831 = 25.0f;
COMPILER_STRIP_GATE(80BD01BC, &lit_3831);
#pragma pop

/* 80BD01C0-80BD01C4 000038 0004+00 0/1 0/0 0/0 .rodata          @3832 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3832 = -15.0f;
COMPILER_STRIP_GATE(80BD01C0, &lit_3832);
#pragma pop

/* 80BD01C4-80BD01C8 00003C 0004+00 0/2 0/0 0/0 .rodata          @3833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3833 = 1000.0f;
COMPILER_STRIP_GATE(80BD01C4, &lit_3833);
#pragma pop

/* 80BCF0B0-80BCF390 000490 02E0+00 1/1 0/0 0/0 .text            BrokenAction__15daObjCRVFENCE_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::BrokenAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/BrokenAction__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01C8-80BD01CC 000040 0004+00 1/1 0/0 0/0 .rodata          @3845 */
SECTION_RODATA static f32 const lit_3845 = 600.0f;
COMPILER_STRIP_GATE(80BD01C8, &lit_3845);

/* 80BCF390-80BCF404 000770 0074+00 1/1 0/0 0/0 .text            s_obj_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_obj_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/s_obj_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01CC-80BD01D0 000044 0004+00 1/2 0/0 0/0 .rodata          @3953 */
SECTION_RODATA static f32 const lit_3953 = 1.0f;
COMPILER_STRIP_GATE(80BD01CC, &lit_3953);

/* 80BD01D0-80BD01D4 000048 0004+00 0/1 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3954 = -1.0f;
COMPILER_STRIP_GATE(80BD01D0, &lit_3954);
#pragma pop

/* 80BD01D4-80BD01D8 00004C 0004+00 0/1 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3955 = 150.0f;
COMPILER_STRIP_GATE(80BD01D4, &lit_3955);
#pragma pop

/* 80BD01D8-80BD01DC 000050 0004+00 0/1 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3956 = 300.0f;
COMPILER_STRIP_GATE(80BD01D8, &lit_3956);
#pragma pop

/* 80BD01DC-80BD01E0 000054 0004+00 0/1 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3957 = -200.0f;
COMPILER_STRIP_GATE(80BD01DC, &lit_3957);
#pragma pop

/* 80BD01E0-80BD01E4 000058 0004+00 0/1 0/0 0/0 .rodata          @3958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3958 = 50.0f;
COMPILER_STRIP_GATE(80BD01E0, &lit_3958);
#pragma pop

/* 80BD01E4-80BD01E8 00005C 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 120.0f;
COMPILER_STRIP_GATE(80BD01E4, &lit_3959);
#pragma pop

/* 80BD01E8-80BD01EC 000060 0004+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 200.0f;
COMPILER_STRIP_GATE(80BD01E8, &lit_3960);
#pragma pop

/* 80BCF404-80BCF7DC 0007E4 03D8+00 1/1 0/0 0/0 .text            NormalAction__15daObjCRVFENCE_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::NormalAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/NormalAction__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01EC-80BD01F0 000064 0004+00 0/1 0/0 0/0 .rodata          @3975 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3975 = 608.0f;
COMPILER_STRIP_GATE(80BD01EC, &lit_3975);
#pragma pop

/* 80BD01F0-80BD01F4 000068 0004+00 0/1 0/0 0/0 .rodata          @3976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3976 = 448.0f;
COMPILER_STRIP_GATE(80BD01F0, &lit_3976);
#pragma pop

/* 80BCF7DC-80BCF860 000BBC 0084+00 1/1 0/0 0/0 .text checkViewArea__15daObjCRVFENCE_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::checkViewArea(cXyz* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/checkViewArea__15daObjCRVFENCE_cFP4cXyz.s"
}
#pragma pop

/* 80BCF860-80BCF8A4 000C40 0044+00 1/1 0/0 0/0 .text            Action__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/Action__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01F4-80BD01F8 00006C 0004+00 1/1 0/0 0/0 .rodata          @4010 */
SECTION_RODATA static f32 const lit_4010 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(80BD01F4, &lit_4010);

/* 80BCF8A4-80BCF998 000C84 00F4+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/setBaseMtx__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BCF998-80BCF9C4 000D78 002C+00 1/0 0/0 0/0 .text daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVFENCE_Draw(daObjCRVFENCE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c.s"
}
#pragma pop

/* 80BCF9C4-80BCF9E4 000DA4 0020+00 2/1 0/0 0/0 .text daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjCRVFENCE_Execute(daObjCRVFENCE_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD0260-80BD0264 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_crvfence__stringBase0;

/* 80BCF9E4-80BCFAE4 000DC4 0100+00 1/0 0/0 0/0 .text            CreateHeap__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/CreateHeap__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD01F8-80BD01FC 000070 0004+00 0/1 0/0 0/0 .rodata          @4119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4119 = 3.0f;
COMPILER_STRIP_GATE(80BD01F8, &lit_4119);
#pragma pop

/* 80BD01FC-80BD0200 000074 0004+00 0/2 0/0 0/0 .rodata          @4120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4120 = -500.0f;
COMPILER_STRIP_GATE(80BD01FC, &lit_4120);
#pragma pop

/* 80BD0200-80BD0204 000078 0004+00 0/2 0/0 0/0 .rodata          @4121 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4121 = 500.0f;
COMPILER_STRIP_GATE(80BD0200, &lit_4121);
#pragma pop

/* 80BD0204-80BD0208 00007C 0004+00 0/1 0/0 0/0 .rodata          @4122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4122 = 450.0f;
COMPILER_STRIP_GATE(80BD0204, &lit_4122);
#pragma pop

/* 80BD0264-80BD0284 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjCRVFENCE_Method */
SECTION_DATA static void* l_daObjCRVFENCE_Method[8] = {
    (void*)daObjCRVFENCE_Create__FP10fopAc_ac_c,
    (void*)daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c,
    (void*)daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c,
    (void*)daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c,
    (void*)daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BD0284-80BD02B4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_CRVFENCE */
SECTION_DATA extern void* g_profile_Obj_CRVFENCE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00700000, (void*)&g_fpcLf_Method,
    (void*)0x0000103C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D30000, (void*)&l_daObjCRVFENCE_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80BD02B4-80BD02C0 000054 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BD02C0-80BD02CC 000060 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BD02CC-80BD02F0 00006C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BD0178,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BD0170,
};

/* 80BD02F0-80BD0318 000090 0028+00 1/1 0/0 0/0 .data            __vt__15daObjCRVFENCE_c */
SECTION_DATA extern void* __vt__15daObjCRVFENCE_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjCRVFENCE_cFv,
    (void*)Create__15daObjCRVFENCE_cFv,
    (void*)Execute__15daObjCRVFENCE_cFPPA3_A4_f,
    (void*)Draw__15daObjCRVFENCE_cFv,
    (void*)Delete__15daObjCRVFENCE_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BCFAE4-80BCFD6C 000EC4 0288+00 1/1 0/0 0/0 .text            create__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/create__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BCFD6C-80BCFE38 00114C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80BCFE38-80BCFEBC 001218 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80BCFEBC-80BCFF04 00129C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BCFF04-80BCFF4C 0012E4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BCFF4C-80BCFFBC 00132C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BCFFBC-80BCFFC0 00139C 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BCFFC0-80BCFFC8 0013A0 0008+00 1/0 0/0 0/0 .text daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c
 */
static bool daObjCRVFENCE_IsDelete(daObjCRVFENCE_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BD0208-80BD020C 000080 0004+00 0/1 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219 = -1000.0f;
COMPILER_STRIP_GATE(80BD0208, &lit_4219);
#pragma pop

/* 80BCFFC8-80BD000C 0013A8 0044+00 1/0 0/0 0/0 .text            Create__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/func_80BCFFC8.s"
}
#pragma pop

/* 80BD000C-80BD0058 0013EC 004C+00 1/0 0/0 0/0 .text Execute__15daObjCRVFENCE_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/Execute__15daObjCRVFENCE_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BD0058-80BD013C 001438 00E4+00 1/0 0/0 0/0 .text            Draw__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/Draw__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BD013C-80BD0170 00151C 0034+00 1/0 0/0 0/0 .text            Delete__15daObjCRVFENCE_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVFENCE_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/Delete__15daObjCRVFENCE_cFv.s"
}
#pragma pop

/* 80BD0170-80BD0178 001550 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BD0170() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/func_80BD0170.s"
}
#pragma pop

/* 80BD0178-80BD0180 001558 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80BD0178() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvfence/d_a_obj_crvfence/func_80BD0178.s"
}
#pragma pop

/* 80BD020C-80BD025F 000084 0053+00 4/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BD020C = "CrvFence";
SECTION_DEAD static char const* const stringBase_80BD0215 = "Release Error\n";
SECTION_DEAD static char const* const stringBase_80BD0224 = "CaravanFence.bmd";
SECTION_DEAD static char const* const stringBase_80BD0235 = "U_CaravanGate_PieceB.bmd";
SECTION_DEAD static char const* const stringBase_80BD024E = "CaravanFence.dzb";
#pragma pop
