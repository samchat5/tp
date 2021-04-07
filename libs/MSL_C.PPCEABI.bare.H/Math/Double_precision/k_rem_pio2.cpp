//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/k_rem_pio2
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/k_rem_pio2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __kernel_rem_pio2();

//
// External References:
//

extern "C" void _savefpr_25();
extern "C" void _restfpr_25();
extern "C" void floor();
extern "C" void ldexp();

//
// Declarations:
//

/* ############################################################################################## */
/* 803A2538-803A2548 02EB98 0010+00 1/1 0/0 0/0 .rodata          init_jk */
SECTION_RODATA static u8 const init_jk[16] = {
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(803A2538, &init_jk);

/* 803A2548-803A2588 02EBA8 0040+00 1/1 0/0 0/0 .rodata          PIo2 */
SECTION_RODATA static u8 const PIo2[64] = {
    0x3F, 0xF9, 0x21, 0xFB, 0x40, 0x00, 0x00, 0x00, 0x3E, 0x74, 0x44, 0x2D, 0x00, 0x00, 0x00, 0x00,
    0x3C, 0xF8, 0x46, 0x98, 0x80, 0x00, 0x00, 0x00, 0x3B, 0x78, 0xCC, 0x51, 0x60, 0x00, 0x00, 0x00,
    0x39, 0xF0, 0x1B, 0x83, 0x80, 0x00, 0x00, 0x00, 0x38, 0x7A, 0x25, 0x20, 0x40, 0x00, 0x00, 0x00,
    0x36, 0xE3, 0x82, 0x22, 0x80, 0x00, 0x00, 0x00, 0x35, 0x69, 0xF3, 0x1D, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(803A2548, &PIo2);

/* 80456A08-80456A10 005008 0008+00 1/1 0/0 0/0 .sdata2          @436 */
SECTION_SDATA2 static u8 lit_436[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456A10-80456A18 005010 0008+00 1/1 0/0 0/0 .sdata2          @437 */
SECTION_SDATA2 static f64 lit_437 = 5.960464477539063e-08;

/* 80456A18-80456A20 005018 0008+00 1/1 0/0 0/0 .sdata2          @438 */
SECTION_SDATA2 static f64 lit_438 = 16777216.0;

/* 80456A20-80456A28 005020 0008+00 1/1 0/0 0/0 .sdata2          @439 */
SECTION_SDATA2 static f64 lit_439 = 8.0;

/* 80456A28-80456A30 005028 0008+00 1/1 0/0 0/0 .sdata2          @440 */
SECTION_SDATA2 static f64 lit_440 = 0.125;

/* 80456A30-80456A38 005030 0008+00 1/1 0/0 0/0 .sdata2          @441 */
SECTION_SDATA2 static f64 lit_441 = 0.5;

/* 80456A38-80456A40 005038 0008+00 1/1 0/0 0/0 .sdata2          @442 */
SECTION_SDATA2 static f64 lit_442 = 1.0;

/* 80456A40-80456A48 005040 0008+00 1/1 0/0 0/0 .sdata2          @445 */
SECTION_SDATA2 static f64 lit_445 = 4503601774854144.0 /* cast s32 to float */;

/* 8036AB9C-8036B9F0 3654DC 0E54+00 0/0 1/1 0/0 .text            __kernel_rem_pio2 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __kernel_rem_pio2() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/k_rem_pio2/__kernel_rem_pio2.s"
}
#pragma pop
