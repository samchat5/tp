//
// Generated By: dol2asm
// Translation Unit: d_a_obj_amiShutter
//

#include "rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80BA1514 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daAmiShutter_c {
    /* 80BA155C */ void setBaseMtx();
    /* 80BA15E4 */ void CreateHeap();
    /* 80BA1650 */ void create();
    /* 80BA182C */ void Execute(f32 (**)[3][4]);
    /* 80BA1888 */ void moveShutter();
    /* 80BA1974 */ void playerAreaCheck();
    /* 80BA1B4C */ void init_modeWait();
    /* 80BA1B58 */ void modeWait();
    /* 80BA1BCC */ void init_modeWaitEvent();
    /* 80BA1BD8 */ void modeWaitEvent();
    /* 80BA1C90 */ void eventStart();
    /* 80BA1CB4 */ void init_modeClose();
    /* 80BA1D48 */ void modeClose();
    /* 80BA1DCC */ void init_modeCloseEvent();
    /* 80BA1E60 */ void modeCloseEvent();
    /* 80BA1EEC */ void init_modeCloseEnd();
    /* 80BA1F7C */ void modeCloseEnd();
    /* 80BA1F80 */ void init_modeOpen();
    /* 80BA2004 */ void modeOpen();
    /* 80BA2080 */ void Draw();
    /* 80BA2124 */ void Delete();
    /* 80BA22E8 */ ~daAmiShutter_c();
};

struct daAmiShutter_HIO_c {
    /* 80BA14CC */ daAmiShutter_HIO_c();
    /* 80BA21E0 */ ~daAmiShutter_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dEvLib_callback_c {
    /* 8004886C */ void eventUpdate();
    /* 80048940 */ void orderEvent(int, int, int);
    /* 80BA2288 */ ~dEvLib_callback_c();
    /* 80BA22D0 */ bool eventStart();
    /* 80BA22D8 */ bool eventRun();
    /* 80BA22E0 */ bool eventEnd();
};

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
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

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daAmiShutter_Draw(daAmiShutter_c*);
static void daAmiShutter_Execute(daAmiShutter_c*);
static void daAmiShutter_Delete(daAmiShutter_c*);
static void daAmiShutter_Create(fopAc_ac_c*);

extern "C" void __ct__18daAmiShutter_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__14daAmiShutter_cFv();
extern "C" void CreateHeap__14daAmiShutter_cFv();
extern "C" void create__14daAmiShutter_cFv();
extern "C" void Execute__14daAmiShutter_cFPPA3_A4_f();
extern "C" void moveShutter__14daAmiShutter_cFv();
extern "C" void playerAreaCheck__14daAmiShutter_cFv();
extern "C" void init_modeWait__14daAmiShutter_cFv();
extern "C" void modeWait__14daAmiShutter_cFv();
extern "C" void init_modeWaitEvent__14daAmiShutter_cFv();
extern "C" void modeWaitEvent__14daAmiShutter_cFv();
extern "C" void eventStart__14daAmiShutter_cFv();
extern "C" void init_modeClose__14daAmiShutter_cFv();
extern "C" void modeClose__14daAmiShutter_cFv();
extern "C" void init_modeCloseEvent__14daAmiShutter_cFv();
extern "C" void modeCloseEvent__14daAmiShutter_cFv();
extern "C" void init_modeCloseEnd__14daAmiShutter_cFv();
extern "C" void modeCloseEnd__14daAmiShutter_cFv();
extern "C" void init_modeOpen__14daAmiShutter_cFv();
extern "C" void modeOpen__14daAmiShutter_cFv();
extern "C" void Draw__14daAmiShutter_cFv();
extern "C" void Delete__14daAmiShutter_cFv();
extern "C" static void daAmiShutter_Draw__FP14daAmiShutter_c();
extern "C" static void daAmiShutter_Execute__FP14daAmiShutter_c();
extern "C" static void daAmiShutter_Delete__FP14daAmiShutter_c();
extern "C" static void daAmiShutter_Create__FP10fopAc_ac_c();
extern "C" void __dt__18daAmiShutter_HIO_cFv();
extern "C" void __sinit_d_a_obj_amiShutter_cpp();
extern "C" static void func_80BA2278();
extern "C" static void func_80BA2280();
extern "C" void __dt__17dEvLib_callback_cFv();
extern "C" bool eventStart__17dEvLib_callback_cFv();
extern "C" bool eventRun__17dEvLib_callback_cFv();
extern "C" bool eventEnd__17dEvLib_callback_cFv();
extern "C" void __dt__14daAmiShutter_cFv();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_AmiShutter[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void eventUpdate__17dEvLib_callback_cFv();
extern "C" void orderEvent__17dEvLib_callback_cFiii();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450C98[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BA2390-80BA2394 0004+00 s=5 e=0 z=0  None .rodata    @3655 */
SECTION_RODATA static u32 const lit_3655 = 0x428C0000;

/* 80BA2394-80BA2398 0004+00 s=1 e=0 z=0  None .rodata    @3656 */
SECTION_RODATA static u32 const lit_3656 = 0x43C80000;

/* 80BA23DC-80BA23E8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA23E8-80BA23FC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80BA23FC-80BA2408 000C+00 s=1 e=0 z=0  None .data      @3759 */
SECTION_DATA static void* lit_3759[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__14daAmiShutter_cFv,
};

/* 80BA2408-80BA2414 000C+00 s=1 e=0 z=0  None .data      @3760 */
SECTION_DATA static void* lit_3760[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWaitEvent__14daAmiShutter_cFv,
};

/* 80BA2414-80BA2420 000C+00 s=1 e=0 z=0  None .data      @3761 */
SECTION_DATA static void* lit_3761[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeClose__14daAmiShutter_cFv,
};

/* 80BA2420-80BA242C 000C+00 s=1 e=0 z=0  None .data      @3762 */
SECTION_DATA static void* lit_3762[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeCloseEvent__14daAmiShutter_cFv,
};

/* 80BA242C-80BA2438 000C+00 s=1 e=0 z=0  None .data      @3763 */
SECTION_DATA static void* lit_3763[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeCloseEnd__14daAmiShutter_cFv,
};

/* 80BA2438-80BA2444 000C+00 s=1 e=0 z=0  None .data      @3764 */
SECTION_DATA static void* lit_3764[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpen__14daAmiShutter_cFv,
};

/* 80BA2444-80BA248C 0048+00 s=1 e=0 z=0  None .data      mode_proc$3758 */
SECTION_DATA static u8 mode_proc[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA248C-80BA24AC 0020+00 s=1 e=0 z=0  None .data      l_daAmiShutter_Method */
SECTION_DATA static void* l_daAmiShutter_Method[8] = {
    (void*)daAmiShutter_Create__FP10fopAc_ac_c,
    (void*)daAmiShutter_Delete__FP14daAmiShutter_c,
    (void*)daAmiShutter_Execute__FP14daAmiShutter_c,
    (void*)NULL,
    (void*)daAmiShutter_Draw__FP14daAmiShutter_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BA24AC-80BA24DC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_AmiShutter */
SECTION_DATA void* g_profile_Obj_AmiShutter[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00470000, (void*)&g_fpcLf_Method,
    (void*)0x000005DC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02090000, (void*)&l_daAmiShutter_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80BA24DC-80BA24F4 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c */
SECTION_DATA static void* __vt__17dEvLib_callback_c[6] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__17dEvLib_callback_cFv,
    (void*)eventStart__17dEvLib_callback_cFv,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80BA24F4-80BA253C 0048+00 s=2 e=0 z=0  None .data      __vt__14daAmiShutter_c */
SECTION_DATA static void* __vt__14daAmiShutter_c[18] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__14daAmiShutter_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__14daAmiShutter_cFPPA3_A4_f,
    (void*)Draw__14daAmiShutter_cFv,
    (void*)Delete__14daAmiShutter_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BA2280,
    (void*)func_80BA2278,
    (void*)eventRun__17dEvLib_callback_cFv,
    (void*)eventEnd__17dEvLib_callback_cFv,
    (void*)__dt__14daAmiShutter_cFv,
    (void*)eventStart__14daAmiShutter_cFv,
};

/* 80BA253C-80BA2548 000C+00 s=2 e=0 z=0  None .data      __vt__18daAmiShutter_HIO_c */
SECTION_DATA static void* __vt__18daAmiShutter_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__18daAmiShutter_HIO_cFv,
};

/* 80BA2548-80BA2554 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BA14CC-80BA1514 0048+00 s=1 e=0 z=0  None .text      __ct__18daAmiShutter_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daAmiShutter_HIO_c::daAmiShutter_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__ct__18daAmiShutter_HIO_cFv.s"
}
#pragma pop

/* 80BA1514-80BA155C 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80BA155C-80BA15E4 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/setBaseMtx__14daAmiShutter_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA2398-80BA239C 0004+00 s=1 e=0 z=0  None .rodata    @3739 */
SECTION_RODATA static u32 const lit_3739 = 0xC4480000;

/* 80BA239C-80BA23A0 0004+00 s=2 e=0 z=0  None .rodata    @3740 */
SECTION_RODATA static u32 const lit_3740 = 0x44160000;

/* 80BA23A0-80BA23A8 0004+04 s=4 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA static u8 const lit_3822[4 + 4 /* padding */] = {
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

/* 80BA23A8-80BA23B0 0008+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u8 const lit_3823[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA23B0-80BA23B8 0008+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u8 const lit_3824[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA23B8-80BA23C0 0008+00 s=1 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA static u8 const lit_3825[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA23C0-80BA23C4 0004+00 s=1 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA static u32 const lit_3826 = 0x42480000;

/* 80BA23C4-80BA23C8 0004+00 s=6 e=0 z=0  None .rodata    @3890 */
SECTION_RODATA static u32 const lit_3890 = 0x3F800000;

/* 80BA23C8-80BA23CC 0004+00 s=3 e=0 z=0  None .rodata    @3891 */
SECTION_RODATA static u32 const lit_3891 = 0xBF800000;

/* 80BA23CC-80BA23D0 0004+00 s=1 e=0 z=0  None .rodata    @3900 */
SECTION_RODATA static u32 const lit_3900 = 0x3F000000;

/* 80BA23D0-80BA23D4 0004+00 s=2 e=0 z=0  None .rodata    @3919 */
SECTION_RODATA static u32 const lit_3919 = 0x3E4CCCCD;

/* 80BA23D4-80BA23DB 0007+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BA23D4 = "S_Zami";
#pragma pop

/* 80BA15E4-80BA1650 006C+00 s=1 e=0 z=0  None .text      CreateHeap__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/CreateHeap__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1650-80BA182C 01DC+00 s=1 e=0 z=0  None .text      create__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/create__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA182C-80BA1888 005C+00 s=1 e=0 z=0  None .text      Execute__14daAmiShutter_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/Execute__14daAmiShutter_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA2560-80BA256C 000C+00 s=1 e=0 z=0  None .bss       @3649 */
static u8 lit_3649[12];

/* 80BA256C-80BA2580 0014+00 s=6 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[20];

/* 80BA2580-80BA2584 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80BA2580[4];

/* 80BA1888-80BA1974 00EC+00 s=1 e=0 z=0  None .text      moveShutter__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::moveShutter() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/moveShutter__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1974-80BA1B4C 01D8+00 s=1 e=0 z=0  None .text      playerAreaCheck__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::playerAreaCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/playerAreaCheck__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1B4C-80BA1B58 000C+00 s=3 e=0 z=0  None .text      init_modeWait__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeWait__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1B58-80BA1BCC 0074+00 s=1 e=0 z=0  None .text      modeWait__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/modeWait__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1BCC-80BA1BD8 000C+00 s=1 e=0 z=0  None .text      init_modeWaitEvent__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeWaitEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeWaitEvent__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1BD8-80BA1C90 00B8+00 s=1 e=0 z=0  None .text      modeWaitEvent__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::modeWaitEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/modeWaitEvent__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1C90-80BA1CB4 0024+00 s=2 e=0 z=0  None .text      eventStart__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::eventStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/eventStart__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1CB4-80BA1D48 0094+00 s=1 e=0 z=0  None .text      init_modeClose__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeClose__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1D48-80BA1DCC 0084+00 s=1 e=0 z=0  None .text      modeClose__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/modeClose__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1DCC-80BA1E60 0094+00 s=1 e=0 z=0  None .text      init_modeCloseEvent__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeCloseEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeCloseEvent__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1E60-80BA1EEC 008C+00 s=1 e=0 z=0  None .text      modeCloseEvent__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::modeCloseEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/modeCloseEvent__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1EEC-80BA1F7C 0090+00 s=1 e=0 z=0  None .text      init_modeCloseEnd__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeCloseEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeCloseEnd__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA1F7C-80BA1F80 0004+00 s=1 e=0 z=0  None .text      modeCloseEnd__14daAmiShutter_cFv */
void daAmiShutter_c::modeCloseEnd() {
    /* empty function */
}

/* 80BA1F80-80BA2004 0084+00 s=1 e=0 z=0  None .text      init_modeOpen__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::init_modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/init_modeOpen__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA2004-80BA2080 007C+00 s=1 e=0 z=0  None .text      modeOpen__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/modeOpen__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA2080-80BA2124 00A4+00 s=1 e=0 z=0  None .text      Draw__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/Draw__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA2124-80BA2154 0030+00 s=1 e=0 z=0  None .text      Delete__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAmiShutter_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/Delete__14daAmiShutter_cFv.s"
}
#pragma pop

/* 80BA2154-80BA2180 002C+00 s=1 e=0 z=0  None .text      daAmiShutter_Draw__FP14daAmiShutter_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAmiShutter_Draw(daAmiShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/daAmiShutter_Draw__FP14daAmiShutter_c.s"
}
#pragma pop

/* 80BA2180-80BA21A0 0020+00 s=1 e=0 z=0  None .text      daAmiShutter_Execute__FP14daAmiShutter_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAmiShutter_Execute(daAmiShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/daAmiShutter_Execute__FP14daAmiShutter_c.s"
}
#pragma pop

/* 80BA21A0-80BA21C0 0020+00 s=1 e=0 z=0  None .text      daAmiShutter_Delete__FP14daAmiShutter_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAmiShutter_Delete(daAmiShutter_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/daAmiShutter_Delete__FP14daAmiShutter_c.s"
}
#pragma pop

/* 80BA21C0-80BA21E0 0020+00 s=1 e=0 z=0  None .text      daAmiShutter_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAmiShutter_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/daAmiShutter_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BA21E0-80BA223C 005C+00 s=2 e=0 z=0  None .text      __dt__18daAmiShutter_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daAmiShutter_HIO_c::~daAmiShutter_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__dt__18daAmiShutter_HIO_cFv.s"
}
#pragma pop

/* 80BA223C-80BA2278 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_amiShutter_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_amiShutter_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__sinit_d_a_obj_amiShutter_cpp.s"
}
#pragma pop

/* 80BA2278-80BA2280 0008+00 s=1 e=0 z=0  None .text      @1448@eventStart__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BA2278() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/func_80BA2278.s"
}
#pragma pop

/* 80BA2280-80BA2288 0008+00 s=1 e=0 z=0  None .text      @1448@__dt__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80BA2280() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/func_80BA2280.s"
}
#pragma pop

/* 80BA2288-80BA22D0 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvLib_callback_c::~dEvLib_callback_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop

/* 80BA22D0-80BA22D8 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventStart() {
    return true;
}

/* 80BA22D8-80BA22E0 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventRun() {
    return true;
}

/* 80BA22E0-80BA22E8 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv */
bool dEvLib_callback_c::eventEnd() {
    return true;
}

/* 80BA22E8-80BA237C 0094+00 s=2 e=0 z=0  None .text      __dt__14daAmiShutter_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daAmiShutter_c::~daAmiShutter_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_amiShutter/d_a_obj_amiShutter/__dt__14daAmiShutter_cFv.s"
}
#pragma pop
