//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/mainloop
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mainloop.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void TRKNubMainLoop();

//
// External References:
//

extern "C" void TRKDestructEvent();
extern "C" void TRKGetNextEvent();
extern "C" void TRKGetBuffer();
extern "C" void TRKGetInput();
extern "C" void TRKDispatchMessage();
extern "C" void TRKTargetStopped();
extern "C" void TRKTargetSupportRequest();
extern "C" void TRKTargetInterrupt();
extern "C" void TRKTargetContinue();
extern "C" extern u8 gTRKInputPendingPtr[4 + 4 /* padding */];

//
// Declarations:
//

/* 8036CB20-8036CC18 00F8+00 s=0 e=1 z=0  None .text      TRKNubMainLoop */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void TRKNubMainLoop() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mainloop/TRKNubMainLoop.s"
}
#pragma pop
