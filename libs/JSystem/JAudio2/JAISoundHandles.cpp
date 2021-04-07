//
// Generated By: dol2asm
// Translation Unit: JAISoundHandles
//

#include "JSystem/JAudio2/JAISoundHandles.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAISoundID {};

struct JAISoundHandles {
    /* 802A2C98 */ void getHandleSoundID(JAISoundID);
    /* 802A2CF4 */ void getFreeHandle();
};

//
// Forward References:
//

extern "C" void getHandleSoundID__15JAISoundHandlesF10JAISoundID();
extern "C" void getFreeHandle__15JAISoundHandlesFv();

//
// External References:
//

//
// Declarations:
//

/* 802A2C98-802A2CF4 29D5D8 005C+00 0/0 1/1 0/0 .text
 * getHandleSoundID__15JAISoundHandlesF10JAISoundID             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISoundHandles::getHandleSoundID(JAISoundID param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISoundHandles/getHandleSoundID__15JAISoundHandlesF10JAISoundID.s"
}
#pragma pop

/* 802A2CF4-802A2D34 29D634 0040+00 0/0 2/2 0/0 .text            getFreeHandle__15JAISoundHandlesFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISoundHandles::getFreeHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JAISoundHandles/getFreeHandle__15JAISoundHandlesFv.s"
}
#pragma pop
