//
// Generated By: dol2asm
// Translation Unit: d_a_kytag17
//

#include "rel/d/a/kytag/d_a_kytag17/d_a_kytag17.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag17_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

//
// Forward References:
//

static bool daKytag17_Draw(kytag17_class*);
static bool daKytag17_Execute(kytag17_class*);
static bool daKytag17_IsDelete(kytag17_class*);
static bool daKytag17_Delete(kytag17_class*);
static void daKytag17_Create(fopAc_ac_c*);

extern "C" static bool daKytag17_Draw__FP13kytag17_class();
extern "C" static bool daKytag17_Execute__FP13kytag17_class();
extern "C" static bool daKytag17_IsDelete__FP13kytag17_class();
extern "C" static bool daKytag17_Delete__FP13kytag17_class();
extern "C" static void daKytag17_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_KYTAG17[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 8046DB58-8046DB60 0008+00 s=1 e=0 z=0  None .text      daKytag17_Draw__FP13kytag17_class */
static bool daKytag17_Draw(kytag17_class* param_0) {
    return true;
}

/* 8046DB60-8046DB68 0008+00 s=1 e=0 z=0  None .text      daKytag17_Execute__FP13kytag17_class */
static bool daKytag17_Execute(kytag17_class* param_0) {
    return true;
}

/* 8046DB68-8046DB70 0008+00 s=1 e=0 z=0  None .text      daKytag17_IsDelete__FP13kytag17_class */
static bool daKytag17_IsDelete(kytag17_class* param_0) {
    return true;
}

/* 8046DB70-8046DB78 0008+00 s=1 e=0 z=0  None .text      daKytag17_Delete__FP13kytag17_class */
static bool daKytag17_Delete(kytag17_class* param_0) {
    return true;
}

/* 8046DB78-8046DBE0 0068+00 s=1 e=0 z=0  None .text      daKytag17_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag17_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag17/d_a_kytag17/daKytag17_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046DBE8-8046DC08 0020+00 s=1 e=0 z=0  None .data      l_daKytag17_Method */
SECTION_DATA static void* l_daKytag17_Method[8] = {
    (void*)daKytag17_Create__FP10fopAc_ac_c,
    (void*)daKytag17_Delete__FP13kytag17_class,
    (void*)daKytag17_Execute__FP13kytag17_class,
    (void*)daKytag17_IsDelete__FP13kytag17_class,
    (void*)daKytag17_Draw__FP13kytag17_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8046DC08-8046DC38 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG17 */
SECTION_DATA void* g_profile_KYTAG17[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02BB0000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x006F0000, (void*)&l_daKytag17_Method,
    (void*)0x00044000, (void*)NULL,
};
