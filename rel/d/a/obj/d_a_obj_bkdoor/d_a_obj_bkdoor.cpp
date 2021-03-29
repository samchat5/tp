//
// Generated By: dol2asm
// Translation Unit: d_a_obj_bkdoor
//

#include "rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {};

struct daObjBkDoor_c {
    /* 80578D4C */ void initBaseMtx();
    /* 80578D88 */ void setBaseMtx();
    /* 80578E14 */ void Create();
    /* 80578EA0 */ void CreateHeap();
    /* 80578F20 */ void create1st();
    /* 80578FC0 */ void openCheck();
    /* 8057902C */ void Execute(f32 (**)[3][4]);
    /* 805792E4 */ void Draw();
    /* 80579388 */ void Delete();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
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

struct dBgW {};

struct csXyz {};

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

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void search_door(void*, void*);
static void daObjBkDoor_create1st(daObjBkDoor_c*);
static void daObjBkDoor_MoveBGDelete(daObjBkDoor_c*);
static void daObjBkDoor_MoveBGExecute(daObjBkDoor_c*);
static void daObjBkDoor_MoveBGDraw(daObjBkDoor_c*);

extern "C" static void search_door__FPvPv();
extern "C" void initBaseMtx__13daObjBkDoor_cFv();
extern "C" void setBaseMtx__13daObjBkDoor_cFv();
extern "C" void Create__13daObjBkDoor_cFv();
extern "C" void CreateHeap__13daObjBkDoor_cFv();
extern "C" void create1st__13daObjBkDoor_cFv();
extern "C" void openCheck__13daObjBkDoor_cFv();
extern "C" void Execute__13daObjBkDoor_cFPPA3_A4_f();
extern "C" void Draw__13daObjBkDoor_cFv();
extern "C" void Delete__13daObjBkDoor_cFv();
extern "C" static void daObjBkDoor_create1st__FP13daObjBkDoor_c();
extern "C" static void daObjBkDoor_MoveBGDelete__FP13daObjBkDoor_c();
extern "C" static void daObjBkDoor_MoveBGExecute__FP13daObjBkDoor_c();
extern "C" static void daObjBkDoor_MoveBGDraw__FP13daObjBkDoor_c();
extern "C" extern u8 const l_col_offsetX[20];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_BkDoor[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc0(f32*, f32, f32);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80578D18-80578D4C 0034+00 s=1 e=0 z=0  None .text      search_door__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void search_door(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/search_door__FPvPv.s"
}
#pragma pop

/* 80578D4C-80578D88 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/initBaseMtx__13daObjBkDoor_cFv.s"
}
#pragma pop

/* 80578D88-80578E14 008C+00 s=2 e=0 z=0  None .text      setBaseMtx__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/setBaseMtx__13daObjBkDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80579490-80579498 0008+00 s=2 e=0 z=0  None .rodata    l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80579498-805794A0 0008+00 s=1 e=0 z=0  None .rodata    l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09,
};

/* 805794A0-805794B4 0014+00 s=0 e=0 z=0  None .rodata    l_col_offsetX */
SECTION_RODATA u8 const l_col_offsetX[20] = {
    0x42, 0xA0, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00, 0x43, 0x70,
    0x00, 0x00, 0x43, 0xA0, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
};

/* 805794B4-805794E4 0030+00 s=1 e=0 z=0  None .rodata    l_roll_crash_check_areaL */
SECTION_RODATA static u8 const l_roll_crash_check_areaL[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x44, 0x89, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0x44, 0x89, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00,
};

/* 805794E4-80579514 0030+00 s=1 e=0 z=0  None .rodata    l_roll_crash_check_areaR */
SECTION_RODATA static u8 const l_roll_crash_check_areaR[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0xC4, 0x89, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x0C, 0x00, 0x00, 0xC4, 0x89, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x0C, 0x00, 0x00,
};

/* 80579514-80579518 0004+00 s=1 e=0 z=0  None .rodata    @3702 */
SECTION_RODATA static u32 const lit_3702 = 0x40000000;

/* 80578E14-80578EA0 008C+00 s=1 e=0 z=0  None .text      Create__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/Create__13daObjBkDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80579518-8057951C 0004+00 s=1 e=0 z=0  None .rodata    @3817 */
SECTION_RODATA static u32 const lit_3817 = 0xC4160000;

/* 8057951C-80579520 0004+00 s=1 e=0 z=0  None .rodata    @3818 */
SECTION_RODATA static u32 const lit_3818 = 0x44160000;

/* 80579520-80579524 0004+00 s=1 e=0 z=0  None .rodata    @3819 */
SECTION_RODATA static u32 const lit_3819 = 0x442F0000;

/* 80579524-80579528 0004+00 s=1 e=0 z=0  None .rodata    @3820 */
SECTION_RODATA static u32 const lit_3820 = 0x3F800000;

/* 80579528-8057952C 0004+00 s=1 e=0 z=0  None .rodata    @3821 */
SECTION_RODATA static u32 const lit_3821 = 0xBF800000;

/* 8057952C-80579530 0004+00 s=1 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA static u32 const lit_3822 = 0xC42F0000;

/* 80579530-80579534 0004+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0x3DCCCCCD;

/* 80579534-80579538 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0x41A00000;

/* 80579538-80579541 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80579538 = "A_BkDoor";
#pragma pop

/* 80579544-80579548 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80578EA0-80578F20 0080+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/CreateHeap__13daObjBkDoor_cFv.s"
}
#pragma pop

/* 80578F20-80578FC0 00A0+00 s=1 e=0 z=0  None .text      create1st__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/create1st__13daObjBkDoor_cFv.s"
}
#pragma pop

/* 80578FC0-8057902C 006C+00 s=1 e=0 z=0  None .text      openCheck__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::openCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/openCheck__13daObjBkDoor_cFv.s"
}
#pragma pop

/* 8057902C-805792E4 02B8+00 s=1 e=0 z=0  None .text      Execute__13daObjBkDoor_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/Execute__13daObjBkDoor_cFPPA3_A4_f.s"
}
#pragma pop

/* 805792E4-80579388 00A4+00 s=1 e=0 z=0  None .text      Draw__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/Draw__13daObjBkDoor_cFv.s"
}
#pragma pop

/* 80579388-805793BC 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjBkDoor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjBkDoor_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/Delete__13daObjBkDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80579548-80579568 0020+00 s=1 e=0 z=0  None .data      daObjBkDoor_METHODS */
SECTION_DATA static void* daObjBkDoor_METHODS[8] = {
    (void*)daObjBkDoor_create1st__FP13daObjBkDoor_c,
    (void*)daObjBkDoor_MoveBGDelete__FP13daObjBkDoor_c,
    (void*)daObjBkDoor_MoveBGExecute__FP13daObjBkDoor_c,
    (void*)NULL,
    (void*)daObjBkDoor_MoveBGDraw__FP13daObjBkDoor_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80579568-80579598 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_BkDoor */
SECTION_DATA void* g_profile_Obj_BkDoor[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00620000, (void*)&g_fpcLf_Method,
    (void*)0x000005C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01C30000, (void*)&daObjBkDoor_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80579598-805795C0 0028+00 s=1 e=0 z=0  None .data      __vt__13daObjBkDoor_c */
SECTION_DATA static void* __vt__13daObjBkDoor_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__13daObjBkDoor_cFv,
    (void*)Create__13daObjBkDoor_cFv,
    (void*)Execute__13daObjBkDoor_cFPPA3_A4_f,
    (void*)Draw__13daObjBkDoor_cFv,
    (void*)Delete__13daObjBkDoor_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 805793BC-8057941C 0060+00 s=1 e=0 z=0  None .text      daObjBkDoor_create1st__FP13daObjBkDoor_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjBkDoor_create1st(daObjBkDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/daObjBkDoor_create1st__FP13daObjBkDoor_c.s"
}
#pragma pop

/* 8057941C-8057943C 0020+00 s=1 e=0 z=0  None .text daObjBkDoor_MoveBGDelete__FP13daObjBkDoor_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjBkDoor_MoveBGDelete(daObjBkDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/daObjBkDoor_MoveBGDelete__FP13daObjBkDoor_c.s"
}
#pragma pop

/* 8057943C-8057945C 0020+00 s=1 e=0 z=0  None .text daObjBkDoor_MoveBGExecute__FP13daObjBkDoor_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjBkDoor_MoveBGExecute(daObjBkDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/daObjBkDoor_MoveBGExecute__FP13daObjBkDoor_c.s"
}
#pragma pop

/* 8057945C-80579488 002C+00 s=1 e=0 z=0  None .text      daObjBkDoor_MoveBGDraw__FP13daObjBkDoor_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjBkDoor_MoveBGDraw(daObjBkDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bkdoor/d_a_obj_bkdoor/daObjBkDoor_MoveBGDraw__FP13daObjBkDoor_c.s"
}
#pragma pop
