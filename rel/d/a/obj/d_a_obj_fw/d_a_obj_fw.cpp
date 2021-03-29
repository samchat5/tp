//
// Generated By: dol2asm
// Translation Unit: d_a_obj_fw
//

#include "rel/d/a/obj/d_a_obj_fw/d_a_obj_fw.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_fw_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Fw_HIO_c {
    /* 80BF204C */ daObj_Fw_HIO_c();
    /* 80BF2AB0 */ ~daObj_Fw_HIO_c();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
};

struct cXyz {};

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

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_ObjGndChk_Spl {
    /* 800777B0 */ dBgS_ObjGndChk_Spl();
    /* 80077848 */ ~dBgS_ObjGndChk_Spl();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct csXyz {};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct Vec {};

struct cBgS_GndChk {
    /* 80267D0C */ void SetPos(Vec const*);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct J3DModel {};

//
// Forward References:
//

static void ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void daObj_Fw_Draw(obj_fw_class*);
static void water_check(obj_fw_class*);
static void fw_float(obj_fw_class*);
static void action(obj_fw_class*);
static void daObj_Fw_Execute(obj_fw_class*);
static bool daObj_Fw_IsDelete(obj_fw_class*);
static void daObj_Fw_Delete(obj_fw_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Fw_Create(fopAc_ac_c*);

extern "C" void __ct__14daObj_Fw_HIO_cFv();
extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObj_Fw_Draw__FP12obj_fw_class();
extern "C" static void water_check__FP12obj_fw_class();
extern "C" static void fw_float__FP12obj_fw_class();
extern "C" static void action__FP12obj_fw_class();
extern "C" static void daObj_Fw_Execute__FP12obj_fw_class();
extern "C" static bool daObj_Fw_IsDelete__FP12obj_fw_class();
extern "C" static void daObj_Fw_Delete__FP12obj_fw_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Fw_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daObj_Fw_HIO_cFv();
extern "C" void __sinit_d_a_obj_fw_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_FW[12];

//
// External References:
//

void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_effHamonSet(u32*, cXyz const*, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BF2B48-80BF2B4C 0004+00 s=5 e=0 z=0  None .rodata    @3647 */
SECTION_RODATA static u32 const lit_3647 = 0x3F800000;

/* 80BF2BAC-80BF2BB4 0008+00 s=1 e=0 z=0  None .data      bmdd$3836 */
SECTION_DATA static u8 bmdd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80BF2BB4-80BF2BBC 0008+00 s=1 e=0 z=0  None .data      dzbd$3837 */
SECTION_DATA static u8 dzbd[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09,
};

/* 80BF2BBC-80BF2BDC 0020+00 s=1 e=0 z=0  None .data      l_daObj_Fw_Method */
SECTION_DATA static void* l_daObj_Fw_Method[8] = {
    (void*)daObj_Fw_Create__FP10fopAc_ac_c,
    (void*)daObj_Fw_Delete__FP12obj_fw_class,
    (void*)daObj_Fw_Execute__FP12obj_fw_class,
    (void*)daObj_Fw_IsDelete__FP12obj_fw_class,
    (void*)daObj_Fw_Draw__FP12obj_fw_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BF2BDC-80BF2C0C 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_FW */
SECTION_DATA void* g_profile_OBJ_FW[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F00000, (void*)&g_fpcLf_Method,
    (void*)0x00000628, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x002A0000, (void*)&l_daObj_Fw_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80BF2C0C-80BF2C18 000C+00 s=2 e=0 z=0  None .data      __vt__14daObj_Fw_HIO_c */
SECTION_DATA static void* __vt__14daObj_Fw_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14daObj_Fw_HIO_cFv,
};

/* 80BF204C-80BF2070 0024+00 s=1 e=0 z=0  None .text      __ct__14daObj_Fw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Fw_HIO_c::daObj_Fw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__ct__14daObj_Fw_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B4C-80BF2B50 0004+00 s=1 e=0 z=0  None .rodata    @3667 */
SECTION_RODATA static u32 const lit_3667 = 0xC2480000;

/* 80BF2B50-80BF2B54 0004+00 s=3 e=0 z=0  None .rodata    @3668 */
SECTION_RODATA static u8 const lit_3668[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BF2B54-80BF2B58 0004+00 s=2 e=0 z=0  None .rodata    @3669 */
SECTION_RODATA static u32 const lit_3669 = 0x41200000;

/* 80BF2C20-80BF2C24 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80BF2C20[4];

/* 80BF2C24-80BF2C30 000C+00 s=1 e=0 z=0  None .bss       @3642 */
static u8 lit_3642[12];

/* 80BF2C30-80BF2C3C 000C+00 s=4 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[12];

/* 80BF2070-80BF219C 012C+00 s=1 e=0 z=0  None .text
 * ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF219C-80BF2200 0064+00 s=1 e=0 z=0  None .text      daObj_Fw_Draw__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Fw_Draw(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Draw__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B58-80BF2B5C 0004+00 s=1 e=0 z=0  None .rodata    @3694 */
SECTION_RODATA static u32 const lit_3694 = 0x43FA0000;

/* 80BF2200-80BF22AC 00AC+00 s=1 e=0 z=0  None .text      water_check__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void water_check(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/water_check__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B5C-80BF2B60 0004+00 s=1 e=0 z=0  None .rodata    @3740 */
SECTION_RODATA static u32 const lit_3740 = 0x3E800000;

/* 80BF2B60-80BF2B64 0004+00 s=1 e=0 z=0  None .rodata    @3741 */
SECTION_RODATA static u32 const lit_3741 = 0x40600000;

/* 80BF2B64-80BF2B68 0004+00 s=1 e=0 z=0  None .rodata    @3742 */
SECTION_RODATA static u32 const lit_3742 = 0x3D4CCCCD;

/* 80BF2B68-80BF2B6C 0004+00 s=1 e=0 z=0  None .rodata    @3743 */
SECTION_RODATA static u32 const lit_3743 = 0xC3960000;

/* 80BF2B6C-80BF2B70 0004+00 s=1 e=0 z=0  None .rodata    @3744 */
SECTION_RODATA static u32 const lit_3744 = 0x3CF5C28F;

/* 80BF2B70-80BF2B74 0004+00 s=1 e=0 z=0  None .rodata    @3745 */
SECTION_RODATA static u32 const lit_3745 = 0x3DCCCCCD;

/* 80BF2B74-80BF2B78 0004+00 s=1 e=0 z=0  None .rodata    @3746 */
SECTION_RODATA static u32 const lit_3746 = 0x43960000;

/* 80BF2B78-80BF2B7C 0004+00 s=1 e=0 z=0  None .rodata    @3747 */
SECTION_RODATA static u32 const lit_3747 = 0x40000000;

/* 80BF2B7C-80BF2B80 0004+00 s=1 e=0 z=0  None .rodata    @3748 */
SECTION_RODATA static u32 const lit_3748 = 0x41A00000;

/* 80BF2B80-80BF2B84 0004+00 s=1 e=0 z=0  None .rodata    @3749 */
SECTION_RODATA static u32 const lit_3749 = 0x3E4CCCCD;

/* 80BF2B84-80BF2B88 0004+00 s=1 e=0 z=0  None .rodata    @3750 */
SECTION_RODATA static u32 const lit_3750 = 0xC1A00000;

/* 80BF2B88-80BF2B8C 0004+00 s=1 e=0 z=0  None .rodata    @3751 */
SECTION_RODATA static u32 const lit_3751 = 0x40400000;

/* 80BF22AC-80BF24C4 0218+00 s=1 e=0 z=0  None .text      fw_float__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fw_float(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/fw_float__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B8C-80BF2B90 0004+00 s=1 e=0 z=0  None .rodata    @3802 */
SECTION_RODATA static u32 const lit_3802 = 0x41700000;

/* 80BF24C4-80BF2670 01AC+00 s=1 e=0 z=0  None .text      action__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/action__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF2670-80BF2718 00A8+00 s=2 e=0 z=0  None .text      daObj_Fw_Execute__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Fw_Execute(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Execute__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF2718-80BF2720 0008+00 s=1 e=0 z=0  None .text      daObj_Fw_IsDelete__FP12obj_fw_class */
static bool daObj_Fw_IsDelete(obj_fw_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80BF2B90-80BF2B94 0004+00 s=1 e=0 z=0  None .rodata    @3918 */
SECTION_RODATA static u32 const lit_3918 = 0xC47A0000;

/* 80BF2B94-80BF2B98 0004+00 s=1 e=0 z=0  None .rodata    @3919 */
SECTION_RODATA static u32 const lit_3919 = 0xC4160000;

/* 80BF2B98-80BF2B9C 0004+00 s=1 e=0 z=0  None .rodata    @3920 */
SECTION_RODATA static u32 const lit_3920 = 0x447A0000;

/* 80BF2B9C-80BF2BA0 0004+00 s=1 e=0 z=0  None .rodata    @3921 */
SECTION_RODATA static u32 const lit_3921 = 0x44160000;

/* 80BF2BA0-80BF2BA4 0004+00 s=1 e=0 z=0  None .rodata    @3922 */
SECTION_RODATA static u32 const lit_3922 = 0x47800000;

/* 80BF2BA4-80BF2BAB 0007+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BF2BA4 = "RYUW00";
#pragma pop

/* 80BF2720-80BF279C 007C+00 s=1 e=0 z=0  None .text      daObj_Fw_Delete__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Fw_Delete(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Delete__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF279C-80BF28D0 0134+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF28D0-80BF2AB0 01E0+00 s=1 e=0 z=0  None .text      daObj_Fw_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Fw_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF2AB0-80BF2AF8 0048+00 s=2 e=0 z=0  None .text      __dt__14daObj_Fw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Fw_HIO_c::~daObj_Fw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__dt__14daObj_Fw_HIO_cFv.s"
}
#pragma pop

/* 80BF2AF8-80BF2B34 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_fw_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_fw_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__sinit_d_a_obj_fw_cpp.s"
}
#pragma pop
