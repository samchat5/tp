//
// Generated By: dol2asm
// Translation Unit: d_a_tag_qs
//

#include "rel/d/a/tag/d_a_tag_qs/d_a_tag_qs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagQs_c {
    /* 80D5DE78 */ ~daTagQs_c();
    /* 80D5DFB0 */ void create();
    /* 80D5E1FC */ void getPower();
    /* 80D5E220 */ void getSafeArea();
    /* 80D5E244 */ void getPower80();
    /* 80D5E268 */ void getCenterPower();
    /* 80D5E28C */ void calcPower(f32, f32);
    /* 80D5E9F8 */ void execute();
    /* 80D5EBF8 */ bool draw();
};

struct daItem_c {
    /* 80037BE0 */ void startCtrl();
};

struct daItemBase_c {
    /* 80037A5C */ void getItemNo();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80D5E110 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266EF4 */ void normalize();
};

struct cM3dGCyl {
    /* 80D5E16C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D5E1B4 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80D5EC90 */ ~cCcD_GStts();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

extern "C" void __dt__9daTagQs_cFv();
extern "C" void create__9daTagQs_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void getPower__9daTagQs_cFv();
extern "C" void getSafeArea__9daTagQs_cFv();
extern "C" void getPower80__9daTagQs_cFv();
extern "C" void getCenterPower__9daTagQs_cFv();
extern "C" void calcPower__9daTagQs_cFff();
extern "C" static void hikiyose__FP4cXyzP4cXyzP4cXyzf();
extern "C" static void search__FPvPv();
extern "C" void execute__9daTagQs_cFv();
extern "C" bool draw__9daTagQs_cFv();
extern "C" static void daTagQs_Draw__FP9daTagQs_c();
extern "C" static void daTagQs_Execute__FP9daTagQs_c();
extern "C" static bool daTagQs_IsDelete__FP9daTagQs_c();
extern "C" static void daTagQs_Delete__FP9daTagQs_c();
extern "C" static void daTagQs_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getItemNo__12daItemBase_cFv();
extern "C" void startCtrl__8daItem_cFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5ED44-80D5ED88 000000 0044+00 1/1 0/0 0/0 .data            l_cc_cyl_src */
SECTION_DATA static u8 l_cc_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80D5ED88-80D5EDA8 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagQs_Method */
SECTION_DATA static void* l_daTagQs_Method[8] = {
    (void*)daTagQs_Create__FP10fopAc_ac_c,
    (void*)daTagQs_Delete__FP9daTagQs_c,
    (void*)daTagQs_Execute__FP9daTagQs_c,
    (void*)daTagQs_IsDelete__FP9daTagQs_c,
    (void*)daTagQs_Draw__FP9daTagQs_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5EDA8-80D5EDD8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_QS */
SECTION_DATA extern void* g_profile_TAG_QS[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02230000, (void*)&g_fpcLf_Method,
    (void*)0x000006F0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01120000, (void*)&l_daTagQs_Method,
    (void*)0x00040000, (void*)NULL,
};

/* 80D5EDD8-80D5EDE4 000094 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D5EDE4-80D5EDF0 0000A0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D5EDF0-80D5EDFC 0000AC 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D5EDFC-80D5EE08 0000B8 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D5DE78-80D5DFB0 000078 0138+00 1/1 0/0 0/0 .text            __dt__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagQs_c::~daTagQs_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__9daTagQs_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ECE0-80D5ECE4 000000 0004+00 5/5 0/0 0/0 .rodata          @3734 */
SECTION_RODATA static f32 const lit_3734 = 1.0f;
COMPILER_STRIP_GATE(80D5ECE0, &lit_3734);

/* 80D5ECE4-80D5ECE8 000004 0004+00 1/3 0/0 0/0 .rodata          @3735 */
SECTION_RODATA static f32 const lit_3735 = 20.0f;
COMPILER_STRIP_GATE(80D5ECE4, &lit_3735);

/* 80D5ECE8-80D5ECEC 000008 0004+00 0/1 0/0 0/0 .rodata          @3736 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3736 = 50.0f;
COMPILER_STRIP_GATE(80D5ECE8, &lit_3736);
#pragma pop

/* 80D5DFB0-80D5E110 0001B0 0160+00 1/1 0/0 0/0 .text            create__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/create__9daTagQs_cFv.s"
}
#pragma pop

/* 80D5E110-80D5E16C 000310 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D5E16C-80D5E1B4 00036C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D5E1B4-80D5E1FC 0003B4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ECEC-80D5ECF0 00000C 0004+00 1/2 0/0 0/0 .rodata          @3813 */
SECTION_RODATA static f32 const lit_3813 = 4.0f;
COMPILER_STRIP_GATE(80D5ECEC, &lit_3813);

/* 80D5ECF0-80D5ECF4 000010 0004+00 1/1 0/0 0/0 .rodata          @3814 */
SECTION_RODATA static f32 const lit_3814 = 5.0f;
COMPILER_STRIP_GATE(80D5ECF0, &lit_3814);

/* 80D5E1FC-80D5E220 0003FC 0024+00 2/2 0/0 0/0 .text            getPower__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::getPower() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/getPower__9daTagQs_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ECF4-80D5ECF8 000014 0004+00 1/2 0/0 0/0 .rodata          @3823 */
SECTION_RODATA static f32 const lit_3823 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(80D5ECF4, &lit_3823);

/* 80D5ECF8-80D5ECFC 000018 0004+00 1/2 0/0 0/0 .rodata          @3824 */
SECTION_RODATA static f32 const lit_3824 = 0.5f;
COMPILER_STRIP_GATE(80D5ECF8, &lit_3824);

/* 80D5E220-80D5E244 000420 0024+00 1/1 0/0 0/0 .text            getSafeArea__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::getSafeArea() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/getSafeArea__9daTagQs_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ECFC-80D5ED00 00001C 0004+00 1/1 0/0 0/0 .rodata          @3833 */
SECTION_RODATA static f32 const lit_3833 = 6.0f;
COMPILER_STRIP_GATE(80D5ECFC, &lit_3833);

/* 80D5ED00-80D5ED04 000020 0004+00 1/1 0/0 0/0 .rodata          @3834 */
SECTION_RODATA static f32 const lit_3834 = 10.0f;
COMPILER_STRIP_GATE(80D5ED00, &lit_3834);

/* 80D5E244-80D5E268 000444 0024+00 1/1 0/0 0/0 .text            getPower80__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::getPower80() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/getPower80__9daTagQs_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED04-80D5ED08 000024 0004+00 1/1 0/0 0/0 .rodata          @3843 */
SECTION_RODATA static f32 const lit_3843 = 12.0f;
COMPILER_STRIP_GATE(80D5ED04, &lit_3843);

/* 80D5E268-80D5E28C 000468 0024+00 1/1 0/0 0/0 .text            getCenterPower__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::getCenterPower() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/getCenterPower__9daTagQs_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED08-80D5ED10 000028 0004+04 0/2 0/0 0/0 .rodata          @3863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3863[1 + 1 /* padding */] = {
    30.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80D5ED08, &lit_3863);
#pragma pop

/* 80D5ED10-80D5ED18 000030 0008+00 0/2 0/0 0/0 .rodata          @3865 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3865[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5ED10, &lit_3865);
#pragma pop

/* 80D5E28C-80D5E3F8 00048C 016C+00 1/1 0/0 0/0 .text            calcPower__9daTagQs_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::calcPower(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/calcPower__9daTagQs_cFff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED18-80D5ED1C 000038 0004+00 0/2 0/0 0/0 .rodata          @3934 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3934[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D5ED18, &lit_3934);
#pragma pop

/* 80D5ED1C-80D5ED20 00003C 0004+00 0/2 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 100.0f;
COMPILER_STRIP_GATE(80D5ED1C, &lit_3935);
#pragma pop

/* 80D5ED20-80D5ED28 000040 0008+00 0/2 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3936[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5ED20, &lit_3936);
#pragma pop

/* 80D5ED28-80D5ED30 000048 0008+00 0/2 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3937[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5ED28, &lit_3937);
#pragma pop

/* 80D5ED30-80D5ED38 000050 0008+00 0/2 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3938[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D5ED30, &lit_3938);
#pragma pop

/* 80D5E3F8-80D5E64C 0005F8 0254+00 1/1 0/0 0/0 .text            hikiyose__FP4cXyzP4cXyzP4cXyzf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void hikiyose(cXyz* param_0, cXyz* param_1, cXyz* param_2, f32 param_3) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/hikiyose__FP4cXyzP4cXyzP4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED38-80D5ED3C 000058 0004+00 0/1 0/0 0/0 .rodata          @4042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4042 = 110.0f;
COMPILER_STRIP_GATE(80D5ED38, &lit_4042);
#pragma pop

/* 80D5ED3C-80D5ED40 00005C 0004+00 0/1 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4043 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(80D5ED3C, &lit_4043);
#pragma pop

/* 80D5E64C-80D5E9F8 00084C 03AC+00 1/1 0/0 0/0 .text            search__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void search(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/search__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5ED40-80D5ED44 000060 0004+00 0/1 0/0 0/0 .rodata          @4090 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4090 = -1.0f;
COMPILER_STRIP_GATE(80D5ED40, &lit_4090);
#pragma pop

/* 80D5E9F8-80D5EBF8 000BF8 0200+00 1/1 0/0 0/0 .text            execute__9daTagQs_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagQs_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/execute__9daTagQs_cFv.s"
}
#pragma pop

/* 80D5EBF8-80D5EC00 000DF8 0008+00 1/1 0/0 0/0 .text            draw__9daTagQs_cFv */
bool daTagQs_c::draw() {
    return true;
}

/* 80D5EC00-80D5EC20 000E00 0020+00 1/0 0/0 0/0 .text            daTagQs_Draw__FP9daTagQs_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagQs_Draw(daTagQs_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/daTagQs_Draw__FP9daTagQs_c.s"
}
#pragma pop

/* 80D5EC20-80D5EC40 000E20 0020+00 1/0 0/0 0/0 .text            daTagQs_Execute__FP9daTagQs_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagQs_Execute(daTagQs_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/daTagQs_Execute__FP9daTagQs_c.s"
}
#pragma pop

/* 80D5EC40-80D5EC48 000E40 0008+00 1/0 0/0 0/0 .text            daTagQs_IsDelete__FP9daTagQs_c */
static bool daTagQs_IsDelete(daTagQs_c* param_0) {
    return true;
}

/* 80D5EC48-80D5EC70 000E48 0028+00 1/0 0/0 0/0 .text            daTagQs_Delete__FP9daTagQs_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagQs_Delete(daTagQs_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/daTagQs_Delete__FP9daTagQs_c.s"
}
#pragma pop

/* 80D5EC70-80D5EC90 000E70 0020+00 1/0 0/0 0/0 .text            daTagQs_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagQs_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/daTagQs_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D5EC90-80D5ECD8 000E90 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_qs/d_a_tag_qs/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
