//
// Generated By: dol2asm
// Translation Unit: JKRDecomp
//

#include "JSystem/JKernel/JKRDecomp.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRThread {
    /* 802D1568 */ JKRThread(u32, int, int);
    /* 802D1758 */ ~JKRThread();
};

struct JKRHeap {};

struct JKRDecompCommand {
    /* 802DBD70 */ JKRDecompCommand();
    /* 802DBDC0 */ ~JKRDecompCommand();
};

struct JKRDecomp {
    /* 802DB680 */ void create(s32);
    /* 802DB6E0 */ JKRDecomp(s32);
    /* 802DB730 */ ~JKRDecomp();
    /* 802DB790 */ void run();
    /* 802DB858 */ void prepareCommand(u8*, u8*, u32, u32, void (*)(u32));
    /* 802DB8D0 */ void sendCommand(JKRDecompCommand*);
    /* 802DB900 */ void orderAsync(u8*, u8*, u32, u32, void (*)(u32));
    /* 802DB934 */ void sync(JKRDecompCommand*, int);
    /* 802DB988 */ void orderSync(u8*, u8*, u32, u32);
    /* 802DB9DC */ void decode(u8*, u8*, u32, u32);
    /* 802DBA58 */ void decodeSZP(u8*, u8*, u32, u32);
    /* 802DBC14 */ void decodeSZS(u8*, u8*, u32, u32);
    /* 802DBCF8 */ void checkCompressed(u8*);
};

struct JKRAMCommand {};

struct JKRAramPiece {
    /* 802D35F4 */ void sendCommand(JKRAMCommand*);
};

//
// Forward References:
//

extern "C" void create__9JKRDecompFl();
extern "C" void __ct__9JKRDecompFl();
extern "C" void __dt__9JKRDecompFv();
extern "C" void run__9JKRDecompFv();
extern "C" void prepareCommand__9JKRDecompFPUcPUcUlUlPFUl_v();
extern "C" void sendCommand__9JKRDecompFP16JKRDecompCommand();
extern "C" void orderAsync__9JKRDecompFPUcPUcUlUlPFUl_v();
extern "C" void sync__9JKRDecompFP16JKRDecompCommandi();
extern "C" void orderSync__9JKRDecompFPUcPUcUlUl();
extern "C" void decode__9JKRDecompFPUcPUcUlUl();
extern "C" void decodeSZP__9JKRDecompFPUcPUcUlUl();
extern "C" void decodeSZS__9JKRDecompFPUcPUcUlUl();
extern "C" void checkCompressed__9JKRDecompFPUc();
extern "C" void __ct__16JKRDecompCommandFv();
extern "C" void __dt__16JKRDecompCommandFv();

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void sendCommand__12JKRAramPieceFP12JKRAMCommand();
extern "C" void OSInitMessageQueue();
extern "C" void OSSendMessage();
extern "C" void OSReceiveMessage();
extern "C" void OSResumeThread();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern u8 sSystemHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804514B0-804514B8 0004+04 s=1 e=0 z=0  None .sbss      sDecompObject__9JKRDecomp */
static u8 sDecompObject__9JKRDecomp[4 + 4 /* padding */];

/* 802DB680-802DB6E0 0060+00 s=0 e=1 z=0  None .text      create__9JKRDecompFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::create(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/create__9JKRDecompFl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CC460-803CC480 0020+00 s=1 e=0 z=0  None .data      sMessageBuffer__9JKRDecomp */
SECTION_DATA static u8 sMessageBuffer__9JKRDecomp[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC480-803CC4A0 0020+00 s=2 e=0 z=0  None .data      sMessageQueue__9JKRDecomp */
SECTION_DATA static u8 sMessageQueue__9JKRDecomp[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC4A0-803CC4B0 0010+00 s=2 e=0 z=0  None .data      __vt__9JKRDecomp */
SECTION_DATA static void* __vt__9JKRDecomp[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__9JKRDecompFv,
    (void*)run__9JKRDecompFv,
};

/* 802DB6E0-802DB730 0050+00 s=1 e=0 z=0  None .text      __ct__9JKRDecompFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDecomp::JKRDecomp(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/__ct__9JKRDecompFl.s"
}
#pragma pop

/* 802DB730-802DB790 0060+00 s=1 e=0 z=0  None .text      __dt__9JKRDecompFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDecomp::~JKRDecomp() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/__dt__9JKRDecompFv.s"
}
#pragma pop

/* 802DB790-802DB858 00C8+00 s=1 e=0 z=0  None .text      run__9JKRDecompFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::run() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/run__9JKRDecompFv.s"
}
#pragma pop

/* 802DB858-802DB8D0 0078+00 s=1 e=0 z=0  None .text prepareCommand__9JKRDecompFPUcPUcUlUlPFUl_v
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::prepareCommand(u8* param_0, u8* param_1, u32 param_2, u32 param_3,
                                   void (*)(u32)) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/prepareCommand__9JKRDecompFPUcPUcUlUlPFUl_v.s"
}
#pragma pop

/* 802DB8D0-802DB900 0030+00 s=1 e=1 z=0  None .text sendCommand__9JKRDecompFP16JKRDecompCommand
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::sendCommand(JKRDecompCommand* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/sendCommand__9JKRDecompFP16JKRDecompCommand.s"
}
#pragma pop

/* 802DB900-802DB934 0034+00 s=1 e=0 z=0  None .text      orderAsync__9JKRDecompFPUcPUcUlUlPFUl_v */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::orderAsync(u8* param_0, u8* param_1, u32 param_2, u32 param_3, void (*)(u32)) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/orderAsync__9JKRDecompFPUcPUcUlUlPFUl_v.s"
}
#pragma pop

/* 802DB934-802DB988 0054+00 s=1 e=0 z=0  None .text      sync__9JKRDecompFP16JKRDecompCommandi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::sync(JKRDecompCommand* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/sync__9JKRDecompFP16JKRDecompCommandi.s"
}
#pragma pop

/* 802DB988-802DB9DC 0054+00 s=0 e=5 z=0  None .text      orderSync__9JKRDecompFPUcPUcUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::orderSync(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/orderSync__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop

/* 802DB9DC-802DBA58 007C+00 s=1 e=0 z=0  None .text      decode__9JKRDecompFPUcPUcUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::decode(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/decode__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop

/* 802DBA58-802DBC14 01BC+00 s=1 e=0 z=0  None .text      decodeSZP__9JKRDecompFPUcPUcUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::decodeSZP(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/decodeSZP__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop

/* 802DBC14-802DBCF8 00E4+00 s=1 e=0 z=0  None .text      decodeSZS__9JKRDecompFPUcPUcUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::decodeSZS(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/decodeSZS__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop

/* 802DBCF8-802DBD70 0078+00 s=1 e=4 z=0  None .text      checkCompressed__9JKRDecompFPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::checkCompressed(u8* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/checkCompressed__9JKRDecompFPUc.s"
}
#pragma pop

/* 802DBD70-802DBDC0 0050+00 s=1 e=0 z=0  None .text      __ct__16JKRDecompCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDecompCommand::JKRDecompCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/__ct__16JKRDecompCommandFv.s"
}
#pragma pop

/* 802DBDC0-802DBDFC 003C+00 s=1 e=0 z=0  None .text      __dt__16JKRDecompCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDecompCommand::~JKRDecompCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/__dt__16JKRDecompCommandFv.s"
}
#pragma pop
