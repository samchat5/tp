//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/npc/d_a_npc_bans/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
#pragma section ".dtors$10"
__declspec(section ".dtors$10") extern void* const __destroy_global_chain_reference;
extern void* const pad_80967E18[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
#pragma section ".dtors$10"
/* 80967E14-80967E18 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
__declspec(section ".dtors$10") void* const __destroy_global_chain_reference = (void*)
    __destroy_global_chain;

#pragma section ".dtors$15"
/* 80967E18-80967E20 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_80967E18[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 80968850-80968858 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 80962858-80962874 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_bans/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 80962874-809628CC 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_bans/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
