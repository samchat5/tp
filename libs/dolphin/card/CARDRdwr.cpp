//
// Generated By: dol2asm
// Translation Unit: CARDRdwr
//

#include "dolphin/card/CARDRdwr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void BlockReadCallback();
extern "C" void __CARDRead();
extern "C" static void BlockWriteCallback();
extern "C" void __CARDWrite();

//
// External References:
//

extern "C" void __CARDReadSegment();
extern "C" void __CARDWritePage();
extern "C" void __CARDPutControlBlock();
extern "C" extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 80355184-80355260 00DC+00 s=1 e=0 z=0  None .text      BlockReadCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void BlockReadCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/BlockReadCallback.s"
}
#pragma pop

/* 80355260-803552C4 0064+00 s=0 e=3 z=0  None .text      __CARDRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __CARDRead() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/__CARDRead.s"
}
#pragma pop

/* 803552C4-803553AC 00E8+00 s=1 e=0 z=0  None .text      BlockWriteCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void BlockWriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/BlockWriteCallback.s"
}
#pragma pop

/* 803553AC-80355414 0068+00 s=0 e=4 z=0  None .text      __CARDWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __CARDWrite() {
    nofralloc
#include "asm/dolphin/card/CARDRdwr/__CARDWrite.s"
}
#pragma pop
