//
// Generated By: dol2asm
// Translation Unit: d_a_tboxSw
//

#include "rel/d/a/d_a_tboxSw/d_a_tboxSw.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTboxSw_c {
    /* 80D66858 */ bool Create();
    /* 80D66860 */ void create();
    /* 80D668C8 */ void execute();
    /* 80D66938 */ bool draw();
    /* 80D66940 */ bool _delete();
};

struct dSv_memBit_c {
    /* 800347E8 */ void isTbox(int) const;
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
};

//
// Forward References:
//

static void daTboxSw_Draw(daTboxSw_c*);
static void daTboxSw_Execute(daTboxSw_c*);
static void daTboxSw_Delete(daTboxSw_c*);
static void daTboxSw_Create(fopAc_ac_c*);

extern "C" bool Create__10daTboxSw_cFv();
extern "C" void create__10daTboxSw_cFv();
extern "C" void execute__10daTboxSw_cFv();
extern "C" bool draw__10daTboxSw_cFv();
extern "C" bool _delete__10daTboxSw_cFv();
extern "C" static void daTboxSw_Draw__FP10daTboxSw_c();
extern "C" static void daTboxSw_Execute__FP10daTboxSw_c();
extern "C" static void daTboxSw_Delete__FP10daTboxSw_c();
extern "C" static void daTboxSw_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_TBOX_SW[12];

//
// External References:
//

void fopAcM_delete(fopAc_ac_c*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void isTbox__12dSv_memBit_cCFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 80D66858-80D66860 0008+00 s=1 e=0 z=0  None .text      Create__10daTboxSw_cFv */
bool daTboxSw_c::Create() {
    return true;
}

/* 80D66860-80D668C8 0068+00 s=1 e=0 z=0  None .text      create__10daTboxSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTboxSw_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/create__10daTboxSw_cFv.s"
}
#pragma pop

/* 80D668C8-80D66938 0070+00 s=1 e=0 z=0  None .text      execute__10daTboxSw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTboxSw_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/execute__10daTboxSw_cFv.s"
}
#pragma pop

/* 80D66938-80D66940 0008+00 s=1 e=0 z=0  None .text      draw__10daTboxSw_cFv */
bool daTboxSw_c::draw() {
    return true;
}

/* 80D66940-80D66948 0008+00 s=1 e=0 z=0  None .text      _delete__10daTboxSw_cFv */
bool daTboxSw_c::_delete() {
    return true;
}

/* 80D66948-80D66968 0020+00 s=1 e=0 z=0  None .text      daTboxSw_Draw__FP10daTboxSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTboxSw_Draw(daTboxSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/daTboxSw_Draw__FP10daTboxSw_c.s"
}
#pragma pop

/* 80D66968-80D66988 0020+00 s=1 e=0 z=0  None .text      daTboxSw_Execute__FP10daTboxSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTboxSw_Execute(daTboxSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/daTboxSw_Execute__FP10daTboxSw_c.s"
}
#pragma pop

/* 80D66988-80D669A8 0020+00 s=1 e=0 z=0  None .text      daTboxSw_Delete__FP10daTboxSw_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTboxSw_Delete(daTboxSw_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/daTboxSw_Delete__FP10daTboxSw_c.s"
}
#pragma pop

/* 80D669A8-80D669C8 0020+00 s=1 e=0 z=0  None .text      daTboxSw_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTboxSw_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_tboxSw/d_a_tboxSw/daTboxSw_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D669D0-80D669F0 0020+00 s=1 e=0 z=0  None .data      l_daTboxSw_Method */
SECTION_DATA static void* l_daTboxSw_Method[8] = {
    (void*)daTboxSw_Create__FP10fopAc_ac_c,
    (void*)daTboxSw_Delete__FP10daTboxSw_c,
    (void*)daTboxSw_Execute__FP10daTboxSw_c,
    (void*)NULL,
    (void*)daTboxSw_Draw__FP10daTboxSw_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D669F0-80D66A20 0030+00 s=0 e=0 z=1  None .data      g_profile_TBOX_SW */
SECTION_DATA void* g_profile_TBOX_SW[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x016E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000568, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x020E0000, (void*)&l_daTboxSw_Method,
    (void*)0x00040100, (void*)0x000E0000,
};
