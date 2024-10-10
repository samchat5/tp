/**
 * @file d_a_obj_swturn.cpp
 * 
*/

#include "d/actor/d_a_obj_swturn.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" static void PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" void initBaseMtx__13daObjSwTurn_cFv();
extern "C" void setBaseMtx__13daObjSwTurn_cFv();
extern "C" void Create__13daObjSwTurn_cFv();
extern "C" void CreateHeap__13daObjSwTurn_cFv();
extern "C" void create1st__13daObjSwTurn_cFv();
extern "C" void Execute__13daObjSwTurn_cFPPA3_A4_f();
extern "C" void mode_proc_call__13daObjSwTurn_cFv();
extern "C" void init_modeWait__13daObjSwTurn_cFv();
extern "C" void modeWait__13daObjSwTurn_cFv();
extern "C" void init_modeRotate__13daObjSwTurn_cFv();
extern "C" void modeRotate__13daObjSwTurn_cFv();
extern "C" void rotate_sub_0__13daObjSwTurn_cFv();
extern "C" void rotate_sub_1__13daObjSwTurn_cFv();
extern "C" void Draw__13daObjSwTurn_cFv();
extern "C" void Delete__13daObjSwTurn_cFv();
extern "C" static void daObjSwTurn_create1st__FP13daObjSwTurn_c();
extern "C" static void daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c();
extern "C" static void daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c();
extern "C" static void daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c();
extern "C" extern char const* const d_a_obj_swturn__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
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
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80D021A0[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D0206C-80D02074 000000 0008+00 5/5 0/0 0/0 .rodata          l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x80D0206C, &l_bmd);

/* 80D02074-80D0207C 000008 0008+00 1/1 0/0 0/0 .rodata          l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(0x80D02074, &l_dzb);

/* 80D0207C-80D02084 000010 0008+00 1/1 0/0 0/0 .rodata          l_heap_size */
SECTION_RODATA static u8 const l_heap_size[8] = {
    0x00, 0x00, 0x45, 0x30, 0x00, 0x00, 0x2B, 0xE0,
};
COMPILER_STRIP_GATE(0x80D0207C, &l_heap_size);

/* 80D02084-80D02088 000018 0004+00 0/3 0/0 0/0 .rodata          l_rot_time */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const l_rot_time = 0x005A001E;
COMPILER_STRIP_GATE(0x80D02084, &l_rot_time);
#pragma pop

/* 80D02088-80D0208C 00001C 0002+02 0/1 0/0 0/0 .rodata          l_tame_time_1st */
#pragma push
#pragma force_active on
SECTION_RODATA static u16 const l_tame_time_1st[1 + 1 /* padding */] = {
    0x2F2F,
    /* padding */
    0x0000,
};
COMPILER_STRIP_GATE(0x80D02088, &l_tame_time_1st);
#pragma pop

/* 80D0208C-80D02090 000020 0002+02 0/1 0/0 0/0 .rodata          l_tame_time_cnt */
#pragma push
#pragma force_active on
SECTION_RODATA static u16 const l_tame_time_cnt[1 + 1 /* padding */] = {
    0x2323,
    /* padding */
    0x0000,
};
COMPILER_STRIP_GATE(0x80D0208C, &l_tame_time_cnt);
#pragma pop

/* 80D02090-80D02094 000024 0004+00 1/4 0/0 0/0 .rodata          @3698 */
SECTION_RODATA static u8 const lit_3698[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D02090, &lit_3698);

/* 80D00BD8-80D00CD8 000078 0100+00 1/1 0/0 0/0 .text
 * PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
static void PPCallBack(fopAc_ac_c* param_0, fopAc_ac_c* param_1, s16 param_2,
                           dBgW_Base::PushPullLabel param_3) {
    // NONMATCHING
}

/* 80D00CD8-80D00D14 000178 003C+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjSwTurn_cFv */
void daObjSwTurn_c::initBaseMtx() {
    // NONMATCHING
}

/* 80D00D14-80D00D78 0001B4 0064+00 3/3 0/0 0/0 .text            setBaseMtx__13daObjSwTurn_cFv */
void daObjSwTurn_c::setBaseMtx() {
    // NONMATCHING
}

/* 80D00D78-80D00EE4 000218 016C+00 1/0 0/0 0/0 .text            Create__13daObjSwTurn_cFv */
void daObjSwTurn_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D020B8-80D020B8 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D020B8 = "P_Lv4tsw";
SECTION_DEAD static char const* const stringBase_80D020C1 = "P_Lv4tswD";
#pragma pop

/* 80D020CC-80D020D8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D020D8-80D020EC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80D020EC-80D020F4 -00001 0008+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)&d_a_obj_swturn__stringBase0,
    (void*)(((char*)&d_a_obj_swturn__stringBase0) + 0x9),
};

/* 80D00EE4-80D00F64 000384 0080+00 1/0 0/0 0/0 .text            CreateHeap__13daObjSwTurn_cFv */
void daObjSwTurn_c::CreateHeap() {
    // NONMATCHING
}

/* 80D00F64-80D01074 000404 0110+00 1/1 0/0 0/0 .text            create1st__13daObjSwTurn_cFv */
void daObjSwTurn_c::create1st() {
    // NONMATCHING
}

/* 80D01074-80D010D4 000514 0060+00 1/0 0/0 0/0 .text            Execute__13daObjSwTurn_cFPPA3_A4_f
 */
void daObjSwTurn_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D020F4-80D02100 -00001 000C+00 0/1 0/0 0/0 .data            @3813 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3813[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daObjSwTurn_cFv,
};
#pragma pop

/* 80D02100-80D0210C -00001 000C+00 0/1 0/0 0/0 .data            @3814 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3814[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeRotate__13daObjSwTurn_cFv,
};
#pragma pop

/* 80D0210C-80D02124 000040 0018+00 0/1 0/0 0/0 .data            l_func$3812 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D010D4-80D01160 000574 008C+00 1/1 0/0 0/0 .text            mode_proc_call__13daObjSwTurn_cFv
 */
void daObjSwTurn_c::mode_proc_call() {
    // NONMATCHING
}

/* 80D01160-80D01198 000600 0038+00 3/3 0/0 0/0 .text            init_modeWait__13daObjSwTurn_cFv */
void daObjSwTurn_c::init_modeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D02094-80D02098 000028 0004+00 1/5 0/0 0/0 .rodata          @4098 */
SECTION_RODATA static f32 const lit_4098 = 1.0f;
COMPILER_STRIP_GATE(0x80D02094, &lit_4098);

/* 80D02098-80D0209C 00002C 0004+00 1/5 0/0 0/0 .rodata          @4099 */
SECTION_RODATA static f32 const lit_4099 = -1.0f;
COMPILER_STRIP_GATE(0x80D02098, &lit_4099);

/* 80D0209C-80D020A4 000030 0004+04 0/1 0/0 0/0 .rodata          @4100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4100[1 + 1 /* padding */] = {
    10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D0209C, &lit_4100);
#pragma pop

/* 80D020A4-80D020AC 000038 0008+00 0/4 0/0 0/0 .rodata          @4102 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4102[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D020A4, &lit_4102);
#pragma pop

/* 80D01198-80D01770 000638 05D8+00 1/0 0/0 0/0 .text            modeWait__13daObjSwTurn_cFv */
void daObjSwTurn_c::modeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D020AC-80D020B0 000040 0004+00 0/1 0/0 0/0 .rodata          @4127 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4127 = 32768.0f;
COMPILER_STRIP_GATE(0x80D020AC, &lit_4127);
#pragma pop

/* 80D01770-80D018B4 000C10 0144+00 1/1 0/0 0/0 .text            init_modeRotate__13daObjSwTurn_cFv
 */
void daObjSwTurn_c::init_modeRotate() {
    // NONMATCHING
}

/* 80D018B4-80D01958 000D54 00A4+00 1/0 0/0 0/0 .text            modeRotate__13daObjSwTurn_cFv */
void daObjSwTurn_c::modeRotate() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D020B0-80D020B4 000044 0004+00 0/1 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 16384.0f;
COMPILER_STRIP_GATE(0x80D020B0, &lit_4189);
#pragma pop

/* 80D01958-80D01B60 000DF8 0208+00 1/1 0/0 0/0 .text            rotate_sub_0__13daObjSwTurn_cFv */
void daObjSwTurn_c::rotate_sub_0() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D020B4-80D020B8 000048 0004+00 0/1 0/0 0/0 .rodata          @4304 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4304 = 5461.0f;
COMPILER_STRIP_GATE(0x80D020B4, &lit_4304);
#pragma pop

/* 80D01B60-80D01EB0 001000 0350+00 1/1 0/0 0/0 .text            rotate_sub_1__13daObjSwTurn_cFv */
void daObjSwTurn_c::rotate_sub_1() {
    // NONMATCHING
}

/* 80D01EB0-80D01F58 001350 00A8+00 1/0 0/0 0/0 .text            Draw__13daObjSwTurn_cFv */
void daObjSwTurn_c::Draw() {
    // NONMATCHING
}

/* 80D01F58-80D01F98 0013F8 0040+00 1/0 0/0 0/0 .text            Delete__13daObjSwTurn_cFv */
void daObjSwTurn_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D02124-80D02144 -00001 0020+00 1/0 0/0 0/0 .data            daObjSwTurn_METHODS */
static actor_method_class daObjSwTurn_METHODS = {
    (process_method_func)daObjSwTurn_create1st__FP13daObjSwTurn_c,
    (process_method_func)daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c,
    (process_method_func)daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c,
    0,
    (process_method_func)daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c,
};

/* 80D02144-80D02174 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_SwTurn */
extern actor_process_profile_definition g_profile_Obj_SwTurn = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_SwTurn,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjSwTurn_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  14,                     // mPriority
  &daObjSwTurn_METHODS,   // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80D02174-80D0219C 0000A8 0028+00 1/1 0/0 0/0 .data            __vt__13daObjSwTurn_c */
SECTION_DATA extern void* __vt__13daObjSwTurn_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjSwTurn_cFv,
    (void*)Create__13daObjSwTurn_cFv,
    (void*)Execute__13daObjSwTurn_cFPPA3_A4_f,
    (void*)Draw__13daObjSwTurn_cFv,
    (void*)Delete__13daObjSwTurn_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D01F98-80D01FF8 001438 0060+00 1/0 0/0 0/0 .text daObjSwTurn_create1st__FP13daObjSwTurn_c */
static void daObjSwTurn_create1st(daObjSwTurn_c* param_0) {
    // NONMATCHING
}

/* 80D01FF8-80D02018 001498 0020+00 1/0 0/0 0/0 .text daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c
 */
static void daObjSwTurn_MoveBGDelete(daObjSwTurn_c* param_0) {
    // NONMATCHING
}

/* 80D02018-80D02038 0014B8 0020+00 1/0 0/0 0/0 .text daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c
 */
static void daObjSwTurn_MoveBGExecute(daObjSwTurn_c* param_0) {
    // NONMATCHING
}

/* 80D02038-80D02064 0014D8 002C+00 1/0 0/0 0/0 .text daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c */
static void daObjSwTurn_MoveBGDraw(daObjSwTurn_c* param_0) {
    // NONMATCHING
}

/* 80D020B8-80D020B8 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */