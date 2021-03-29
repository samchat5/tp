//
// Generated By: dol2asm
// Translation Unit: osdsp_task
//

#include "JSystem/JAudio2/osdsp_task.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void DsyncFrame2(u32, u32, u32);
static void DsyncFrame3(u32, u32, u32, u32, u32);
static void Dsp_Update_Request();
void Dsp_Running_Check();
void Dsp_Running_Start();

extern "C" void __DSPHandler();
extern "C" void DsyncFrame2__FUlUlUl();
extern "C" static void DsyncFrame3__FUlUlUlUlUl();
extern "C" static void Dsp_Update_Request__Fv();
extern "C" void Dsp_Running_Check__Fv();
extern "C" void Dsp_Running_Start__Fv();
extern "C" extern u8 DSP_prior_task[4];
extern "C" extern u8 data_80451310[8];
extern "C" extern u8 data_80451318[8];
extern "C" extern u8 data_80451320[8];
extern "C" extern u8 data_80451328[8];

//
// External References:
//

void DsyncFrame2ch(u32, u32, u32);
void DsyncFrame4ch(u32, u32, u32, u32, u32);

extern "C" void DsyncFrame2ch__FUlUlUl();
extern "C" void DsyncFrame4ch__FUlUlUlUlUl();
extern "C" void OSSetCurrentContext();
extern "C" void OSClearContext();
extern "C" void DSPCheckMailToDSP();
extern "C" void DSPCheckMailFromDSP();
extern "C" void DSPReadMailFromDSP();
extern "C" void DSPSendMailToDSP();
extern "C" void __DSP_exec_task();
extern "C" void __DSP_remove_task();
extern "C" extern u8 __DSP_first_task[4];
extern "C" extern u8 __DSP_curr_task[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451308-8045130C 0004+00 s=6 e=0 z=0  None .sbss      None */
static u8 struct_80451308[4];

/* 8045130C-80451310 0004+00 s=1 e=2 z=0  None .sbss      DSP_prior_task */
u8 DSP_prior_task[4];

/* 8029EB20-8029EE24 0304+00 s=0 e=1 z=0  None .text      __DSPHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
extern "C" asm void __DSPHandler() {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/__DSPHandler.s"
}
#pragma pop

/* ############################################################################################## */
/* 80434060-80434078 0014+04 s=3 e=0 z=0  None .bss       sync_stack */
static u8 sync_stack[20 + 4 /* padding */];

/* 8029EE40-8029EE90 0050+00 s=1 e=1 z=0  None .text      DsyncFrame2__FUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DsyncFrame2(u32 param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/DsyncFrame2__FUlUlUl.s"
}
#pragma pop

/* 8029EEA0-8029EEF8 0058+00 s=1 e=0 z=0  None .text      DsyncFrame3__FUlUlUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm static void DsyncFrame3(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/DsyncFrame3__FUlUlUlUlUl.s"
}
#pragma pop

/* 8029EF00-8029EF78 0078+00 s=1 e=0 z=0  None .text      Dsp_Update_Request__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm static void Dsp_Update_Request() {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/Dsp_Update_Request__Fv.s"
}
#pragma pop

/* 8029EF80-8029EF94 0014+00 s=0 e=1 z=0  None .text      Dsp_Running_Check__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void Dsp_Running_Check() {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/Dsp_Running_Check__Fv.s"
}
#pragma pop

/* 8029EFA0-8029EFAC 000C+00 s=0 e=1 z=0  None .text      Dsp_Running_Start__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void Dsp_Running_Start() {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp_task/Dsp_Running_Start__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451310-80451318 0008+00 s=0 e=3 z=0  None .sbss      None */
u8 data_80451310[8];

/* 80451318-80451320 0008+00 s=0 e=7 z=0  None .sbss      None */
u8 data_80451318[8];

/* 80451320-80451328 0008+00 s=0 e=4 z=0  None .sbss      None */
u8 data_80451320[8];

/* 80451328-80451330 0008+00 s=0 e=3 z=0  None .sbss      None */
u8 data_80451328[8];
