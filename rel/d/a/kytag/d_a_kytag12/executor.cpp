//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/kytag/d_a_kytag12/executor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

//
// External References:
//

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern u8 const data_8085EEF8[4];
extern u8 const data_8085EEFC[4];

//
// Declarations:
//

/* 8085BAC0-8085BAEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_prolog.s"
}
#pragma pop

/* 8085BAEC-8085BB18 002C+00 s=0 e=0 z=0  None .text      _epilog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_epilog.s"
}
#pragma pop

/* 8085BB18-8085BB38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_unresolved.s"
}
#pragma pop
