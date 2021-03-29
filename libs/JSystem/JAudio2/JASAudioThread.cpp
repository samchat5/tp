//
// Generated By: dol2asm
// Translation Unit: JASAudioThread
//

#include "JSystem/JAudio2/JASAudioThread.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {};

struct JKRThread {
    /* 802D1610 */ JKRThread(JKRHeap*, u32, int, int);
    /* 802D1758 */ ~JKRThread();
};

struct JASProbe {
    /* 80290EE4 */ void start(s32, char const*);
    /* 80290F24 */ void stop(s32);
};

template <typename A0>
struct JASMemPool_MultiThreaded {};
/* JASMemPool_MultiThreaded<JASChannel> */
struct JASMemPool_MultiThreaded__template2 {
    /* 802978DC */ ~JASMemPool_MultiThreaded__template2();
};

struct JASGenericMemPool {
    /* 80290848 */ JASGenericMemPool();
    /* 802908C8 */ void newMemPool(u32, int);
};

struct JASDsp {
    /* 8029D958 */ void boot(void (*)(void*));
    /* 8029D9C4 */ void finishWork(u16);
    /* 8029DAC8 */ void initBuffer();
};

struct JASDriver {
    /* 8029C388 */ void initAI(void (*)(void));
    /* 8029C4E4 */ void startDMA();
    /* 8029C504 */ void stopDMA();
    /* 8029C568 */ void updateDac();
    /* 8029C6C4 */ void updateDSP();
    /* 8029C900 */ void finishDSPFrame();
    /* 8029E2F8 */ void updateDacCallback();
};

struct JASDSPChannel {
    /* 8029D3C8 */ void initAll();
};

struct JASAudioThread {
    /* 8029CCDC */ JASAudioThread(int, int, u32);
    /* 8029CD4C */ void create(s32);
    /* 8029CDC0 */ void stop();
    /* 8029CDEC */ void run();
    /* 8029CF68 */ void DMACallback();
    /* 8029CFBC */ void DSPCallback(void*);
    /* 8029D028 */ ~JASAudioThread();
};

//
// Forward References:
//

extern "C" void __ct__14JASAudioThreadFiiUl();
extern "C" void create__14JASAudioThreadFl();
extern "C" void stop__14JASAudioThreadFv();
extern "C" void run__14JASAudioThreadFv();
extern "C" void DMACallback__14JASAudioThreadFv();
extern "C" void DSPCallback__14JASAudioThreadFPv();
extern "C" void __dt__14JASAudioThreadFv();
extern "C" extern char const* const JASAudioThread__stringBase0;
extern "C" extern u8 snIntCount__14JASAudioThread[4 + 4 /* padding */];

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void newMemPool__17JASGenericMemPoolFUli();
extern "C" void start__8JASProbeFlPCc();
extern "C" void stop__8JASProbeFl();
extern "C" void func_802978DC();
extern "C" void initAI__9JASDriverFPFv_v();
extern "C" void startDMA__9JASDriverFv();
extern "C" void stopDMA__9JASDriverFv();
extern "C" void updateDac__9JASDriverFv();
extern "C" void updateDSP__9JASDriverFv();
extern "C" void finishDSPFrame__9JASDriverFv();
extern "C" void initAll__13JASDSPChannelFv();
extern "C" void boot__6JASDspFPFPv_v();
extern "C" void finishWork__6JASDspFUs();
extern "C" void initBuffer__6JASDspFv();
extern "C" void updateDacCallback__9JASDriverFv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFP7JKRHeapUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSSendMessage();
extern "C" void OSReceiveMessage();
extern "C" void OSJamMessage();
extern "C" void OSInitThreadQueue();
extern "C" void OSExitThread();
extern "C" void OSResumeThread();
extern "C" void OSSleepThread();
extern "C" void DSPCheckMailFromDSP();
extern "C" void DSPReadMailFromDSP();
extern "C" void __register_global_object();
extern "C" extern u8 data_80431B34[16 + 4 /* padding */];
extern "C" extern u8 data_80450B8C[4];
extern "C" extern u8 JASDram[4];
extern "C" extern u8 struct_80451260[8];
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C78E0-803C78F0 0010+00 s=2 e=0 z=0  None .data      __vt__14JASAudioThread */
SECTION_DATA static void* __vt__14JASAudioThread[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14JASAudioThreadFv,
    (void*)run__14JASAudioThreadFv,
};

/* 8029CCDC-8029CD4C 0070+00 s=1 e=0 z=0  None .text      __ct__14JASAudioThreadFiiUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASAudioThread::JASAudioThread(int param_0, int param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/__ct__14JASAudioThreadFiiUl.s"
}
#pragma pop

/* 8029CD4C-8029CDC0 0074+00 s=0 e=1 z=0  None .text      create__14JASAudioThreadFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioThread::create(s32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/create__14JASAudioThreadFl.s"
}
#pragma pop

/* 8029CDC0-8029CDEC 002C+00 s=0 e=1 z=0  None .text      stop__14JASAudioThreadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioThread::stop() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/stop__14JASAudioThreadFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B338-8039B360 0013+15 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039B338 = "SFR_DSP";
SECTION_DEAD char const* const stringBase_8039B340 = "UPDATE-DAC";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039B34B = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
#pragma pop

/* 80431C68-80431C78 000C+04 s=1 e=0 z=0  None .bss       @205 */
static u8 lit_205[12 + 4 /* padding */];

/* 804512D8-804512E0 0004+04 s=1 e=2 z=0  None .sbss      snIntCount__14JASAudioThread */
u8 snIntCount__14JASAudioThread[4 + 4 /* padding */];

/* 8029CDEC-8029CF68 017C+00 s=1 e=0 z=0  None .text      run__14JASAudioThreadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioThread::run() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/run__14JASAudioThreadFv.s"
}
#pragma pop

/* 8029CF68-8029CFBC 0054+00 s=1 e=0 z=0  None .text      DMACallback__14JASAudioThreadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioThread::DMACallback() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/DMACallback__14JASAudioThreadFv.s"
}
#pragma pop

/* 8029CFBC-8029D028 006C+00 s=1 e=0 z=0  None .text      DSPCallback__14JASAudioThreadFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioThread::DSPCallback(void* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/DSPCallback__14JASAudioThreadFPv.s"
}
#pragma pop

/* 8029D028-8029D0B4 008C+00 s=1 e=0 z=0  None .text      __dt__14JASAudioThreadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASAudioThread::~JASAudioThread() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioThread/__dt__14JASAudioThreadFv.s"
}
#pragma pop
