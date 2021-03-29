//
// Generated By: dol2asm
// Translation Unit: JUTConsole
//

#include "JSystem/JUtility/JUTConsole.h"
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
    /* 802E4288 */ void erase(int, int, int, int);
    /* 802E46D8 */ void drawString(u16, u16, char*);
    /* 802E4798 */ void setCharColor(JUtility::TColor);
};

struct JKRHeap {
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
};

struct JUTConsole {
    struct EConsoleType {};

    /* 802E73E4 */ void create(unsigned int, void*, u32);
    /* 802E7354 */ void create(unsigned int, unsigned int, JKRHeap*);
    /* 802E746C */ JUTConsole(unsigned int, unsigned int, bool);
    /* 802E755C */ ~JUTConsole();
    /* 802E75CC */ void getObjectSizeFromBufferSize(unsigned int, unsigned int);
    /* 802E75DC */ void getLineFromObjectSize(u32, unsigned int);
    /* 802E75EC */ void clear();
    /* 802E7648 */ void doDraw(JUTConsole::EConsoleType) const;
    /* 802E7BB8 */ void print_f(char const*, ...);
    /* 802E7C38 */ void print(char const*);
    /* 802E7F7C */ void dumpToTerminal(unsigned int);
    /* 802E80A8 */ void scroll(int);
    /* 802E8184 */ void getUsedLine() const;
    /* 802E81A8 */ void getLineOffset() const;
};

struct JUTConsoleManager {
    /* 802E81CC */ JUTConsoleManager();
    /* 802E81F4 */ void createManager(JKRHeap*);
    /* 802E8240 */ void appendConsole(JUTConsole*);
    /* 802E82B0 */ void removeConsole(JUTConsole*);
    /* 802E8384 */ void draw() const;
    /* 802E8450 */ void drawDirect(bool) const;
    /* 802E84C4 */ void setDirectConsole(JUTConsole*);
};

struct JKRDisposer {
    /* 802D147C */ JKRDisposer();
    /* 802D14E4 */ ~JKRDisposer();
};

namespace JGadget {
struct TLinkListNode {};

struct TNodeLinkList {
    struct iterator {};

    /* 802DCBA8 */ void Insert(JGadget::TNodeLinkList::iterator, JGadget::TLinkListNode*);
    /* 802DCBF8 */ void Remove(JGadget::TLinkListNode*);
};

};  // namespace JGadget

struct J2DOrthoGraph {
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E97B4 */ void setPort();
};

//
// Forward References:
//

extern "C" void create__10JUTConsoleFUiUiP7JKRHeap();
extern "C" void create__10JUTConsoleFUiPvUl();
extern "C" void __ct__10JUTConsoleFUiUib();
extern "C" void __dt__10JUTConsoleFv();
extern "C" void getObjectSizeFromBufferSize__10JUTConsoleFUiUi();
extern "C" void getLineFromObjectSize__10JUTConsoleFUlUi();
extern "C" void clear__10JUTConsoleFv();
extern "C" void doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType();
extern "C" void print_f__10JUTConsoleFPCce();
extern "C" void print__10JUTConsoleFPCc();
extern "C" void JUTConsole_print_f_va_();
extern "C" void dumpToTerminal__10JUTConsoleFUi();
extern "C" void scroll__10JUTConsoleFi();
extern "C" void getUsedLine__10JUTConsoleCFv();
extern "C" void getLineOffset__10JUTConsoleCFv();
extern "C" void __ct__17JUTConsoleManagerFv();
extern "C" void createManager__17JUTConsoleManagerFP7JKRHeap();
extern "C" void appendConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void removeConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void draw__17JUTConsoleManagerCFv();
extern "C" void drawDirect__17JUTConsoleManagerCFb();
extern "C" void setDirectConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void JUTSetReportConsole();
extern "C" static void JUTGetReportConsole();
extern "C" void JUTSetWarningConsole();
extern "C" static void JUTGetWarningConsole();
extern "C" static void JUTReportConsole_f_va();
extern "C" void JUTReportConsole_f();
extern "C" void JUTReportConsole();
extern "C" void JUTWarningConsole_f();
extern "C" void JUTWarningConsole();
extern "C" extern char const* const JUTConsole__stringBase0;
extern "C" extern u8 sManager__17JUTConsoleManager[4];

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void operator delete(void*);
void J2DFillBox(f32, f32, f32, f32, JUtility::TColor);

extern "C" void OSReport();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void setCharColor__7JUTFontFQ28JUtility6TColor();
extern "C" void drawString_size_scale__7JUTFontFffffPCcUlb();
extern "C" void erase__14JUTDirectPrintFiiii();
extern "C" void drawString__14JUTDirectPrintFUsUsPc();
extern "C" void setCharColor__14JUTDirectPrintFQ28JUtility6TColor();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void J2DFillBox__FffffQ28JUtility6TColor();
extern "C" void OSEnableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void VIGetRetraceCount();
extern "C" void _savegpr_20();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void vsnprintf();
extern "C" void strlen();
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sDirectPrint__14JUTDirectPrint[4 + 4 /* padding */];
extern "C" extern u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451570-80451574 0004+00 s=4 e=7 z=0  None .sbss      sManager__17JUTConsoleManager */
u8 sManager__17JUTConsoleManager[4];

/* 802E7354-802E73E4 0090+00 s=0 e=1 z=0  None .text      create__10JUTConsoleFUiUiP7JKRHeap */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::create(unsigned int param_0, unsigned int param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/create__10JUTConsoleFUiUiP7JKRHeap.s"
}
#pragma pop

/* 802E73E4-802E746C 0088+00 s=0 e=1 z=0  None .text      create__10JUTConsoleFUiPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::create(unsigned int param_0, void* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/create__10JUTConsoleFUiPvUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CC9A8-803CC9B8 000C+04 s=2 e=0 z=0  None .data      __vt__10JUTConsole */
SECTION_DATA static void* __vt__10JUTConsole[3 + 1 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10JUTConsoleFv,
    /* padding */
    NULL,
};

/* 802E746C-802E755C 00F0+00 s=2 e=0 z=0  None .text      __ct__10JUTConsoleFUiUib */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTConsole::JUTConsole(unsigned int param_0, unsigned int param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/__ct__10JUTConsoleFUiUib.s"
}
#pragma pop

/* 802E755C-802E75CC 0070+00 s=1 e=0 z=0  None .text      __dt__10JUTConsoleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTConsole::~JUTConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/__dt__10JUTConsoleFv.s"
}
#pragma pop

/* 802E75CC-802E75DC 0010+00 s=1 e=0 z=0  None .text
 * getObjectSizeFromBufferSize__10JUTConsoleFUiUi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::getObjectSizeFromBufferSize(unsigned int param_0, unsigned int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/getObjectSizeFromBufferSize__10JUTConsoleFUiUi.s"
}
#pragma pop

/* 802E75DC-802E75EC 0010+00 s=1 e=1 z=0  None .text      getLineFromObjectSize__10JUTConsoleFUlUi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::getLineFromObjectSize(u32 param_0, unsigned int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/getLineFromObjectSize__10JUTConsoleFUlUi.s"
}
#pragma pop

/* 802E75EC-802E7648 005C+00 s=2 e=2 z=0  None .text      clear__10JUTConsoleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/clear__10JUTConsoleFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456118-8045611C 0004+00 s=1 e=0 z=0  None .sdata2    @2460 */
SECTION_SDATA2 static f32 lit_2460 = 2.0f;

/* 8045611C-80456120 0004+00 s=1 e=0 z=0  None .sdata2    @2461 */
SECTION_SDATA2 static u8 lit_2461[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456120-80456124 0004+00 s=1 e=0 z=0  None .sdata2    @2462 */
SECTION_SDATA2 static f32 lit_2462 = 640.0f;

/* 80456124-80456128 0004+00 s=1 e=0 z=0  None .sdata2    @2463 */
SECTION_SDATA2 static f32 lit_2463 = 480.0f;

/* 80456128-8045612C 0004+00 s=1 e=0 z=0  None .sdata2    @2464 */
SECTION_SDATA2 static f32 lit_2464 = -1.0f;

/* 8045612C-80456130 0004+00 s=1 e=0 z=0  None .sdata2    @2465 */
SECTION_SDATA2 static f32 lit_2465 = 1.0f;

/* 80456130-80456138 0004+04 s=1 e=0 z=0  None .sdata2    @2466 */
SECTION_SDATA2 static f32 lit_2466[1 + 1 /* padding */] = {
    4.0f,
    /* padding */
    0.0f,
};

/* 80456138-80456140 0008+00 s=1 e=0 z=0  None .sdata2    @2469 */
SECTION_SDATA2 static f64 lit_2469 = 4503599627370496.0 /* cast u32 to float */;

/* 80456140-80456148 0008+00 s=1 e=0 z=0  None .sdata2    @2471 */
SECTION_SDATA2 static f64 lit_2471 = 4503601774854144.0 /* cast s32 to float */;

/* 802E7648-802E7BB8 0570+00 s=2 e=0 z=0  None .text
 * doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::doDraw(JUTConsole::EConsoleType param_0) const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType.s"
}
#pragma pop

/* 802E7BB8-802E7C38 0080+00 s=0 e=13 z=0  None .text      print_f__10JUTConsoleFPCce */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::print_f(char const* param_0, ...) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/print_f__10JUTConsoleFPCce.s"
}
#pragma pop

/* 802E7C38-802E7F30 02F8+00 s=2 e=10 z=0  None .text      print__10JUTConsoleFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::print(char const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/print__10JUTConsoleFPCc.s"
}
#pragma pop

/* 802E7F30-802E7F7C 004C+00 s=1 e=1 z=0  None .text      JUTConsole_print_f_va_ */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTConsole_print_f_va_() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTConsole_print_f_va_.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D9A8-8039DA20 0063+15 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D9A8 = "[%03d] %s\n";
SECTION_DEAD char const* const stringBase_8039D9B3 = "%s\n";
SECTION_DEAD char const* const stringBase_8039D9B7 = "\n:::dump of console[%x]----------------\n";
SECTION_DEAD char const* const stringBase_8039D9E0 = ":::dump of console[%x] END------------\n";
SECTION_DEAD char const* const stringBase_8039DA08 = "%s";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039DA0B = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
#pragma pop

/* 802E7F7C-802E80A8 012C+00 s=0 e=2 z=0  None .text      dumpToTerminal__10JUTConsoleFUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::dumpToTerminal(unsigned int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/dumpToTerminal__10JUTConsoleFUi.s"
}
#pragma pop

/* 802E80A8-802E8184 00DC+00 s=0 e=3 z=0  None .text      scroll__10JUTConsoleFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::scroll(int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/scroll__10JUTConsoleFi.s"
}
#pragma pop

/* 802E8184-802E81A8 0024+00 s=0 e=2 z=0  None .text      getUsedLine__10JUTConsoleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::getUsedLine() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/getUsedLine__10JUTConsoleCFv.s"
}
#pragma pop

/* 802E81A8-802E81CC 0024+00 s=0 e=3 z=0  None .text      getLineOffset__10JUTConsoleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::getLineOffset() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/getLineOffset__10JUTConsoleCFv.s"
}
#pragma pop

/* 802E81CC-802E81F4 0028+00 s=1 e=0 z=0  None .text      __ct__17JUTConsoleManagerFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTConsoleManager::JUTConsoleManager() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/__ct__17JUTConsoleManagerFv.s"
}
#pragma pop

/* 802E81F4-802E8240 004C+00 s=0 e=1 z=0  None .text createManager__17JUTConsoleManagerFP7JKRHeap
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::createManager(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/createManager__17JUTConsoleManagerFP7JKRHeap.s"
}
#pragma pop

/* 802E8240-802E82B0 0070+00 s=3 e=0 z=0  None .text
 * appendConsole__17JUTConsoleManagerFP10JUTConsole             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::appendConsole(JUTConsole* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/appendConsole__17JUTConsoleManagerFP10JUTConsole.s"
}
#pragma pop

/* 802E82B0-802E8384 00D4+00 s=2 e=0 z=0  None .text
 * removeConsole__17JUTConsoleManagerFP10JUTConsole             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::removeConsole(JUTConsole* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/removeConsole__17JUTConsoleManagerFP10JUTConsole.s"
}
#pragma pop

/* 802E8384-802E8450 00CC+00 s=0 e=1 z=0  None .text      draw__17JUTConsoleManagerCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::draw() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/draw__17JUTConsoleManagerCFv.s"
}
#pragma pop

/* 802E8450-802E84C4 0074+00 s=0 e=5 z=0  None .text      drawDirect__17JUTConsoleManagerCFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::drawDirect(bool param_0) const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/drawDirect__17JUTConsoleManagerCFb.s"
}
#pragma pop

/* 802E84C4-802E8520 005C+00 s=0 e=2 z=0  None .text
 * setDirectConsole__17JUTConsoleManagerFP10JUTConsole          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::setDirectConsole(JUTConsole* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/setDirectConsole__17JUTConsoleManagerFP10JUTConsole.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451574-80451578 0004+00 s=2 e=0 z=0  None .sbss      sReportConsole */
static u8 sReportConsole[4];

/* 802E8520-802E8528 0008+00 s=1 e=1 z=0  None .text      JUTSetReportConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTSetReportConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTSetReportConsole.s"
}
#pragma pop

/* 802E8528-802E8530 0008+00 s=2 e=0 z=0  None .text      JUTGetReportConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void JUTGetReportConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTGetReportConsole.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451578-80451580 0004+04 s=2 e=0 z=0  None .sbss      sWarningConsole */
static u8 sWarningConsole[4 + 4 /* padding */];

/* 802E8530-802E8538 0008+00 s=1 e=1 z=0  None .text      JUTSetWarningConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTSetWarningConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTSetWarningConsole.s"
}
#pragma pop

/* 802E8538-802E8540 0008+00 s=1 e=0 z=0  None .text      JUTGetWarningConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void JUTGetWarningConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTGetWarningConsole.s"
}
#pragma pop

/* 802E8540-802E85C8 0088+00 s=2 e=0 z=0  None .text      JUTReportConsole_f_va */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void JUTReportConsole_f_va() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTReportConsole_f_va.s"
}
#pragma pop

/* 802E85C8-802E8648 0080+00 s=2 e=8 z=0  None .text      JUTReportConsole_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTReportConsole_f() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTReportConsole_f.s"
}
#pragma pop

/* 802E8648-802E867C 0034+00 s=0 e=6 z=0  None .text      JUTReportConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTReportConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTReportConsole.s"
}
#pragma pop

/* 802E867C-802E86FC 0080+00 s=0 e=9 z=0  None .text      JUTWarningConsole_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTWarningConsole_f() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTWarningConsole_f.s"
}
#pragma pop

/* 802E86FC-802E8730 0034+00 s=0 e=2 z=0  None .text      JUTWarningConsole */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void JUTWarningConsole() {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/JUTWarningConsole.s"
}
#pragma pop
