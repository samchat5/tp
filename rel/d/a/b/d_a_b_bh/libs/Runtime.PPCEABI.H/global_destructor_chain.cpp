//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/b/d_a_b_bh/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
#pragma section ".dtors$10"
__declspec(section ".dtors$10") extern void* const __destroy_global_chain_reference;
extern void* const pad_805B3138[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
#pragma section ".dtors$10"
/* 805B3134-805B3138 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
__declspec(section ".dtors$10") void* const __destroy_global_chain_reference = (void*)
    __destroy_global_chain;

#pragma section ".dtors$15"
/* 805B3138-805B3140 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_805B3138[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 805B33A8-805B33B0 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 805AE1F8-805AE214 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 805AE214-805AE26C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_bh/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
