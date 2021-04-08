//
// Generated By: dol2asm
// Translation Unit: d_a_tag_evtarea
//

#include "rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct daTag_EvtArea_c {
    /* 8048C4F8 */ void create();
    /* 8048C728 */ bool Delete();
    /* 8048C730 */ void Execute();
    /* 8048C894 */ bool Draw();
    /* 8048C89C */ void isDelete();
    /* 8048CD08 */ void chkPointInArea(cXyz);
    /* 8048C94C */ void chkPointInArea(cXyz, cXyz);
    /* 8048CD68 */ ~daTag_EvtArea_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

extern "C" void create__15daTag_EvtArea_cFv();
extern "C" bool Delete__15daTag_EvtArea_cFv();
extern "C" void Execute__15daTag_EvtArea_cFv();
extern "C" bool Draw__15daTag_EvtArea_cFv();
extern "C" void isDelete__15daTag_EvtArea_cFv();
extern "C" void chkPointInArea__15daTag_EvtArea_cF4cXyz4cXyz();
extern "C" static void daTag_EvtArea_Create__FPv();
extern "C" static void daTag_EvtArea_Delete__FPv();
extern "C" static void daTag_EvtArea_Execute__FPv();
extern "C" static void daTag_EvtArea_Draw__FPv();
extern "C" static bool daTag_EvtArea_IsDelete__FPv();
extern "C" void chkPointInArea__15daTag_EvtArea_cF4cXyz();
extern "C" void __dt__15daTag_EvtArea_cFv();

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void daNpcT_chkPointInArea__F4cXyz4cXyz4cXyzsi();
extern "C" void daNpcT_chkEvtBit__FUl();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSubtract();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8048CDD0-8048CDD4 000000 0004+00 2/2 0/0 0/0 .rodata          @3853 */
SECTION_RODATA static f32 const lit_3853 = 100.0f;
COMPILER_STRIP_GATE(8048CDD0, &lit_3853);

/* 8048CDE8-8048CE48 -00001 0060+00 1/1 0/0 0/0 .data            @3857 */
SECTION_DATA static void* lit_3857[24] = {
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x88),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0xB4),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0xE0),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x10C),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x154),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x154),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x154),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x154),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x154),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x180),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x1A0),
    (void*)(((char*)create__15daTag_EvtArea_cFv) + 0x1A0),
};

/* 8048CE48-8048CE68 -00001 0020+00 1/0 0/0 0/0 .data            daTag_EvtArea_MethodTable */
SECTION_DATA static void* daTag_EvtArea_MethodTable[8] = {
    (void*)daTag_EvtArea_Create__FPv,
    (void*)daTag_EvtArea_Delete__FPv,
    (void*)daTag_EvtArea_Execute__FPv,
    (void*)daTag_EvtArea_IsDelete__FPv,
    (void*)daTag_EvtArea_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048CE68-8048CE98 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_EVTAREA */
SECTION_DATA extern void* g_profile_TAG_EVTAREA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02E90000, (void*)&g_fpcLf_Method,
    (void*)0x00000570, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x011F0000, (void*)&daTag_EvtArea_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 8048CE98-8048CEA4 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__15daTag_EvtArea_c */
SECTION_DATA extern void* __vt__15daTag_EvtArea_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daTag_EvtArea_cFv,
};

/* 8048C4F8-8048C728 000078 0230+00 2/1 0/0 0/0 .text            create__15daTag_EvtArea_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtArea_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/create__15daTag_EvtArea_cFv.s"
}
#pragma pop

/* 8048C728-8048C730 0002A8 0008+00 1/1 0/0 0/0 .text            Delete__15daTag_EvtArea_cFv */
bool daTag_EvtArea_c::Delete() {
    return true;
}

/* 8048C730-8048C894 0002B0 0164+00 1/1 0/0 0/0 .text            Execute__15daTag_EvtArea_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtArea_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/Execute__15daTag_EvtArea_cFv.s"
}
#pragma pop

/* 8048C894-8048C89C 000414 0008+00 1/1 0/0 0/0 .text            Draw__15daTag_EvtArea_cFv */
bool daTag_EvtArea_c::Draw() {
    return true;
}

/* 8048C89C-8048C94C 00041C 00B0+00 2/2 0/0 0/0 .text            isDelete__15daTag_EvtArea_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtArea_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/isDelete__15daTag_EvtArea_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048CDD4-8048CDD8 000004 0004+00 0/0 0/0 0/0 .rodata          @3854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3854 = 200.0f;
COMPILER_STRIP_GATE(8048CDD4, &lit_3854);
#pragma pop

/* 8048CDD8-8048CDDC 000008 0004+00 0/0 0/0 0/0 .rodata          @3855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3855 = 0.5f;
COMPILER_STRIP_GATE(8048CDD8, &lit_3855);
#pragma pop

/* 8048CDDC-8048CDE0 00000C 0004+00 0/0 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3856 = 1000.0f;
COMPILER_STRIP_GATE(8048CDDC, &lit_3856);
#pragma pop

/* 8048CDE0-8048CDE4 000010 0004+00 1/1 0/0 0/0 .rodata          @3922 */
SECTION_RODATA static u8 const lit_3922[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(8048CDE0, &lit_3922);

/* 8048CDE4-8048CDE8 000014 0004+00 1/1 0/0 0/0 .rodata          @4146 */
SECTION_RODATA static f32 const lit_4146 = 10.0f;
COMPILER_STRIP_GATE(8048CDE4, &lit_4146);

/* 8048C94C-8048CC80 0004CC 0334+00 1/1 0/0 16/16 .text
 * chkPointInArea__15daTag_EvtArea_cF4cXyz4cXyz                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtArea_c::chkPointInArea(cXyz param_0, cXyz param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/chkPointInArea__15daTag_EvtArea_cF4cXyz4cXyz.s"
}
#pragma pop

/* 8048CC80-8048CCA0 000800 0020+00 1/0 0/0 0/0 .text            daTag_EvtArea_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_EvtArea_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/daTag_EvtArea_Create__FPv.s"
}
#pragma pop

/* 8048CCA0-8048CCC0 000820 0020+00 1/0 0/0 0/0 .text            daTag_EvtArea_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_EvtArea_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/daTag_EvtArea_Delete__FPv.s"
}
#pragma pop

/* 8048CCC0-8048CCE0 000840 0020+00 1/0 0/0 0/0 .text            daTag_EvtArea_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_EvtArea_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/daTag_EvtArea_Execute__FPv.s"
}
#pragma pop

/* 8048CCE0-8048CD00 000860 0020+00 1/0 0/0 0/0 .text            daTag_EvtArea_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_EvtArea_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/daTag_EvtArea_Draw__FPv.s"
}
#pragma pop

/* 8048CD00-8048CD08 000880 0008+00 1/0 0/0 0/0 .text            daTag_EvtArea_IsDelete__FPv */
static bool daTag_EvtArea_IsDelete(void* param_0) {
    return true;
}

/* 8048CD08-8048CD68 000888 0060+00 1/1 0/0 0/0 .text chkPointInArea__15daTag_EvtArea_cF4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtArea_c::chkPointInArea(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/chkPointInArea__15daTag_EvtArea_cF4cXyz.s"
}
#pragma pop

/* 8048CD68-8048CDC8 0008E8 0060+00 1/0 0/0 0/0 .text            __dt__15daTag_EvtArea_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_EvtArea_c::~daTag_EvtArea_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/d_a_tag_evtarea/__dt__15daTag_EvtArea_cFv.s"
}
#pragma pop
