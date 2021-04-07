//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/abort_exit
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void exit();
extern "C" void abort();
extern "C" extern u8 data_804519A0[8];

//
// External References:
//

extern "C" void _ExitProcess();
extern "C" void __destroy_global_chain();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();
extern "C" void __kill_critical_regions();
extern "C" void raise();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* ############################################################################################## */
/* 8044D440-8044D540 07A160 0100+00 2/2 0/0 0/0 .bss             __atexit_funcs */
static u8 __atexit_funcs[256];

/* 80451990-80451994 000E90 0004+00 2/2 0/0 0/0 .sbss            __aborting */
static u8 __aborting[4];

/* 80451994-80451998 000E94 0004+00 2/2 0/0 0/0 .sbss            __atexit_curr_func */
static u8 __atexit_curr_func[4];

/* 80451998-8045199C 000E98 0004+00 1/1 1/1 0/0 .sbss            __stdio_exit */
extern u8 __stdio_exit[4];
u8 __stdio_exit[4];

/* 8045199C-804519A0 000E9C 0004+00 2/2 0/0 0/0 .sbss            __console_exit */
static u8 __console_exit[4];

/* 803629CC-80362ABC 35D30C 00F0+00 0/0 2/2 0/0 .text            exit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void exit() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit/exit.s"
}
#pragma pop

/* 80362ABC-80362B58 35D3FC 009C+00 0/0 9/9 0/0 .text            abort */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void abort() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit/abort.s"
}
#pragma pop

/* ############################################################################################## */
/* 804519A0-804519A8 000EA0 0008+00 0/0 1/1 0/0 .sbss            None */
extern u8 data_804519A0[8];
u8 data_804519A0[8];
