//
// Generated By: dol2asm
// Translation Unit: osdsp_task
//

#include "JSystem/JAudio2/osdsp_task.h"
#include "JSystem/JAudio2/dspproc.h"
#include "dolphin/types.h"
#include "dolphin/dsp/dsp.h"
#include "dolphin/dsp/dsp_task.h"
#include "dolphin/os/OSContext.h"

//
// Forward References:
//

static void Dsp_Update_Request();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80451308-8045130C -00001 0004+00 6/6 0/0 0/0 .sbss            None */
/* 80451308 0001+00 data_80451308 None */
/* 80451309 0003+00 data_80451309 None */

static vu8 struct_80451308;
static u8 struct_80451309;
static u8 struct_8045130a;
static u8 struct_8045130b;

/* 8045130C-80451310 00080C 0004+00 1/1 2/2 0/0 .sbss            DSP_prior_task */
DSPTaskInfo* DSP_prior_task;

/* 8029EB20-8029EE24 299460 0304+00 0/0 1/1 0/0 .text            __DSPHandler */
void __DSPHandler(OSInterrupt interrupt, OSContext* context) {
    OSContext funcContext;
    __DSPRegs[5] = ((u16)(__DSPRegs[5]) & ~0x28) | 0x80;
    OSClearContext(&funcContext);
    OSSetCurrentContext(&funcContext);

    if (struct_80451308 == 1 || struct_80451308 == 0) {
        __DSP_curr_task = DSP_prior_task;
    }

    while (DSPCheckMailFromDSP() == 0);
    u32 mail = DSPReadMailFromDSP();

    if ((__DSP_curr_task->flags & 2) && mail == 0xDCD10002) {
        mail = 0xDCD10003;
    }

    switch (mail) {
    case 0xDCD10000:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task == DSP_prior_task) {
            struct_80451308 = 1;
        }
        if (__DSP_curr_task->init_cb != NULL) {
            __DSP_curr_task->init_cb(__DSP_curr_task);
        }
        break;
    case 0xDCD10001:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task == DSP_prior_task) {
            struct_80451308 = 1;
            Dsp_Update_Request();
        }
        if (__DSP_curr_task->res_cb != NULL) {
            __DSP_curr_task->res_cb(__DSP_curr_task);
        }
        break;
    case 0xDCD10002:
        DSPSendMailToDSP(0xCDD10001);
        while (DSPCheckMailToDSP() != 0);
        __DSP_curr_task->state = 2;
        if (__DSP_curr_task->next == NULL && struct_80451309) {
            __DSP_exec_task(__DSP_curr_task, DSP_prior_task);
            struct_80451309 = 0;
            __DSP_curr_task = DSP_prior_task;
        } else {
            __DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);
            __DSP_curr_task = __DSP_curr_task->next;
        }
        break;
    case 0xDCD10003:
        if (__DSP_curr_task->done_cb != NULL) {
            __DSP_curr_task->done_cb(__DSP_curr_task);
        }
        DSPSendMailToDSP(0xCDD10001);
        while (DSPCheckMailToDSP() != 0);
        __DSP_curr_task->state = 3;
        if (__DSP_curr_task->next == NULL) {
            __DSP_exec_task(NULL, DSP_prior_task);
            __DSP_remove_task(__DSP_curr_task);
            __DSP_curr_task = DSP_prior_task;
        } else {
            __DSP_exec_task(NULL, __DSP_curr_task->next);
            __DSP_curr_task = __DSP_curr_task->next;
            __DSP_remove_task(__DSP_curr_task->prev);
        }
        break;
    case 0xDCD10004:
        if (__DSP_curr_task->req_cb != NULL) {
            __DSP_curr_task->req_cb(__DSP_curr_task);
        }
        break;
    case 0xDCD10005:
        if (__DSP_first_task == NULL || struct_80451309) {
            DSPSendMailToDSP(0xCDD10003);
            while (DSPCheckMailToDSP() != 0);
            struct_80451309 = 0;
            __DSP_curr_task = DSP_prior_task;
            Dsp_Update_Request();
        } else {
            struct_80451308 = 3;
            DSPSendMailToDSP(0xCDD10001);
            while (DSPCheckMailToDSP() != 0);
            __DSP_exec_task(DSP_prior_task, __DSP_first_task);
            __DSP_curr_task = __DSP_first_task;
        }
        break;
    }

    OSClearContext(&funcContext);
    OSSetCurrentContext(context);
}

/* ############################################################################################## */
/* 80434060-80434078 060D80 0014+04 3/3 0/0 0/0 .bss             sync_stack */
static u32 sync_stack[5];

/* 8029EE40-8029EE90 299780 0050+00 1/1 1/1 0/0 .text            DsyncFrame2__FUlUlUl */
void DsyncFrame2(u32 param_0, u32 param_1, u32 param_2) {
    if (struct_80451308 != 1) {
        sync_stack[0] = param_0;
        sync_stack[1] = param_1;
        sync_stack[2] = param_2;
        struct_80451309 = 1;
        return;
    }
    DsyncFrame2ch(param_0, param_1, param_2);
    struct_80451309 = 0;
}

/* 8029EEA0-8029EEF8 2997E0 0058+00 1/1 0/0 0/0 .text            DsyncFrame3__FUlUlUlUlUl */
static void DsyncFrame3(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (struct_80451308 != 1) {
        sync_stack[0] = param_0;
        sync_stack[1] = param_1;
        sync_stack[2] = param_2;
        sync_stack[3] = param_3;
        sync_stack[4] = param_4;
        struct_80451309 = 2;
        return;
    }
    DsyncFrame4ch(param_0, param_1, param_2, param_3, param_4);
    struct_80451309 = 0;
}

/* 8029EF00-8029EF78 299840 0078+00 1/1 0/0 0/0 .text            Dsp_Update_Request__Fv */
static void Dsp_Update_Request() {
    switch (struct_80451309) {
    case 0:
        break;
    case 1:
        DsyncFrame2(sync_stack[0], sync_stack[1], sync_stack[2]);
        break;
    case 2:
        DsyncFrame3(sync_stack[0], sync_stack[1], sync_stack[2], sync_stack[3], sync_stack[4]);
        break;
    }
}

/* 8029EF80-8029EF94 2998C0 0014+00 0/0 1/1 0/0 .text            Dsp_Running_Check__Fv */
bool Dsp_Running_Check() {
    return struct_80451308 == 1;
}

/* 8029EFA0-8029EFAC 2998E0 000C+00 0/0 1/1 0/0 .text            Dsp_Running_Start__Fv */
void Dsp_Running_Start() {
    struct_80451308 = 1;
}

/* ############################################################################################## */
/* 80451310-80451318 000810 0008+00 0/0 3/3 0/0 .sbss            None */
u8 data_80451310[8];

/* 80451318-80451320 000818 0008+00 0/0 7/7 0/0 .sbss            None */
u8 data_80451318[8];

/* 80451320-80451328 000820 0008+00 0/0 4/4 0/0 .sbss            None */
u8 data_80451320[8];

/* 80451328-80451330 000828 0008+00 0/0 3/3 0/0 .sbss            None */
u8 data_80451328[8];
