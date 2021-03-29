//
// Generated By: dol2asm
// Translation Unit: GXBump
//

#include "dolphin/gx/GXBump.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void GXSetTevIndirect();
extern "C" void GXSetIndTexMtx();
extern "C" void GXSetIndTexCoordScale();
extern "C" void GXSetIndTexOrder();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevDirect();
extern "C" void __GXUpdateBPMask();
extern "C" void __GXSetIndirectMask();
extern "C" void __GXFlushTextureState();

//
// External References:
//

extern "C" extern void* __GXData;

//
// Declarations:
//

/* 8035ECC0-8035ED2C 006C+00 s=1 e=3 z=0  None .text      GXSetTevIndirect */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetTevIndirect() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetTevIndirect.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456610-80456618 0004+04 s=1 e=0 z=0  None .sdata2    @149 */
SECTION_SDATA2 static f32 lit_149[1 + 1 /* padding */] = {
    1024.0f,
    /* padding */
    0.0f,
};

/* 8035ED2C-8035EEA4 0178+00 s=0 e=4 z=1  None .text      GXSetIndTexMtx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetIndTexMtx() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetIndTexMtx.s"
}
#pragma pop

/* 8035EEA4-8035EFE8 0144+00 s=0 e=5 z=0  None .text      GXSetIndTexCoordScale */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetIndTexCoordScale() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetIndTexCoordScale.s"
}
#pragma pop

/* 8035EFE8-8035F0D4 00EC+00 s=0 e=3 z=0  None .text      GXSetIndTexOrder */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetIndTexOrder() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetIndTexOrder.s"
}
#pragma pop

/* 8035F0D4-8035F0F8 0024+00 s=0 e=43 z=7  None .text      GXSetNumIndStages */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetNumIndStages() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetNumIndStages.s"
}
#pragma pop

/* 8035F0F8-8035F140 0048+00 s=0 e=16 z=0  None .text      GXSetTevDirect */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetTevDirect() {
    nofralloc
#include "asm/dolphin/gx/GXBump/GXSetTevDirect.s"
}
#pragma pop

/* 8035F140-8035F144 0004+00 s=0 e=2 z=0  None .text      __GXUpdateBPMask */
extern "C" void __GXUpdateBPMask() {
    /* empty function */
}

/* 8035F144-8035F174 0030+00 s=0 e=1 z=0  None .text      __GXSetIndirectMask */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __GXSetIndirectMask() {
    nofralloc
#include "asm/dolphin/gx/GXBump/__GXSetIndirectMask.s"
}
#pragma pop

/* 8035F174-8035F198 0024+00 s=0 e=4 z=0  None .text      __GXFlushTextureState */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __GXFlushTextureState() {
    nofralloc
#include "asm/dolphin/gx/GXBump/__GXFlushTextureState.s"
}
#pragma pop
