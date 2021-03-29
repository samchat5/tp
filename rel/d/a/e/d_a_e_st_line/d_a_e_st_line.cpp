//
// Generated By: dol2asm
// Translation Unit: d_a_e_st_line
//

#include "rel/d/a/e/d_a_e_st_line/d_a_e_st_line.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoExt_3DlineMat0_c {
    /* 800125E0 */ void init(u16, u16, int);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_st_line_class {};

struct cXyz {
    /* 807A6F60 */ ~cXyz();
    /* 807A7220 */ cXyz();
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

//
// Forward References:
//

static bool daE_ST_LINE_Draw(e_st_line_class*);
static bool daE_ST_LINE_Execute(e_st_line_class*);
static bool daE_ST_LINE_IsDelete(e_st_line_class*);
static void daE_ST_LINE_Delete(e_st_line_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_ST_LINE_Create(fopAc_ac_c*);

extern "C" static bool daE_ST_LINE_Draw__FP15e_st_line_class();
extern "C" void __dt__4cXyzFv();
extern "C" static bool daE_ST_LINE_Execute__FP15e_st_line_class();
extern "C" static bool daE_ST_LINE_IsDelete__FP15e_st_line_class();
extern "C" static void daE_ST_LINE_Delete__FP15e_st_line_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_ST_LINE_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" extern u8 const lit_3705[4];
extern "C" extern u32 const lit_3706;
extern "C" extern u32 const lit_3735;
extern "C" extern u32 const lit_3759[1 + 1 /* padding */];
extern "C" extern u8 const lit_3938[8];
extern "C" extern u8 const lit_3939[8];
extern "C" extern u8 const lit_3940[8];
extern "C" extern u32 const lit_3942;
extern "C" extern u32 const lit_3943;
extern "C" extern u32 const lit_3944;
extern "C" extern u32 const lit_3945;
extern "C" extern u32 const lit_3946;
extern "C" extern u32 const lit_3947;
extern "C" extern u32 const lit_4003;
extern "C" extern u32 const lit_4004;
extern "C" extern u32 const lit_4070;
extern "C" extern u32 const lit_4071;
extern "C" extern u32 const lit_4072;
extern "C" extern u32 const lit_4073;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_ST_LINE[12];

//
// External References:
//

void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void cM_rndF(f32);
void cM_rndFX(f32);
void operator delete(void*);

extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* 807A6F58-807A6F60 0008+00 s=1 e=0 z=0  None .text      daE_ST_LINE_Draw__FP15e_st_line_class */
static bool daE_ST_LINE_Draw(e_st_line_class* param_0) {
    return true;
}

/* 807A6F60-807A6F9C 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_st_line/d_a_e_st_line/__dt__4cXyzFv.s"
}
#pragma pop

/* 807A6F9C-807A6FA4 0008+00 s=2 e=0 z=0  None .text      daE_ST_LINE_Execute__FP15e_st_line_class
 */
static bool daE_ST_LINE_Execute(e_st_line_class* param_0) {
    return true;
}

/* 807A6FA4-807A6FAC 0008+00 s=1 e=0 z=0  None .text      daE_ST_LINE_IsDelete__FP15e_st_line_class
 */
static bool daE_ST_LINE_IsDelete(e_st_line_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 807A722C-807A7230 0004+00 s=1 e=0 z=0  None .rodata    @3704 */
SECTION_RODATA static u32 const lit_3704 = 0x428C0000;

/* 807A7230-807A7234 0004+00 s=0 e=0 z=0  None .rodata    @3705 */
SECTION_RODATA u8 const lit_3705[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 807A7234-807A7238 0004+00 s=0 e=0 z=0  None .rodata    @3706 */
SECTION_RODATA u32 const lit_3706 = 0x42C80000;

/* 807A7238-807A723C 0004+00 s=0 e=0 z=0  None .rodata    @3735 */
SECTION_RODATA u32 const lit_3735 = 0x41200000;

/* 807A723C-807A7244 0004+04 s=0 e=0 z=0  None .rodata    @3759 */
SECTION_RODATA u32 const lit_3759[1 + 1 /* padding */] = {
    0x44B48000,
    /* padding */
    0x00000000,
};

/* 807A7244-807A724C 0008+00 s=0 e=0 z=0  None .rodata    @3938 */
SECTION_RODATA u8 const lit_3938[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807A724C-807A7254 0008+00 s=0 e=0 z=0  None .rodata    @3939 */
SECTION_RODATA u8 const lit_3939[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807A7254-807A725C 0008+00 s=0 e=0 z=0  None .rodata    @3940 */
SECTION_RODATA u8 const lit_3940[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 807A725C-807A7260 0004+00 s=1 e=0 z=0  None .rodata    @3941 */
SECTION_RODATA static u32 const lit_3941 = 0x41A00000;

/* 807A7260-807A7264 0004+00 s=0 e=0 z=0  None .rodata    @3942 */
SECTION_RODATA u32 const lit_3942 = 0x40A00000;

/* 807A7264-807A7268 0004+00 s=0 e=0 z=0  None .rodata    @3943 */
SECTION_RODATA u32 const lit_3943 = 0x40800000;

/* 807A7268-807A726C 0004+00 s=0 e=0 z=0  None .rodata    @3944 */
SECTION_RODATA u32 const lit_3944 = 0x42200000;

/* 807A726C-807A7270 0004+00 s=0 e=0 z=0  None .rodata    @3945 */
SECTION_RODATA u32 const lit_3945 = 0x42480000;

/* 807A7270-807A7274 0004+00 s=0 e=0 z=0  None .rodata    @3946 */
SECTION_RODATA u32 const lit_3946 = 0x459C4000;

/* 807A7274-807A7278 0004+00 s=0 e=0 z=0  None .rodata    @3947 */
SECTION_RODATA u32 const lit_3947 = 0x3F800000;

/* 807A7278-807A727C 0004+00 s=0 e=0 z=0  None .rodata    @4003 */
SECTION_RODATA u32 const lit_4003 = 0x3C75C28F;

/* 807A727C-807A7280 0004+00 s=0 e=0 z=0  None .rodata    @4004 */
SECTION_RODATA u32 const lit_4004 = 0x3BA3D70A;

/* 807A7280-807A7284 0004+00 s=1 e=0 z=0  None .rodata    @4069 */
SECTION_RODATA static u32 const lit_4069 = 0x3E99999A;

/* 807A7284-807A7288 0004+00 s=0 e=0 z=0  None .rodata    @4070 */
SECTION_RODATA u32 const lit_4070 = 0x447A0000;

/* 807A7288-807A728C 0004+00 s=0 e=0 z=0  None .rodata    @4071 */
SECTION_RODATA u32 const lit_4071 = 0x3E4CCCCD;

/* 807A728C-807A7290 0004+00 s=0 e=0 z=0  None .rodata    @4072 */
SECTION_RODATA u32 const lit_4072 = 0x42700000;

/* 807A7290-807A7294 0004+00 s=0 e=0 z=0  None .rodata    @4073 */
SECTION_RODATA u32 const lit_4073 = 0x3F000000;

/* 807A7294-807A7298 0004+00 s=1 e=0 z=0  None .rodata    @4169 */
SECTION_RODATA static u32 const lit_4169 = 0x477FFF00;

/* 807A7298-807A729C 0004+00 s=1 e=0 z=0  None .rodata    @4170 */
SECTION_RODATA static u32 const lit_4170 = 0x432A0000;

/* 807A729C-807A72A1 0005+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_807A729C = "E_st";
#pragma pop

/* 807A6FAC-807A7008 005C+00 s=1 e=0 z=0  None .text      daE_ST_LINE_Delete__FP15e_st_line_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_ST_LINE_Delete(e_st_line_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_st_line/d_a_e_st_line/daE_ST_LINE_Delete__FP15e_st_line_class.s"
}
#pragma pop

/* 807A7008-807A707C 0074+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_st_line/d_a_e_st_line/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 807A72A4-807A72C4 0020+00 s=1 e=0 z=0  None .data      l_daE_ST_LINE_Method */
SECTION_DATA static void* l_daE_ST_LINE_Method[8] = {
    (void*)daE_ST_LINE_Create__FP10fopAc_ac_c,
    (void*)daE_ST_LINE_Delete__FP15e_st_line_class,
    (void*)daE_ST_LINE_Execute__FP15e_st_line_class,
    (void*)daE_ST_LINE_IsDelete__FP15e_st_line_class,
    (void*)daE_ST_LINE_Draw__FP15e_st_line_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807A72C4-807A72F4 0030+00 s=0 e=0 z=1  None .data      g_profile_E_ST_LINE */
SECTION_DATA void* g_profile_E_ST_LINE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01C00000, (void*)&g_fpcLf_Method,
    (void*)0x00000CF8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00850000, (void*)&l_daE_ST_LINE_Method,
    (void*)0x00044000, (void*)0x020E0000,
};

/* 807A72F4-807A7308 0014+00 s=1 e=0 z=0  None .data      __vt__18mDoExt_3DlineMat_c */
SECTION_DATA static void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 807A707C-807A7220 01A4+00 s=1 e=0 z=0  None .text      daE_ST_LINE_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_ST_LINE_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_st_line/d_a_e_st_line/daE_ST_LINE_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807A7220-807A7224 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}
