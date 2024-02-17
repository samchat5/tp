//
// Generated By: dol2asm
// Translation Unit: JUTException
//

#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTDirectFile.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "dol2asm.h"
#include "dolphin/base/PPCArch.h"
#include "dolphin/os.h"
#include "dolphin/vi.h"
#include "global.h"

//
// Forward References:
//

extern "C" void run__12JUTExceptionFv();
extern "C" void __dt__12JUTExceptionFv();
extern "C" void printContext__12JUTExceptionFUsP9OSContextUlUl();
extern "C" void createFB__12JUTExceptionFv();
extern "C" void panic_f_va__12JUTExceptionFPCciPCcP16__va_list_struct();

extern "C" extern char const* const JUTException__stringBase0;
extern "C" u8 sMessageQueue__12JUTException[32];
extern "C" u8 sMessageBuffer__12JUTException[4 + 4 /* padding */];
extern "C" u8 sErrorManager__12JUTException[4];

extern "C" u8 msr__12JUTException[4];
extern "C" u8 fpscr__12JUTException[4];
extern "C" u8 sPreUserCallback__12JUTException[4];
extern "C" u8 sConsole__12JUTException[4];

//
// External References:
//

extern "C" void changeFrameBuffer__14JUTDirectPrintFPvUsUs();
extern "C" void _savegpr_25();
extern "C" void _restgpr_25();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" void OSYieldThread();
extern "C" void OSFillFPUContext(OSContext*);
extern "C" void print_f__10JUTConsoleFPCce();
extern "C" OSContext* OSGetCurrentContext();
extern "C" extern _GXRenderModeObj GXNtsc480Int;
extern "C" void _restgpr_16();
extern "C" void fopen__13JUTDirectFileFPCc();
extern "C" void fclose__13JUTDirectFileFv();
extern "C" void fgets__13JUTDirectFileFPvi();
extern "C" void print__10JUTConsoleFPCc();
extern "C" void __ct__13JUTDirectFileFv();
extern "C" void __dt__13JUTDirectFileFv();
extern "C" void _savegpr_16();

//
// Declarations:
//

/* 803CC620-803CC640 029740 0020+00 3/3 0/0 0/0 .data            sMessageQueue__12JUTException */
SECTION_DATA OSMessageQueue JUTException::sMessageQueue = {0};

/* 803CC640-803CC660 029760 0020+00 1/1 0/0 0/0 .data            c3bcnt */
SECTION_DATA static OSTime c3bcnt[4] = {0, 0, 0, 0};

/* 803CC660-803CC6A4 -00001 0044+00 1/1 0/0 0/0 .data            sCpuExpName__12JUTException */
SECTION_DATA const char* JUTException::sCpuExpName[17] = {
    "SYSTEM RESET",
    "MACHINE CHECK",
    "DSI",
    "ISI",
    "EXTERNAL INTERRUPT",
    "ALIGNMENT",
    "PROGRAM",
    "FLOATING POINT",
    "DECREMENTER",
    "SYSTEM CALL",
    "TRACE",
    "PERFORMACE MONITOR",
    "BREAK POINT",
    "SYSTEM INTERRUPT",
    "THERMAL INTERRUPT",
    "PROTECTION",
    "FLOATING POINT",
};

/* 80451508-8045150C 000A08 0004+00 4/4 3/3 0/0 .sbss            sErrorManager__12JUTException */
JUTException* JUTException::sErrorManager;

/* 8045150C-80451510 000A0C 0004+00 4/4 0/0 0/0 .sbss            sPreUserCallback__12JUTException */
OSErrorHandler JUTException::sPreUserCallback;

/* 80451510-80451514 000A10 0004+00 3/3 0/0 0/0 .sbss            sPostUserCallback__12JUTException
 */
OSErrorHandler JUTException::sPostUserCallback;

/* 802E1D5C-802E1E40 2DC69C 00E4+00 1/1 0/0 0/0 .text __ct__12JUTExceptionFP14JUTDirectPrint */
JUTException::JUTException(JUTDirectPrint* directPrint)
    : JKRThread(0x1C00, 0x10, 0), mDirectPrint(directPrint) {
    OSSetErrorHandler(EXCEPTION_DSI, errorHandler);
    OSSetErrorHandler(EXCEPTION_ISI, errorHandler);
    OSSetErrorHandler(EXCEPTION_PROGRAM, errorHandler);
    OSSetErrorHandler(EXCEPTION_ALIGNMENT, errorHandler);
    OSSetErrorHandler(EXCEPTION_MEMORY_PROTECTION, errorHandler);
    setFPException(0);

    sPreUserCallback = NULL;
    sPostUserCallback = NULL;

    setGamePad(NULL);

    this->mPrintWaitTime0 = 10;
    this->mPrintWaitTime1 = 10;
    this->mTraceSuppress = -1;
    this->field_0x98 = 0;
    this->mPrintFlags =
        JUT_PRINT_GPR | JUT_PRINT_GPR_MAP | JUT_PRINT_SRR0_MAP | JUT_PRINT_FLOAT | JUT_PRINT_STACK;
}

/* 802E1E40-802E1EA8 2DC780 0068+00 0/0 1/1 0/0 .text create__12JUTExceptionFP14JUTDirectPrint */
JUTException* JUTException::create(JUTDirectPrint* directPrint) {
    if (!sErrorManager) {
        JKRHeap* systemHeap = JKRGetSystemHeap();
        sErrorManager = new (systemHeap, 0) JUTException(directPrint);
        sErrorManager->resume();
    }

    return sErrorManager;
}

/* ############################################################################################## */
/* 804508F0-804508F8 000370 0004+04 1/1 0/0 0/0 .sdata           sMessageBuffer__12JUTException */
SECTION_SDATA OSMessage JUTException::sMessageBuffer[1 + 1 /* padding */] = {0};

struct CallbackObject {
    /* 0x00 */ OSErrorHandler callback;
    /* 0x04 */ u16 error;
    /* 0x06 */ u16 pad_0x06;
    /* 0x08 */ OSContext* context;
    /* 0x0C */ int param_3;
    /* 0x10 */ int param_4;
    /* 0x14 */
};

/* 802E1EA8-802E1FCC 2DC7E8 0124+00 1/0 0/0 0/0 .text            run__12JUTExceptionFv */
void* JUTException::run() {
    PPCMtmsr(PPCMfmsr() & ~0x0900);
    OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 1);
    OSMessage message;
    while (true) {
        OSReceiveMessage(&sMessageQueue, &message, OS_MESSAGE_BLOCK);
        VISetPreRetraceCallback(NULL);
        VISetPostRetraceCallback(NULL);
        CallbackObject* cb = (CallbackObject*)message;
        OSErrorHandler callback = cb->callback;
        u16 error = cb->error;
        OSContext* context = cb->context;
        int r24 = cb->param_3;
        int r23 = cb->param_4;
        if (error < 17) {
            mStackPointer = context->gpr[1];
        }
        mFrameMemory = (JUTExternalFB*)VIGetCurrentFrameBuffer();
        if (!mFrameMemory) {
            sErrorManager->createFB();
        }
        sErrorManager->mDirectPrint->changeFrameBuffer(mFrameMemory);
        if (callback) {
            callback(error, context, r24, r23);
        }
        OSDisableInterrupts();
        mFrameMemory = (JUTExternalFB*)VIGetCurrentFrameBuffer();
        sErrorManager->mDirectPrint->changeFrameBuffer(mFrameMemory);
        sErrorManager->printContext(error, context, r24, r23);
    }
}

/* ############################################################################################## */
/* 80434578-8043458C 061298 0014+00 2/2 0/0 0/0 .bss             exCallbackObject */

STATIC_ASSERT(sizeof(CallbackObject) == 0x14);
static CallbackObject exCallbackObject;

/* 80451514-80451518 000A14 0004+00 1/1 0/0 0/0 .sbss            sConsoleBuffer__12JUTException */
void* JUTException::sConsoleBuffer;

/* 80451518-8045151C 000A18 0004+00 1/1 0/0 0/0 .sbss            sConsoleBufferSize__12JUTException
 */
u32 JUTException::sConsoleBufferSize;

/* 8045151C-80451520 000A1C 0004+00 13/13 1/1 0/0 .sbss            sConsole__12JUTException */
JUTConsole* JUTException::sConsole;

/* 80451520-80451524 000A20 0004+00 2/2 0/0 0/0 .sbss            msr__12JUTException */
u32 JUTException::msr;

/* 80451524-80451528 000A24 0004+00 3/3 0/0 0/0 .sbss            fpscr__12JUTException */
u32 JUTException::fpscr;

/* 802E1FCC-802E20C0 2DC90C 00F4+00 2/2 0/0 0/0 .text
 * errorHandler__12JUTExceptionFUsP9OSContextUlUl               */
void JUTException::errorHandler(OSError error, OSContext* context, u32 param_3, u32 param_4) {
    msr = PPCMfmsr();
    fpscr = context->fpscr;
    OSFillFPUContext(context);
    OSSetErrorHandler(error, NULL);
    if (error == OS_ERROR_MEMORY_PROTECTION) {
        OSProtectRange(0, NULL, 0, 3);
        OSProtectRange(1, NULL, 0, 3);
        OSProtectRange(2, NULL, 0, 3);
        OSProtectRange(3, NULL, 0, 3);
    }

    exCallbackObject.callback = sPreUserCallback;
    exCallbackObject.error = error;
    exCallbackObject.context = context;
    exCallbackObject.param_3 = param_3;
    exCallbackObject.param_4 = param_4;

    OSSendMessage(&sMessageQueue, &exCallbackObject, OS_MESSAGE_BLOCK);
    OSEnableScheduler();
    OSYieldThread();
}

/* 80434598-804345A8 0612B8 000C+04 4/4 0/0 0/0 .bss             sMapFileList__12JUTException */
JSUList<JUTException::JUTExMapFile> JUTException::sMapFileList(false);

/* 804345A8-80434870 0612C8 02C8+00 1/1 0/0 0/0 .bss             context$2230 */
static OSContext context;

/* 802E20C0-802E21FC 2DCA00 013C+00 1/1 0/0 0/0 .text
 * panic_f_va__12JUTExceptionFPCciPCcP16__va_list_struct        */
void JUTException::panic_f_va(char const* file, int line, char const* format, va_list args) {
    char buffer[256];
    vsnprintf(buffer, sizeof(buffer) - 1, format, args);
    if (!sErrorManager) {
        OSPanic((char*)file, line, buffer);
    }

    OSContext* current_context = OSGetCurrentContext();
    memcpy(&context, current_context, sizeof(OSContext));
    sErrorManager->mStackPointer = (u32)OSGetStackPointer();

    exCallbackObject.callback = sPreUserCallback;
    exCallbackObject.error = 0xFF;
    exCallbackObject.context = &context;
    exCallbackObject.param_3 = 0;
    exCallbackObject.param_4 = 0;

    if (!sConsole || (sConsole && (sConsole->getOutput() & 2) == 0)) {
        OSReport("%s in \"%s\" on line %d\n", buffer, file, line);
    }

    if (sConsole) {
        sConsole->print_f("%s in \"%s\" on line %d\n", buffer, file, line);
    }

    OSSendMessage(&sMessageQueue, &exCallbackObject, 1);
    OSThread* current_thread = OSGetCurrentThread();
    OSSuspendThread(current_thread);
}

/* 802E21FC-802E227C 2DCB3C 0080+00 0/0 16/16 0/0 .text            panic_f__12JUTExceptionFPCciPCce
 */
void JUTException::panic_f(char const* file, int line, char const* format, ...) {
    va_list args;
    va_start(args, format);
    panic_f_va(file, line, format, args);
    va_end(args);
}

/* 802E227C-802E22C4 2DCBBC 0048+00 1/1 0/0 0/0 .text            setFPException__12JUTExceptionFUl
 */
void JUTException::setFPException(u32 fpscr_enable_bits) {
    __OSFpscrEnableBits = fpscr_enable_bits;
    if (fpscr_enable_bits) {
        OSSetErrorHandler(EXCEPTION_FLOATING_POINT_EXCEPTION, errorHandler);
    } else {
        OSSetErrorHandler(EXCEPTION_FLOATING_POINT_EXCEPTION, NULL);
    }
}

// u8 doesn't work in other places for signbit? temp fix
#define __signbit(x) ((*(unsigned char*)&(x)) & 0x80)

/* 802E22C4-802E2454 2DCC04 0190+00 1/1 0/0 0/0 .text            showFloatSub__12JUTExceptionFif */
void JUTException::showFloatSub(int index, f32 value) {
    if (fpclassify(value) == FP_NAN) {
        sConsole->print_f("F%02d: Nan      ", index);
    } else if (fpclassify(value) == FP_INFINITE) {
        if (__signbit(value)) {
            sConsole->print_f("F%02d:+Inf     ", index);
        } else {
            sConsole->print_f("F%02d:-Inf     ", index);
        }
    } else if (value == 0.0f) {
        sConsole->print_f("F%02d: 0.0      ", index);
    } else {
        sConsole->print_f("F%02d:%+.3E", index, value);
    }
}

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D5B7 =
    "-------------------------------- FPR\n";
SECTION_DEAD static char const* const stringBase_8039D5DD = " ";
SECTION_DEAD static char const* const stringBase_8039D5DF = "\n";
#pragma pop

/* 802E2454-802E2578 2DCD94 0124+00 1/1 0/0 0/0 .text showFloat__12JUTExceptionFP9OSContext */
void JUTException::showFloat(OSContext* context) {
    if (!sConsole) {
        return;
    }

    sConsole->print("-------------------------------- FPR\n");
    for (int i = 0; i < 10; i++) {
        showFloatSub(i, context->fpr[i]);
        sConsole->print(" ");
        showFloatSub(i + 11, context->fpr[i + 11]);
        sConsole->print(" ");
        showFloatSub(i + 22, context->fpr[i + 22]);
        sConsole->print("\n");
    }
    showFloatSub(10, context->fpr[10]);
    sConsole->print(" ");
    showFloatSub(21, context->fpr[21]);
    sConsole->print("\n");
}

/* 802E2578-802E2638 2DCEB8 00C0+00 1/1 0/0 0/0 .text
 * searchPartialModule__12JUTExceptionFUlPUlPUlPUlPUl           */
bool JUTException::searchPartialModule(u32 address, u32* module_id, u32* section_id,
                                       u32* section_offset, u32* name_offset) {
    if (!address) {
        return false;
    }

    OSModuleInfo* module = *(OSModuleInfo**)0x800030C8;
    while (module) {
        OSSectionInfo* section = (OSSectionInfo*)module->sectionInfoOffset;
        for (u32 i = 0; i < module->numSections; section = section + 1, i++) {
            if (section->size) {
                u32 addr = ALIGN_PREV(section->offset, 2);
                if ((addr <= address) && (address < addr + section->size)) {
                    if (module_id)
                        *module_id = module->id;
                    if (section_id)
                        *section_id = i;
                    if (section_offset)
                        *section_offset = address - addr;
                    if (name_offset)
                        *name_offset = module->nameOffset;
                    return true;
                }
            }
        }

        module = (OSModuleInfo*)module->link.next;
    }

    return false;
}

/* 802E2638-802E26B0 2DCF78 0078+00 1/1 0/0 0/0 .text            search_name_part__FPUcPUci */
static void search_name_part(u8* src, u8* dst, int dst_length) {
    for (u8* p = src; *p; p++) {
        if (*p == '\\') {
            src = p;
        }
    }

    if (*src == '\\') {
        src++;
    }

    for (int i = 0; (*src != 0) && (i < dst_length);) {
        if (*src == '.')
            break;
        *dst++ = *src++;
        i++;
    }

    *dst = '\0';
}

/* 802E26B0-802E27B0 2DCFF0 0100+00 1/1 0/0 0/0 .text showStack__12JUTExceptionFP9OSContext */
void JUTException::showStack(OSContext* context) {
    if (!sConsole) {
        return;
    }

    u32 i;
    sConsole->print("-------------------------------- TRACE\n");
    u32* stackPointer = (u32*)mStackPointer;
    sConsole->print_f("Address:   BackChain   LR save\n");

    for (i = 0; (stackPointer != NULL) && (stackPointer != (u32*)0xFFFFFFFF) && (i++ < 0x100);) {
        if (i > mTraceSuppress) {
            sConsole->print("Suppress trace.\n");
            return;
        }

        sConsole->print_f("%08X:  %08X    %08X\n", stackPointer, stackPointer[0], stackPointer[1]);
        showMapInfo_subroutine(stackPointer[1], false);
        JUTConsoleManager* manager = JUTConsoleManager::sManager;
        manager->drawDirect(true);
        waitTime(mPrintWaitTime1);
        stackPointer = (u32*)stackPointer[0];
    }
}

/* 802E27B0-802E2A84 2DD0F0 02D4+00 1/1 0/0 0/0 .text
 * showMainInfo__12JUTExceptionFUsP9OSContextUlUl               */
void JUTException::showMainInfo(u16 error, OSContext* context, u32 dsisr, u32 dar) {
    if (!sConsole) {
        return;
    }

    if (error < (OS_ERROR_MACHINE_CHECK | OS_ERROR_FLOATING_POINT_EXCEPTION)) {
        sConsole->print_f("CONTEXT:%08XH  (%s EXCEPTION)\n", context, sCpuExpName[error]);
    } else {
        sConsole->print_f("CONTEXT:%08XH\n", context);
    }

    if (error == OS_ERROR_FLOATING_POINT_EXCEPTION) {
        u32 flags = fpscr & (((fpscr & 0xf8) << 0x16) | 0x1f80700);
        if ((flags & 0x20000000) != 0) {
            sConsole->print_f(" FPE: Invalid operation\n");
            if ((fpscr & 0x1000000) != 0) {
                sConsole->print_f(" SNaN\n");
            }
            if ((fpscr & 0x800000) != 0) {
                sConsole->print_f(" Infinity - Infinity\n");
            }
            if ((fpscr & 0x400000) != 0) {
                sConsole->print_f(" Infinity / Infinity\n");
            }
            if ((fpscr & 0x200000) != 0) {
                sConsole->print_f(" 0 / 0\n");
            }
            if ((fpscr & 0x100000) != 0) {
                sConsole->print_f(" Infinity * 0\n");
            }
            if ((fpscr & 0x80000) != 0) {
                sConsole->print_f(" Invalid compare\n");
            }
            if ((fpscr & 0x400) != 0) {
                sConsole->print_f(" Software request\n");
            }
            if ((fpscr & 0x200) != 0) {
                sConsole->print_f(" Invalid square root\n");
            }
            if ((fpscr & 0x100) != 0) {
                sConsole->print_f(" Invalid integer convert\n");
            }
        }
        if ((flags & 0x10000000) != 0) {
            sConsole->print_f(" FPE: Overflow\n");
        }
        if ((flags & 0x8000000) != 0) {
            sConsole->print_f(" FPE: Underflow\n");
        }
        if ((flags & 0x4000000) != 0) {
            sConsole->print_f(" FPE: Zero division\n");
        }
        if ((flags & 0x2000000) != 0) {
            sConsole->print_f(" FPE: Inexact result\n");
        }
    }
    sConsole->print_f("SRR0:   %08XH   SRR1:%08XH\n", context->srr0, context->srr1);
    sConsole->print_f("DSISR:  %08XH   DAR: %08XH\n", dsisr, dar);
}

/* 802E2A84-802E2B44 2DD3C4 00C0+00 1/1 0/0 0/0 .text            showGPR__12JUTExceptionFP9OSContext
 */
void JUTException::showGPR(OSContext* context) {
    if (!sConsole) {
        return;
    }

    sConsole->print("-------------------------------- GPR\n");
    for (int i = 0; i < 10; i++) {
        sConsole->print_f("R%02d:%08XH  R%02d:%08XH  R%02d:%08XH\n", i, context->gpr[i], i + 11,
                          context->gpr[i + 11], i + 22, context->gpr[i + 22]);
    }
    sConsole->print_f("R%02d:%08XH  R%02d:%08XH\n", 10, context->gpr[10], 21, context->gpr[21]);
}

/* 802E2B44-802E2CA0 2DD484 015C+00 3/3 0/0 0/0 .text showMapInfo_subroutine__12JUTExceptionFUlb
 */
bool JUTException::showMapInfo_subroutine(u32 address, bool begin_with_newline) {
    if ((address < 0x80000000) || (0x82ffffff < address)) {
        return false;
    }

    u32 name_offset;
    u32 module_id;
    u32 section_id;
    u32 section_offset;
    u8 name_part[36];

    const char* new_line = "\n";
    if (begin_with_newline == false) {
        new_line = "";
    }

    bool result =
        searchPartialModule(address, &module_id, &section_id, &section_offset, &name_offset);
    if (result == true) {
        search_name_part((u8*)name_offset, name_part, 32);
        sConsole->print_f("%s %s:%x section:%d\n", new_line, name_part, section_offset, section_id);
        begin_with_newline = false;
    }

    JSUListIterator<JUTException::JUTExMapFile> last = sMapFileList.getEnd();
    JSUListIterator<JUTException::JUTExMapFile> first = sMapFileList.getFirst();
    if (first != last) {
        u32 out_addr;
        u32 out_size;
        char out_line[256];

        if (result == true) {
            result =
                queryMapAddress((char*)name_part, section_offset, section_id, &out_addr, &out_size,
                                out_line, ARRAY_SIZE(out_line), true, begin_with_newline);
        } else {
            result = queryMapAddress(NULL, address, -1, &out_addr, &out_size, out_line,
                                     ARRAY_SIZE(out_line), true, begin_with_newline);
        }

        if (result == true) {
            return true;
        }
    }

    return false;
}

/* 802E2CA0-802E2DAC 2DD5E0 010C+00 1/1 0/0 0/0 .text showGPRMap__12JUTExceptionFP9OSContext */
void JUTException::showGPRMap(OSContext* context) {
    if (!sConsole) {
        return;
    }

    bool found_address_register = false;
    sConsole->print("-------------------------------- GPRMAP\n");

    for (int i = 0; i < 31; i++) {
        u32 address = context->gpr[i];

        if (address >= 0x80000000 && address <= 0x83000000 - 1) {
            found_address_register = true;

            sConsole->print_f("R%02d: %08XH", i, address);
            if (!showMapInfo_subroutine(address, true)) {
                sConsole->print("  no information\n");
            }
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime1);
        }
    }

    if (!found_address_register) {
        sConsole->print("  no register which seem to address.\n");
    }
}

/* 802E2DAC-802E2E70 2DD6EC 00C4+00 1/1 0/0 0/0 .text showSRR0Map__12JUTExceptionFP9OSContext */
void JUTException::showSRR0Map(OSContext* context) {
    if (!sConsole) {
        return;
    }

    sConsole->print("-------------------------------- SRR0MAP\n");
    u32 address = context->srr0;
    if (address >= 0x80000000 && address <= 0x83000000 - 1) {
        sConsole->print_f("SRR0: %08XH", address);
        if (showMapInfo_subroutine(address, true) == false) {
            sConsole->print("  no information\n");
        }
        JUTConsoleManager::getManager()->drawDirect(true);
    }
}

/* 802E2E70-802E2F18 2DD7B0 00A8+00 1/1 0/0 0/0 .text
 * printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl */
void JUTException::printDebugInfo(JUTException::EInfoPage page, OSError error, OSContext* context,
                                  u32 param_3, u32 param_4) {
    switch (page) {
    case EINFO_PAGE_GPR:
        return showGPR(context);
    case EINFO_PAGE_FLOAT:
        showFloat(context);
        if (sConsole) {
            sConsole->print_f(" MSR:%08XH\t FPSCR:%08XH\n", msr, fpscr);
        }
        break;
    case EINFO_PAGE_STACK:
        return showStack(context);
    case EINFO_PAGE_GPR_MAP:
        return showGPRMap(context);
    case EINFO_PAGE_SSR0_MAP:
        return showSRR0Map(context);
    }
}

/* 802E2F18-802E2F54 2DD858 003C+00 1/1 1/1 0/0 .text            isEnablePad__12JUTExceptionCFv */
bool JUTException::isEnablePad() const {
    if (mGamePad == (JUTGamePad*)0xFFFFFFFF)
        return true;

    if (mGamePadPort >= 0)
        return true;

    return mGamePad;
}

/* 802E2F54-802E34C0 2DD894 056C+00 1/1 1/1 0/0 .text            readPad__12JUTExceptionFPUlPUl */
bool JUTException::readPad(u32* out_trigger, u32* out_button) {
    bool result = false;
    OSTime start_time = OSGetTime();
    OSTime ms;
    do {
        OSTime end_time = OSGetTime();
        OSTime ticks = end_time - start_time;
        ms = ticks / (OS_TIMER_CLOCK / 1000);
    } while (ms < 0x32);

    if (mGamePad == (JUTGamePad*)0xffffffff) {
        JUTGamePad gamePad0(JUTGamePad::Port_1);
        JUTGamePad gamePad1(JUTGamePad::Port_2);
        JUTGamePad gamePad2(JUTGamePad::Port_3);
        JUTGamePad gamePad3(JUTGamePad::Port_4);
        JUTGamePad::read();

        c3bcnt[0] =
            (gamePad0.isPushing3ButtonReset() ? (c3bcnt[0] != 0 ? c3bcnt[0] : OSGetTime()) : 0);
        c3bcnt[1] =
            (gamePad1.isPushing3ButtonReset() ? (c3bcnt[1] != 0 ? c3bcnt[1] : OSGetTime()) : 0);
        c3bcnt[2] =
            (gamePad2.isPushing3ButtonReset() ? (c3bcnt[2] != 0 ? c3bcnt[2] : OSGetTime()) : 0);
        c3bcnt[3] =
            (gamePad3.isPushing3ButtonReset() ? (c3bcnt[3] != 0 ? c3bcnt[3] : OSGetTime()) : 0);

        OSTime resetTime0 = (c3bcnt[0] != 0) ? (OSGetTime() - c3bcnt[0]) : 0;
        OSTime resetTime1 = (c3bcnt[1] != 0) ? (OSGetTime() - c3bcnt[1]) : 0;
        OSTime resetTime2 = (c3bcnt[2] != 0) ? (OSGetTime() - c3bcnt[2]) : 0;
        OSTime resetTime3 = (c3bcnt[3] != 0) ? (OSGetTime() - c3bcnt[3]) : 0;

        gamePad0.checkResetCallback(resetTime0);
        gamePad1.checkResetCallback(resetTime1);
        gamePad2.checkResetCallback(resetTime2);
        gamePad3.checkResetCallback(resetTime3);

        if (out_trigger) {
            *out_trigger = gamePad0.getTrigger() | gamePad1.getTrigger() | gamePad2.getTrigger() |
                           gamePad3.getTrigger();
        }
        if (out_button) {
            *out_button = gamePad0.getButton() | gamePad1.getButton() | gamePad2.getButton() |
                          gamePad3.getButton();
        }

        result = true;
    } else if (mGamePadPort >= 0) {
        JUTGamePad gamePad(mGamePadPort);
        OSTime& gamePadTime = c3bcnt[0];
        gamePadTime =
            (gamePad.isPushing3ButtonReset() ? (gamePadTime != 0 ? gamePadTime : OSGetTime()) : 0);

        OSTime resetTime = (gamePadTime != 0) ? (OSGetTime() - gamePadTime) : 0;
        gamePad.checkResetCallback(resetTime);

        JUTGamePad::read();
        if (out_trigger) {
            *out_trigger = gamePad.getTrigger();
        }
        if (out_button) {
            *out_button = gamePad.getButton();
        }

        result = true;
    } else if (mGamePad) {
        JUTGamePad::read();
        if (out_trigger) {
            *out_trigger = mGamePad->getTrigger();
        }
        if (out_button) {
            *out_button = mGamePad->getButton();
        }

        result = true;
    }

    return result;
}

/* 802E34C0-802E3980 2DDE00 04C0+00 1/1 0/0 0/0 .text
 * printContext__12JUTExceptionFUsP9OSContextUlUl               */
// clean up
void JUTException::printContext(OSError error, OSContext* context, u32 dsisr, u32 dar) {
    bool is_pad_enabled = isEnablePad() == 0;
    if (!sErrorManager->mDirectPrint->isActive()) {
        return;
    }

    VISetPreRetraceCallback(NULL);
    VISetPostRetraceCallback(NULL);
    VISetBlack(FALSE);
    VIFlush();

    if (!sConsole) {
        return;
    }

    if (error < (OS_ERROR_MACHINE_CHECK | OS_ERROR_FLOATING_POINT_EXCEPTION)) {
        sConsole->print_f("******** EXCEPTION OCCURRED! ********\nFrameMemory:%XH\n",
                          getFrameMemory());
    } else {
        sConsole->print_f("******** USER HALT ********\nFrameMemory:%XH\n", getFrameMemory());
    }

    int post_callback_executed = false;
    while (true) {
        showMainInfo(error, context, dsisr, dar);

        JUTConsoleManager::sManager->drawDirect(true);
        waitTime(mPrintWaitTime0);

        if ((mPrintFlags & JUT_PRINT_GPR) != 0) {
            printDebugInfo(EINFO_PAGE_GPR, error, context, dsisr, dar);
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime0);
        }
        if ((mPrintFlags & JUT_PRINT_SRR0_MAP) != 0) {
            printDebugInfo(EINFO_PAGE_SSR0_MAP, error, context, dsisr, dar);
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime0);
        }
        if ((mPrintFlags & JUT_PRINT_GPR_MAP) != 0) {
            printDebugInfo(EINFO_PAGE_GPR_MAP, error, context, dsisr, dar);
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime0);
        }
        if ((mPrintFlags & JUT_PRINT_FLOAT) != 0) {
            printDebugInfo(EINFO_PAGE_FLOAT, error, context, dsisr, dar);
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime0);
        }
        if ((mPrintFlags & JUT_PRINT_STACK) != 0) {
            printDebugInfo(EINFO_PAGE_STACK, error, context, dsisr, dar);
            JUTConsoleManager::sManager->drawDirect(true);
            waitTime(mPrintWaitTime1);
        }

        sConsole->print("--------------------------------\n");
        JUTConsoleManager::sManager->drawDirect(true);

        if (post_callback_executed == 0 && sPostUserCallback) {
            BOOL enable = OSEnableInterrupts();
            post_callback_executed = true;
            (*sPostUserCallback)(error, context, dsisr, dar);
            OSRestoreInterrupts(enable);
        }

        if (this->field_0x98 == 0 || !is_pad_enabled) {
            break;
        }

        sConsole->setOutput(sConsole->getOutput() & 1);
    }

    if (!is_pad_enabled) {
        OSEnableInterrupts();

        u32 button;
        u32 trigger;

        int down = 0;
        int up = 0;
        do {
            readPad(&trigger, &button);

            bool draw = false;
            if (trigger == 0x100) {
                sConsole->scrollToLastLine();
                draw = true;
            }

            if (trigger == 0x200) {
                sConsole->scrollToFirstLine();
                draw = true;
            }

            if (button == 8) {
                JUTConsole* console = sConsole;
                up = (down < 3) ? -1 : ((down < 5) ? -2 : ((down < 7) ? -4 : -8));

                console->scroll(up);
                draw = true;
                up = 0;
                down++;
            } else if (button == 4) {
                JUTConsole* console = sConsole;
                down = (up < 3) ? 1 : ((up < 5) ? 2 : ((up < 7) ? 4 : 8));

                console->scroll(down);
                draw = true;
                down = 0;
                up++;
            } else {
                down = 0;
                up = 0;
            }

            if (draw == true) {
                u32 start = VIGetRetraceCount();
                while (start == VIGetRetraceCount())
                    ;
                JUTConsoleManager::sManager->drawDirect(true);
            }

            waitTime(30);
        } while (true);
    }

    while (true) {
        sConsole->scrollToFirstLine();
        JUTConsoleManager::sManager->drawDirect(true);
        waitTime(2000);

        int line_offset;
        int used_line;
        u32 height;
    next:
        for (u32 i = sConsole->getHeight(); i > 0; i--) {
            sConsole->scroll(1);
            JUTConsoleManager::sManager->drawDirect(true);

            height = sConsole->getHeight();
            JUTConsole* console = sConsole;
            line_offset = console->getLineOffset();
            used_line = console->getUsedLine();
            if ((used_line - height) + 1U <= line_offset)
                break;
            waitTime(20);
        }

        waitTime(3000);
        height = sConsole->getHeight();
        JUTConsole* console = sConsole;
        line_offset = console->getLineOffset();
        used_line = console->getUsedLine();
        if ((used_line - height) + 1U <= line_offset) {
            continue;
        }
        goto next;
    }
}

/* 802E3980-802E3A08 2DE2C0 0088+00 3/3 2/2 0/0 .text            waitTime__12JUTExceptionFl */
void JUTException::waitTime(s32 timeout_ms) {
    if (timeout_ms) {
        OSTime start_time = OSGetTime();
        OSTime ms;
        do {
            OSTime end_time = OSGetTime();
            OSTime ticks = end_time - start_time;
            ms = ticks / (OS_TIMER_CLOCK / 1000);
        } while (ms < timeout_ms);
    }
}

/* 802E3A08-802E3AEC 2DE348 00E4+00 1/1 0/0 0/0 .text            createFB__12JUTExceptionFv */
void JUTException::createFB() {
    _GXRenderModeObj* renderMode = &GXNtsc480Int;
    void* end = (void*)OSGetArenaHi();
    u16 width = ALIGN_NEXT(renderMode->fb_width, 16);
    u16 height = renderMode->xfb_height;
    u32 pixel_count = width * height;
    u32 size = pixel_count * 2;

    void* begin = (void*)ALIGN_PREV((u32)end - size, 32);
    void* object = (void*)ALIGN_PREV((s32)begin - sizeof(JUTExternalFB), 32);
    new (object) JUTExternalFB(renderMode, GX_GM_1_7, begin, size);

    mDirectPrint->changeFrameBuffer(begin, renderMode->fb_width, renderMode->efb_height);
    VIConfigure(renderMode);
    VISetNextFrameBuffer(begin);
    VISetBlack(FALSE);
    VIFlush();
    VIFlush();

    for (int i = 0; i < 3; i++) {
        u32 start = VIGetRetraceCount();
        while (start == VIGetRetraceCount())
            ;
    }

    mFrameMemory = (JUTExternalFB*)object;
}

/* 802E3AEC-802E3AFC 2DE42C 0010+00 0/0 1/1 0/0 .text
 * setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v     */
OSErrorHandler JUTException::setPreUserCallback(OSErrorHandler callback) {
    OSErrorHandler previous = sPreUserCallback;
    sPreUserCallback = callback;
    return previous;
}

/* 802E3AFC-802E3B0C 2DE43C 0010+00 0/0 1/1 0/0 .text
 * setPostUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v    */
OSErrorHandler JUTException::setPostUserCallback(OSErrorHandler callback) {
    OSErrorHandler previous = sPostUserCallback;
    sPostUserCallback = callback;
    return previous;
}

/* 802E3B0C-802E3BA0 2DE44C 0094+00 0/0 1/1 0/0 .text            appendMapFile__12JUTExceptionFPCc
 */
void JUTException::appendMapFile(char const* path) {
    if (!path) {
        return;
    }

    JSUListIterator<JUTExMapFile> iterator;
    for (iterator = sMapFileList.getFirst(); iterator != sMapFileList.getEnd(); ++iterator) {
        if (strcmp(path, iterator->mPath) == 0) {
            return;
        }
    }

    JUTExMapFile* mapFile = new JUTExMapFile((char*)path);
    sMapFileList.append(&mapFile->mLink);
}

/* 802E3BA0-802E3C90 2DE4E0 00F0+00 1/1 0/0 0/0 .text
 * queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb            */
bool JUTException::queryMapAddress(char* mapPath, u32 address, s32 section_id, u32* out_addr,
                                   u32* out_size, char* out_line, u32 line_length, bool print,
                                   bool begin_with_newline) {
    if (mapPath) {
        char buffer[80];
        strcpy(buffer, mapPath);
        strcat(buffer, ".map");
        if (queryMapAddress_single(buffer, address, section_id, out_addr, out_size, out_line,
                                   line_length, print, begin_with_newline) == true)
        {
            return true;
        }
    } else if (sMapFileList.getFirst() != sMapFileList.getEnd()) {
        if (queryMapAddress_single(sMapFileList.getFirst()->getObject()->mPath, address, -1,
                                   out_addr, out_size, out_line, line_length, print,
                                   begin_with_newline) == true)
        {
            return true;
        }
    }

    return false;
}

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D97E = "  [%08X]: .%s [%08X: %XH]\n  %s\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039D99E = "\0";
#pragma pop

/* 802E3C90-802E3FEC 2DE5D0 035C+00 1/1 0/0 0/0 .text
 * queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb     */
// 2 additional instructions (addi r5,r1,8) related to section_name variable.
#ifdef NONMATCHING
bool JUTException::queryMapAddress_single(char* mapPath, u32 address, s32 section_id, u32* out_addr,
                                          u32* out_size, char* out_line, u32 line_length,
                                          bool print, bool begin_with_newline) {
    if (!mapPath) {
        return false;
    }

    char section_name[16];
    char buffer[0x200];
    JUTDirectFile file;
    int i = 0;
    if (!file.fopen(mapPath)) {
        return false;
    }

    bool result = 0;
    do {
        char* src = buffer;
        int found_section = 0;
        do {
            i++;
            while (true) {
                while (true) {
                    int length = file.fgets(buffer, ARRAY_SIZE(buffer));
                    if (length < 0)
                        goto next_section;
                    if (buffer[0] == '.')
                        break;
                }

                int i = 0;
                char* src = buffer + 1;
                for (; *src != '\0'; i++, src++) {
                    section_name[i] = *src;
                    if (*src == ' ' || i == 0xf)
                        break;
                }

                section_name[i] = 0;
                if (*src == 0)
                    break;

                if (src[1] == 's' && src[2] == 'e' && src[3] == 'c' && src[4] == 't') {
                    found_section = true;
                    break;
                }
            }
            if ((found_section & 0xFF) == 0)
                goto end;
        } while (section_id >= 0 && section_id != i);
    next_section:;

        u32 addr;
        int size;
        do {
            int length;
            do {
                length = file.fgets(buffer, ARRAY_SIZE(buffer));
                if (length <= 4)
                    goto next_symbol;
            } while ((length < 28) || (buffer[28] != '4'));

            addr = strtol(buffer + 19, NULL, 16);
            addr = ((buffer[18] - '0') << 28) | addr;
            size = strtol(buffer + 11, NULL, 16);
        } while (addr > address || address >= addr + size);

        if (out_addr)
            *out_addr = addr;

        if (out_size)
            *out_size = size;

        if (out_line) {
            src = buffer + 0x1e;
            char* dst = out_line;
            u32 length = 0;
            for (; length < line_length - 1; src++) {
                u32 ch = *(u8*)src;
                if (ch < ' ' && ch != '\t')
                    break;
                if (((int)ch == ' ' || ch == '\t') && (length != 0)) {
                    if (dst[-1] != ' ') {
                        *dst = ' ';
                        dst++;
                        length++;
                    }
                } else {
                    *dst = ch;
                    dst++;
                    length++;
                }
            }
            if (length != 0 && dst[-1] == ' ') {
                dst--;
            }
            *dst = 0;
            if (print) {
                if (begin_with_newline) {
                    sConsole->print("\n");
                }
                sConsole->print_f("  [%08X]: .%s [%08X: %XH]\n  %s\n", address, section_name, addr,
                                  size, out_line);
                begin_with_newline = false;
            }
        }

        result = true;

    next_symbol:;
    } while ((result & 0xFF) == 0 && section_id >= 0 && section_id != i);

    if (print && begin_with_newline) {
        sConsole->print("\n");
    }

end:
    file.fclose();
    bool bresult = result != false;
    return bresult;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JUTException::queryMapAddress_single(char* param_0, u32 param_1, s32 param_2, u32* param_3,
                                              u32* param_4, char* param_5, u32 param_6,
                                              bool param_7, bool param_8) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb.s"
}
#pragma pop
#endif

/* 802E3FEC-802E40CC 2DE92C 00E0+00 0/0 1/1 0/0 .text            createConsole__12JUTExceptionFPvUl
 */
void JUTException::createConsole(void* console_buffer, u32 console_buffer_size) {
    if (!console_buffer || !console_buffer_size) {
        return;
    }

    u32 lines = JUTConsole::getLineFromObjectSize(console_buffer_size, 0x32);
    if (lines != 0) {
        sConsoleBuffer = console_buffer;
        sConsoleBufferSize = console_buffer_size;
        sConsole = JUTConsole::create(0x32, console_buffer, console_buffer_size);

        JUTConsoleManager* manager = JUTConsoleManager::sManager;
        manager->setDirectConsole(sConsole);

        sConsole->setFontSize(10.0, 6.0);
        sConsole->setPosition(15, 26);
        sConsole->setHeight(23);
        sConsole->setVisible(true);
        sConsole->setOutput(JUTConsole::OUTPUT_OSREPORT | JUTConsole::OUTPUT_CONSOLE);
    }
}

/* 802E40CC-802E40EC 2DEA0C 0020+00 1/1 0/0 0/0 .text
 * __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl       */
JUTExternalFB::JUTExternalFB(_GXRenderModeObj* renderMode, GXGamma gamma, void* buffer, u32 size) {
    mRenderMode = renderMode;
    mSize = size;
    field_0x0C = 1;
    mGamma = gamma;
    field_0x10 = false;
}

/* 802E40EC-802E414C 2DEA2C 0060+00 1/0 0/0 0/0 .text            __dt__12JUTExceptionFv */
JUTException::~JUTException() {}

/* ##############################################################################################
 */
/* 804508F8-80450900 000378 0008+00 0/0 3/3 0/0 .sdata           None */
SECTION_SDATA extern bool sAssertVisible = true;
