//
// Generated By: dol2asm
// Translation Unit: JUTFont
//

#include "JSystem/JUtility/JUTFont.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUtility {
    struct TColor {};
};

struct JUTFont {
    /* 802DECF8 */ JUTFont();
    /* 802DED24 */ void initialize_state();
    /* 802DED70 */ void setCharColor(JUtility::TColor);
    /* 802DEDC4 */ void setGradColor(JUtility::TColor, JUtility::TColor);
    /* 802DEE28 */ void drawString_size_scale(f32, f32, f32, f32, char const*, u32, bool);
};

//
// Forward References:
//

extern "C" void __ct__7JUTFontFv();
extern "C" void initialize_state__7JUTFontFv();
extern "C" void setCharColor__7JUTFontFQ28JUtility6TColor();
extern "C" void setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void drawString_size_scale__7JUTFontFffffPCcUlb();

//
// External References:
//

extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern void* __vt__7JUTFont[17];

//
// Declarations:
//

/* 802DECF8-802DED24 2D9638 002C+00 0/0 2/2 0/0 .text            __ct__7JUTFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTFont::JUTFont() {
    nofralloc
#include "asm/JSystem/JUtility/JUTFont/__ct__7JUTFontFv.s"
}
#pragma pop

/* 802DED24-802DED70 2D9664 004C+00 0/0 9/9 0/0 .text            initialize_state__7JUTFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTFont::initialize_state() {
    nofralloc
#include "asm/JSystem/JUtility/JUTFont/initialize_state__7JUTFontFv.s"
}
#pragma pop

/* 802DED70-802DEDC4 2D96B0 0054+00 1/1 3/3 0/0 .text setCharColor__7JUTFontFQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTFont::setCharColor(JUtility::TColor param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTFont/setCharColor__7JUTFontFQ28JUtility6TColor.s"
}
#pragma pop

/* 802DEDC4-802DEE28 2D9704 0064+00 0/0 2/2 0/0 .text
 * setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTFont::setGradColor(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTFont/setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 802DEE28-802DEF48 2D9768 0120+00 0/0 3/3 0/0 .text drawString_size_scale__7JUTFontFffffPCcUlb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTFont::drawString_size_scale(f32 param_0, f32 param_1, f32 param_2, f32 param_3,
                                        char const* param_4, u32 param_5, bool param_6) {
    nofralloc
#include "asm/JSystem/JUtility/JUTFont/drawString_size_scale__7JUTFontFffffPCcUlb.s"
}
#pragma pop
