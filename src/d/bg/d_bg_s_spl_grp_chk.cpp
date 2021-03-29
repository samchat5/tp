//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_spl_grp_chk
//

#include "d/bg/d_bg_s_spl_grp_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cXyz {};

struct dBgS_SplGrpChk {
    /* 80078B90 */ void Set(cXyz&, f32);
    /* 80078BB0 */ dBgS_SplGrpChk();
    /* 80078C78 */ ~dBgS_SplGrpChk();
    /* 80078D0C */ void Init();
};

struct dBgS_Chk {
    /* 8007749C */ dBgS_Chk();
    /* 800774E8 */ ~dBgS_Chk();
    /* 80077560 */ void GetPolyPassChkInfo();
    /* 80077564 */ void GetGrpPassChkInfo();
};

struct cBgS_PolyInfo {
    /* 80268074 */ cBgS_PolyInfo();
    /* 802680B0 */ ~cBgS_PolyInfo();
    /* 80268120 */ void ClearPi();
};

struct cBgS_Chk {
    /* 80267B4C */ cBgS_Chk();
    /* 80267B70 */ ~cBgS_Chk();
};

//
// Forward References:
//

extern "C" void Set__14dBgS_SplGrpChkFR4cXyzf();
extern "C" void __ct__14dBgS_SplGrpChkFv();
extern "C" void __dt__14dBgS_SplGrpChkFv();
extern "C" void Init__14dBgS_SplGrpChkFv();
extern "C" static void func_80078D4C();
extern "C" static void func_80078D54();
extern "C" static void func_80078D5C();

//
// External References:
//

void operator delete(void*);

extern "C" void __ct__8dBgS_ChkFv();
extern "C" void __dt__8dBgS_ChkFv();
extern "C" void GetPolyPassChkInfo__8dBgS_ChkFv();
extern "C" void GetGrpPassChkInfo__8dBgS_ChkFv();
extern "C" void __ct__8cBgS_ChkFv();
extern "C" void __dt__8cBgS_ChkFv();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void __dl__FPv();

//
// Declarations:
//

/* 80078B90-80078BB0 0020+00 s=0 e=2 z=3  None .text      Set__14dBgS_SplGrpChkFR4cXyzf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_SplGrpChk::Set(cXyz& param_0, f32 param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/Set__14dBgS_SplGrpChkFR4cXyzf.s"
}
#pragma pop

/* ############################################################################################## */
/* 803ABA08-803ABA38 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_SplGrpChk */
SECTION_DATA static void* __vt__14dBgS_SplGrpChk[12] = {
    (void*)NULL, (void*)NULL, (void*)__dt__14dBgS_SplGrpChkFv,
    (void*)NULL, (void*)NULL, (void*)func_80078D4C,
    (void*)NULL, (void*)NULL, (void*)func_80078D5C,
    (void*)NULL, (void*)NULL, (void*)func_80078D54,
};

/* 804526E8-804526EC 0004+00 s=1 e=0 z=0  None .sdata2    @319 */
SECTION_SDATA2 static u8 lit_319[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804526EC-804526F0 0004+00 s=1 e=0 z=0  None .sdata2    @320 */
SECTION_SDATA2 static f32 lit_320 = 1000000000.0f;

/* 80078BB0-80078C78 00C8+00 s=0 e=1 z=0  None .text      __ct__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_SplGrpChk::dBgS_SplGrpChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/__ct__14dBgS_SplGrpChkFv.s"
}
#pragma pop

/* 80078C78-80078D0C 0094+00 s=4 e=2 z=4  None .text      __dt__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_SplGrpChk::~dBgS_SplGrpChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/__dt__14dBgS_SplGrpChkFv.s"
}
#pragma pop

/* 80078D0C-80078D4C 0040+00 s=0 e=1 z=0  None .text      Init__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_SplGrpChk::Init() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/Init__14dBgS_SplGrpChkFv.s"
}
#pragma pop

/* 80078D4C-80078D54 0008+00 s=1 e=0 z=0  None .text      @16@__dt__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078D4C() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/func_80078D4C.s"
}
#pragma pop

/* 80078D54-80078D5C 0008+00 s=1 e=0 z=0  None .text      @52@__dt__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078D54() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/func_80078D54.s"
}
#pragma pop

/* 80078D5C-80078D64 0008+00 s=1 e=0 z=0  None .text      @36@__dt__14dBgS_SplGrpChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078D5C() {
    nofralloc
#include "asm/d/bg/d_bg_s_spl_grp_chk/func_80078D5C.s"
}
#pragma pop
