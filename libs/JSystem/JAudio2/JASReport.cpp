//
// Generated By: dol2asm
// Translation Unit: JASReport
//

#include "JSystem/JAudio2/JASReport.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void JASReport(char const*, ...);

extern "C" void JASReport__FPCce();
extern "C" extern u8 struct_80451230[8];

//
// External References:
//

extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void vsnprintf();

//
// Declarations:
//

/* ############################################################################################## */
/* 80431660-80431678 0018+00 s=1 e=0 z=0  None .bss       sMutex */
static u8 sMutex[24];

/* 80451220-80451224 0004+00 s=1 e=0 z=0  None .sbss      sBuffer */
static u8 sBuffer[4];

/* 80451224-80451228 0004+00 s=1 e=0 z=0  None .sbss      sLineMax */
static u8 sLineMax[4];

/* 80451228-8045122C 0004+00 s=1 e=0 z=0  None .sbss      sLineCount */
static u8 sLineCount[4];

/* 8045122C-80451230 0004+00 s=1 e=0 z=0  None .sbss      sTop */
static u8 sTop[4];

/* 80290F64-80291060 00FC+00 s=0 e=5 z=0  None .text      JASReport__FPCce */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASReport(char const* param_0, ...) {
    nofralloc
#include "asm/JSystem/JAudio2/JASReport/JASReport__FPCce.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451230-80451238 0008+00 s=0 e=6 z=0  None .sbss      None */
u8 struct_80451230[8];
