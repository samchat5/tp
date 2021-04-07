//
// Generated By: dol2asm
// Translation Unit: d_a_tag_shop_camera
//

#include "rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_ShopCamera_c {
    /* 80D60898 */ void create();
    /* 80D608FC */ bool Delete();
    /* 80D60904 */ bool Execute();
    /* 80D6090C */ bool Draw();
    /* 80D60914 */ void initialize();
    /* 80D60A18 */ ~daTag_ShopCamera_c();
};

//
// Forward References:
//

extern "C" void create__18daTag_ShopCamera_cFv();
extern "C" bool Delete__18daTag_ShopCamera_cFv();
extern "C" bool Execute__18daTag_ShopCamera_cFv();
extern "C" bool Draw__18daTag_ShopCamera_cFv();
extern "C" void initialize__18daTag_ShopCamera_cFv();
extern "C" static void daTag_ShopCamera_Create__FPv();
extern "C" static void daTag_ShopCamera_Delete__FPv();
extern "C" static void daTag_ShopCamera_Execute__FPv();
extern "C" static void daTag_ShopCamera_Draw__FPv();
extern "C" static bool daTag_ShopCamera_IsDelete__FPv();
extern "C" void __dt__18daTag_ShopCamera_cFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void __dl__FPv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D60A90-80D60AB0 -00001 0020+00 1/0 0/0 0/0 .data            daTag_ShopCamera_MethodTable */
SECTION_DATA static void* daTag_ShopCamera_MethodTable[8] = {
    (void*)daTag_ShopCamera_Create__FPv,
    (void*)daTag_ShopCamera_Delete__FPv,
    (void*)daTag_ShopCamera_Execute__FPv,
    (void*)daTag_ShopCamera_IsDelete__FPv,
    (void*)daTag_ShopCamera_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D60AB0-80D60AE0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_SHOPCAM */
SECTION_DATA extern void* g_profile_TAG_SHOPCAM[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01260000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x004A0000, (void*)&daTag_ShopCamera_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D60AE0-80D60AEC 000050 000C+00 2/2 0/0 0/0 .data            __vt__18daTag_ShopCamera_c */
SECTION_DATA extern void* __vt__18daTag_ShopCamera_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daTag_ShopCamera_cFv,
};

/* 80D60898-80D608FC 000078 0064+00 1/1 0/0 0/0 .text            create__18daTag_ShopCamera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopCamera_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/create__18daTag_ShopCamera_cFv.s"
}
#pragma pop

/* 80D608FC-80D60904 0000DC 0008+00 1/1 0/0 0/0 .text            Delete__18daTag_ShopCamera_cFv */
bool daTag_ShopCamera_c::Delete() {
    return true;
}

/* 80D60904-80D6090C 0000E4 0008+00 1/1 0/0 0/0 .text            Execute__18daTag_ShopCamera_cFv */
bool daTag_ShopCamera_c::Execute() {
    return true;
}

/* 80D6090C-80D60914 0000EC 0008+00 1/1 0/0 0/0 .text            Draw__18daTag_ShopCamera_cFv */
bool daTag_ShopCamera_c::Draw() {
    return true;
}

/* ############################################################################################## */
/* 80D60A80-80D60A84 000000 0004+00 1/1 0/0 0/0 .rodata          @3663 */
SECTION_RODATA static f32 const lit_3663 = -30.0f;
COMPILER_STRIP_GATE(80D60A80, &lit_3663);

/* 80D60A84-80D60A88 000004 0004+00 0/1 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3664 = -15.0f;
COMPILER_STRIP_GATE(80D60A84, &lit_3664);
#pragma pop

/* 80D60A88-80D60A8C 000008 0004+00 0/1 0/0 0/0 .rodata          @3665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3665 = 30.0f;
COMPILER_STRIP_GATE(80D60A88, &lit_3665);
#pragma pop

/* 80D60A8C-80D60A90 00000C 0004+00 0/1 0/0 0/0 .rodata          @3666 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3666 = 45.0f;
COMPILER_STRIP_GATE(80D60A8C, &lit_3666);
#pragma pop

/* 80D60914-80D60990 0000F4 007C+00 1/1 0/0 0/0 .text            initialize__18daTag_ShopCamera_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopCamera_c::initialize() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/initialize__18daTag_ShopCamera_cFv.s"
}
#pragma pop

/* 80D60990-80D609B0 000170 0020+00 1/0 0/0 0/0 .text            daTag_ShopCamera_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopCamera_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/daTag_ShopCamera_Create__FPv.s"
}
#pragma pop

/* 80D609B0-80D609D0 000190 0020+00 1/0 0/0 0/0 .text            daTag_ShopCamera_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopCamera_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/daTag_ShopCamera_Delete__FPv.s"
}
#pragma pop

/* 80D609D0-80D609F0 0001B0 0020+00 1/0 0/0 0/0 .text            daTag_ShopCamera_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopCamera_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/daTag_ShopCamera_Execute__FPv.s"
}
#pragma pop

/* 80D609F0-80D60A10 0001D0 0020+00 1/0 0/0 0/0 .text            daTag_ShopCamera_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopCamera_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/daTag_ShopCamera_Draw__FPv.s"
}
#pragma pop

/* 80D60A10-80D60A18 0001F0 0008+00 1/0 0/0 0/0 .text            daTag_ShopCamera_IsDelete__FPv */
static bool daTag_ShopCamera_IsDelete(void* param_0) {
    return true;
}

/* 80D60A18-80D60A78 0001F8 0060+00 1/0 0/0 0/0 .text            __dt__18daTag_ShopCamera_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_ShopCamera_c::~daTag_ShopCamera_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera/__dt__18daTag_ShopCamera_cFv.s"
}
#pragma pop
