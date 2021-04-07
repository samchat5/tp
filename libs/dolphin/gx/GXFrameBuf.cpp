//
// Generated By: dol2asm
// Translation Unit: GXFrameBuf
//

#include "dolphin/gx/GXFrameBuf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void GXSetDispCopySrc();
extern "C" void GXSetTexCopySrc();
extern "C" void GXSetDispCopyDst();
extern "C" void GXSetTexCopyDst();
extern "C" void GXSetDispCopyFrame2Field();
extern "C" void GXSetCopyClamp();
extern "C" void GXGetNumXfbLines();
extern "C" void GXGetYScaleFactor();
extern "C" void GXSetDispCopyYScale();
extern "C" void GXSetCopyClear();
extern "C" void GXSetCopyFilter();
extern "C" void GXSetDispCopyGamma();
extern "C" void GXCopyDisp();
extern "C" void GXCopyTex();
extern "C" void GXClearBoundingBox();
extern "C" extern u8 GXNtsc480IntDf[60];
extern "C" extern u8 GXNtsc480Int[60];
extern "C" extern u8 GXMpal480IntDf[60];
extern "C" extern u8 GXPal528IntDf[60];
extern "C" extern u8 GXEurgb60Hz480IntDf[60 + 4 /* padding */];

//
// External References:
//

extern "C" void __GetImageTileCount();
extern "C" void __cvt_fp2unsigned();
extern "C" extern void* __GXData;

//
// Declarations:
//

/* 8035CA04-8035CA80 357344 007C+00 0/0 2/2 0/0 .text            GXSetDispCopySrc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDispCopySrc() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetDispCopySrc.s"
}
#pragma pop

/* 8035CA80-8035CAFC 3573C0 007C+00 0/0 9/9 0/0 .text            GXSetTexCopySrc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetTexCopySrc() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetTexCopySrc.s"
}
#pragma pop

/* 8035CAFC-8035CB30 35743C 0034+00 0/0 2/2 0/0 .text            GXSetDispCopyDst */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDispCopyDst() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetDispCopyDst.s"
}
#pragma pop

/* 8035CB30-8035CC60 357470 0130+00 0/0 9/9 0/0 .text            GXSetTexCopyDst */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetTexCopyDst() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetTexCopyDst.s"
}
#pragma pop

/* 8035CC60-8035CC84 3575A0 0024+00 0/0 1/1 0/0 .text            GXSetDispCopyFrame2Field */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDispCopyFrame2Field() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetDispCopyFrame2Field.s"
}
#pragma pop

/* 8035CC84-8035CCDC 3575C4 0058+00 0/0 2/2 0/0 .text            GXSetCopyClamp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetCopyClamp() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetCopyClamp.s"
}
#pragma pop

/* ############################################################################################## */
/* 804565A8-804565B0 004BA8 0004+04 3/3 0/0 0/0 .sdata2          @179 */
SECTION_SDATA2 static f32 lit_179[1 + 1 /* padding */] = {
    256.0f,
    /* padding */
    0.0f,
};

/* 8035CCDC-8035CD6C 35761C 0090+00 0/0 2/2 0/0 .text            GXGetNumXfbLines */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetNumXfbLines() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXGetNumXfbLines.s"
}
#pragma pop

/* ############################################################################################## */
/* 804565B0-804565B8 004BB0 0008+00 1/1 0/0 0/0 .sdata2          @234 */
SECTION_SDATA2 static f64 lit_234 = 4503599627370496.0 /* cast u32 to float */;

/* 8035CD6C-8035CFA4 3576AC 0238+00 0/0 2/2 0/0 .text            GXGetYScaleFactor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetYScaleFactor() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXGetYScaleFactor.s"
}
#pragma pop

/* 8035CFA4-8035D070 3578E4 00CC+00 0/0 2/2 0/0 .text            GXSetDispCopyYScale */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDispCopyYScale() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetDispCopyYScale.s"
}
#pragma pop

/* 8035D070-8035D0E8 3579B0 0078+00 0/0 2/2 0/0 .text            GXSetCopyClear */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetCopyClear() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetCopyClear.s"
}
#pragma pop

/* 8035D0E8-8035D2F0 357A28 0208+00 0/0 4/4 0/0 .text            GXSetCopyFilter */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetCopyFilter() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetCopyFilter.s"
}
#pragma pop

/* 8035D2F0-8035D304 357C30 0014+00 0/0 2/2 0/0 .text            GXSetDispCopyGamma */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDispCopyGamma() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXSetDispCopyGamma.s"
}
#pragma pop

/* 8035D304-8035D46C 357C44 0168+00 0/0 3/3 0/0 .text            GXCopyDisp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXCopyDisp() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXCopyDisp.s"
}
#pragma pop

/* 8035D46C-8035D5F8 357DAC 018C+00 0/0 9/9 0/0 .text            GXCopyTex */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXCopyTex() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXCopyTex.s"
}
#pragma pop

/* 8035D5F8-8035D630 357F38 0038+00 0/0 1/1 0/0 .text            GXClearBoundingBox */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXClearBoundingBox() {
    nofralloc
#include "asm/dolphin/gx/GXFrameBuf/GXClearBoundingBox.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2448-803D2484 02F568 003C+00 0/0 2/1 0/0 .data            GXNtsc480IntDf */
SECTION_DATA extern u8 GXNtsc480IntDf[60] = {
    0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x28, 0x00, 0x00, 0x02,
    0x80, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x0A, 0x0C, 0x0A, 0x08, 0x08, 0x00, 0x00, 0x00,
};

/* 803D2484-803D24C0 02F5A4 003C+00 0/0 1/1 0/0 .data            GXNtsc480Int */
SECTION_DATA extern u8 GXNtsc480Int[60] = {
    0x00, 0x00, 0x00, 0x00, 0x02, 0x80, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x28, 0x00, 0x00, 0x02,
    0x80, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x15, 0x16, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803D24C0-803D24FC 02F5E0 003C+00 0/0 1/1 0/0 .data            GXMpal480IntDf */
SECTION_DATA extern u8 GXMpal480IntDf[60] = {
    0x00, 0x00, 0x00, 0x08, 0x02, 0x80, 0x01, 0xE0, 0x01, 0xE0, 0x00, 0x28, 0x00, 0x00, 0x02,
    0x80, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x0A, 0x0C, 0x0A, 0x08, 0x08, 0x00, 0x00, 0x00,
};

/* 803D24FC-803D2538 02F61C 003C+00 0/0 1/1 0/0 .data            GXPal528IntDf */
SECTION_DATA extern u8 GXPal528IntDf[60] = {
    0x00, 0x00, 0x00, 0x04, 0x02, 0x80, 0x02, 0x10, 0x02, 0x10, 0x00, 0x28, 0x00, 0x17, 0x02,
    0x80, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x0A, 0x0C, 0x0A, 0x08, 0x08, 0x00, 0x00, 0x00,
};

/* 803D2538-803D2578 02F658 003C+04 0/0 1/1 0/0 .data            GXEurgb60Hz480IntDf */
SECTION_DATA extern u8 GXEurgb60Hz480IntDf[60 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x14,
    0x02,
    0x80,
    0x01,
    0xE0,
    0x01,
    0xE0,
    0x00,
    0x28,
    0x00,
    0x00,
    0x02,
    0x80,
    0x01,
    0xE0,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x08,
    0x08,
    0x0A,
    0x0C,
    0x0A,
    0x08,
    0x08,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
