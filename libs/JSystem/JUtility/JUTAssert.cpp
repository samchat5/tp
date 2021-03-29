//
// Generated By: dol2asm
// Translation Unit: JUTAssert
//

#include "JSystem/JUtility/JUTAssert.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUtility {
    struct TColor {};
};

struct JUTFont {
    /* 802DED70 */ void setCharColor(JUtility::TColor);
    /* 802DEE28 */ void drawString_size_scale(f32, f32, f32, f32, char const*, u32, bool);
};

struct JUTDirectPrint {
    /* 802E46D8 */ void drawString(u16, u16, char*);
    /* 802E4798 */ void setCharColor(JUtility::TColor);
};

struct JUTAssertion {
    /* 802E495C */ void create();
    /* 802E4960 */ void flush_subroutine();
    /* 802E499C */ void flushMessage();
    /* 802E4A54 */ void flushMessage_dbPrint();
    /* 802E4C34 */ void setVisible(bool);
    /* 802E4C3C */ void setMessageCount(int);
};

//
// Forward References:
//

extern "C" void create__12JUTAssertionFv();
extern "C" void flush_subroutine__12JUTAssertionFv();
extern "C" void flushMessage__12JUTAssertionFv();
extern "C" void flushMessage_dbPrint__12JUTAssertionFv();
extern "C" void setVisible__12JUTAssertionFb();
extern "C" void setMessageCount__12JUTAssertionFi();

//
// External References:
//

extern "C" void setCharColor__7JUTFontFQ28JUtility6TColor();
extern "C" void drawString_size_scale__7JUTFontFffffPCcUlb();
extern "C" void drawString__14JUTDirectPrintFUsUsPc();
extern "C" void setCharColor__14JUTDirectPrintFQ28JUtility6TColor();
extern "C" void VIGetRetraceCount();
extern "C" void strlen();
extern "C" extern u8 data_804508F8[8];
extern "C" extern u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];
extern "C" extern u8 sDirectPrint__14JUTDirectPrint[4 + 4 /* padding */];

//
// Declarations:
//

/* 802E495C-802E4960 0004+00 s=0 e=1 z=0  None .text      create__12JUTAssertionFv */
void JUTAssertion::create() {
    /* empty function */
}

/* ############################################################################################## */
/* 80451530-80451538 0004+04 s=2 e=0 z=0  None .sbss
 * sMessageLife__Q212JUTAssertion23@unnamed@JUTAssert_cpp@      */
static u8 data_80451530[4 + 4 /* padding */];

/* 802E4960-802E499C 003C+00 s=2 e=0 z=0  None .text      flush_subroutine__12JUTAssertionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTAssertion::flush_subroutine() {
    nofralloc
#include "asm/JSystem/JUtility/JUTAssert/flush_subroutine__12JUTAssertionFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80434870-804348B0 0040+00 s=2 e=0 z=0  None .bss
 * sMessageFileLine__Q212JUTAssertion23@unnamed@JUTAssert_cpp@  */
static u8 data_80434870[64];

/* 804348B0-804349B0 0100+00 s=2 e=0 z=0  None .bss
 * sMessageString__Q212JUTAssertion23@unnamed@JUTAssert_cpp@    */
static u8 data_804348B0[256];

/* 802E499C-802E4A54 00B8+00 s=0 e=1 z=0  None .text      flushMessage__12JUTAssertionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTAssertion::flushMessage() {
    nofralloc
#include "asm/JSystem/JUtility/JUTAssert/flushMessage__12JUTAssertionFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804560B8-804560BC 0004+00 s=1 e=0 z=0  None .sdata2    @724 */
SECTION_SDATA2 static f32 lit_724 = 30.0f;

/* 804560BC-804560C0 0004+00 s=1 e=0 z=0  None .sdata2    @725 */
SECTION_SDATA2 static f32 lit_725 = 36.0f;

/* 804560C0-804560C8 0004+04 s=1 e=0 z=0  None .sdata2    @726 */
SECTION_SDATA2 static f32 lit_726[1 + 1 /* padding */] = {
    54.0f,
    /* padding */
    0.0f,
};

/* 804560C8-804560D0 0008+00 s=1 e=0 z=0  None .sdata2    @728 */
SECTION_SDATA2 static f64 lit_728 = 4503601774854144.0 /* cast s32 to float */;

/* 802E4A54-802E4C34 01E0+00 s=0 e=1 z=0  None .text      flushMessage_dbPrint__12JUTAssertionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTAssertion::flushMessage_dbPrint() {
    nofralloc
#include "asm/JSystem/JUtility/JUTAssert/flushMessage_dbPrint__12JUTAssertionFv.s"
}
#pragma pop

/* 802E4C34-802E4C3C 0008+00 s=0 e=2 z=0  None .text      setVisible__12JUTAssertionFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTAssertion::setVisible(bool param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTAssert/setVisible__12JUTAssertionFb.s"
}
#pragma pop

/* 802E4C3C-802E4C54 0018+00 s=0 e=2 z=0  None .text      setMessageCount__12JUTAssertionFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTAssertion::setMessageCount(int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTAssert/setMessageCount__12JUTAssertionFi.s"
}
#pragma pop
