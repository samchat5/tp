//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_atan2
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_atan2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ieee754_atan2();

//
// External References:
//

extern "C" void atan();

//
// Declarations:
//

/* ############################################################################################## */
/* 80456788-80456790 0008+00 s=1 e=0 z=0  None .sdata2    @145 */
SECTION_SDATA2 static f64 lit_145 = 3.141592653589793;

/* 80456790-80456798 0008+00 s=1 e=0 z=0  None .sdata2    @146 */
SECTION_SDATA2 static f64 lit_146 = -3.141592653589793;

/* 80456798-804567A0 0008+00 s=1 e=0 z=0  None .sdata2    @147 */
SECTION_SDATA2 static f64 lit_147 = -1.5707963267948966;

/* 804567A0-804567A8 0008+00 s=1 e=0 z=0  None .sdata2    @148 */
SECTION_SDATA2 static f64 lit_148 = 1.5707963267948966;

/* 804567A8-804567B0 0008+00 s=1 e=0 z=0  None .sdata2    @149 */
SECTION_SDATA2 static f64 lit_149 = 0.7853981633974483;

/* 804567B0-804567B8 0008+00 s=1 e=0 z=0  None .sdata2    @150 */
SECTION_SDATA2 static f64 lit_150 = -0.7853981633974483;

/* 804567B8-804567C0 0008+00 s=1 e=0 z=0  None .sdata2    @151 */
SECTION_SDATA2 static f64 lit_151 = 2.356194490192345;

/* 804567C0-804567C8 0008+00 s=1 e=0 z=0  None .sdata2    @152 */
SECTION_SDATA2 static f64 lit_152 = -2.356194490192345;

/* 804567C8-804567D0 0008+00 s=1 e=0 z=0  None .sdata2    @153 */
SECTION_SDATA2 static u8 lit_153[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804567D0-804567D8 0008+00 s=1 e=0 z=0  None .sdata2    @154 */
SECTION_SDATA2 static f64 lit_154 = -0.0;

/* 804567D8-804567E0 0008+00 s=1 e=0 z=0  None .sdata2    @155 */
SECTION_SDATA2 static f64 lit_155 = 1.2246467991473532e-16;

/* 803696E8-80369978 0290+00 s=0 e=1 z=0  None .text      __ieee754_atan2 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __ieee754_atan2() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_atan2/__ieee754_atan2.s"
}
#pragma pop
