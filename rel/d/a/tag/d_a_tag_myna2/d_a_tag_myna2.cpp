//
// Generated By: dol2asm
// Translation Unit: d_a_tag_myna2
//

#include "rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);
};

struct daTagMyna2_c {
    /* 80D5C698 */ void create();
    /* 80D5C708 */ void execute();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

//
// Forward References:
//

extern "C" void create__12daTagMyna2_cFv();
extern "C" void execute__12daTagMyna2_cFv();
extern "C" static void daTagMyna2_Create__FP10fopAc_ac_c();
extern "C" static void daTagMyna2_Execute__FP12daTagMyna2_c();
extern "C" static void daTagMyna2_Delete__FP12daTagMyna2_c();
extern "C" void func_80D5CA18(s16*);
extern "C" extern void* g_profile_TAG_MYNA2[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mGroundY__11fopAcM_gc_c;

//
// Declarations:
//

/* 80D5C698-80D5C708 000078 0070+00 1/1 0/0 0/0 .text            create__12daTagMyna2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMyna2_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/create__12daTagMyna2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5CA3C-80D5CA44 000000 0004+04 1/1 0/0 0/0 .rodata          @3743 */
SECTION_RODATA static u8 const lit_3743[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D5CA3C, &lit_3743);

/* 80D5CA44-80D5CA4C 000008 0008+00 0/1 0/0 0/0 .rodata          @3744 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3744[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5CA44, &lit_3744);
#pragma pop

/* 80D5CA4C-80D5CA54 000010 0008+00 0/1 0/0 0/0 .rodata          @3745 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3745[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5CA4C, &lit_3745);
#pragma pop

/* 80D5CA54-80D5CA5C 000018 0008+00 0/1 0/0 0/0 .rodata          @3746 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3746[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5CA54, &lit_3746);
#pragma pop

/* 80D5CA5C-80D5CA60 000020 0004+00 0/1 0/0 0/0 .rodata          @3747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3747 = 100.0f;
COMPILER_STRIP_GATE(80D5CA5C, &lit_3747);
#pragma pop

/* 80D5CA60-80D5CA64 000024 0004+00 0/1 0/0 0/0 .rodata          @3748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3748 = 1000.0f;
COMPILER_STRIP_GATE(80D5CA60, &lit_3748);
#pragma pop

/* 80D5C708-80D5C9A8 0000E8 02A0+00 1/1 0/0 0/0 .text            execute__12daTagMyna2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMyna2_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/execute__12daTagMyna2_cFv.s"
}
#pragma pop

/* 80D5C9A8-80D5C9C8 000388 0020+00 1/0 0/0 0/0 .text            daTagMyna2_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMyna2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/daTagMyna2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5C9C8-80D5C9E8 0003A8 0020+00 1/0 0/0 0/0 .text daTagMyna2_Execute__FP12daTagMyna2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMyna2_Execute(daTagMyna2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/daTagMyna2_Execute__FP12daTagMyna2_c.s"
}
#pragma pop

/* 80D5C9E8-80D5CA18 0003C8 0030+00 1/0 0/0 0/0 .text            daTagMyna2_Delete__FP12daTagMyna2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMyna2_Delete(daTagMyna2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/daTagMyna2_Delete__FP12daTagMyna2_c.s"
}
#pragma pop

/* 80D5CA18-80D5CA34 0003F8 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80D5CA18(s16* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna2/d_a_tag_myna2/func_80D5CA18.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5CA64-80D5CA84 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagMyna2_Method */
SECTION_DATA static void* l_daTagMyna2_Method[8] = {
    (void*)daTagMyna2_Create__FP10fopAc_ac_c,
    (void*)daTagMyna2_Delete__FP12daTagMyna2_c,
    (void*)daTagMyna2_Execute__FP12daTagMyna2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5CA84-80D5CAB4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_MYNA2 */
SECTION_DATA extern void* g_profile_TAG_MYNA2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02870000, (void*)&g_fpcLf_Method,
    (void*)0x00000574, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x018A0000, (void*)&l_daTagMyna2_Method,
    (void*)0x00044000, (void*)0x000E0000,
};
