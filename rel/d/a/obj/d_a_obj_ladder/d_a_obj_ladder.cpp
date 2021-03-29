//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ladder
//

#include "rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {};

struct daObjLadder {
    struct Act_c {
        struct Prm_e {};

        /* 8058D158 */ void CreateHeap();
        /* 8058D1D8 */ void Create();
        /* 8058D378 */ void Mthd_Create();
        /* 8058D4F0 */ bool Delete();
        /* 8058D4F8 */ void Mthd_Delete();
        /* 8058D544 */ void demo_end_reset();
        /* 8058D5AC */ void mode_wait_init();
        /* 8058D5B8 */ void mode_wait();
        /* 8058D614 */ void mode_demoreq_init();
        /* 8058D628 */ void mode_demoreq();
        /* 8058D6E8 */ void mode_vib_init();
        /* 8058D710 */ void mode_vib();
        /* 8058D7A8 */ void mode_drop_init();
        /* 8058D7EC */ void mode_drop();
        /* 8058D9C0 */ void mode_fell_init();
        /* 8058D9CC */ void mode_fell();
        /* 8058D9D0 */ void set_mtx();
        /* 8058DA64 */ void init_mtx();
        /* 8058DAA0 */ void Execute(f32 (**)[3][4]);
        /* 8058DBB8 */ void Draw();
    };
};

struct daObj {
    /* 800373C0 */ void posMoveF_stream(fopAc_ac_c*, cXyz const*, cXyz const*, f32, f32);
    /*          */ template <typename A1>
    /*          */ void
        PrmAbstract(/* fopAc_ac_c const*, daObjLadder::Act_c::Prm_e, daObjLadder::Act_c::Prm_e */);
    /* 8058DD14 */ /* PrmAbstract<daObjLadder::Act_c::Prm_e> */
    void PrmAbstract__template0(fopAc_ac_c const*, daObjLadder::Act_c::Prm_e,
                                daObjLadder::Act_c::Prm_e);
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
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

struct dEvent_manager_c {
    /* 800474BC */ void getEventData(s16);
    /* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
    /* 80047A78 */ void endCheck(s16);
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
    /* 8058D478 */ ~dBgS_ObjGndChk();
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

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
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

extern "C" void CreateHeap__Q211daObjLadder5Act_cFv();
extern "C" void Create__Q211daObjLadder5Act_cFv();
extern "C" void Mthd_Create__Q211daObjLadder5Act_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" bool Delete__Q211daObjLadder5Act_cFv();
extern "C" void Mthd_Delete__Q211daObjLadder5Act_cFv();
extern "C" void demo_end_reset__Q211daObjLadder5Act_cFv();
extern "C" void mode_wait_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_wait__Q211daObjLadder5Act_cFv();
extern "C" void mode_demoreq_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_demoreq__Q211daObjLadder5Act_cFv();
extern "C" void mode_vib_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_vib__Q211daObjLadder5Act_cFv();
extern "C" void mode_drop_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_drop__Q211daObjLadder5Act_cFv();
extern "C" void mode_fell_init__Q211daObjLadder5Act_cFv();
extern "C" void mode_fell__Q211daObjLadder5Act_cFv();
extern "C" void set_mtx__Q211daObjLadder5Act_cFv();
extern "C" void init_mtx__Q211daObjLadder5Act_cFv();
extern "C" void Execute__Q211daObjLadder5Act_cFPPA3_A4_f();
extern "C" void Draw__Q211daObjLadder5Act_cFv();
extern "C" static void func_8058DC5C();
extern "C" static void func_8058DC7C();
extern "C" static void func_8058DC9C();
extern "C" static void func_8058DCBC();
extern "C" static void func_8058DCE8();
extern "C" void func_8058DD14();
extern "C" static void func_8058DD30();
extern "C" static void func_8058DD38();
extern "C" static void func_8058DD40();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Ladder[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Trans(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void dKy_pol_sound_get(cBgS_PolyInfo const*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void posMoveF_stream__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzff();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventData__16dEvent_manager_cFs();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8058DD50-8058DD74 0024+00 s=5 e=0 z=0  None .rodata
 * L_attr__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@        */
SECTION_RODATA static u8 const data_8058DD50[36] = {
    0xC0, 0x40, 0x00, 0x00, 0x3B, 0xA3, 0xD7, 0x0A, 0x3A, 0x03, 0x12, 0x6F,
    0x3F, 0x00, 0x00, 0x00, 0x03, 0x4B, 0x32, 0x2D, 0x28, 0x00, 0x4E, 0x20,
    0x3C, 0xC3, 0x00, 0x0F, 0x40, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 8058DD74-8058DD7C 0005+03 s=3 e=0 z=0  None .rodata    M_arcname__Q211daObjLadder5Act_c */
SECTION_RODATA static u8 const M_arcname__Q211daObjLadder5Act_c[5 + 3 /* padding */] = {
    0x4D,
    0x68,
    0x73,
    0x67,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 8058DDAC-8058DDB8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058DDB8-8058DDCC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 8058DDCC-8058DDFC 0030+00 s=3 e=0 z=0  None .data
 * L_attr_type__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@   */
SECTION_DATA static u8 data_8058DDCC[48] = {
    0x00, 0x08, 0x00, 0x10, 0x44, 0x16, 0x00, 0x00, 0x00, 0x09, 0x00, 0x11, 0x44, 0x61, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x0C, 0x44, 0x96, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0D, 0x44, 0xBB, 0x80, 0x00,
    0x00, 0x07, 0x00, 0x0F, 0x43, 0xE1, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0E, 0x43, 0x96, 0x00, 0x00,
};

/* 8058D158-8058D1D8 0080+00 s=1 e=0 z=0  None .text      CreateHeap__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/CreateHeap__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DD7C-8058DD80 0004+00 s=1 e=0 z=0  None .rodata    @3667 */
SECTION_RODATA static u32 const lit_3667 = 0xC25C0000;

/* 8058DD80-8058DD84 0004+00 s=2 e=0 z=0  None .rodata    @3668 */
SECTION_RODATA static u32 const lit_3668 = 0xBF800000;

/* 8058DD84-8058DD88 0004+00 s=1 e=0 z=0  None .rodata    @3669 */
SECTION_RODATA static u32 const lit_3669 = 0xC1200000;

/* 8058DD88-8058DD8C 0004+00 s=1 e=0 z=0  None .rodata    @3670 */
SECTION_RODATA static u32 const lit_3670 = 0x425C0000;

/* 8058DD8C-8058DD90 0004+00 s=1 e=0 z=0  None .rodata    @3671 */
SECTION_RODATA static u32 const lit_3671 = 0x42240000;

/* 8058DD90-8058DD94 0004+00 s=1 e=0 z=0  None .rodata    @3672 */
SECTION_RODATA static u32 const lit_3672 = 0x41200000;

/* 8058DD94-8058DD98 0004+00 s=3 e=0 z=0  None .rodata    @3673 */
SECTION_RODATA static u8 const lit_3673[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8058DD98-8058DD9C 0004+00 s=1 e=0 z=0  None .rodata    @3674 */
SECTION_RODATA static u32 const lit_3674 = 0x40A00000;

/* 8058D1D8-8058D378 01A0+00 s=1 e=0 z=0  None .text      Create__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Create__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DDFC-8058DE08 000C+00 s=1 e=0 z=0  None .data      @3878 */
SECTION_DATA static void* lit_3878[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_wait__Q211daObjLadder5Act_cFv,
};

/* 8058DE08-8058DE14 000C+00 s=1 e=0 z=0  None .data      @3879 */
SECTION_DATA static void* lit_3879[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_demoreq__Q211daObjLadder5Act_cFv,
};

/* 8058DE14-8058DE20 000C+00 s=1 e=0 z=0  None .data      @3880 */
SECTION_DATA static void* lit_3880[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_vib__Q211daObjLadder5Act_cFv,
};

/* 8058DE20-8058DE2C 000C+00 s=1 e=0 z=0  None .data      @3881 */
SECTION_DATA static void* lit_3881[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_drop__Q211daObjLadder5Act_cFv,
};

/* 8058DE2C-8058DE38 000C+00 s=1 e=0 z=0  None .data      @3882 */
SECTION_DATA static void* lit_3882[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_fell__Q211daObjLadder5Act_cFv,
};

/* 8058DE38-8058DE74 003C+00 s=1 e=0 z=0  None .data      mode_proc$3877 */
SECTION_DATA static u8 mode_proc[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058DE74-8058DE94 0020+00 s=1 e=0 z=0  None .data
 * Mthd_Table__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@    */
SECTION_DATA static void* data_8058DE74[8] = {
    (void*)func_8058DC5C, (void*)func_8058DC7C, (void*)func_8058DC9C, (void*)func_8058DCE8,
    (void*)func_8058DCBC, (void*)NULL,          (void*)NULL,          (void*)NULL,
};

/* 8058DE94-8058DEC4 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Ladder */
SECTION_DATA void* g_profile_Obj_Ladder[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,     (void*)0x00240000, (void*)&g_fpcLf_Method,
    (void*)0x00000620, (void*)NULL,           (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00170000, (void*)&data_8058DE74, (void*)0x00040100, (void*)0x000E0000,
};

/* 8058DEC4-8058DEF4 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjGndChk */
SECTION_DATA static void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL, (void*)NULL, (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL, (void*)NULL, (void*)func_8058DD30,
    (void*)NULL, (void*)NULL, (void*)func_8058DD40,
    (void*)NULL, (void*)NULL, (void*)func_8058DD38,
};

/* 8058DEF4-8058DF1C 0028+00 s=1 e=0 z=0  None .data      __vt__Q211daObjLadder5Act_c */
SECTION_DATA static void* __vt__Q211daObjLadder5Act_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__Q211daObjLadder5Act_cFv,
    (void*)Create__Q211daObjLadder5Act_cFv,
    (void*)Execute__Q211daObjLadder5Act_cFPPA3_A4_f,
    (void*)Draw__Q211daObjLadder5Act_cFv,
    (void*)Delete__Q211daObjLadder5Act_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 8058D378-8058D478 0100+00 s=1 e=0 z=0  None .text      Mthd_Create__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Mthd_Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Mthd_Create__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D478-8058D4F0 0078+00 s=4 e=0 z=0  None .text      __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 8058D4F0-8058D4F8 0008+00 s=1 e=0 z=0  None .text      Delete__Q211daObjLadder5Act_cFv */
bool daObjLadder::Act_c::Delete() {
    return true;
}

/* 8058D4F8-8058D544 004C+00 s=1 e=0 z=0  None .text      Mthd_Delete__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Mthd_Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Mthd_Delete__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D544-8058D5AC 0068+00 s=1 e=0 z=0  None .text      demo_end_reset__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::demo_end_reset() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/demo_end_reset__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D5AC-8058D5B8 000C+00 s=1 e=0 z=0  None .text      mode_wait_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_wait_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_wait_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D5B8-8058D614 005C+00 s=1 e=0 z=0  None .text      mode_wait__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_wait__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D614-8058D628 0014+00 s=1 e=0 z=0  None .text      mode_demoreq_init__Q211daObjLadder5Act_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_demoreq_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_demoreq_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D628-8058D6E8 00C0+00 s=1 e=0 z=0  None .text      mode_demoreq__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_demoreq() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_demoreq__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D6E8-8058D710 0028+00 s=1 e=0 z=0  None .text      mode_vib_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_vib_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_vib_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D710-8058D7A8 0098+00 s=1 e=0 z=0  None .text      mode_vib__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_vib() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_vib__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DD9C-8058DDA0 0004+00 s=1 e=0 z=0  None .rodata    @3792 */
SECTION_RODATA static u32 const lit_3792 = 0xC0A00000;

/* 8058D7A8-8058D7EC 0044+00 s=1 e=0 z=0  None .text      mode_drop_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_drop_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_drop_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DDA0-8058DDA4 0004+00 s=1 e=0 z=0  None .rodata    @3838 */
SECTION_RODATA static u32 const lit_3838 = 0x3F800000;

/* 8058DDA4-8058DDA8 0004+00 s=1 e=0 z=0  None .rodata    @3839 */
SECTION_RODATA static u32 const lit_3839 = 0x3F000000;

/* 8058DDA8-8058DDAC 0004+00 s=1 e=0 z=0  None .rodata    @3840 */
SECTION_RODATA static u32 const lit_3840 = 0xBF000000;

/* 8058D7EC-8058D9C0 01D4+00 s=1 e=0 z=0  None .text      mode_drop__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_drop() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_drop__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D9C0-8058D9CC 000C+00 s=2 e=0 z=0  None .text      mode_fell_init__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::mode_fell_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/mode_fell_init__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058D9CC-8058D9D0 0004+00 s=1 e=0 z=0  None .text      mode_fell__Q211daObjLadder5Act_cFv */
void daObjLadder::Act_c::mode_fell() {
    /* empty function */
}

/* ############################################################################################## */
/* 8058DF20-8058DF50 0030+00 s=2 e=0 z=0  None .bss       M_tmp_mtx__Q211daObjLadder5Act_c */
static u8 M_tmp_mtx__Q211daObjLadder5Act_c[48];

/* 8058D9D0-8058DA64 0094+00 s=3 e=0 z=0  None .text      set_mtx__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::set_mtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/set_mtx__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058DA64-8058DAA0 003C+00 s=1 e=0 z=0  None .text      init_mtx__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::init_mtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/init_mtx__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058DF50-8058DF54 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_8058DF50[4];

/* 8058DAA0-8058DBB8 0118+00 s=1 e=0 z=0  None .text      Execute__Q211daObjLadder5Act_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Execute__Q211daObjLadder5Act_cFPPA3_A4_f.s"
}
#pragma pop

/* 8058DBB8-8058DC5C 00A4+00 s=1 e=0 z=0  None .text      Draw__Q211daObjLadder5Act_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjLadder::Act_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/Draw__Q211daObjLadder5Act_cFv.s"
}
#pragma pop

/* 8058DC5C-8058DC7C 0020+00 s=1 e=0 z=0  None .text
 * Mthd_Create__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DC5C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC5C.s"
}
#pragma pop

/* 8058DC7C-8058DC9C 0020+00 s=1 e=0 z=0  None .text
 * Mthd_Delete__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DC7C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC7C.s"
}
#pragma pop

/* 8058DC9C-8058DCBC 0020+00 s=1 e=0 z=0  None .text
 * Mthd_Execute__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DC9C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DC9C.s"
}
#pragma pop

/* 8058DCBC-8058DCE8 002C+00 s=1 e=0 z=0  None .text
 * Mthd_Draw__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DCBC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DCBC.s"
}
#pragma pop

/* 8058DCE8-8058DD14 002C+00 s=1 e=0 z=0  None .text
 * Mthd_IsDelete__Q211daObjLadder28@unnamed@d_a_obj_ladder_cpp@FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DCE8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DCE8.s"
}
#pragma pop

/* 8058DD14-8058DD30 001C+00 s=4 e=0 z=0  None .text
 * PrmAbstract<Q311daObjLadder5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjLadder5Act_c5Prm_eQ311daObjLadder5Act_c5Prm_e
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::PrmAbstract__template0(fopAc_ac_c const* param_0, daObjLadder::Act_c::Prm_e param_1,
                                       daObjLadder::Act_c::Prm_e param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD14.s"
}
#pragma pop

/* 8058DD30-8058DD38 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DD30() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD30.s"
}
#pragma pop

/* 8058DD38-8058DD40 0008+00 s=1 e=0 z=0  None .text      @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DD38() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD38.s"
}
#pragma pop

/* 8058DD40-8058DD48 0008+00 s=1 e=0 z=0  None .text      @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8058DD40() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/d_a_obj_ladder/func_8058DD40.s"
}
#pragma pop
