//
// Generated By: dol2asm
// Translation Unit: GFTev
//

#include "dolphin/gf/GFTev.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXTevRegID {};

struct _GXColorS10 {};

//
// Forward References:
//

extern "C" void GFSetTevColorS10__F11_GXTevRegID11_GXColorS10();

//
// External References:
//

//
// Declarations:
//

/* 802CE0D0-802CE138 2C8A10 0068+00 0/0 0/0 1/1 .text
 * GFSetTevColorS10__F11_GXTevRegID11_GXColorS10                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GFSetTevColorS10(_GXTevRegID param_0, _GXColorS10 param_1) {
    nofralloc
#include "asm/dolphin/gf/GFTev/GFSetTevColorS10__F11_GXTevRegID11_GXColorS10.s"
}
#pragma pop
