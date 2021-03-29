//
// Generated By: dol2asm
// Translation Unit: d_a_obj_mhole
//

#include "rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
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

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct fast_create_request {};

struct daObjMHole_c {
    /* 80C92FD8 */ void initBaseMtx();
    /* 80C93014 */ void setBaseMtx();
    /* 80C9307C */ void Create();
    /* 80C93198 */ void checkParent();
    /* 80C93204 */ void CreateHeap();
    /* 80C934E0 */ void create();
    /* 80C936A8 */ void execute();
    /* 80C93928 */ void effectSet();
    /* 80C93A88 */ void effectEnd();
    /* 80C93ADC */ void draw();
    /* 80C93CAC */ void _delete();
};

struct dSv_info_c {
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

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCps {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cps {
    /* 800847D0 */ void Set(dCcD_SrcCps const&);
};

struct cM3dGCps {
    /* 8026EF88 */ cM3dGCps();
    /* 8026F000 */ void Set(cXyz const&, cXyz const&, f32);
};

struct cM3dGAab {
    /* 80C93660 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct J3DTexMtxInfo {
    /* 80325794 */ void setEffectMtx(f32 (*)[4]);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C93498 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void searchParentSub(void*, void*);
static void CheckCreateHeap(fopAc_ac_c*);
static void daObjMHole_Draw(daObjMHole_c*);
static void daObjMHole_Execute(daObjMHole_c*);
static void daObjMHole_Delete(daObjMHole_c*);
static void daObjMHole_Create(fopAc_ac_c*);

extern "C" static void searchParentSub__FPvPv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__12daObjMHole_cFv();
extern "C" void setBaseMtx__12daObjMHole_cFv();
extern "C" void Create__12daObjMHole_cFv();
extern "C" void checkParent__12daObjMHole_cFv();
extern "C" void CreateHeap__12daObjMHole_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__12daObjMHole_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void execute__12daObjMHole_cFv();
extern "C" void effectSet__12daObjMHole_cFv();
extern "C" void effectEnd__12daObjMHole_cFv();
extern "C" void draw__12daObjMHole_cFv();
extern "C" void _delete__12daObjMHole_cFv();
extern "C" static void daObjMHole_Draw__FP12daObjMHole_c();
extern "C" static void daObjMHole_Execute__FP12daObjMHole_c();
extern "C" static void daObjMHole_Delete__FP12daObjMHole_c();
extern "C" static void daObjMHole_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_Obj_MHole[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_btkAnmRemove(J3DModelData*);
void mDoExt_brkAnmRemove(J3DModelData*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcSch_JudgeByID(void*, void*);
void fpcFCtRq_Do(fast_create_request*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dKyw_get_wind_vec();
void JPAGetXYZRotateMtx(s16, s16, s16, f32 (*)[4]);
void* operator new(u32);
void operator delete(void*);

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_brkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void fpcFCtRq_Do__FP19fast_create_request();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_get_wind_vec__Fv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC4cXyzRC4cXyzf();
extern "C" void JPAGetXYZRotateMtx__FsssPA4_f();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void C_MTXLightPerspective();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultMtx[48];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80C93D88-80C93D90 0008+00 s=5 e=0 z=0  None .rodata    l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
};

/* 80C93D90-80C93D98 0008+00 s=1 e=0 z=0  None .rodata    l_brk */
SECTION_RODATA static u8 const l_brk[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
};

/* 80C93D98-80C93DA0 0008+00 s=1 e=0 z=0  None .rodata    l_btk1 */
SECTION_RODATA static u8 const l_btk1[8] = {
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B,
};

/* 80C93DA0-80C93DA8 0008+00 s=1 e=0 z=0  None .rodata    l_btk2 */
SECTION_RODATA static u8 const l_btk2[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C,
};

/* 80C93DA8-80C93DB0 0008+00 s=1 e=0 z=0  None .rodata    l_length */
SECTION_RODATA static u8 const l_length[8] = {
    0x44, 0xFA, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00,
};

/* 80C93DB0-80C93DB8 0008+00 s=1 e=0 z=0  None .rodata    l_size */
SECTION_RODATA static u8 const l_size[8] = {
    0x43, 0x16, 0x00, 0x00, 0x43, 0xB9, 0x00, 0x00,
};

/* 80C93DB8-80C93DC0 0004+04 s=4 e=0 z=0  None .rodata    @3656 */
SECTION_RODATA static u8 const lit_3656[4 + 4 /* padding */] = {
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

/* 80C93DC0-80C93DC8 0008+00 s=1 e=0 z=0  None .rodata    @3657 */
SECTION_RODATA static u8 const lit_3657[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C93DC8-80C93DD0 0008+00 s=1 e=0 z=0  None .rodata    @3658 */
SECTION_RODATA static u8 const lit_3658[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C93DD0-80C93DD8 0008+00 s=1 e=0 z=0  None .rodata    @3659 */
SECTION_RODATA static u8 const lit_3659[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C93DD8-80C93DE0 0004+04 s=1 e=0 z=0  None .rodata    @3660 */
SECTION_RODATA static u32 const lit_3660[1 + 1 /* padding */] = {
    0x41200000,
    /* padding */
    0x00000000,
};

/* 80C92E58-80C92FB8 0160+00 s=1 e=0 z=0  None .text      searchParentSub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void searchParentSub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/searchParentSub__FPvPv.s"
}
#pragma pop

/* 80C92FB8-80C92FD8 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C92FD8-80C93014 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/initBaseMtx__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93014-80C9307C 0068+00 s=2 e=0 z=0  None .text      setBaseMtx__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/setBaseMtx__12daObjMHole_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C93DE0-80C93DE8 0008+00 s=1 e=0 z=0  None .rodata    @3724 */
SECTION_RODATA static u8 const lit_3724[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C93DE8-80C93DEC 0004+00 s=4 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0x3F800000;

/* 80C93DEC-80C93DF4 0008+00 s=1 e=0 z=0  None .rodata    l_eff_id_L$4030 */
SECTION_RODATA static u8 const l_eff_id_L[8] = {
    0x86, 0xEF, 0x86, 0xF0, 0x86, 0xF1, 0x86, 0xF2,
};

/* 80C93DF4-80C93DFC 0008+00 s=1 e=0 z=0  None .rodata    l_eff_id_S$4031 */
SECTION_RODATA static u8 const l_eff_id_S[8] = {
    0x86, 0xF3, 0x86, 0xF4, 0x86, 0xF5, 0x86, 0xF6,
};

/* 80C93DFC-80C93E00 0004+00 s=1 e=0 z=0  None .rodata    @4217 */
SECTION_RODATA static u32 const lit_4217 = 0xBC23D70A;

/* 80C93E00-80C93E14 0014+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80C93E00[20] = {
    /* 80C93E00 000A stringBase_80C93E00 @stringBase0 */
    0x65,
    0x66,
    0x5F,
    0x4D,
    0x67,
    0x6E,
    0x46,
    0x5F,
    0x4C,
    0x00,
    /* 80C93E0A 000A data_80C93E0A None */
    0x65,
    0x66,
    0x5F,
    0x4D,
    0x67,
    0x6E,
    0x46,
    0x5F,
    0x53,
    0x00,
};

/* 80C93E14-80C93E1C 0008+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)(((char*)&struct_80C93E00) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80C93E00) + 0xA) /* None */,
};

/* 80C93E1C-80C93E68 004C+00 s=1 e=0 z=0  None .data      l_cps_src */
SECTION_DATA static u8 l_cps_src[76] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};

/* 80C9307C-80C93198 011C+00 s=1 e=0 z=0  None .text      Create__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/Create__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93198-80C93204 006C+00 s=1 e=0 z=0  None .text      checkParent__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::checkParent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/checkParent__12daObjMHole_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C93E68-80C93E88 0020+00 s=1 e=0 z=0  None .data      l_daObjMHole_Method */
SECTION_DATA static void* l_daObjMHole_Method[8] = {
    (void*)daObjMHole_Create__FP10fopAc_ac_c,
    (void*)daObjMHole_Delete__FP12daObjMHole_c,
    (void*)daObjMHole_Execute__FP12daObjMHole_c,
    (void*)NULL,
    (void*)daObjMHole_Draw__FP12daObjMHole_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C93E88-80C93EB8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MHole */
SECTION_DATA void* g_profile_Obj_MHole[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01610000, (void*)&g_fpcLf_Method,
    (void*)0x00000734, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x024D0000, (void*)&l_daObjMHole_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C93EB8-80C93EC4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C93EC4-80C93ED0 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C93204-80C93498 0294+00 s=1 e=0 z=0  None .text      CreateHeap__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/CreateHeap__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93498-80C934E0 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C934E0-80C93660 0180+00 s=1 e=0 z=0  None .text      create__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/func_80C934E0.s"
}
#pragma pop

/* 80C93660-80C936A8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C936A8-80C93928 0280+00 s=1 e=0 z=0  None .text      execute__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/execute__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93928-80C93A88 0160+00 s=1 e=0 z=0  None .text      effectSet__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::effectSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/effectSet__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93A88-80C93ADC 0054+00 s=1 e=0 z=0  None .text      effectEnd__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::effectEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/effectEnd__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93ADC-80C93CAC 01D0+00 s=1 e=0 z=0  None .text      draw__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/draw__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93CAC-80C93D00 0054+00 s=1 e=0 z=0  None .text      _delete__12daObjMHole_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMHole_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/_delete__12daObjMHole_cFv.s"
}
#pragma pop

/* 80C93D00-80C93D20 0020+00 s=1 e=0 z=0  None .text      daObjMHole_Draw__FP12daObjMHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMHole_Draw(daObjMHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/daObjMHole_Draw__FP12daObjMHole_c.s"
}
#pragma pop

/* 80C93D20-80C93D40 0020+00 s=1 e=0 z=0  None .text      daObjMHole_Execute__FP12daObjMHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMHole_Execute(daObjMHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/daObjMHole_Execute__FP12daObjMHole_c.s"
}
#pragma pop

/* 80C93D40-80C93D60 0020+00 s=1 e=0 z=0  None .text      daObjMHole_Delete__FP12daObjMHole_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMHole_Delete(daObjMHole_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/daObjMHole_Delete__FP12daObjMHole_c.s"
}
#pragma pop

/* 80C93D60-80C93D80 0020+00 s=1 e=0 z=0  None .text      daObjMHole_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMHole_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/d_a_obj_mhole/daObjMHole_Create__FP10fopAc_ac_c.s"
}
#pragma pop
