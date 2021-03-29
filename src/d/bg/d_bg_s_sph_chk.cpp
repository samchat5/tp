//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_sph_chk
//

#include "d/bg/d_bg_s_sph_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dBgS_SphChk {
    /* 80078A14 */ dBgS_SphChk();
    /* 80078AC0 */ ~dBgS_SphChk();
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

extern "C" void __ct__11dBgS_SphChkFv();
extern "C" void __dt__11dBgS_SphChkFv();
extern "C" static void func_80078B70();
extern "C" static void func_80078B78();
extern "C" static void func_80078B80();
extern "C" static void func_80078B88();

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
extern "C" extern void* __vt__8cM3dGSph[3];

//
// Declarations:
//

/* ############################################################################################## */
/* 803AB9C8-803ABA08 003C+04 s=2 e=0 z=0  None .data      __vt__11dBgS_SphChk */
SECTION_DATA static void* __vt__11dBgS_SphChk[15 + 1 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__11dBgS_SphChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078B70,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078B78,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078B88,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078B80,
    /* padding */
    NULL,
};

/* 80078A14-80078AC0 00AC+00 s=0 e=1 z=1  None .text      __ct__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_SphChk::dBgS_SphChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/__ct__11dBgS_SphChkFv.s"
}
#pragma pop

/* 80078AC0-80078B70 00B0+00 s=5 e=2 z=0  None .text      __dt__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_SphChk::~dBgS_SphChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/__dt__11dBgS_SphChkFv.s"
}
#pragma pop

/* 80078B70-80078B78 0008+00 s=1 e=0 z=0  None .text      @20@__dt__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078B70() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/func_80078B70.s"
}
#pragma pop

/* 80078B78-80078B80 0008+00 s=1 e=0 z=0  None .text      @36@__dt__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078B78() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/func_80078B78.s"
}
#pragma pop

/* 80078B80-80078B88 0008+00 s=1 e=0 z=0  None .text      @72@__dt__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078B80() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/func_80078B80.s"
}
#pragma pop

/* 80078B88-80078B90 0008+00 s=1 e=0 z=0  None .text      @56@__dt__11dBgS_SphChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078B88() {
    nofralloc
#include "asm/d/bg/d_bg_s_sph_chk/func_80078B88.s"
}
#pragma pop
