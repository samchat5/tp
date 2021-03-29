//
// Generated By: dol2asm
// Translation Unit: d_a_obj_cb
//

#include "rel/d/a/obj/d_a_obj_cb/d_a_obj_cb.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_cb_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Cb_HIO_c {
    /* 80BC4B2C */ daObj_Cb_HIO_c();
    /* 80BC573C */ ~daObj_Cb_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
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

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80BC56CC */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct csXyz {};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 80BC563C */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80BC5684 */ ~cM3dGAab();
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObj_Cb_Draw(obj_cb_class*);
static void ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void action(obj_cb_class*);
static void daObj_Cb_Execute(obj_cb_class*);
static bool daObj_Cb_IsDelete(obj_cb_class*);
static void daObj_Cb_Delete(obj_cb_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Cb_Create(fopAc_ac_c*);

extern "C" void __ct__14daObj_Cb_HIO_cFv();
extern "C" static void daObj_Cb_Draw__FP12obj_cb_class();
extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void action__FP12obj_cb_class();
extern "C" static void daObj_Cb_Execute__FP12obj_cb_class();
extern "C" static bool daObj_Cb_IsDelete__FP12obj_cb_class();
extern "C" static void daObj_Cb_Delete__FP12obj_cb_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Cb_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__14daObj_Cb_HIO_cFv();
extern "C" void __sinit_d_a_obj_cb_cpp();
extern "C" static void func_80BC57C0();
extern "C" static void func_80BC57C8();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_CB[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_effSmokeSet1(u32*, u32*, cXyz const*, csXyz const*, f32, dKy_tevstr_c const*, int);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_29();
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
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BC5854-80BC5874 0020+00 s=1 e=0 z=0  None .data      l_daObj_Cb_Method */
SECTION_DATA static void* l_daObj_Cb_Method[8] = {
    (void*)daObj_Cb_Create__FP10fopAc_ac_c,
    (void*)daObj_Cb_Delete__FP12obj_cb_class,
    (void*)daObj_Cb_Execute__FP12obj_cb_class,
    (void*)daObj_Cb_IsDelete__FP12obj_cb_class,
    (void*)daObj_Cb_Draw__FP12obj_cb_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BC5874-80BC58A4 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_CB */
SECTION_DATA void* g_profile_OBJ_CB[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x002A0000, (void*)&g_fpcLf_Method,
    (void*)0x0000097C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00310000, (void*)&l_daObj_Cb_Method,
    (void*)0x00040100, (void*)NULL,
};

/* 80BC58A4-80BC58B0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BC58B0-80BC58BC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BC58BC-80BC58E0 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80BC57C8,
    (void*)NULL, (void*)NULL, (void*)func_80BC57C0,
};

/* 80BC58E0-80BC58EC 000C+00 s=2 e=0 z=0  None .data      __vt__14daObj_Cb_HIO_c */
SECTION_DATA static void* __vt__14daObj_Cb_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14daObj_Cb_HIO_cFv,
};

/* 80BC4B2C-80BC4B44 0018+00 s=1 e=0 z=0  None .text      __ct__14daObj_Cb_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Cb_HIO_c::daObj_Cb_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__ct__14daObj_Cb_HIO_cFv.s"
}
#pragma pop

/* 80BC4B44-80BC4BA8 0064+00 s=1 e=0 z=0  None .text      daObj_Cb_Draw__FP12obj_cb_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Cb_Draw(obj_cb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/daObj_Cb_Draw__FP12obj_cb_class.s"
}
#pragma pop

/* 80BC4BA8-80BC4BB4 000C+00 s=1 e=0 z=0  None .text
 * ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC57E4-80BC57EC 0004+04 s=1 e=0 z=0  None .rodata    @3882 */
SECTION_RODATA static u8 const lit_3882[4 + 4 /* padding */] = {
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

/* 80BC57EC-80BC57F4 0008+00 s=1 e=0 z=0  None .rodata    @3883 */
SECTION_RODATA static u8 const lit_3883[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC57F4-80BC57FC 0008+00 s=1 e=0 z=0  None .rodata    @3884 */
SECTION_RODATA static u8 const lit_3884[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC57FC-80BC5804 0008+00 s=1 e=0 z=0  None .rodata    @3885 */
SECTION_RODATA static u8 const lit_3885[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC5804-80BC5808 0004+00 s=1 e=0 z=0  None .rodata    @3886 */
SECTION_RODATA static u32 const lit_3886 = 0x41F00000;

/* 80BC5808-80BC580C 0004+00 s=1 e=0 z=0  None .rodata    @3887 */
SECTION_RODATA static u32 const lit_3887 = 0x40A00000;

/* 80BC580C-80BC5810 0004+00 s=1 e=0 z=0  None .rodata    @3888 */
SECTION_RODATA static u32 const lit_3888 = 0x3F800000;

/* 80BC5810-80BC5814 0004+00 s=1 e=0 z=0  None .rodata    @3889 */
SECTION_RODATA static u32 const lit_3889 = 0x3F000000;

/* 80BC5814-80BC5818 0004+00 s=1 e=0 z=0  None .rodata    @3890 */
SECTION_RODATA static u32 const lit_3890 = 0x42700000;

/* 80BC5818-80BC581C 0004+00 s=1 e=0 z=0  None .rodata    @3891 */
SECTION_RODATA static u32 const lit_3891 = 0xBF800000;

/* 80BC581C-80BC5820 0004+00 s=1 e=0 z=0  None .rodata    @3892 */
SECTION_RODATA static u32 const lit_3892 = 0x42B40000;

/* 80BC5820-80BC5824 0004+00 s=1 e=0 z=0  None .rodata    @3893 */
SECTION_RODATA static u32 const lit_3893 = 0x41A00000;

/* 80BC5824-80BC5828 0004+00 s=1 e=0 z=0  None .rodata    @3894 */
SECTION_RODATA static u32 const lit_3894 = 0xC0A00000;

/* 80BC5828-80BC582C 0004+00 s=1 e=0 z=0  None .rodata    @3895 */
SECTION_RODATA static u32 const lit_3895 = 0xC1F00000;

/* 80BC582C-80BC5830 0004+00 s=1 e=0 z=0  None .rodata    @3896 */
SECTION_RODATA static u32 const lit_3896 = 0x459C4000;

/* 80BC5830-80BC5834 0004+00 s=1 e=0 z=0  None .rodata    @3897 */
SECTION_RODATA static u32 const lit_3897 = 0x45DAC000;

/* 80BC5834-80BC5838 0004+00 s=1 e=0 z=0  None .rodata    @3898 */
SECTION_RODATA static u32 const lit_3898 = 0x41700000;

/* 80BC5838-80BC583C 0004+00 s=1 e=0 z=0  None .rodata    @3899 */
SECTION_RODATA static u32 const lit_3899 = 0x41200000;

/* 80BC583C-80BC5840 0004+00 s=1 e=0 z=0  None .rodata    @3900 */
SECTION_RODATA static u32 const lit_3900 = 0xBE99999A;

/* 80BC5840-80BC5844 0004+00 s=1 e=0 z=0  None .rodata    @3901 */
SECTION_RODATA static u32 const lit_3901 = 0x40000000;

/* 80BC5844-80BC5848 0004+00 s=1 e=0 z=0  None .rodata    @3902 */
SECTION_RODATA static u32 const lit_3902 = 0xC1C80000;

/* 80BC4BB4-80BC51B8 0604+00 s=1 e=0 z=0  None .text      action__FP12obj_cb_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(obj_cb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/action__FP12obj_cb_class.s"
}
#pragma pop

/* 80BC51B8-80BC5240 0088+00 s=2 e=0 z=0  None .text      daObj_Cb_Execute__FP12obj_cb_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Cb_Execute(obj_cb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/daObj_Cb_Execute__FP12obj_cb_class.s"
}
#pragma pop

/* 80BC5240-80BC5248 0008+00 s=1 e=0 z=0  None .text      daObj_Cb_IsDelete__FP12obj_cb_class */
static bool daObj_Cb_IsDelete(obj_cb_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BC5848-80BC584C 0004+00 s=1 e=0 z=0  None .rodata    @4038 */
SECTION_RODATA static u32 const lit_4038 = 0x42480000;

/* 80BC584C-80BC5853 0007+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BC584C = "Obj_cb";
#pragma pop

/* 80BC58F8-80BC58FC 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80BC58F8[4];

/* 80BC5248-80BC52CC 0084+00 s=1 e=0 z=0  None .text      daObj_Cb_Delete__FP12obj_cb_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Cb_Delete(obj_cb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/daObj_Cb_Delete__FP12obj_cb_class.s"
}
#pragma pop

/* 80BC52CC-80BC5408 013C+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC58FC-80BC5908 000C+00 s=1 e=0 z=0  None .bss       @3763 */
static u8 lit_3763[12];

/* 80BC5908-80BC5910 0008+00 s=2 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[8];

/* 80BC5408-80BC563C 0234+00 s=1 e=0 z=0  None .text      daObj_Cb_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Cb_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/daObj_Cb_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BC563C-80BC5684 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BC5684-80BC56CC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BC56CC-80BC573C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80BC573C-80BC5784 0048+00 s=2 e=0 z=0  None .text      __dt__14daObj_Cb_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Cb_HIO_c::~daObj_Cb_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__dt__14daObj_Cb_HIO_cFv.s"
}
#pragma pop

/* 80BC5784-80BC57C0 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_cb_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_cb_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/__sinit_d_a_obj_cb_cpp.s"
}
#pragma pop

/* 80BC57C0-80BC57C8 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BC57C0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/func_80BC57C0.s"
}
#pragma pop

/* 80BC57C8-80BC57D0 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BC57C8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cb/d_a_obj_cb/func_80BC57C8.s"
}
#pragma pop
