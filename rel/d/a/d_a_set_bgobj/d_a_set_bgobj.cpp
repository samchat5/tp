//
// Generated By: dol2asm
// Translation Unit: d_a_set_bgobj
//

#include "rel/d/a/d_a_set_bgobj/d_a_set_bgobj.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daSetBgObj_c {
    /* 80031870 */ void getArcName(fopAc_ac_c*);
    /* 80485D78 */ void CreateInit();
    /* 80485DFC */ void create();
    /* 80485E88 */ void Delete();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct csXyz {};

struct cXyz {};

//
// Forward References:
//

extern "C" void CreateInit__12daSetBgObj_cFv();
extern "C" void create__12daSetBgObj_cFv();
extern "C" void Delete__12daSetBgObj_cFv();
extern "C" static void daSetBgObj_Delete__FP12daSetBgObj_c();
extern "C" static void daSetBgObj_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_set_bgobj__stringBase0;
extern "C" extern void* g_profile_SET_BG_OBJ[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getArcName__12daSetBgObj_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void sprintf();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80485F00-80485F0C 000000 0009+03 1/1 0/0 0/0 .rodata          l_specName */
SECTION_RODATA static u8 const l_specName[9 + 3 /* padding */] = {
    0x73,
    0x70,
    0x65,
    0x63,
    0x2E,
    0x64,
    0x61,
    0x74,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80485F00, &l_specName);

/* 80485F10-80485F1C 000000 000A+02 1/1 0/0 0/0 .data            l_bg_profName$3618 */
SECTION_DATA static u8 l_bg_profName[10 + 2 /* padding */] = {
    0x02,
    0xDE,
    0x02,
    0xDE,
    0x02,
    0xDE,
    0x01,
    0x3C,
    0x01,
    0x3D,
    /* padding */
    0x00,
    0x00,
};

/* 80485D78-80485DFC 000078 0084+00 1/1 0/0 0/0 .text            CreateInit__12daSetBgObj_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSetBgObj_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/d_a_set_bgobj/d_a_set_bgobj/CreateInit__12daSetBgObj_cFv.s"
}
#pragma pop

/* 80485DFC-80485E88 0000FC 008C+00 1/1 0/0 0/0 .text            create__12daSetBgObj_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSetBgObj_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_set_bgobj/d_a_set_bgobj/create__12daSetBgObj_cFv.s"
}
#pragma pop

/* 80485E88-80485EB8 000188 0030+00 1/1 0/0 0/0 .text            Delete__12daSetBgObj_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSetBgObj_c::Delete() {
    nofralloc
#include "asm/rel/d/a/d_a_set_bgobj/d_a_set_bgobj/Delete__12daSetBgObj_cFv.s"
}
#pragma pop

/* 80485EB8-80485ED8 0001B8 0020+00 1/0 0/0 0/0 .text            daSetBgObj_Delete__FP12daSetBgObj_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSetBgObj_Delete(daSetBgObj_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_set_bgobj/d_a_set_bgobj/daSetBgObj_Delete__FP12daSetBgObj_c.s"
}
#pragma pop

/* 80485ED8-80485EF8 0001D8 0020+00 1/0 0/0 0/0 .text            daSetBgObj_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daSetBgObj_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_set_bgobj/d_a_set_bgobj/daSetBgObj_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80485F1C-80485F3C -00001 0020+00 1/0 0/0 0/0 .data            l_daSetBgObj_Method */
SECTION_DATA static void* l_daSetBgObj_Method[8] = {
    (void*)daSetBgObj_Create__FP10fopAc_ac_c,
    (void*)daSetBgObj_Delete__FP12daSetBgObj_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80485F3C-80485F6C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SET_BG_OBJ */
SECTION_DATA extern void* g_profile_SET_BG_OBJ[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02DD0000, (void*)&g_fpcLf_Method,
    (void*)0x00000580, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02F20000, (void*)&l_daSetBgObj_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80485F0C-80485F0F 00000C 0003+00 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80485F0C = "%s";
#pragma pop
