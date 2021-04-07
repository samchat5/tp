//
// Generated By: dol2asm
// Translation Unit: ppc/Generic/targimpl
//

#include "TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __TRK_get_MSR();
extern "C" void __TRK_set_MSR();
extern "C" static void TRK_ppc_memcpy();
extern "C" void TRKInterruptHandler();
extern "C" static void TRKExceptionHandler();
extern "C" void TRKSwapAndGo();
extern "C" static void TRKInterruptHandlerEnableInterrupts();
extern "C" static void ReadFPSCR();
extern "C" static void WriteFPSCR();
extern "C" void TRKTargetAccessARAM();
extern "C" void TRKTargetSetInputPendingPtr();
extern "C" void TRKTargetStop();
extern "C" void TRKTargetSetStopped();
extern "C" void TRKTargetStopped();
extern "C" void TRKTargetSupportRequest();
extern "C" void TRKTargetGetPC();
extern "C" void TRKTargetStepOutOfRange();
extern "C" void TRKTargetSingleStep();
extern "C" void TRKTargetAddExceptionInfo();
extern "C" void TRKTargetAddStopInfo();
extern "C" void TRKTargetInterrupt();
extern "C" static void TRKPostInterruptEvent();
extern "C" void TRKTargetAccessExtended2();
extern "C" void TRKTargetAccessExtended1();
extern "C" void TRKTargetAccessFP();
extern "C" void TRKTargetAccessDefault();
extern "C" static void TRKTargetReadInstruction();
extern "C" void TRKTargetAccessMemory();
extern "C" static void TRKValidMemory32();

//
// External References:
//

SECTION_INIT void memset();
extern "C" void TRKConstructEvent();
extern "C" void TRKPostEvent();
extern "C" void TRKReadBuffer_ui32();
extern "C" void TRKReadBuffer1_ui64();
extern "C" void TRKAppendBuffer_ui32();
extern "C" void TRKAppendBuffer_ui8();
extern "C" void TRKAppendBuffer1_ui64();
extern "C" void HandlePositionFileSupportRequest();
extern "C" void HandleCloseFileSupportRequest();
extern "C" void HandleOpenFileSupportRequest();
extern "C" void TRKSuppAccessFile();
extern "C" void TRKDoNotifyStopped();
extern "C" void TRK_flush_cache();
extern "C" void TRKSaveExtended1Block();
extern "C" void TRKRestoreExtended1Block();
extern "C" void TRK__write_aram();
extern "C" void TRK__read_aram();
extern "C" void TRKTargetTranslate();
extern "C" void TRKUARTInterruptHandler();
extern "C" void MWTRACE();

//
// Declarations:
//

/* 8036F638-8036F640 369F78 0008+00 2/2 1/1 0/0 .text            __TRK_get_MSR */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __TRK_get_MSR() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/__TRK_get_MSR.s"
}
#pragma pop

/* 8036F640-8036F648 369F80 0008+00 1/1 0/0 0/0 .text            __TRK_set_MSR */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __TRK_set_MSR() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/__TRK_set_MSR.s"
}
#pragma pop

/* 8036F648-8036F684 369F88 003C+00 1/1 0/0 0/0 .text            TRK_ppc_memcpy */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRK_ppc_memcpy() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRK_ppc_memcpy.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D3238-803D3244 030358 0009+03 1/1 1/1 0/0 .data            gTRKRestoreFlags */
SECTION_DATA extern u8 gTRKRestoreFlags[9 + 3 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803D3244-803D3254 030364 0010+00 10/10 0/0 0/0 .data            gTRKExceptionStatus */
SECTION_DATA static u8 gTRKExceptionStatus[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
};

/* 8044F290-8044F294 07BFB0 0002+02 1/1 0/0 0/0 .bss             TRK_saved_exceptionID */
SECTION_BSS static u8 TRK_saved_exceptionID[2 + 2 /* padding */];

/* 8044F294-8044F338 07BFB4 00A4+00 11/11 1/1 0/0 .bss             gTRKState */
extern u8 gTRKState[164];
u8 gTRKState[164];

/* 8044F338-8044F768 07C058 0430+00 12/12 6/6 0/0 .bss             gTRKCPUState */
extern u8 gTRKCPUState[1072];
u8 gTRKCPUState[1072];

/* 8044F768-8044F7FC 07C488 0094+00 1/1 0/0 0/0 .bss             gTRKSaveState */
static u8 gTRKSaveState[148];

/* 8036F684-8036F818 369FC4 0194+00 0/0 1/1 0/0 .text            TRKInterruptHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKInterruptHandler() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKInterruptHandler.s"
}
#pragma pop

/* 8036F818-8036F8B4 36A158 009C+00 1/1 0/0 0/0 .text            TRKExceptionHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKExceptionHandler() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKExceptionHandler.s"
}
#pragma pop

/* 8036F8B4-8036F978 36A1F4 00C4+00 0/0 1/1 0/0 .text            TRKSwapAndGo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKSwapAndGo() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKSwapAndGo.s"
}
#pragma pop

/* 8036F978-8036F9CC 36A2B8 0054+00 1/1 0/0 0/0 .text            TRKInterruptHandlerEnableInterrupts
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKInterruptHandlerEnableInterrupts() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKInterruptHandlerEnableInterrupts.s"
}
#pragma pop

/* 8036F9CC-8036F9F0 36A30C 0024+00 1/1 0/0 0/0 .text            ReadFPSCR */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ReadFPSCR() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/ReadFPSCR.s"
}
#pragma pop

/* 8036F9F0-8036FA14 36A330 0024+00 1/1 0/0 0/0 .text            WriteFPSCR */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void WriteFPSCR() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/WriteFPSCR.s"
}
#pragma pop

/* 8036FA14-8036FAD8 36A354 00C4+00 0/0 2/2 0/0 .text            TRKTargetAccessARAM */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessARAM() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessARAM.s"
}
#pragma pop

/* 8036FAD8-8036FAE8 36A418 0010+00 0/0 1/1 0/0 .text            TRKTargetSetInputPendingPtr */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetSetInputPendingPtr() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetSetInputPendingPtr.s"
}
#pragma pop

/* 8036FAE8-8036FB00 36A428 0018+00 0/0 1/1 0/0 .text            TRKTargetStop */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetStop() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetStop.s"
}
#pragma pop

/* 8036FB00-8036FB10 36A440 0010+00 0/0 1/1 0/0 .text            TRKTargetSetStopped */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetSetStopped() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetSetStopped.s"
}
#pragma pop

/* 8036FB10-8036FB20 36A450 0010+00 0/0 3/3 0/0 .text            TRKTargetStopped */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetStopped() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetStopped.s"
}
#pragma pop

/* 8036FB20-8036FD20 36A460 0200+00 0/0 1/1 0/0 .text            TRKTargetSupportRequest */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetSupportRequest() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetSupportRequest.s"
}
#pragma pop

/* 8036FD20-8036FD30 36A660 0010+00 0/0 1/1 0/0 .text            TRKTargetGetPC */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetGetPC() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetGetPC.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2B60-803A2B70 02F1C0 0010+00 1/1 0/0 0/0 .rodata          gTRKMemMap */
SECTION_RODATA static u8 const gTRKMemMap[16] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
};
COMPILER_STRIP_GATE(803A2B60, &gTRKMemMap);

/* 803A2B70-803A2B98 02F1D0 0028+00 2/2 0/0 0/0 .rodata          @276 */
SECTION_RODATA static u8 const lit_276[40] = {
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(803A2B70, &lit_276);

/* 803A2B98-803A2BC0 02F1F8 0028+00 1/1 0/0 0/0 .rodata          @283 */
SECTION_RODATA static u8 const lit_283[40] = {
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(803A2B98, &lit_283);

/* 803A2BC0-803A2BE8 02F220 0028+00 1/1 0/0 0/0 .rodata          @290 */
SECTION_RODATA static u8 const lit_290[40] = {
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(803A2BC0, &lit_290);

/* 803A2BE8-803A2BF8 02F248 0010+00 3/3 0/0 0/0 .rodata          @422 */
SECTION_RODATA static u8 const lit_422[16] = {
    0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x44, 0x6F, 0x53, 0x74, 0x65, 0x70, 0x28, 0x29, 0x0A, 0x00,
};
COMPILER_STRIP_GATE(803A2BE8, &lit_422);

/* 803D3254-803D3268 030374 0014+00 3/3 0/0 0/0 .data            gTRKStepStatus */
SECTION_DATA static u8 gTRKStepStatus[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036FD30-8036FDE8 36A670 00B8+00 0/0 1/1 0/0 .text            TRKTargetStepOutOfRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetStepOutOfRange() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetStepOutOfRange.s"
}
#pragma pop

/* 8036FDE8-8036FE94 36A728 00AC+00 0/0 1/1 0/0 .text            TRKTargetSingleStep */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetSingleStep() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetSingleStep.s"
}
#pragma pop

/* 8036FE94-8036FF18 36A7D4 0084+00 0/0 1/1 0/0 .text            TRKTargetAddExceptionInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAddExceptionInfo() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAddExceptionInfo.s"
}
#pragma pop

/* 8036FF18-8036FFA4 36A858 008C+00 0/0 1/1 0/0 .text            TRKTargetAddStopInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAddStopInfo() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAddStopInfo.s"
}
#pragma pop

/* 8036FFA4-80370134 36A8E4 0190+00 0/0 1/1 0/0 .text            TRKTargetInterrupt */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetInterrupt() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetInterrupt.s"
}
#pragma pop

/* 80370134-803701E0 36AA74 00AC+00 2/2 0/0 0/0 .text            TRKPostInterruptEvent */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKPostInterruptEvent() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKPostInterruptEvent.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044F7FC-8044F810 07C51C 0010+04 2/2 0/0 0/0 .bss             TRKvalue128_temp */
static u8 TRKvalue128_temp[16 + 4 /* padding */];

/* 803701E0-80370618 36AB20 0438+00 0/0 2/2 0/0 .text            TRKTargetAccessExtended2 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessExtended2() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessExtended2.s"
}
#pragma pop

/* 80370618-80370788 36AF58 0170+00 0/0 2/2 0/0 .text            TRKTargetAccessExtended1 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessExtended1() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessExtended1.s"
}
#pragma pop

/* 80370788-80370C94 36B0C8 050C+00 0/0 2/2 0/0 .text            TRKTargetAccessFP */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessFP() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessFP.s"
}
#pragma pop

/* 80370C94-80370D88 36B5D4 00F4+00 0/0 2/2 0/0 .text            TRKTargetAccessDefault */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessDefault() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessDefault.s"
}
#pragma pop

/* 80370D88-80370DD4 36B6C8 004C+00 3/3 0/0 0/0 .text            TRKTargetReadInstruction */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKTargetReadInstruction() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetReadInstruction.s"
}
#pragma pop

/* 80370DD4-80370F20 36B714 014C+00 1/1 2/2 0/0 .text            TRKTargetAccessMemory */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKTargetAccessMemory() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKTargetAccessMemory.s"
}
#pragma pop

/* 80370F20-803711C4 36B860 02A4+00 1/1 0/0 0/0 .text            TRKValidMemory32 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void TRKValidMemory32() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl/TRKValidMemory32.s"
}
#pragma pop
