//
// Generated By: dol2asm
// Translation Unit: OSAudioSystem
//

#include "dolphin/os/OSAudioSystem.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __OSInitAudioSystem();
extern "C" void __OSStopAudioSystem();

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void OSGetArenaHi();
extern "C" void DCFlushRange();
extern "C" void OSGetTick();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CF490-803CF510 02C5B0 0080+00 1/1 0/0 0/0 .data            DSPInitCode */
SECTION_DATA static u8 DSPInitCode[128] = {
    0x02, 0x9F, 0x00, 0x10, 0x02, 0x9F, 0x00, 0x33, 0x02, 0x9F, 0x00, 0x34, 0x02, 0x9F, 0x00, 0x35,
    0x02, 0x9F, 0x00, 0x36, 0x02, 0x9F, 0x00, 0x37, 0x02, 0x9F, 0x00, 0x38, 0x02, 0x9F, 0x00, 0x39,
    0x12, 0x06, 0x12, 0x03, 0x12, 0x04, 0x12, 0x05, 0x00, 0x80, 0x80, 0x00, 0x00, 0x88, 0xFF, 0xFF,
    0x00, 0x84, 0x10, 0x00, 0x00, 0x64, 0x00, 0x1D, 0x02, 0x18, 0x00, 0x00, 0x81, 0x00, 0x1C, 0x1E,
    0x00, 0x44, 0x1B, 0x1E, 0x00, 0x84, 0x08, 0x00, 0x00, 0x64, 0x00, 0x27, 0x19, 0x1E, 0x00, 0x00,
    0x00, 0xDE, 0xFF, 0xFC, 0x02, 0xA0, 0x80, 0x00, 0x02, 0x9C, 0x00, 0x28, 0x16, 0xFC, 0x00, 0x54,
    0x16, 0xFD, 0x43, 0x48, 0x00, 0x21, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF,
    0x02, 0xFF, 0x02, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8033B2D8-8033B494 335C18 01BC+00 0/0 1/1 0/0 .text            __OSInitAudioSystem */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSInitAudioSystem() {
    nofralloc
#include "asm/dolphin/os/OSAudioSystem/__OSInitAudioSystem.s"
}
#pragma pop

/* 8033B494-8033B56C 335DD4 00D8+00 0/0 1/1 0/0 .text            __OSStopAudioSystem */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSStopAudioSystem() {
    nofralloc
#include "asm/dolphin/os/OSAudioSystem/__OSStopAudioSystem.s"
}
#pragma pop
