//
// Generated By: dol2asm
// Translation Unit: PPC_EABI/SRC/math_ppc
//

#include "MSL_C.PPCEABI.bare.H/PPC_EABI/SRC/math_ppc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void tanf();
extern "C" void sinf();
extern "C" void cosf();
extern "C" void acosf();

//
// External References:
//

extern "C" void cos();
extern "C" void sin();
extern "C" void tan();
extern "C" void acos();

//
// Declarations:
//

/* 8036C9C4-8036C9E8 367304 0024+00 0/0 2/2 0/0 .text            tanf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void tanf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/PPC_EABI/SRC/math_ppc/tanf.s"
}
#pragma pop

/* 8036C9E8-8036CA0C 367328 0024+00 0/0 4/4 0/0 .text            sinf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void sinf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/PPC_EABI/SRC/math_ppc/sinf.s"
}
#pragma pop

/* 8036CA0C-8036CA30 36734C 0024+00 0/0 4/4 0/0 .text            cosf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cosf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/PPC_EABI/SRC/math_ppc/cosf.s"
}
#pragma pop

/* 8036CA30-8036CA54 367370 0024+00 0/0 1/1 0/0 .text            acosf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void acosf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/PPC_EABI/SRC/math_ppc/acosf.s"
}
#pragma pop
