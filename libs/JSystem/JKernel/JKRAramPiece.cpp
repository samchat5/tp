//
// Generated By: dol2asm
// Translation Unit: JKRAramPiece
//

#include "JSystem/JKernel/JKRAramPiece.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTException {
    /* 802E21FC */ void panic_f(char const*, int, char const*, ...);
};

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JKRAMCommand> */
struct JSUList__template5 {
    /* 802D2DF0 */ ~JSUList__template5();
};

struct JKRHeap {
    /* 802CE500 */ void free(void*, JKRHeap*);
};

struct JKRDecompCommand {};

struct JKRDecomp {
    /* 802DB8D0 */ void sendCommand(JKRDecompCommand*);
};

struct JKRAMCommand {
    /* 802D39EC */ JKRAMCommand();
    /* 802D3A5C */ ~JKRAMCommand();
};

struct JKRAramBlock {};

struct JKRAramPiece {
    /* 802D3574 */ void prepareCommand(int, u32, u32, u32, JKRAramBlock*, void (*)(u32));
    /* 802D35F4 */ void sendCommand(JKRAMCommand*);
    /* 802D3614 */ void orderAsync(int, u32, u32, u32, JKRAramBlock*, void (*)(u32));
    /* 802D3770 */ void sync(JKRAMCommand*, int);
    /* 802D3838 */ void orderSync(int, u32, u32, u32, JKRAramBlock*);
    /* 802D38CC */ void startDMA(JKRAMCommand*);
    /* 802D3944 */ void doneDMA(u32);
};

//
// Forward References:
//

extern "C" void prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v();
extern "C" void sendCommand__12JKRAramPieceFP12JKRAMCommand();
extern "C" void orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v();
extern "C" void sync__12JKRAramPieceFP12JKRAMCommandi();
extern "C" void orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock();
extern "C" void startDMA__12JKRAramPieceFP12JKRAMCommand();
extern "C" void doneDMA__12JKRAramPieceFUl();
extern "C" void __ct__12JKRAMCommandFv();
extern "C" void __dt__12JKRAMCommandFv();
extern "C" void __sinit_JKRAramPiece_cpp();
extern "C" extern char const* const JKRAramPiece__stringBase0;

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void OSReport();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void func_802D2DF0();
extern "C" void sendCommand__9JKRDecompFP16JKRDecompCommand();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void DCInvalidateRange();
extern "C" void DCStoreRange();
extern "C" void OSInitMessageQueue();
extern "C" void OSSendMessage();
extern "C" void OSReceiveMessage();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void ARQPostRequest();
extern "C" void __register_global_object();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" extern u8 sMessageQueue__7JKRAram[32];
extern "C" extern u8 sSystemHeap__7JKRHeap[4];

//
// Declarations:
//

/* 802D3574-802D35F4 0080+00 s=1 e=0 z=0  None .text
 * prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::prepareCommand(int param_0, u32 param_1, u32 param_2, u32 param_3,
                                      JKRAramBlock* param_4, void (*)(u32)) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v.s"
}
#pragma pop

/* 802D35F4-802D3614 0020+00 s=0 e=1 z=0  None .text sendCommand__12JKRAramPieceFP12JKRAMCommand
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::sendCommand(JKRAMCommand* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/sendCommand__12JKRAramPieceFP12JKRAMCommand.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D0B8-8039D120 0068+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D0B8 = "direction = %x\n";
SECTION_DEAD char const* const stringBase_8039D0C8 = "source = %x\n";
SECTION_DEAD char const* const stringBase_8039D0D5 = "destination = %x\n";
SECTION_DEAD char const* const stringBase_8039D0E7 = "length = %x\n";
SECTION_DEAD char const* const stringBase_8039D0F4 = "JKRAramPiece.cpp";
SECTION_DEAD char const* const stringBase_8039D105 = "%s";
SECTION_DEAD char const* const stringBase_8039D108 = "illegal address. abort.";
#pragma pop

/* 80434318-80434324 000C+00 s=1 e=0 z=0  None .bss       @492 */
static u8 lit_492[12];

/* 80434324-80434330 000C+00 s=3 e=0 z=0  None .bss       sAramPieceCommandList__12JKRAramPiece */
static u8 sAramPieceCommandList__12JKRAramPiece[12];

/* 80434330-80434348 0018+00 s=3 e=0 z=0  None .bss       mMutex__12JKRAramPiece */
static u8 mMutex__12JKRAramPiece[24];

/* 802D3614-802D3770 015C+00 s=1 e=0 z=0  None .text
 * orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::orderAsync(int param_0, u32 param_1, u32 param_2, u32 param_3,
                                  JKRAramBlock* param_4, void (*)(u32)) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v.s"
}
#pragma pop

/* 802D3770-802D3838 00C8+00 s=1 e=0 z=0  None .text      sync__12JKRAramPieceFP12JKRAMCommandi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::sync(JKRAMCommand* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/sync__12JKRAramPieceFP12JKRAMCommandi.s"
}
#pragma pop

/* 802D3838-802D38CC 0094+00 s=0 e=6 z=0  None .text
 * orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::orderSync(int param_0, u32 param_1, u32 param_2, u32 param_3,
                                 JKRAramBlock* param_4) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock.s"
}
#pragma pop

/* 802D38CC-802D3944 0078+00 s=1 e=1 z=0  None .text      startDMA__12JKRAramPieceFP12JKRAMCommand
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::startDMA(JKRAMCommand* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/startDMA__12JKRAramPieceFP12JKRAMCommand.s"
}
#pragma pop

/* 802D3944-802D39EC 00A8+00 s=1 e=0 z=0  None .text      doneDMA__12JKRAramPieceFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramPiece::doneDMA(u32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/doneDMA__12JKRAramPieceFUl.s"
}
#pragma pop

/* 802D39EC-802D3A5C 0070+00 s=1 e=0 z=0  None .text      __ct__12JKRAMCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAMCommand::JKRAMCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__ct__12JKRAMCommandFv.s"
}
#pragma pop

/* 802D3A5C-802D3B04 00A8+00 s=1 e=0 z=0  None .text      __dt__12JKRAMCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAMCommand::~JKRAMCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__dt__12JKRAMCommandFv.s"
}
#pragma pop

/* 802D3B04-802D3B48 0044+00 s=0 e=1 z=0  None .text      __sinit_JKRAramPiece_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_JKRAramPiece_cpp() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__sinit_JKRAramPiece_cpp.s"
}
#pragma pop
