//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/b/d_a_b_zant_magic/executor.h"
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
extern u8 const data_80650494[4];
extern u8 const data_80650498[4];

//
// Declarations:
//

/* 8064F700-8064F72C 002C+00 s=0 e=0 z=0  None .text      _prolog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_magic/executor/_prolog.s"
}
#pragma pop

/* 8064F72C-8064F758 002C+00 s=0 e=0 z=0  None .text      _epilog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_magic/executor/_epilog.s"
}
#pragma pop

/* 8064F758-8064F778 0020+00 s=0 e=0 z=0  None .text      _unresolved */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant_magic/executor/_unresolved.s"
}
#pragma pop
