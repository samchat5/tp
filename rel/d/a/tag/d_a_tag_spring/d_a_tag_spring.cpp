//
// Generated By: dol2asm
// Translation Unit: d_a_tag_spring
//

#include "rel/d/a/tag/d_a_tag_spring/d_a_tag_spring.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);
};

struct daTagSpring_c {
    /* 805A6A58 */ void initBaseMtx();
    /* 805A6A78 */ void setBaseMtx();
    /* 805A6AD0 */ void Create();
    /* 805A6AF4 */ void create();
    /* 805A6B5C */ void execute();
    /* 805A6C84 */ void checkArea();
    /* 805A6DFC */ bool _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

extern "C" void initBaseMtx__13daTagSpring_cFv();
extern "C" void setBaseMtx__13daTagSpring_cFv();
extern "C" void Create__13daTagSpring_cFv();
extern "C" void create__13daTagSpring_cFv();
extern "C" void execute__13daTagSpring_cFv();
extern "C" void checkArea__13daTagSpring_cFv();
extern "C" bool _delete__13daTagSpring_cFv();
extern "C" static void daTagSpring_Execute__FP13daTagSpring_c();
extern "C" static void daTagSpring_Delete__FP13daTagSpring_c();
extern "C" static void daTagSpring_Create__FP13daTagSpring_c();
extern "C" extern void* g_profile_Tag_Spring[12];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];

//
// Declarations:
//

/* 805A6A58-805A6A78 000078 0020+00 1/1 0/0 0/0 .text            initBaseMtx__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/initBaseMtx__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6A78-805A6AD0 000098 0058+00 1/1 0/0 0/0 .text            setBaseMtx__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/setBaseMtx__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6AD0-805A6AF4 0000F0 0024+00 1/1 0/0 0/0 .text            Create__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/Create__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6AF4-805A6B5C 000114 0068+00 1/1 0/0 0/0 .text            create__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/func_805A6AF4.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6E6C-805A6E70 000000 0004+00 2/2 0/0 0/0 .rodata          @3728 */
SECTION_RODATA static f32 const lit_3728 = 1.0f;
COMPILER_STRIP_GATE(805A6E6C, &lit_3728);

/* 805A6B5C-805A6C84 00017C 0128+00 1/1 0/0 0/0 .text            execute__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/execute__13daTagSpring_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6E70-805A6E74 000004 0004+00 0/1 0/0 0/0 .rodata          @3773 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3773[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(805A6E70, &lit_3773);
#pragma pop

/* 805A6E74-805A6E7C 000008 0008+00 0/1 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3774[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(805A6E74, &lit_3774);
#pragma pop

/* 805A6E7C-805A6E84 000010 0008+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3775[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(805A6E7C, &lit_3775);
#pragma pop

/* 805A6E84-805A6E8C 000018 0008+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3776[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(805A6E84, &lit_3776);
#pragma pop

/* 805A6E8C-805A6E90 000020 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 1000.0f;
COMPILER_STRIP_GATE(805A6E8C, &lit_3777);
#pragma pop

/* 805A6C84-805A6DFC 0002A4 0178+00 1/1 0/0 0/0 .text            checkArea__13daTagSpring_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/checkArea__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6DFC-805A6E04 00041C 0008+00 1/1 0/0 0/0 .text            _delete__13daTagSpring_cFv */
bool daTagSpring_c::_delete() {
    return true;
}

/* 805A6E04-805A6E24 000424 0020+00 1/0 0/0 0/0 .text daTagSpring_Execute__FP13daTagSpring_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagSpring_Execute(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Execute__FP13daTagSpring_c.s"
}
#pragma pop

/* 805A6E24-805A6E44 000444 0020+00 1/0 0/0 0/0 .text daTagSpring_Delete__FP13daTagSpring_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagSpring_Delete(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Delete__FP13daTagSpring_c.s"
}
#pragma pop

/* 805A6E44-805A6E64 000464 0020+00 1/0 0/0 0/0 .text daTagSpring_Create__FP13daTagSpring_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagSpring_Create(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Create__FP13daTagSpring_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6E90-805A6EB0 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagSpring_Method */
SECTION_DATA static void* l_daTagSpring_Method[8] = {
    (void*)daTagSpring_Create__FP13daTagSpring_c,
    (void*)daTagSpring_Delete__FP13daTagSpring_c,
    (void*)daTagSpring_Execute__FP13daTagSpring_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A6EB0-805A6EE0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Spring */
SECTION_DATA extern void* g_profile_Tag_Spring[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01AD0000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x024B0000, (void*)&l_daTagSpring_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
