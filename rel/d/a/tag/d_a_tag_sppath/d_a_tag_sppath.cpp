//
// Generated By: dol2asm
// Translation Unit: d_a_tag_sppath
//

#include "rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath.h"
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
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266F48 */ void normalizeZP();
};

struct dPath {};

struct daTagSppath_c {
    /* 80D61C18 */ void create();
    /* 80D61EC4 */ ~daTagSppath_c();
    /* 80D62024 */ void getNearPathPos(cXyz*, dPath*);
    /* 80D629C0 */ void execute();
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
    /* 80D61DB8 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGLin {
    /* 8026F31C */ void SetStartEnd(Vec const&, Vec const&);
    /* 80D62978 */ ~cM3dGLin();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 80D61E14 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D61E5C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80D62BC8 */ ~cCcD_GStts();
};

//
// Forward References:
//

static void daTagSppath_Create(fopAc_ac_c*);
static void daTagSppath_Delete(daTagSppath_c*);
static void daTagSppath_Execute(daTagSppath_c*);
static bool daTagSppath_Draw(daTagSppath_c*);

extern "C" void create__13daTagSppath_cFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daTagSppath_Create__FP10fopAc_ac_c();
extern "C" void __dt__13daTagSppath_cFv();
extern "C" static void daTagSppath_Delete__FP13daTagSppath_c();
extern "C" void getNearPathPos__13daTagSppath_cFP4cXyzP5dPath();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void execute__13daTagSppath_cFv();
extern "C" static void daTagSppath_Execute__FP13daTagSppath_c();
extern "C" static bool daTagSppath_Draw__FP13daTagSppath_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Tag_Sppath[12];

//
// External References:
//

void dPath_GetRoomPath(int, int);
void dPath_GetNextRoomPath(dPath const*, int);
void cM3d_Len3dSqPntAndSegLine(cM3dGLin const*, Vec const*, Vec*, f32*);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_max;

//
// Declarations:
//

/* ############################################################################################## */
/* 80D62C18-80D62C1C 0004+00 s=2 e=0 z=0  None .rodata    @3694 */
SECTION_RODATA static u32 const lit_3694 = 0x44160000;

/* 80D62C1C-80D62C20 0004+00 s=1 e=0 z=0  None .rodata    @3695 */
SECTION_RODATA static u32 const lit_3695 = 0x42C80000;

/* 80D62C20-80D62C28 0004+04 s=1 e=0 z=0  None .rodata    @4100 */
SECTION_RODATA static u8 const lit_4100[4 + 4 /* padding */] = {
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

/* 80D62C28-80D62C30 0008+00 s=1 e=0 z=0  None .rodata    @4101 */
SECTION_RODATA static u8 const lit_4101[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D62C30-80D62C38 0008+00 s=1 e=0 z=0  None .rodata    @4102 */
SECTION_RODATA static u8 const lit_4102[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D62C38-80D62C40 0008+00 s=1 e=0 z=0  None .rodata    @4103 */
SECTION_RODATA static u8 const lit_4103[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D62C40-80D62C44 0004+00 s=1 e=0 z=0  None .rodata    @4104 */
SECTION_RODATA static u32 const lit_4104 = 0x3A83126F;

/* 80D62C44-80D62C48 0004+00 s=1 e=0 z=0  None .rodata    @4105 */
SECTION_RODATA static u32 const lit_4105 = 0x41F00000;

/* 80D62C48-80D62C4C 0004+00 s=1 e=0 z=0  None .rodata    @4167 */
SECTION_RODATA static u32 const lit_4167 = 0x3F000000;

/* 80D62C4C-80D62C54 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D62C4C = "D_MN10A";
#pragma pop

/* 80D62C54-80D62C98 0044+00 s=1 e=0 z=0  None .data      l_cylSrc */
SECTION_DATA static u8 l_cylSrc[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};

/* 80D62C98-80D62CB8 0020+00 s=1 e=0 z=0  None .data      l_daTagSppath_Method */
SECTION_DATA static void* l_daTagSppath_Method[8] = {
    (void*)daTagSppath_Create__FP10fopAc_ac_c,
    (void*)daTagSppath_Delete__FP13daTagSppath_c,
    (void*)daTagSppath_Execute__FP13daTagSppath_c,
    (void*)NULL,
    (void*)daTagSppath_Draw__FP13daTagSppath_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D62CB8-80D62CE8 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Sppath */
SECTION_DATA void* g_profile_Tag_Sppath[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C60000, (void*)&g_fpcLf_Method,
    (void*)0x000006F4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01020000, (void*)&l_daTagSppath_Method,
    (void*)0x00044000, (void*)0x030E0000,
};

/* 80D62CE8-80D62CF4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGLin */
SECTION_DATA static void* __vt__8cM3dGLin[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80D62CF4-80D62D00 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D62D00-80D62D0C 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D62D0C-80D62D18 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D62D18-80D62D24 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D61C18-80D61DB8 01A0+00 s=1 e=0 z=0  None .text      create__13daTagSppath_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSppath_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/create__13daTagSppath_cFv.s"
}
#pragma pop

/* 80D61DB8-80D61E14 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D61E14-80D61E5C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D61E5C-80D61EA4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D61EA4-80D61EC4 0020+00 s=1 e=0 z=0  None .text      daTagSppath_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSppath_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/daTagSppath_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D61EC4-80D61FFC 0138+00 s=1 e=0 z=0  None .text      __dt__13daTagSppath_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagSppath_c::~daTagSppath_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__13daTagSppath_cFv.s"
}
#pragma pop

/* 80D61FFC-80D62024 0028+00 s=1 e=0 z=0  None .text      daTagSppath_Delete__FP13daTagSppath_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSppath_Delete(daTagSppath_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/daTagSppath_Delete__FP13daTagSppath_c.s"
}
#pragma pop

/* 80D62024-80D62978 0954+00 s=1 e=0 z=1  None .text getNearPathPos__13daTagSppath_cFP4cXyzP5dPath
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSppath_c::getNearPathPos(cXyz* param_0, dPath* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/getNearPathPos__13daTagSppath_cFP4cXyzP5dPath.s"
}
#pragma pop

/* 80D62978-80D629C0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGLinFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__8cM3dGLinFv.s"
}
#pragma pop

/* 80D629C0-80D62BA0 01E0+00 s=1 e=0 z=0  None .text      execute__13daTagSppath_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSppath_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/execute__13daTagSppath_cFv.s"
}
#pragma pop

/* 80D62BA0-80D62BC0 0020+00 s=1 e=0 z=0  None .text      daTagSppath_Execute__FP13daTagSppath_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSppath_Execute(daTagSppath_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/daTagSppath_Execute__FP13daTagSppath_c.s"
}
#pragma pop

/* 80D62BC0-80D62BC8 0008+00 s=1 e=0 z=0  None .text      daTagSppath_Draw__FP13daTagSppath_c */
static bool daTagSppath_Draw(daTagSppath_c* param_0) {
    return true;
}

/* 80D62BC8-80D62C10 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_sppath/d_a_tag_sppath/__dt__10cCcD_GSttsFv.s"
}
#pragma pop
