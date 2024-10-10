/**
 * @file d_a_swBall.cpp
 * 
*/

#include "d/actor/d_a_swBall.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void s_ball_sub__FPvPv();
extern "C" void checkArea_sub__10daSwBall_cFP10fopAc_ac_c();
extern "C" void checkArea__10daSwBall_cFv();
extern "C" void search_ball__10daSwBall_cFv();
extern "C" void Create__10daSwBall_cFv();
extern "C" void create__10daSwBall_cFv();
extern "C" void execute__10daSwBall_cFv();
extern "C" void actionRun__10daSwBall_cFv();
extern "C" void actionStop__10daSwBall_cFv();
extern "C" void PutCrrPos__10daSwBall_cFv();
extern "C" bool _delete__10daSwBall_cFv();
extern "C" static void daSwBall_Execute__FP10daSwBall_c();
extern "C" static void daSwBall_Delete__FP10daSwBall_c();
extern "C" static void daSwBall_Create__FP10fopAc_ac_c();
extern "C" void func_80D4E974(void* _this, u8*);

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D4EA50-80D4EA70 000000 0020+00 2/2 0/0 0/0 .bss             l_target_info */
static u8 l_target_info[32];

/* 80D4EA70-80D4EA74 000020 0004+00 2/2 0/0 0/0 .bss             l_target_info_count */
static u8 l_target_info_count[4];

/* 80D4DFD8-80D4E054 000078 007C+00 1/1 0/0 0/0 .text            s_ball_sub__FPvPv */
static void s_ball_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4E998-80D4E99C 000000 0004+00 2/2 0/0 0/0 .rodata          @3718 */
SECTION_RODATA static f32 const lit_3718 = 10.0f;
COMPILER_STRIP_GATE(0x80D4E998, &lit_3718);

/* 80D4E99C-80D4E9A0 000004 0004+00 0/1 0/0 0/0 .rodata          @3719 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3719 = 100.0f;
COMPILER_STRIP_GATE(0x80D4E99C, &lit_3719);
#pragma pop

/* 80D4E9A0-80D4E9A4 000008 0004+00 0/1 0/0 0/0 .rodata          @3720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3720 = -100.0f;
COMPILER_STRIP_GATE(0x80D4E9A0, &lit_3720);
#pragma pop

/* 80D4E9A4-80D4E9A8 00000C 0004+00 0/2 0/0 0/0 .rodata          @3721 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3721[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D4E9A4, &lit_3721);
#pragma pop

/* 80D4E054-80D4E194 0000F4 0140+00 2/2 0/0 0/0 .text checkArea_sub__10daSwBall_cFP10fopAc_ac_c */
void daSwBall_c::checkArea_sub(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D4E194-80D4E248 000234 00B4+00 2/2 0/0 0/0 .text            checkArea__10daSwBall_cFv */
void daSwBall_c::checkArea() {
    // NONMATCHING
}

/* 80D4E248-80D4E374 0002E8 012C+00 1/1 0/0 0/0 .text            search_ball__10daSwBall_cFv */
void daSwBall_c::search_ball() {
    // NONMATCHING
}

/* 80D4E374-80D4E42C 000414 00B8+00 1/1 0/0 0/0 .text            Create__10daSwBall_cFv */
void daSwBall_c::Create() {
    // NONMATCHING
}

/* 80D4E42C-80D4E494 0004CC 0068+00 1/1 0/0 0/0 .text            create__10daSwBall_cFv */
void daSwBall_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4E9AC-80D4E9B8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D4E9B8-80D4E9CC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D4E9CC-80D4E9D8 -00001 000C+00 0/1 0/0 0/0 .data            @3847 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3847[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionRun__10daSwBall_cFv,
};
#pragma pop

/* 80D4E9D8-80D4E9E4 -00001 000C+00 0/1 0/0 0/0 .data            @3848 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3848[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionStop__10daSwBall_cFv,
};
#pragma pop

/* 80D4E9E4-80D4E9FC 000038 0018+00 0/1 0/0 0/0 .data            l_func$3846 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D4EA74-80D4EA78 000024 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D4EA74[4];

/* 80D4E494-80D4E524 000534 0090+00 2/2 0/0 0/0 .text            execute__10daSwBall_cFv */
void daSwBall_c::execute() {
    // NONMATCHING
}

/* 80D4E524-80D4E6C4 0005C4 01A0+00 1/0 0/0 0/0 .text            actionRun__10daSwBall_cFv */
void daSwBall_c::actionRun() {
    // NONMATCHING
}

/* 80D4E6C4-80D4E6C8 000764 0004+00 1/0 0/0 0/0 .text            actionStop__10daSwBall_cFv */
void daSwBall_c::actionStop() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D4E9A8-80D4E9AC 000010 0004+00 0/1 0/0 0/0 .rodata          @3994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3994 = 300.0f;
COMPILER_STRIP_GATE(0x80D4E9A8, &lit_3994);
#pragma pop

/* 80D4E6C8-80D4E90C 000768 0244+00 1/1 0/0 0/0 .text            PutCrrPos__10daSwBall_cFv */
void daSwBall_c::PutCrrPos() {
    // NONMATCHING
}

/* 80D4E90C-80D4E914 0009AC 0008+00 1/1 0/0 0/0 .text            _delete__10daSwBall_cFv */
bool daSwBall_c::_delete() {
    return true;
}

/* 80D4E914-80D4E934 0009B4 0020+00 1/0 0/0 0/0 .text            daSwBall_Execute__FP10daSwBall_c */
static void daSwBall_Execute(daSwBall_c* param_0) {
    // NONMATCHING
}

/* 80D4E934-80D4E954 0009D4 0020+00 1/0 0/0 0/0 .text            daSwBall_Delete__FP10daSwBall_c */
static void daSwBall_Delete(daSwBall_c* param_0) {
    // NONMATCHING
}

/* 80D4E954-80D4E974 0009F4 0020+00 1/0 0/0 0/0 .text            daSwBall_Create__FP10fopAc_ac_c */
static void daSwBall_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D4E974-80D4E990 000A14 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_80D4E974(void* _this, u8* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4E9FC-80D4EA1C -00001 0020+00 1/0 0/0 0/0 .data            l_daSwBall_Method */
static actor_method_class l_daSwBall_Method = {
    (process_method_func)daSwBall_Create__FP10fopAc_ac_c,
    (process_method_func)daSwBall_Delete__FP10daSwBall_c,
    (process_method_func)daSwBall_Execute__FP10daSwBall_c,
};

/* 80D4EA1C-80D4EA4C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SwBall */
extern actor_process_profile_definition g_profile_SwBall = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_SwBall,            // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daSwBall_c),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  550,                    // mPriority
  &l_daSwBall_Method,     // sub_method
  0x00040000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};