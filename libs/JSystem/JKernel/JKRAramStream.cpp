//
// Generated By: dol2asm
// Translation Unit: JKRAramStream
//

#include "JSystem/JKernel/JKRAramStream.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTException {
    /* 802E21FC */ void panic_f(char const*, int, char const*, ...);
};

struct JSUStreamSeekFrom {};

struct JSURandomInputStream {
    /* 802D4094 */ void getAvailable() const;
    /* 802DC4DC */ void seek(s32, JSUStreamSeekFrom);
};

struct JSUInputStream {
    /* 802DC298 */ void read(void*, s32);
};

struct JSUFileInputStream {};

struct JKRThread {
    /* 802D1568 */ JKRThread(u32, int, int);
    /* 802D1758 */ ~JKRThread();
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE500 */ void free(void*, JKRHeap*);
};

struct JKRAramStreamCommand {
    /* 802D4088 */ JKRAramStreamCommand();
};

struct JKRAramStream {
    /* 802D3B48 */ void create(s32);
    /* 802D3BB8 */ JKRAramStream(s32);
    /* 802D3C08 */ ~JKRAramStream();
    /* 802D3C68 */ void run();
    /* 802D3CD8 */ bool readFromAram();
    /* 802D3CE0 */ void writeToAram(JKRAramStreamCommand*);
    /* 802D3ED0 */ void write_StreamToAram_Async(JSUFileInputStream*, u32, u32, u32, u32*);
    /* 802D3FA0 */ void sync(JKRAramStreamCommand*, int);
    /* 802D4034 */ void setTransBuffer(u8*, u32, JKRHeap*);
};

struct JKRAramBlock {};

struct JKRAramPiece {
    /* 802D3838 */ void orderSync(int, u32, u32, u32, JKRAramBlock*);
};

//
// Forward References:
//

extern "C" void create__13JKRAramStreamFl();
extern "C" void __ct__13JKRAramStreamFl();
extern "C" void __dt__13JKRAramStreamFv();
extern "C" void run__13JKRAramStreamFv();
extern "C" bool readFromAram__13JKRAramStreamFv();
extern "C" void writeToAram__13JKRAramStreamFP20JKRAramStreamCommand();
extern "C" void write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl();
extern "C" void sync__13JKRAramStreamFP20JKRAramStreamCommandi();
extern "C" void setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap();
extern "C" void __ct__20JKRAramStreamCommandFv();
extern "C" void getAvailable__20JSURandomInputStreamCFv();
extern "C" extern char const* const JKRAramStream__stringBase0;

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void OSInitMessageQueue();
extern "C" void OSSendMessage();
extern "C" void OSReceiveMessage();
extern "C" void OSResumeThread();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451408-8045140C 0004+00 s=1 e=0 z=0  None .sbss      sAramStreamObject__13JKRAramStream */
static u8 sAramStreamObject__13JKRAramStream[4];

/* 802D3B48-802D3BB8 0070+00 s=0 e=1 z=0  None .text      create__13JKRAramStreamFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::create(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/create__13JKRAramStreamFl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CC188-803CC198 0010+00 s=1 e=0 z=0  None .data      sMessageBuffer__13JKRAramStream */
SECTION_DATA static u8 sMessageBuffer__13JKRAramStream[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC198-803CC1B8 0020+00 s=2 e=0 z=0  None .data      sMessageQueue__13JKRAramStream */
SECTION_DATA static u8 sMessageQueue__13JKRAramStream[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC1B8-803CC1C8 0010+00 s=2 e=0 z=0  None .data      __vt__13JKRAramStream */
SECTION_DATA static void* __vt__13JKRAramStream[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__13JKRAramStreamFv,
    (void*)run__13JKRAramStreamFv,
};

/* 802D3BB8-802D3C08 0050+00 s=1 e=0 z=0  None .text      __ct__13JKRAramStreamFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramStream::JKRAramStream(s32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/__ct__13JKRAramStreamFl.s"
}
#pragma pop

/* 802D3C08-802D3C68 0060+00 s=1 e=0 z=0  None .text      __dt__13JKRAramStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramStream::~JKRAramStream() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/__dt__13JKRAramStreamFv.s"
}
#pragma pop

/* 802D3C68-802D3CD8 0070+00 s=1 e=0 z=0  None .text      run__13JKRAramStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::run() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/run__13JKRAramStreamFv.s"
}
#pragma pop

/* 802D3CD8-802D3CE0 0008+00 s=1 e=0 z=0  None .text      readFromAram__13JKRAramStreamFv */
bool JKRAramStream::readFromAram() {
    return true;
}

/* ############################################################################################## */
/* 8039D120-8039D150 002D+03 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D120 = "JKRAramStream.cpp";
SECTION_DEAD char const* const stringBase_8039D132 = "%s";
SECTION_DEAD char const* const stringBase_8039D135 = ":::Cannot alloc memory\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039D14D = "\0\0";
#pragma pop

/* 802D3CE0-802D3ED0 01F0+00 s=1 e=0 z=0  None .text
 * writeToAram__13JKRAramStreamFP20JKRAramStreamCommand         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::writeToAram(JKRAramStreamCommand* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/writeToAram__13JKRAramStreamFP20JKRAramStreamCommand.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045140C-80451410 0004+00 s=2 e=0 z=0  None .sbss      transBuffer__13JKRAramStream */
static u8 transBuffer__13JKRAramStream[4];

/* 80451410-80451414 0004+00 s=2 e=0 z=0  None .sbss      transSize__13JKRAramStream */
static u8 transSize__13JKRAramStream[4];

/* 80451414-80451418 0004+00 s=2 e=0 z=0  None .sbss      transHeap__13JKRAramStream */
static u8 transHeap__13JKRAramStream[4];

/* 802D3ED0-802D3FA0 00D0+00 s=0 e=1 z=0  None .text
 * write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::write_StreamToAram_Async(JSUFileInputStream* param_0, u32 param_1,
                                                 u32 param_2, u32 param_3, u32* param_4) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl.s"
}
#pragma pop

/* 802D3FA0-802D4034 0094+00 s=0 e=1 z=0  None .text
 * sync__13JKRAramStreamFP20JKRAramStreamCommandi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::sync(JKRAramStreamCommand* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/sync__13JKRAramStreamFP20JKRAramStreamCommandi.s"
}
#pragma pop

/* 802D4034-802D4088 0054+00 s=1 e=1 z=0  None .text
 * setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramStream::setTransBuffer(u8* param_0, u32 param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/setTransBuffer__13JKRAramStreamFPUcUlP7JKRHeap.s"
}
#pragma pop

/* 802D4088-802D4094 000C+00 s=1 e=0 z=0  None .text      __ct__20JKRAramStreamCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramStreamCommand::JKRAramStreamCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/__ct__20JKRAramStreamCommandFv.s"
}
#pragma pop

/* 802D4094-802D40F0 005C+00 s=0 e=3 z=0  None .text      getAvailable__20JSURandomInputStreamCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSURandomInputStream::getAvailable() const {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramStream/getAvailable__20JSURandomInputStreamCFv.s"
}
#pragma pop
