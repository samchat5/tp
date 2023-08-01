#ifndef OSDSP_H
#define OSDSP_H

#include "dolphin/types.h"

struct DSPTaskInfo;
struct STRUCT_DSP_TASK;

extern "C" DSPTaskInfo* DSPAddTask(DSPTaskInfo*);
void DSPAddPriorTask(STRUCT_DSP_TASK*);

#endif /* OSDSP_H */
