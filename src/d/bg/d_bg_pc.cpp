//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_pc
//

#include "d/bg/d_bg_pc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct sBgPc {};

struct dBgPc {
    /* 80074048 */ void setCode(sBgPc&);
};

//
// Forward References:
//

extern "C" void setCode__5dBgPcFR5sBgPc();

//
// External References:
//

//
// Declarations:
//

/* 80074048-80074074 06E988 002C+00 0/0 1/1 0/0 .text            setCode__5dBgPcFR5sBgPc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgPc::setCode(sBgPc& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_pc/setCode__5dBgPcFR5sBgPc.s"
}
#pragma pop
