//
// Generated By: dol2asm
// Translation Unit: d_a_kytag00
//

#include "rel/d/a/kytag/d_a_kytag00/d_a_kytag00.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag00_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct Z2EnvSeMgr {
    /* 802C7FB4 */ void setSnowPower(s8);
};

//
// Forward References:
//

extern "C" static void get_check_pos__FP13kytag00_class();
extern "C" static void wether_tag_reset__FP13kytag00_class();
extern "C" static void wether_tag_move__FP13kytag00_class();
extern "C" static void raincnt_set__Ff();
extern "C" static void raincnt_cut__Fv();
extern "C" static void wether_tag_efect_reset__FP13kytag00_class();
extern "C" static void wether_tag_efect_move__FP13kytag00_class();
extern "C" static void daKytag00_Draw__FP13kytag00_class();
extern "C" static void daKytag00_Execute__FP13kytag00_class();
extern "C" static bool daKytag00_IsDelete__FP13kytag00_class();
extern "C" static void daKytag00_Delete__FP13kytag00_class();
extern "C" static void daKytag00_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_KYTAG00[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void setSnowPower__10Z2EnvSeMgrFSc();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8046C980-8046C988 000000 0004+04 6/6 0/0 0/0 .rodata          @3798 */
SECTION_RODATA static u8 const lit_3798[4 + 4 /* padding */] = {
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
COMPILER_STRIP_GATE(8046C980, &lit_3798);

/* 8046C988-8046C990 000008 0008+00 0/3 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3799[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8046C988, &lit_3799);
#pragma pop

/* 8046C990-8046C998 000010 0008+00 0/3 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3800[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8046C990, &lit_3800);
#pragma pop

/* 8046C998-8046C9A0 000018 0008+00 0/3 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3801[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8046C998, &lit_3801);
#pragma pop

/* 8046B718-8046B9DC 000078 02C4+00 2/2 0/0 0/0 .text            get_check_pos__FP13kytag00_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void get_check_pos(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/get_check_pos__FP13kytag00_class.s"
}
#pragma pop

/* 8046B9DC-8046BA10 00033C 0034+00 2/2 0/0 0/0 .text            wether_tag_reset__FP13kytag00_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_reset(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_reset__FP13kytag00_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046C9A0-8046C9A4 000020 0004+00 0/3 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3906 = 100.0f;
COMPILER_STRIP_GATE(8046C9A0, &lit_3906);
#pragma pop

/* 8046C9A4-8046C9A8 000024 0004+00 0/3 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3907 = 5000.0f;
COMPILER_STRIP_GATE(8046C9A4, &lit_3907);
#pragma pop

/* 8046C9A8-8046C9AC 000028 0004+00 0/4 0/0 0/0 .rodata          @3908 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3908 = 1.0f;
COMPILER_STRIP_GATE(8046C9A8, &lit_3908);
#pragma pop

/* 8046C9AC-8046C9B0 00002C 0004+00 0/1 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3909 = 0.5f;
COMPILER_STRIP_GATE(8046C9AC, &lit_3909);
#pragma pop

/* 8046C9B0-8046C9B8 000030 0008+00 0/3 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3911[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8046C9B0, &lit_3911);
#pragma pop

/* 8046BA10-8046BD60 000370 0350+00 1/1 0/0 0/0 .text            wether_tag_move__FP13kytag00_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_move(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_move__FP13kytag00_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046C9B8-8046C9BC 000038 0004+00 1/1 0/0 0/0 .rodata          @3918 */
SECTION_RODATA static f32 const lit_3918 = 250.0f;
COMPILER_STRIP_GATE(8046C9B8, &lit_3918);

/* 8046BD60-8046BDA4 0006C0 0044+00 1/1 0/0 0/0 .text            raincnt_set__Ff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void raincnt_set(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/raincnt_set__Ff.s"
}
#pragma pop

/* 8046BDA4-8046BDB8 000704 0014+00 1/1 0/0 0/0 .text            raincnt_cut__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void raincnt_cut() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/raincnt_cut__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046C9E0-8046CA2C -00001 004C+00 1/1 0/0 0/0 .data            @3957 */
SECTION_DATA static void* lit_3957[19] = {
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xEC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x40),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x48),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x60),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x78),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x78),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x78),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x60),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xE0),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0x48),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
    (void*)(((char*)wether_tag_efect_reset__FP13kytag00_class) + 0xCC),
};

/* 8046BDB8-8046BEB8 000718 0100+00 3/2 0/0 0/0 .text wether_tag_efect_reset__FP13kytag00_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_efect_reset(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_efect_reset__FP13kytag00_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046CA2C-8046CA78 -00001 004C+00 1/1 0/0 0/0 .data            @4108 */
SECTION_DATA static void* lit_4108[19] = {
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x788),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x2A4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x2B0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x3B8),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x41C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x43C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x464),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x4B4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x4E0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x50C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x538),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x564),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x598),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x5C4),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x3B8),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x5F0),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x614),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x71C),
    (void*)(((char*)wether_tag_efect_move__FP13kytag00_class) + 0x748),
};

/* 8046BEB8-8046C660 000818 07A8+00 3/2 0/0 0/0 .text wether_tag_efect_move__FP13kytag00_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void wether_tag_efect_move(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/wether_tag_efect_move__FP13kytag00_class.s"
}
#pragma pop

/* 8046C660-8046C684 000FC0 0024+00 1/0 0/0 0/0 .text            daKytag00_Draw__FP13kytag00_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag00_Draw(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Draw__FP13kytag00_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046C9BC-8046C9C0 00003C 0004+00 0/0 0/0 0/0 .rodata          @4101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4101 = 500.0f;
COMPILER_STRIP_GATE(8046C9BC, &lit_4101);
#pragma pop

/* 8046C9C0-8046C9C4 000040 0004+00 0/0 0/0 0/0 .rodata          @4102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4102 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(8046C9C0, &lit_4102);
#pragma pop

/* 8046C9C4-8046C9C8 000044 0004+00 0/0 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4103 = 50.0f;
COMPILER_STRIP_GATE(8046C9C4, &lit_4103);
#pragma pop

/* 8046C9C8-8046C9CC 000048 0004+00 0/0 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4104 = 63.0f;
COMPILER_STRIP_GATE(8046C9C8, &lit_4104);
#pragma pop

/* 8046C9CC-8046C9D0 00004C 0004+00 0/0 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4105 = 300.0f;
COMPILER_STRIP_GATE(8046C9CC, &lit_4105);
#pragma pop

/* 8046C9D0-8046C9D4 000050 0004+00 0/0 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4106 = 127.0f;
COMPILER_STRIP_GATE(8046C9D0, &lit_4106);
#pragma pop

/* 8046C9D4-8046C9D8 000054 0004+00 0/1 0/0 0/0 .rodata          @4145 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4145 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(8046C9D4, &lit_4145);
#pragma pop

/* 8046C9D8-8046C9DC 000058 0004+00 0/1 0/0 0/0 .rodata          @4146 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4146 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(8046C9D8, &lit_4146);
#pragma pop

/* 8046C9DC-8046C9E0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4147 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4147 = 0x38D1B717;
COMPILER_STRIP_GATE(8046C9DC, &lit_4147);
#pragma pop

/* 8046C684-8046C76C 000FE4 00E8+00 1/0 0/0 0/0 .text daKytag00_Execute__FP13kytag00_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag00_Execute(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Execute__FP13kytag00_class.s"
}
#pragma pop

/* 8046C76C-8046C774 0010CC 0008+00 1/0 0/0 0/0 .text daKytag00_IsDelete__FP13kytag00_class */
static bool daKytag00_IsDelete(kytag00_class* param_0) {
    return true;
}

/* 8046C774-8046C7BC 0010D4 0048+00 1/0 0/0 0/0 .text            daKytag00_Delete__FP13kytag00_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag00_Delete(kytag00_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Delete__FP13kytag00_class.s"
}
#pragma pop

/* 8046C7BC-8046C978 00111C 01BC+00 1/0 0/0 0/0 .text            daKytag00_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag00_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag00/d_a_kytag00/daKytag00_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8046CA78-8046CA98 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag00_Method */
SECTION_DATA static void* l_daKytag00_Method[8] = {
    (void*)daKytag00_Create__FP10fopAc_ac_c,
    (void*)daKytag00_Delete__FP13kytag00_class,
    (void*)daKytag00_Execute__FP13kytag00_class,
    (void*)daKytag00_IsDelete__FP13kytag00_class,
    (void*)daKytag00_Draw__FP13kytag00_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8046CA98-8046CAC8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG00 */
SECTION_DATA extern void* g_profile_KYTAG00[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02AA0000, (void*)&g_fpcLf_Method,
    (void*)0x0000058C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x005E0000, (void*)&l_daKytag00_Method,
    (void*)0x00044000, (void*)NULL,
};
