//
// Generated By: dol2asm
// Translation Unit: CARDWrite
//

#include "dolphin/card/CARDWrite.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void WriteCallback();
extern "C" static void EraseCallback();
extern "C" static void CARDWriteAsync();
extern "C" void CARDWrite();

//
// External References:
//

extern "C" void DCStoreRange();
extern "C" void OSGetTime();
extern "C" void __CARDDefaultApiCallback();
extern "C" void __CARDSyncCallback();
extern "C" void __CARDEraseSector();
extern "C" void __CARDPutControlBlock();
extern "C" void __CARDSync();
extern "C" void __CARDWrite();
extern "C" void __CARDGetFatBlock();
extern "C" void __CARDGetDirBlock();
extern "C" void __CARDUpdateDir();
extern "C" void __CARDIsWritable();
extern "C" void __CARDSeek();
extern "C" void __div2i();
extern "C" extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 80358914-80358A84 353254 0170+00 1/1 0/0 0/0 .text            WriteCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void WriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDWrite/WriteCallback.s"
}
#pragma pop

/* 80358A84-80358B34 3533C4 00B0+00 2/2 0/0 0/0 .text            EraseCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void EraseCallback() {
    nofralloc
#include "asm/dolphin/card/CARDWrite/EraseCallback.s"
}
#pragma pop

/* 80358B34-80358C48 353474 0114+00 1/1 0/0 0/0 .text            CARDWriteAsync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CARDWriteAsync() {
    nofralloc
#include "asm/dolphin/card/CARDWrite/CARDWriteAsync.s"
}
#pragma pop

/* 80358C48-80358C90 353588 0048+00 0/0 2/2 0/0 .text            CARDWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CARDWrite() {
    nofralloc
#include "asm/dolphin/card/CARDWrite/CARDWrite.s"
}
#pragma pop
