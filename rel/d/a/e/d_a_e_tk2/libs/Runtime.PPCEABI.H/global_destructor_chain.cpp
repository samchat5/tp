//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/e/d_a_e_tk2/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
#pragma section ".dtors$10"
__declspec(section ".dtors$10") extern void* const __destroy_global_chain_reference;
extern void* const pad_807BBDA0[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
#pragma section ".dtors$10"
/* 807BBD9C-807BBDA0 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
__declspec(section ".dtors$10") void* const __destroy_global_chain_reference = (void*)
    __destroy_global_chain;

#pragma section ".dtors$15"
/* 807BBDA0-807BBDA8 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_807BBDA0[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 807BBF38-807BBF40 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 807BA4F8-807BA514 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 807BA514-807BA56C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
