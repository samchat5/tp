//
// Generated By: dol2asm
// Translation Unit: d_a_swBall
//

#include "rel/d/a/d_a_swBall/d_a_swBall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct fast_create_request {};

struct daSwBall_c {
    /* 80D4E054 */ void checkArea_sub(fopAc_ac_c*);
    /* 80D4E194 */ void checkArea();
    /* 80D4E248 */ void search_ball();
    /* 80D4E374 */ void Create();
    /* 80D4E42C */ void create();
    /* 80D4E494 */ void execute();
    /* 80D4E524 */ void actionRun();
    /* 80D4E6C4 */ void actionStop();
    /* 80D4E6C8 */ void PutCrrPos();
    /* 80D4E90C */ bool _delete();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
};

struct dStage_roomControl_c {
    /* 80024338 */ void initZone();
};

struct cXyz {};

struct Vec {};

//
// Forward References:
//

static void s_ball_sub(void*, void*);
static void daSwBall_Execute(daSwBall_c*);
static void daSwBall_Delete(daSwBall_c*);
static void daSwBall_Create(fopAc_ac_c*);
static void cLib_calcTimer__template0(u8*);

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
extern "C" static void func_80D4E974();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_SwBall[12];

//
// External References:
//

void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcSch_JudgeByID(void*, void*);
void fpcDw_Handler(int (*)(int (*)(void*, void*)), int (*)(void*, void*));
void fpcFCtRq_Do(fast_create_request*);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void cLib_chaseF(f32*, f32, f32);
void cLib_targetAngleY(Vec const*, Vec const*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i();
extern "C" void fpcFCtRq_Do__FP19fast_create_request();
extern "C" void initZone__20dStage_roomControl_cFv();
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
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D4EA50-80D4EA70 0020+00 s=2 e=0 z=0  None .bss       l_target_info */
static u8 l_target_info[32];

/* 80D4EA70-80D4EA74 0004+00 s=2 e=0 z=0  None .bss       l_target_info_count */
static u8 l_target_info_count[4];

/* 80D4DFD8-80D4E054 007C+00 s=1 e=0 z=0  None .text      s_ball_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_ball_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/s_ball_sub__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D4E998-80D4E99C 0004+00 s=2 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u32 const lit_3718 = 0x41200000;

/* 80D4E99C-80D4E9A0 0004+00 s=1 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA static u32 const lit_3719 = 0x42C80000;

/* 80D4E9A0-80D4E9A4 0004+00 s=1 e=0 z=0  None .rodata    @3720 */
SECTION_RODATA static u32 const lit_3720 = 0xC2C80000;

/* 80D4E9A4-80D4E9A8 0004+00 s=2 e=0 z=0  None .rodata    @3721 */
SECTION_RODATA static u8 const lit_3721[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D4E054-80D4E194 0140+00 s=2 e=0 z=0  None .text      checkArea_sub__10daSwBall_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::checkArea_sub(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/checkArea_sub__10daSwBall_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80D4E194-80D4E248 00B4+00 s=2 e=0 z=0  None .text      checkArea__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/checkArea__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E248-80D4E374 012C+00 s=1 e=0 z=0  None .text      search_ball__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::search_ball() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/search_ball__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E374-80D4E42C 00B8+00 s=1 e=0 z=0  None .text      Create__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::Create() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/Create__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E42C-80D4E494 0068+00 s=1 e=0 z=0  None .text      create__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/func_80D4E42C.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D4E9AC-80D4E9B8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D4E9B8-80D4E9CC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80D4E9CC-80D4E9D8 000C+00 s=1 e=0 z=0  None .data      @3847 */
SECTION_DATA static void* lit_3847[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionRun__10daSwBall_cFv,
};

/* 80D4E9D8-80D4E9E4 000C+00 s=1 e=0 z=0  None .data      @3848 */
SECTION_DATA static void* lit_3848[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionStop__10daSwBall_cFv,
};

/* 80D4E9E4-80D4E9FC 0018+00 s=1 e=0 z=0  None .data      l_func$3846 */
SECTION_DATA static u8 l_func[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D4EA74-80D4EA78 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80D4EA74[4];

/* 80D4E494-80D4E524 0090+00 s=2 e=0 z=0  None .text      execute__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/execute__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E524-80D4E6C4 01A0+00 s=1 e=0 z=0  None .text      actionRun__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::actionRun() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/actionRun__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E6C4-80D4E6C8 0004+00 s=1 e=0 z=0  None .text      actionStop__10daSwBall_cFv */
void daSwBall_c::actionStop() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D4E9A8-80D4E9AC 0004+00 s=1 e=0 z=0  None .rodata    @3994 */
SECTION_RODATA static u32 const lit_3994 = 0x43960000;

/* 80D4E6C8-80D4E90C 0244+00 s=1 e=0 z=0  None .text      PutCrrPos__10daSwBall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSwBall_c::PutCrrPos() {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/PutCrrPos__10daSwBall_cFv.s"
}
#pragma pop

/* 80D4E90C-80D4E914 0008+00 s=1 e=0 z=0  None .text      _delete__10daSwBall_cFv */
bool daSwBall_c::_delete() {
    return true;
}

/* 80D4E914-80D4E934 0020+00 s=1 e=0 z=0  None .text      daSwBall_Execute__FP10daSwBall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwBall_Execute(daSwBall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/daSwBall_Execute__FP10daSwBall_c.s"
}
#pragma pop

/* 80D4E934-80D4E954 0020+00 s=1 e=0 z=0  None .text      daSwBall_Delete__FP10daSwBall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwBall_Delete(daSwBall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/daSwBall_Delete__FP10daSwBall_c.s"
}
#pragma pop

/* 80D4E954-80D4E974 0020+00 s=1 e=0 z=0  None .text      daSwBall_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daSwBall_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/daSwBall_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D4E974-80D4E990 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_swBall/d_a_swBall/func_80D4E974.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D4E9FC-80D4EA1C 0020+00 s=1 e=0 z=0  None .data      l_daSwBall_Method */
SECTION_DATA static void* l_daSwBall_Method[8] = {
    (void*)daSwBall_Create__FP10fopAc_ac_c,
    (void*)daSwBall_Delete__FP10daSwBall_c,
    (void*)daSwBall_Execute__FP10daSwBall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D4EA1C-80D4EA4C 0030+00 s=0 e=0 z=1  None .data      g_profile_SwBall */
SECTION_DATA void* g_profile_SwBall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x017E0000, (void*)&g_fpcLf_Method,
    (void*)0x000005A0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02260000, (void*)&l_daSwBall_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
