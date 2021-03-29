//
// Generated By: dol2asm
// Translation Unit: d_a_obj_swpush5
//

#include "rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 8059C658 */ ~cXyz();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {};

struct daObjSw5_c {
    /* 8059B804 */ void initBaseMtx();
    /* 8059B88C */ void setBaseMtx();
    /* 8059B920 */ void Create();
    /* 8059BA1C */ void CreateHeap();
    /* 8059BB1C */ void create();
    /* 8059BBD4 */ void Execute(f32 (**)[3][4]);
    /* 8059BC70 */ void setting_ride_flag();
    /* 8059BD24 */ bool checkPushable();
    /* 8059BD2C */ void event_proc_call();
    /* 8059BE18 */ void actionPauseNoneInit();
    /* 8059BE24 */ void actionPauseNone();
    /* 8059BE28 */ void actionPauseOrderInit();
    /* 8059BE80 */ void actionPauseOrder();
    /* 8059BEB4 */ void actionPauseInit();
    /* 8059BEE0 */ void actionPause();
    /* 8059BF48 */ void actionWait();
    /* 8059BF4C */ void actionOrder();
    /* 8059BF50 */ void actionEvent();
    /* 8059BF54 */ void calc_top_pos();
    /* 8059BFE4 */ void mode_proc_call();
    /* 8059C0A0 */ void modeWaitLowerInit();
    /* 8059C0C8 */ void modeWaitLower();
    /* 8059C23C */ void modeLowerInit();
    /* 8059C2D0 */ void modeLower();
    /* 8059C364 */ void modeWaitUpperInit();
    /* 8059C370 */ void modeWaitUpper();
    /* 8059C3C4 */ void modeUpperInit();
    /* 8059C454 */ void modeUpper();
    /* 8059C4BC */ void Draw();
    /* 8059C560 */ void Delete();
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

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

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

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DJoint {};

//
// Forward References:
//

static void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void nodeCallBack(J3DJoint*, int);
static void daObjSw5_Draw(daObjSw5_c*);
static void daObjSw5_Execute(daObjSw5_c*);
static void daObjSw5_Delete(daObjSw5_c*);
static void daObjSw5_Create(fopAc_ac_c*);

extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" void initBaseMtx__10daObjSw5_cFv();
extern "C" void setBaseMtx__10daObjSw5_cFv();
extern "C" void Create__10daObjSw5_cFv();
extern "C" void CreateHeap__10daObjSw5_cFv();
extern "C" void create__10daObjSw5_cFv();
extern "C" void Execute__10daObjSw5_cFPPA3_A4_f();
extern "C" void setting_ride_flag__10daObjSw5_cFv();
extern "C" bool checkPushable__10daObjSw5_cFv();
extern "C" void event_proc_call__10daObjSw5_cFv();
extern "C" void actionPauseNoneInit__10daObjSw5_cFv();
extern "C" void actionPauseNone__10daObjSw5_cFv();
extern "C" void actionPauseOrderInit__10daObjSw5_cFv();
extern "C" void actionPauseOrder__10daObjSw5_cFv();
extern "C" void actionPauseInit__10daObjSw5_cFv();
extern "C" void actionPause__10daObjSw5_cFv();
extern "C" void actionWait__10daObjSw5_cFv();
extern "C" void actionOrder__10daObjSw5_cFv();
extern "C" void actionEvent__10daObjSw5_cFv();
extern "C" void calc_top_pos__10daObjSw5_cFv();
extern "C" void mode_proc_call__10daObjSw5_cFv();
extern "C" void modeWaitLowerInit__10daObjSw5_cFv();
extern "C" void modeWaitLower__10daObjSw5_cFv();
extern "C" void modeLowerInit__10daObjSw5_cFv();
extern "C" void modeLower__10daObjSw5_cFv();
extern "C" void modeWaitUpperInit__10daObjSw5_cFv();
extern "C" void modeWaitUpper__10daObjSw5_cFv();
extern "C" void modeUpperInit__10daObjSw5_cFv();
extern "C" void modeUpper__10daObjSw5_cFv();
extern "C" void Draw__10daObjSw5_cFv();
extern "C" void Delete__10daObjSw5_cFv();
extern "C" static void daObjSw5_Draw__FP10daObjSw5_c();
extern "C" static void daObjSw5_Execute__FP10daObjSw5_c();
extern "C" static void daObjSw5_Delete__FP10daObjSw5_c();
extern "C" static void daObjSw5_Create__FP10fopAc_ac_c();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Swpush5[12];
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
extern "C" extern u8 data_8059C918[4];
extern "C" extern u8 data_8059C91C[4];
extern "C" extern u8 data_8059C920[4];
extern "C" extern u8 data_8059C924[4];
extern "C" extern u8 data_8059C928[4];
extern "C" extern u8 data_8059C92C[4];
extern "C" extern u8 data_8059C930[4];
extern "C" extern u8 data_8059C934[4];
extern "C" extern u8 data_8059C938[4];
extern "C" extern u8 data_8059C93C[4];
extern "C" extern u8 data_8059C940[4];
extern "C" extern u8 data_8059C944[4];
extern "C" extern u8 data_8059C948[4];
extern "C" extern u8 data_8059C94C[4];
extern "C" extern u8 data_8059C950[4];
extern "C" extern u8 data_8059C954[4];
extern "C" extern u8 data_8059C958[4];
extern "C" extern u8 data_8059C95C[4];
extern "C" extern u8 data_8059C960[4];
extern "C" extern u8 data_8059C964[4];
extern "C" extern u8 data_8059C968[4];
extern "C" extern u8 data_8059C96C[4];
extern "C" extern u8 data_8059C970[4];
extern "C" extern u8 data_8059C974[4];
extern "C" extern u8 data_8059C978[4];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fopAcM_orderPotentialEvent(fopAc_ac_c*, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8059C6A4-8059C6AC 0008+00 s=7 e=0 z=0  None .rodata    l_dzbIdx */
SECTION_RODATA static u8 const l_dzbIdx[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
};

/* 8059C6AC-8059C6B0 0004+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0xC2480000;

/* 8059C6B0-8059C6B4 0004+00 s=7 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA static u8 const lit_3719[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8059C6B4-8059C6B8 0004+00 s=1 e=0 z=0  None .rodata    @3720 */
SECTION_RODATA static u32 const lit_3720 = 0x42480000;

/* 8059C870-8059C874 0001+03 s=1 e=0 z=0  None .bss       @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8059C874-8059C878 0001+03 s=0 e=0 z=0  None .bss       @1107 */
u8 lit_1107[1 + 3 /* padding */];

/* 8059C878-8059C87C 0001+03 s=0 e=0 z=0  None .bss       @1105 */
u8 lit_1105[1 + 3 /* padding */];

/* 8059C87C-8059C880 0001+03 s=0 e=0 z=0  None .bss       @1104 */
u8 lit_1104[1 + 3 /* padding */];

/* 8059C880-8059C884 0001+03 s=0 e=0 z=0  None .bss       @1099 */
u8 lit_1099[1 + 3 /* padding */];

/* 8059C884-8059C888 0001+03 s=0 e=0 z=0  None .bss       @1097 */
u8 lit_1097[1 + 3 /* padding */];

/* 8059C888-8059C88C 0001+03 s=0 e=0 z=0  None .bss       @1095 */
u8 lit_1095[1 + 3 /* padding */];

/* 8059C88C-8059C890 0001+03 s=0 e=0 z=0  None .bss       @1094 */
u8 lit_1094[1 + 3 /* padding */];

/* 8059C890-8059C894 0001+03 s=0 e=0 z=0  None .bss       @1057 */
u8 lit_1057[1 + 3 /* padding */];

/* 8059C894-8059C898 0001+03 s=0 e=0 z=0  None .bss       @1055 */
u8 lit_1055[1 + 3 /* padding */];

/* 8059C898-8059C89C 0001+03 s=0 e=0 z=0  None .bss       @1053 */
u8 lit_1053[1 + 3 /* padding */];

/* 8059C89C-8059C8A0 0001+03 s=0 e=0 z=0  None .bss       @1052 */
u8 lit_1052[1 + 3 /* padding */];

/* 8059C8A0-8059C8A4 0001+03 s=0 e=0 z=0  None .bss       @1014 */
u8 lit_1014[1 + 3 /* padding */];

/* 8059C8A4-8059C8A8 0001+03 s=0 e=0 z=0  None .bss       @1012 */
u8 lit_1012[1 + 3 /* padding */];

/* 8059C8A8-8059C8AC 0001+03 s=0 e=0 z=0  None .bss       @1010 */
u8 lit_1010[1 + 3 /* padding */];

/* 8059C8AC-8059C8B0 0001+03 s=0 e=0 z=0  None .bss       @1009 */
u8 lit_1009[1 + 3 /* padding */];

/* 8059C8B0-8059C8C0 000C+04 s=1 e=0 z=0  None .bss       @3654 */
static u8 lit_3654[12 + 4 /* padding */];

/* 8059C8C0-8059C8CC 000C+00 s=1 e=0 z=0  None .bss       @3657 */
static u8 lit_3657[12];

/* 8059C8CC-8059C8D8 000C+00 s=1 e=0 z=0  None .bss       @3658 */
static u8 lit_3658[12];

/* 8059C8D8-8059C8E4 000C+00 s=1 e=0 z=0  None .bss       @3659 */
static u8 lit_3659[12];

/* 8059C8E4-8059C914 0030+00 s=1 e=0 z=0  None .bss       l_push_check_pos$3653 */
static u8 l_push_check_pos[48];

/* 8059B4EC-8059B754 0268+00 s=1 e=0 z=0  None .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 8059B754-8059B804 00B0+00 s=1 e=0 z=0  None .text      nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 8059B804-8059B88C 0088+00 s=1 e=0 z=0  None .text      initBaseMtx__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/initBaseMtx__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059B88C-8059B920 0094+00 s=2 e=0 z=0  None .text      setBaseMtx__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/setBaseMtx__10daObjSw5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059C6B8-8059C6BC 0004+00 s=3 e=0 z=0  None .rodata    @3815 */
SECTION_RODATA static u32 const lit_3815 = 0xC1C80000;

/* 8059B920-8059BA1C 00FC+00 s=1 e=0 z=0  None .text      Create__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/Create__10daObjSw5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059C6BC-8059C6C0 0004+00 s=1 e=0 z=0  None .rodata    @3986 */
SECTION_RODATA static u32 const lit_3986 = 0x3F666666;

/* 8059C6C0-8059C6C4 0004+00 s=1 e=0 z=0  None .rodata    @3987 */
SECTION_RODATA static u32 const lit_3987 = 0x3F000000;

/* 8059C6C4-8059C6C8 0004+00 s=6 e=0 z=0  None .rodata    @3988 */
SECTION_RODATA static u32 const lit_3988 = 0x3F800000;

/* 8059C6C8-8059C6CC 0004+00 s=3 e=0 z=0  None .rodata    @4041 */
SECTION_RODATA static u32 const lit_4041 = 0xBF800000;

/* 8059C6CC-8059C6D0 0004+00 s=1 e=0 z=0  None .rodata    @4042 */
SECTION_RODATA static u32 const lit_4042 = 0x3F4CCCCD;

/* 8059C6D0-8059C6D9 0009+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8059C6D0 = "D_Hfsw00";
#pragma pop

/* 8059C6DC-8059C6E8 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8059C6E8-8059C6FC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 8059C6FC-8059C700 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 8059BA1C-8059BB1C 0100+00 s=1 e=0 z=0  None .text      CreateHeap__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/CreateHeap__10daObjSw5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059C700-8059C70C 000C+00 s=1 e=0 z=0  None .data      @3907 */
SECTION_DATA static void* lit_3907[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionPauseNone__10daObjSw5_cFv,
};

/* 8059C70C-8059C718 000C+00 s=1 e=0 z=0  None .data      @3908 */
SECTION_DATA static void* lit_3908[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionPauseOrder__10daObjSw5_cFv,
};

/* 8059C718-8059C724 000C+00 s=1 e=0 z=0  None .data      @3909 */
SECTION_DATA static void* lit_3909[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionPause__10daObjSw5_cFv,
};

/* 8059C724-8059C730 000C+00 s=1 e=0 z=0  None .data      @3910 */
SECTION_DATA static void* lit_3910[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__10daObjSw5_cFv,
};

/* 8059C730-8059C73C 000C+00 s=1 e=0 z=0  None .data      @3911 */
SECTION_DATA static void* lit_3911[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrder__10daObjSw5_cFv,
};

/* 8059C73C-8059C748 000C+00 s=1 e=0 z=0  None .data      @3912 */
SECTION_DATA static void* lit_3912[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__10daObjSw5_cFv,
};

/* 8059C748-8059C790 0048+00 s=1 e=0 z=0  None .data      l_func$3906 */
SECTION_DATA static u8 l_func[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8059C790-8059C79C 000C+00 s=1 e=0 z=0  None .data      @3993 */
SECTION_DATA static void* lit_3993[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWaitLower__10daObjSw5_cFv,
};

/* 8059C79C-8059C7A8 000C+00 s=1 e=0 z=0  None .data      @3994 */
SECTION_DATA static void* lit_3994[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeLower__10daObjSw5_cFv,
};

/* 8059C7A8-8059C7B4 000C+00 s=1 e=0 z=0  None .data      @3995 */
SECTION_DATA static void* lit_3995[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWaitUpper__10daObjSw5_cFv,
};

/* 8059C7B4-8059C7C0 000C+00 s=1 e=0 z=0  None .data      @3996 */
SECTION_DATA static void* lit_3996[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeUpper__10daObjSw5_cFv,
};

/* 8059C7C0-8059C7F0 0030+00 s=1 e=0 z=0  None .data      l_mode_func$3992 */
SECTION_DATA static u8 l_mode_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8059C7F0-8059C810 0020+00 s=1 e=0 z=0  None .data      l_daObjSw5_Method */
SECTION_DATA static void* l_daObjSw5_Method[8] = {
    (void*)daObjSw5_Create__FP10fopAc_ac_c,
    (void*)daObjSw5_Delete__FP10daObjSw5_c,
    (void*)daObjSw5_Execute__FP10daObjSw5_c,
    (void*)NULL,
    (void*)daObjSw5_Draw__FP10daObjSw5_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8059C810-8059C840 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Swpush5 */
SECTION_DATA void* g_profile_Obj_Swpush5[12] = {
    (void*)0xFFFFFFFD, (void*)0x0002FFFD,
    (void*)0x00180000, (void*)&g_fpcLf_Method,
    (void*)0x00000600, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x000D0000, (void*)&l_daObjSw5_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 8059C840-8059C868 0028+00 s=1 e=0 z=0  None .data      __vt__10daObjSw5_c */
SECTION_DATA static void* __vt__10daObjSw5_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__10daObjSw5_cFv,
    (void*)Create__10daObjSw5_cFv,
    (void*)Execute__10daObjSw5_cFPPA3_A4_f,
    (void*)Draw__10daObjSw5_cFv,
    (void*)Delete__10daObjSw5_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 8059BB1C-8059BBD4 00B8+00 s=1 e=0 z=0  None .text      create__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/func_8059BB1C.s"
}
#pragma pop

/* 8059BBD4-8059BC70 009C+00 s=1 e=0 z=0  None .text      Execute__10daObjSw5_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/Execute__10daObjSw5_cFPPA3_A4_f.s"
}
#pragma pop

/* 8059BC70-8059BD24 00B4+00 s=1 e=0 z=0  None .text      setting_ride_flag__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::setting_ride_flag() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/setting_ride_flag__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BD24-8059BD2C 0008+00 s=1 e=0 z=0  None .text      checkPushable__10daObjSw5_cFv */
bool daObjSw5_c::checkPushable() {
    return true;
}

/* ############################################################################################## */
/* 8059C914-8059C918 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 struct_8059C914[4];

/* 8059BD2C-8059BE18 00EC+00 s=1 e=0 z=0  None .text      event_proc_call__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/event_proc_call__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BE18-8059BE24 000C+00 s=2 e=0 z=0  None .text      actionPauseNoneInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::actionPauseNoneInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/actionPauseNoneInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BE24-8059BE28 0004+00 s=1 e=0 z=0  None .text      actionPauseNone__10daObjSw5_cFv */
void daObjSw5_c::actionPauseNone() {
    /* empty function */
}

/* 8059BE28-8059BE80 0058+00 s=1 e=0 z=0  None .text      actionPauseOrderInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::actionPauseOrderInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/actionPauseOrderInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BE80-8059BEB4 0034+00 s=1 e=0 z=0  None .text      actionPauseOrder__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::actionPauseOrder() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/actionPauseOrder__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BEB4-8059BEE0 002C+00 s=1 e=0 z=0  None .text      actionPauseInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::actionPauseInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/actionPauseInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BEE0-8059BF48 0068+00 s=1 e=0 z=0  None .text      actionPause__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::actionPause() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/actionPause__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BF48-8059BF4C 0004+00 s=1 e=0 z=0  None .text      actionWait__10daObjSw5_cFv */
void daObjSw5_c::actionWait() {
    /* empty function */
}

/* 8059BF4C-8059BF50 0004+00 s=1 e=0 z=0  None .text      actionOrder__10daObjSw5_cFv */
void daObjSw5_c::actionOrder() {
    /* empty function */
}

/* 8059BF50-8059BF54 0004+00 s=1 e=0 z=0  None .text      actionEvent__10daObjSw5_cFv */
void daObjSw5_c::actionEvent() {
    /* empty function */
}

/* 8059BF54-8059BFE4 0090+00 s=1 e=0 z=0  None .text      calc_top_pos__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::calc_top_pos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/calc_top_pos__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059BFE4-8059C0A0 00BC+00 s=1 e=0 z=0  None .text      mode_proc_call__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::mode_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/mode_proc_call__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C0A0-8059C0C8 0028+00 s=1 e=0 z=0  None .text      modeWaitLowerInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeWaitLowerInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeWaitLowerInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C0C8-8059C23C 0174+00 s=1 e=0 z=0  None .text      modeWaitLower__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeWaitLower() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeWaitLower__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C23C-8059C2D0 0094+00 s=1 e=0 z=0  None .text      modeLowerInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeLowerInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeLowerInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C2D0-8059C364 0094+00 s=1 e=0 z=0  None .text      modeLower__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeLower() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeLower__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C364-8059C370 000C+00 s=2 e=0 z=0  None .text      modeWaitUpperInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeWaitUpperInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeWaitUpperInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C370-8059C3C4 0054+00 s=1 e=0 z=0  None .text      modeWaitUpper__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeWaitUpper() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeWaitUpper__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C3C4-8059C454 0090+00 s=1 e=0 z=0  None .text      modeUpperInit__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeUpperInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeUpperInit__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C454-8059C4BC 0068+00 s=1 e=0 z=0  None .text      modeUpper__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::modeUpper() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/modeUpper__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C4BC-8059C560 00A4+00 s=1 e=0 z=0  None .text      Draw__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/Draw__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C560-8059C5CC 006C+00 s=1 e=0 z=0  None .text      Delete__10daObjSw5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSw5_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/Delete__10daObjSw5_cFv.s"
}
#pragma pop

/* 8059C5CC-8059C5F8 002C+00 s=1 e=0 z=0  None .text      daObjSw5_Draw__FP10daObjSw5_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSw5_Draw(daObjSw5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/daObjSw5_Draw__FP10daObjSw5_c.s"
}
#pragma pop

/* 8059C5F8-8059C618 0020+00 s=1 e=0 z=0  None .text      daObjSw5_Execute__FP10daObjSw5_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSw5_Execute(daObjSw5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/daObjSw5_Execute__FP10daObjSw5_c.s"
}
#pragma pop

/* 8059C618-8059C638 0020+00 s=1 e=0 z=0  None .text      daObjSw5_Delete__FP10daObjSw5_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSw5_Delete(daObjSw5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/daObjSw5_Delete__FP10daObjSw5_c.s"
}
#pragma pop

/* 8059C638-8059C658 0020+00 s=1 e=0 z=0  None .text      daObjSw5_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSw5_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/daObjSw5_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8059C658-8059C694 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/d_a_obj_swpush5/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059C918-8059C91C 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
u8 data_8059C918[4];

/* 8059C91C-8059C920 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
u8 data_8059C91C[4];

/* 8059C920-8059C924 0004+00 s=0 e=0 z=0  None .bss       sInstance__27JASGlobalInstance<7Z2SeMgr>
 */
u8 data_8059C920[4];

/* 8059C924-8059C928 0004+00 s=0 e=0 z=0  None .bss       sInstance__28JASGlobalInstance<8Z2SeqMgr>
 */
u8 data_8059C924[4];

/* 8059C928-8059C92C 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
u8 data_8059C928[4];

/* 8059C92C-8059C930 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
u8 data_8059C92C[4];

/* 8059C930-8059C934 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
u8 data_8059C930[4];

/* 8059C934-8059C938 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
u8 data_8059C934[4];

/* 8059C938-8059C93C 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
u8 data_8059C938[4];

/* 8059C93C-8059C940 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12Z2SpeechMgr2>
 */
u8 data_8059C93C[4];

/* 8059C940-8059C944 0004+00 s=0 e=0 z=0  None .bss       sInstance__28JASGlobalInstance<8JAISeMgr>
 */
u8 data_8059C940[4];

/* 8059C944-8059C948 0004+00 s=0 e=0 z=0  None .bss       sInstance__29JASGlobalInstance<9JAISeqMgr>
 */
u8 data_8059C944[4];

/* 8059C948-8059C94C 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAIStreamMgr>
 */
u8 data_8059C948[4];

/* 8059C94C-8059C950 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
u8 data_8059C94C[4];

/* 8059C950-8059C954 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAISoundInfo>
 */
u8 data_8059C950[4];

/* 8059C954-8059C958 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
u8 data_8059C954[4];

/* 8059C958-8059C95C 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
u8 data_8059C958[4];

/* 8059C95C-8059C960 0004+00 s=0 e=0 z=0  None .bss sInstance__33JASGlobalInstance<12JAUSoundInfo>
 */
u8 data_8059C95C[4];

/* 8059C960-8059C964 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
u8 data_8059C960[4];

/* 8059C964-8059C968 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
u8 data_8059C964[4];

/* 8059C968-8059C96C 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
u8 data_8059C968[4];

/* 8059C96C-8059C970 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
u8 data_8059C96C[4];

/* 8059C970-8059C974 0004+00 s=0 e=0 z=0  None .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
u8 data_8059C970[4];

/* 8059C974-8059C978 0004+00 s=0 e=0 z=0  None .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
u8 data_8059C974[4];

/* 8059C978-8059C97C 0004+00 s=0 e=0 z=0  None .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
u8 data_8059C978[4];
