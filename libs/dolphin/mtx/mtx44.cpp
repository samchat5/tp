//
// Generated By: dol2asm
// Translation Unit: mtx44
//

#include "dolphin/mtx/mtx44.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void C_MTXPerspective();
extern "C" void C_MTXOrtho();

//
// External References:
//

extern "C" void tanf();

//
// Declarations:
//

/* ############################################################################################## */
/* 80456528-8045652C 0004+00 s=2 e=0 z=0  None .sdata2    @99 */
SECTION_SDATA2 static f32 lit_99 = 1.0f;

/* 8045652C-80456530 0004+00 s=1 e=0 z=0  None .sdata2    @100 */
SECTION_SDATA2 static f32 lit_100 = 2.0f;

/* 80456530-80456534 0004+00 s=2 e=0 z=0  None .sdata2    @101 */
SECTION_SDATA2 static u8 lit_101[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456534-80456538 0004+00 s=2 e=0 z=0  None .sdata2    @102 */
SECTION_SDATA2 static f32 lit_102 = -1.0f;

/* 80456538-8045653C 0004+00 s=1 e=0 z=0  None .sdata2    @105 */
SECTION_SDATA2 static f32 lit_105 = 0.5f;

/* 8045653C-80456540 0004+00 s=1 e=0 z=0  None .sdata2    @106 */
SECTION_SDATA2 static f32 lit_106 = 0.01745329238474369f;

/* 80346F28-80346FF8 00D0+00 s=0 e=6 z=0  None .text      C_MTXPerspective */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void C_MTXPerspective() {
    nofralloc
#include "asm/dolphin/mtx/mtx44/C_MTXPerspective.s"
}
#pragma pop

/* 80346FF8-80347090 0098+00 s=0 e=11 z=2  None .text      C_MTXOrtho */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void C_MTXOrtho() {
    nofralloc
#include "asm/dolphin/mtx/mtx44/C_MTXOrtho.s"
}
#pragma pop
