//
// Generated By: dol2asm
// Translation Unit: d_a_tag_spinner
//

#include "rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {};

struct dPath {};

struct daTagSppath_c {
    /* 80D62024 */ void getNearPathPos(cXyz*, dPath*);
};

struct daTagSpinner_c {
    /* 80D618A4 */ void initBaseMtx();
    /* 80D618C4 */ void setBaseMtx();
    /* 80D6191C */ void Create();
    /* 80D6196C */ bool CreateHeap();
    /* 80D61974 */ void create();
    /* 80D61A00 */ void execute();
    /* 80D61AB4 */ bool _delete();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
};

//
// Forward References:
//

static void CheckCreateHeap(fopAc_ac_c*);
static void search_spinner_sub(void*, void*);
static void daTagSpinner_Execute(daTagSpinner_c*);
static void daTagSpinner_Delete(daTagSpinner_c*);
static void daTagSpinner_Create(fopAc_ac_c*);

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" static void search_spinner_sub__FPvPv();
extern "C" void initBaseMtx__14daTagSpinner_cFv();
extern "C" void setBaseMtx__14daTagSpinner_cFv();
extern "C" void Create__14daTagSpinner_cFv();
extern "C" bool CreateHeap__14daTagSpinner_cFv();
extern "C" void create__14daTagSpinner_cFv();
extern "C" void execute__14daTagSpinner_cFv();
extern "C" bool _delete__14daTagSpinner_cFv();
extern "C" static void daTagSpinner_Execute__FP14daTagSpinner_c();
extern "C" static void daTagSpinner_Delete__FP14daTagSpinner_c();
extern "C" static void daTagSpinner_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_Tag_Spinner[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void fopAc_IsActor(void*);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" void getNearPathPos__13daTagSppath_cFP4cXyzP5dPath();

//
// Declarations:
//

/* 80D616F8-80D61718 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D61B24-80D61B2C 0004+04 s=1 e=0 z=0  None .rodata    @3689 */
SECTION_RODATA static u8 const lit_3689[4 + 4 /* padding */] = {
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

/* 80D61B2C-80D61B34 0008+00 s=1 e=0 z=0  None .rodata    @3690 */
SECTION_RODATA static u8 const lit_3690[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D61B34-80D61B3C 0008+00 s=1 e=0 z=0  None .rodata    @3691 */
SECTION_RODATA static u8 const lit_3691[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D61B3C-80D61B44 0008+00 s=1 e=0 z=0  None .rodata    @3692 */
SECTION_RODATA static u8 const lit_3692[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D61718-80D618A4 018C+00 s=1 e=0 z=0  None .text      search_spinner_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void search_spinner_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/search_spinner_sub__FPvPv.s"
}
#pragma pop

/* 80D618A4-80D618C4 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__14daTagSpinner_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpinner_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/initBaseMtx__14daTagSpinner_cFv.s"
}
#pragma pop

/* 80D618C4-80D6191C 0058+00 s=1 e=0 z=0  None .text      setBaseMtx__14daTagSpinner_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpinner_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/setBaseMtx__14daTagSpinner_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D61B44-80D61B48 0004+00 s=1 e=0 z=0  None .rodata    @3715 */
SECTION_RODATA static u32 const lit_3715 = 0x42C80000;

/* 80D6191C-80D6196C 0050+00 s=1 e=0 z=0  None .text      Create__14daTagSpinner_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpinner_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/Create__14daTagSpinner_cFv.s"
}
#pragma pop

/* 80D6196C-80D61974 0008+00 s=1 e=0 z=0  None .text      CreateHeap__14daTagSpinner_cFv */
bool daTagSpinner_c::CreateHeap() {
    return true;
}

/* 80D61974-80D61A00 008C+00 s=1 e=0 z=0  None .text      create__14daTagSpinner_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpinner_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/func_80D61974.s"
}
#pragma pop

/* 80D61A00-80D61AB4 00B4+00 s=1 e=0 z=0  None .text      execute__14daTagSpinner_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpinner_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/execute__14daTagSpinner_cFv.s"
}
#pragma pop

/* 80D61AB4-80D61ABC 0008+00 s=1 e=0 z=0  None .text      _delete__14daTagSpinner_cFv */
bool daTagSpinner_c::_delete() {
    return true;
}

/* 80D61ABC-80D61ADC 0020+00 s=1 e=0 z=0  None .text      daTagSpinner_Execute__FP14daTagSpinner_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpinner_Execute(daTagSpinner_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/daTagSpinner_Execute__FP14daTagSpinner_c.s"
}
#pragma pop

/* 80D61ADC-80D61AFC 0020+00 s=1 e=0 z=0  None .text      daTagSpinner_Delete__FP14daTagSpinner_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpinner_Delete(daTagSpinner_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/daTagSpinner_Delete__FP14daTagSpinner_c.s"
}
#pragma pop

/* 80D61AFC-80D61B1C 0020+00 s=1 e=0 z=0  None .text      daTagSpinner_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpinner_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/d_a_tag_spinner/daTagSpinner_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D61B48-80D61B68 0020+00 s=1 e=0 z=0  None .data      l_daTagSpinner_Method */
SECTION_DATA static void* l_daTagSpinner_Method[8] = {
    (void*)daTagSpinner_Create__FP10fopAc_ac_c,
    (void*)daTagSpinner_Delete__FP14daTagSpinner_c,
    (void*)daTagSpinner_Execute__FP14daTagSpinner_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D61B68-80D61B98 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Spinner */
SECTION_DATA void* g_profile_Tag_Spinner[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00C30000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x025D0000, (void*)&l_daTagSpinner_Method,
    (void*)0x00040100, (void*)0x000E0000,
};
