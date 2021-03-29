//
// Generated By: dol2asm
// Translation Unit: d_a_obj_mirror_table
//

#include "rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTextureSRTKey {};

struct J3DAnmTevRegKey {};

struct J3DMaterialTable {
    /* 8032F7B4 */ void removeTexMtxAnimator(J3DAnmTextureSRTKey*);
    /* 8032F880 */ void removeTevRegAnimator(J3DAnmTevRegKey*);
};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjMirrorTable_c {
    /* 80C99938 */ void createHeap();
    /* 80C99F7C */ void isSwitch();
    /* 80C9A298 */ void draw();
    /* 80C9A4D0 */ void execute();
    /* 80C9AB30 */ void create();
    /* 80C9ABFC */ void create_init();
    /* 80C9AFD0 */ void initBaseMtx();
};

struct dSv_memBit_c {
    /* 80034810 */ void onSwitch(int);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
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

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
    /* 80C9AAB0 */ ~dBgW();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 8007933C */ ~cBgW();
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C99F34 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void createSolidHeap(fopAc_ac_c*);
static void rideCallBack1(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void rideCallBack2(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void daObjMirrorTable_Draw(daObjMirrorTable_c*);
static void daObjMirrorTable_Execute(daObjMirrorTable_c*);
static bool daObjMirrorTable_IsDelete(daObjMirrorTable_c*);
static void daObjMirrorTable_Delete(daObjMirrorTable_c*);
static void daObjMirrorTable_Create(fopAc_ac_c*);
static void cLib_calcTimer__template0(s8*);

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void createHeap__18daObjMirrorTable_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void isSwitch__18daObjMirrorTable_cFv();
extern "C" static void rideCallBack1__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void rideCallBack2__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObjMirrorTable_Draw__FP18daObjMirrorTable_c();
extern "C" void draw__18daObjMirrorTable_cFv();
extern "C" static void daObjMirrorTable_Execute__FP18daObjMirrorTable_c();
extern "C" void execute__18daObjMirrorTable_cFv();
extern "C" static bool daObjMirrorTable_IsDelete__FP18daObjMirrorTable_c();
extern "C" static void daObjMirrorTable_Delete__FP18daObjMirrorTable_c();
extern "C" void __dt__4dBgWFv();
extern "C" static void daObjMirrorTable_Create__FP10fopAc_ac_c();
extern "C" void create__18daObjMirrorTable_cFv();
extern "C" void create_init__18daObjMirrorTable_cFv();
extern "C" void initBaseMtx__18daObjMirrorTable_cFv();
extern "C" static void func_80C9B220();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_MirrorTable[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void* operator new(u32);
void operator delete(void*);

extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__12dSv_memBit_cFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __dt__4cBgWFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__4dBgW[65];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80C99918-80C99938 0020+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9B244-80C9B250 000C+00 s=3 e=0 z=0  None .rodata    l_minPos */
SECTION_RODATA static u8 const l_minPos[12] = {
    0x44, 0xD1, 0x05, 0xDB, 0x45, 0x90, 0x2D, 0x0A, 0xC6, 0xA4, 0x2B, 0x96,
};

/* 80C9B250-80C9B25C 000C+00 s=1 e=0 z=0  None .rodata    l_maxPos */
SECTION_RODATA static u8 const l_maxPos[12] = {
    0x44, 0xF0, 0xC6, 0xF2, 0x45, 0x90, 0x2D, 0x0A, 0xC6, 0xA3, 0x05, 0xF0,
};

/* 80C9B25C-80C9B260 0004+00 s=4 e=0 z=0  None .rodata    @3850 */
SECTION_RODATA static u32 const lit_3850 = 0x3F800000;

/* 80C9B260-80C9B264 0004+00 s=3 e=0 z=0  None .rodata    @3851 */
SECTION_RODATA static u8 const lit_3851[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C9B264-80C9B26C 0008+00 s=3 e=0 z=0  None .rodata    @3853 */
SECTION_RODATA static u8 const lit_3853[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C9B26C-80C9B270 0004+00 s=2 e=0 z=0  None .rodata    @4350 */
SECTION_RODATA static u32 const lit_4350 = 0xBF800000;

/* 80C9B270-80C9B274 0004+00 s=1 e=0 z=0  None .rodata    @4351 */
SECTION_RODATA static u32 const lit_4351 = 0x44E10000;

/* 80C9B274-80C9B278 0004+00 s=1 e=0 z=0  None .rodata    @4352 */
SECTION_RODATA static u32 const lit_4352 = 0x4592E000;

/* 80C9B278-80C9B27C 0004+00 s=1 e=0 z=0  None .rodata    @4353 */
SECTION_RODATA static u32 const lit_4353 = 0xC6A69000;

/* 80C9B27C-80C9B280 0004+00 s=1 e=0 z=0  None .rodata    @4354 */
SECTION_RODATA static u32 const lit_4354 = 0x437F0000;

/* 80C9B280-80C9B284 0004+00 s=1 e=0 z=0  None .rodata    @4509 */
SECTION_RODATA static u32 const lit_4509 = 0x44DC0000;

/* 80C9B284-80C9B288 0004+00 s=1 e=0 z=0  None .rodata    @4510 */
SECTION_RODATA static u32 const lit_4510 = 0x45935266;

/* 80C9B288-80C9B28C 0004+00 s=1 e=0 z=0  None .rodata    @4511 */
SECTION_RODATA static u32 const lit_4511 = 0xC6A12000;

/* 80C9B28C-80C9B290 0004+00 s=1 e=0 z=0  None .rodata    @4512 */
SECTION_RODATA static u32 const lit_4512 = 0x3FACCCCD;

/* 80C9B290-80C9B2A1 0011+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C9B290 = "MR-Table";
SECTION_DEAD char const* const stringBase_80C9B299 = "F_SP125";
#pragma pop

/* 80C9B2A4-80C9B2A8 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C9B2A8-80C9B2C8 0020+00 s=1 e=0 z=0  None .data      l_daObjMirrorTable_Method */
SECTION_DATA static void* l_daObjMirrorTable_Method[8] = {
    (void*)daObjMirrorTable_Create__FP10fopAc_ac_c,
    (void*)daObjMirrorTable_Delete__FP18daObjMirrorTable_c,
    (void*)daObjMirrorTable_Execute__FP18daObjMirrorTable_c,
    (void*)daObjMirrorTable_IsDelete__FP18daObjMirrorTable_c,
    (void*)daObjMirrorTable_Draw__FP18daObjMirrorTable_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C9B2C8-80C9B2F8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_MirrorTable */
SECTION_DATA void* g_profile_Obj_MirrorTable[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00B00000, (void*)&g_fpcLf_Method,
    (void*)0x00000878, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02A80000, (void*)&l_daObjMirrorTable_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80C9B2F8-80C9B304 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C99938-80C99F34 05FC+00 s=1 e=0 z=0  None .text      createHeap__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/createHeap__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C99F34-80C99F7C 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C99F7C-80C9A040 00C4+00 s=1 e=0 z=0  None .text      isSwitch__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::isSwitch() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/isSwitch__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9A040-80C9A260 0220+00 s=1 e=0 z=0  None .text
 * rideCallBack1__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallBack1(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/rideCallBack1__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9A260-80C9A278 0018+00 s=1 e=0 z=0  None .text
 * rideCallBack2__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallBack2(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/rideCallBack2__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9A278-80C9A298 0020+00 s=1 e=0 z=0  None .text daObjMirrorTable_Draw__FP18daObjMirrorTable_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorTable_Draw(daObjMirrorTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/daObjMirrorTable_Draw__FP18daObjMirrorTable_c.s"
}
#pragma pop

/* 80C9A298-80C9A4B0 0218+00 s=1 e=0 z=0  None .text      draw__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/draw__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9A4B0-80C9A4D0 0020+00 s=1 e=0 z=0  None .text
 * daObjMirrorTable_Execute__FP18daObjMirrorTable_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorTable_Execute(daObjMirrorTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/daObjMirrorTable_Execute__FP18daObjMirrorTable_c.s"
}
#pragma pop

/* 80C9A4D0-80C9A9D4 0504+00 s=1 e=0 z=0  None .text      execute__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/execute__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9A9D4-80C9A9DC 0008+00 s=1 e=0 z=0  None .text
 * daObjMirrorTable_IsDelete__FP18daObjMirrorTable_c            */
static bool daObjMirrorTable_IsDelete(daObjMirrorTable_c* param_0) {
    return true;
}

/* 80C9A9DC-80C9AAB0 00D4+00 s=1 e=0 z=0  None .text
 * daObjMirrorTable_Delete__FP18daObjMirrorTable_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorTable_Delete(daObjMirrorTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/daObjMirrorTable_Delete__FP18daObjMirrorTable_c.s"
}
#pragma pop

/* 80C9AAB0-80C9AB10 0060+00 s=2 e=0 z=0  None .text      __dt__4dBgWFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgW::~dBgW() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/__dt__4dBgWFv.s"
}
#pragma pop

/* 80C9AB10-80C9AB30 0020+00 s=1 e=0 z=0  None .text      daObjMirrorTable_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjMirrorTable_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/daObjMirrorTable_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9AB30-80C9ABFC 00CC+00 s=1 e=0 z=0  None .text      create__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/create__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9ABFC-80C9AFD0 03D4+00 s=1 e=0 z=0  None .text      create_init__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::create_init() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/create_init__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9AFD0-80C9B220 0250+00 s=1 e=0 z=0  None .text      initBaseMtx__18daObjMirrorTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjMirrorTable_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/initBaseMtx__18daObjMirrorTable_cFv.s"
}
#pragma pop

/* 80C9B220-80C9B23C 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Sc>__FPSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(s8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/mirror/d_a_obj_mirror_table/d_a_obj_mirror_table/func_80C9B220.s"
}
#pragma pop
