//
// Generated By: dol2asm
// Translation Unit: d_a_tag_attention
//

#include "rel/d/a/tag/d_a_tag_attention/d_a_tag_attention.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daAttp_c {
    /* 804D5318 */ void Create();
    /* 804D5354 */ void create();
    /* 804D53AC */ void execute();
    /* 804D568C */ bool draw();
    /* 804D5694 */ bool _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

static void daAttp_Draw(daAttp_c*);
static void daAttp_Execute(daAttp_c*);
static void daAttp_Delete(daAttp_c*);
static void daAttp_Create(fopAc_ac_c*);

extern "C" void Create__8daAttp_cFv();
extern "C" void create__8daAttp_cFv();
extern "C" void execute__8daAttp_cFv();
extern "C" bool draw__8daAttp_cFv();
extern "C" bool _delete__8daAttp_cFv();
extern "C" static void daAttp_Draw__FP8daAttp_c();
extern "C" static void daAttp_Execute__FP8daAttp_c();
extern "C" static void daAttp_Delete__FP8daAttp_c();
extern "C" static void daAttp_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_Tag_Attp[12];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void PSMTXMultVec();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 804D5724-804D5728 0002+02 s=1 e=0 z=0  None .rodata    l_dist_tbl$3641 */
SECTION_RODATA static u8 const l_dist_tbl[2 + 2 /* padding */] = {
    0x23,
    0x24,
    /* padding */
    0x00,
    0x00,
};

/* 804D5318-804D5354 003C+00 s=1 e=0 z=0  None .text      Create__8daAttp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAttp_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/Create__8daAttp_cFv.s"
}
#pragma pop

/* 804D5354-804D53AC 0058+00 s=1 e=0 z=0  None .text      create__8daAttp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAttp_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/func_804D5354.s"
}
#pragma pop

/* ############################################################################################## */
/* 804D5728-804D572C 0004+00 s=1 e=0 z=0  None .rodata    @3772 */
SECTION_RODATA static u8 const lit_3772[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804D572C-804D574C 0020+00 s=1 e=0 z=0  None .data      @3773 */
SECTION_DATA static void* lit_3773[8] = {
    (void*)(((char*)execute__8daAttp_cFv) + 0xA4),  (void*)(((char*)execute__8daAttp_cFv) + 0xC0),
    (void*)(((char*)execute__8daAttp_cFv) + 0xDC),  (void*)(((char*)execute__8daAttp_cFv) + 0xF8),
    (void*)(((char*)execute__8daAttp_cFv) + 0x120), (void*)(((char*)execute__8daAttp_cFv) + 0x144),
    (void*)(((char*)execute__8daAttp_cFv) + 0x144), (void*)(((char*)execute__8daAttp_cFv) + 0x144),
};

/* 804D53AC-804D568C 02E0+00 s=3 e=0 z=0  None .text      execute__8daAttp_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAttp_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/execute__8daAttp_cFv.s"
}
#pragma pop

/* 804D568C-804D5694 0008+00 s=1 e=0 z=0  None .text      draw__8daAttp_cFv */
bool daAttp_c::draw() {
    return true;
}

/* 804D5694-804D569C 0008+00 s=1 e=0 z=0  None .text      _delete__8daAttp_cFv */
bool daAttp_c::_delete() {
    return true;
}

/* 804D569C-804D56BC 0020+00 s=1 e=0 z=0  None .text      daAttp_Draw__FP8daAttp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAttp_Draw(daAttp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/daAttp_Draw__FP8daAttp_c.s"
}
#pragma pop

/* 804D56BC-804D56DC 0020+00 s=1 e=0 z=0  None .text      daAttp_Execute__FP8daAttp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAttp_Execute(daAttp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/daAttp_Execute__FP8daAttp_c.s"
}
#pragma pop

/* 804D56DC-804D56FC 0020+00 s=1 e=0 z=0  None .text      daAttp_Delete__FP8daAttp_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAttp_Delete(daAttp_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/daAttp_Delete__FP8daAttp_c.s"
}
#pragma pop

/* 804D56FC-804D571C 0020+00 s=1 e=0 z=0  None .text      daAttp_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daAttp_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_attention/d_a_tag_attention/daAttp_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804D574C-804D576C 0020+00 s=1 e=0 z=0  None .data      l_daAttp_Method */
SECTION_DATA static void* l_daAttp_Method[8] = {
    (void*)daAttp_Create__FP10fopAc_ac_c,
    (void*)daAttp_Delete__FP8daAttp_c,
    (void*)daAttp_Execute__FP8daAttp_c,
    (void*)NULL,
    (void*)daAttp_Draw__FP8daAttp_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804D576C-804D579C 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Attp */
SECTION_DATA void* g_profile_Tag_Attp[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x015A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000568, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01B80000, (void*)&l_daAttp_Method,
    (void*)0x00040100, (void*)NULL,
};
