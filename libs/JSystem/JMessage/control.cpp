//
// Generated By: dol2asm
// Translation Unit: control
//

#include "JSystem/JMessage/control.h"
#include "JSystem/JMessage/processor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__Q28JMessage8TControlFv();
extern "C" void __dt__Q28JMessage8TControlFv();
extern "C" void reset__Q28JMessage8TControlFv();
extern "C" void update__Q28JMessage8TControlFv();
extern "C" void render__Q28JMessage8TControlFv();
extern "C" void setMessageCode__Q28JMessage8TControlFUsUs();
extern "C" void setMessageID__Q28JMessage8TControlFUlUlPb();
extern "C" void setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs();

//
// External References:
//

extern "C" void reset__Q28JMessage10TProcessorFv();
extern "C" void getResource_groupID__Q28JMessage10TProcessorCFUs();
extern "C" void toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb();
extern "C" void process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor();
extern "C" void process__Q28JMessage18TSequenceProcessorFPCc();
extern "C" void process__Q28JMessage19TRenderingProcessorFPCc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9B60-803C9B70 026C80 000C+04 2/2 0/0 0/0 .data            __vt__Q28JMessage8TControl */
SECTION_DATA extern void* __vt__Q28JMessage8TControl[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage8TControlFv,
    /* padding */
    NULL,
};

/* 802A7548-802A758C 2A1E88 0044+00 0/0 2/2 0/0 .text            __ct__Q28JMessage8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TControl::TControl() {
    nofralloc
#include "asm/JSystem/JMessage/control/__ct__Q28JMessage8TControlFv.s"
}
#pragma pop

/* 802A758C-802A75D4 2A1ECC 0048+00 1/0 2/2 0/0 .text            __dt__Q28JMessage8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TControl::~TControl() {
    nofralloc
#include "asm/JSystem/JMessage/control/__dt__Q28JMessage8TControlFv.s"
}
#pragma pop

/* 802A75D4-802A7634 2A1F14 0060+00 0/0 9/9 0/0 .text            reset__Q28JMessage8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::reset() {
    nofralloc
#include "asm/JSystem/JMessage/control/reset__Q28JMessage8TControlFv.s"
}
#pragma pop

/* 802A7634-802A76BC 2A1F74 0088+00 0/0 4/4 0/0 .text            update__Q28JMessage8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::update() {
    nofralloc
#include "asm/JSystem/JMessage/control/update__Q28JMessage8TControlFv.s"
}
#pragma pop

/* 802A76BC-802A77E8 2A1FFC 012C+00 0/0 5/5 0/0 .text            render__Q28JMessage8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::render() {
    nofralloc
#include "asm/JSystem/JMessage/control/render__Q28JMessage8TControlFv.s"
}
#pragma pop

/* 802A77E8-802A78F4 2A2128 010C+00 0/0 1/1 0/0 .text setMessageCode__Q28JMessage8TControlFUsUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::setMessageCode(u16 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JMessage/control/setMessageCode__Q28JMessage8TControlFUsUs.s"
}
#pragma pop

/* 802A78F4-802A7A20 2A2234 012C+00 0/0 6/6 0/0 .text setMessageID__Q28JMessage8TControlFUlUlPb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::setMessageID(u32 param_0, u32 param_1, bool* param_2) {
    nofralloc
#include "asm/JSystem/JMessage/control/setMessageID__Q28JMessage8TControlFUlUlPb.s"
}
#pragma pop

/* 802A7A20-802A7AF8 2A2360 00D8+00 2/2 1/1 0/0 .text
 * setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TControl::setMessageCode_inSequence_(JMessage::TProcessor const* param_0,
                                                        u16 param_1, u16 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/control/setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs.s"
}
#pragma pop
