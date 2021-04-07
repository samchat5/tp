//
// Generated By: dol2asm
// Translation Unit: processor
//

#include "JSystem/JMessage/processor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JMessage {
    struct TReference {
        /* 802A7AF8 */ ~TReference();
        /* 802A7B40 */ bool do_word(u32) const;
    };

    struct TProcessor {
        /* 802A7B48 */ ~TProcessor();
        /* 802A7B90 */ void reset();
        /* 802A7BF8 */ void stack_pushCurrent(char const*);
        /* 802A7C30 */ void stack_popCurrent();
        /* 802A7C54 */ void getResource_groupID(u16) const;
        /* 802A7CD4 */ void toMessageCode_messageID(u32, u32, bool*) const;
        /* 802A7E38 */ void on_select_begin(char const* (*)(JMessage::TProcessor*), void const*,
                                            char const*, u32);
        /* 802A7EDC */ void on_select_end();
        /* 802A7F34 */ void on_select_separate();
        /* 802A7FC0 */ void do_reset();
        /* 802A7FC4 */ void do_begin(void const*, char const*);
        /* 802A7FC8 */ void do_end();
        /* 802A7FCC */ void do_character(int);
        /* 802A7FD0 */ bool do_tag(u32, void const*, u32);
        /* 802A7FD8 */ void do_select_begin(u32);
        /* 802A7FDC */ void do_select_end();
        /* 802A7FE0 */ void do_select_separate();
        /* 802A7FE4 */ void on_tag_();
        /* 802A8084 */ void do_resetStatus_(char const*);
        /* 802A8088 */ bool do_setBegin_isReady_() const;
        /* 802A8090 */ void do_tag_(u32, void const*, u32);
        /* 802A81EC */ void process_character_();
        /* 802A828C */ void process_onCharacterEnd_normal_(JMessage::TProcessor*);
        /* 802A82F4 */ void process_onCharacterEnd_select_(JMessage::TProcessor*);
        /* 802A833C */ void process_onSelect_limited_(JMessage::TProcessor*);
        /* 802A8358 */ void process_onSelect_(JMessage::TProcessor*);
        /* 802A8C24 */ void on_message(u32) const;
        /* 802A8C44 */ void getMessageText_messageCode(u32) const;
    };

    struct TControl {
        /* 802A7A20 */ void setMessageCode_inSequence_(JMessage::TProcessor const*, u16, u16);
    };

    struct TSequenceProcessor {
        /* 802A8374 */ TSequenceProcessor(JMessage::TReference const*, JMessage::TControl*);
        /* 802A83B8 */ ~TSequenceProcessor();
        /* 802A8418 */ void process(char const*);
        /* 802A85A4 */ void on_isReady();
        /* 802A85D0 */ void on_jump_register(void const* (*)(JMessage::TSequenceProcessor const*),
                                             u32);
        /* 802A85E4 */ void on_jump_isReady();
        /* 802A8610 */ void on_jump(void const*, char const*);
        /* 802A8690 */ void on_branch_register(void const* (*)(JMessage::TSequenceProcessor const*,
                                                               u32),
                                               void const*, u32);
        /* 802A86A0 */ void on_branch_query(u32);
        /* 802A86D4 */ void on_branch_queryResult();
        /* 802A8700 */ void on_branch(void const*, char const*);
        /* 802A8780 */ bool do_isReady();
        /* 802A8788 */ bool do_jump_isReady();
        /* 802A8790 */ void do_jump(void const*, char const*);
        /* 802A8794 */ void do_branch_query(u32);
        /* 802A8798 */ s32 do_branch_queryResult();
        /* 802A87A0 */ void do_branch(void const*, char const*);
        /* 802A87A4 */ void do_resetStatus_(char const*);
        /* 802A87C0 */ void do_setBegin_isReady_() const;
        /* 802A87D0 */ void do_begin_(void const*, char const*);
        /* 802A87D4 */ void do_end_();
        /* 802A87E0 */ void do_tag_(u32, void const*, u32);
        /* 802A892C */ void process_setMessageIndex_reserved_(u16);
        /* 802A8944 */ void process_setMessageCode_(JMessage::TSequenceProcessor const*, u16, u16);
        /* 802A89B8 */ void process_onJump_limited_(JMessage::TSequenceProcessor const*);
        /* 802A89EC */ void process_onJump_(JMessage::TSequenceProcessor const*);
        /* 802A8A18 */ void process_onBranch_limited_(JMessage::TSequenceProcessor const*, u32);
        /* 802A8A50 */ void process_onBranch_(JMessage::TSequenceProcessor const*, u32);
    };

    struct TRenderingProcessor {
        /* 802A8A84 */ TRenderingProcessor(JMessage::TReference const*);
        /* 802A8AC0 */ ~TRenderingProcessor();
        /* 802A8B20 */ void process(char const*);
        /* 802A8BA4 */ void do_begin_(void const*, char const*);
        /* 802A8BA8 */ void do_end_();
        /* 802A8BAC */ void do_tag_(u32, void const*, u32);
    };

    struct TResource {
        /* 802A8CDC */ void toMessageIndex_messageID(u32, u32, bool*) const;
    };

    struct TResourceContainer {
        struct TCResource {
            /* 802A8F6C */ void Get_groupID(u16);
        };
    };
};

//
// Forward References:
//

extern "C" void __dt__Q28JMessage10TReferenceFv();
extern "C" bool do_word__Q28JMessage10TReferenceCFUl();
extern "C" void __dt__Q28JMessage10TProcessorFv();
extern "C" void reset__Q28JMessage10TProcessorFv();
extern "C" void stack_pushCurrent__Q28JMessage10TProcessorFPCc();
extern "C" void stack_popCurrent__Q28JMessage10TProcessorFv();
extern "C" void getResource_groupID__Q28JMessage10TProcessorCFUs();
extern "C" void toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb();
extern "C" void on_select_begin__Q28JMessage10TProcessorFPFPQ28JMessage10TProcessor_PCcPCvPCcUl();
extern "C" void on_select_end__Q28JMessage10TProcessorFv();
extern "C" void on_select_separate__Q28JMessage10TProcessorFv();
extern "C" void do_reset__Q28JMessage10TProcessorFv();
extern "C" void do_begin__Q28JMessage10TProcessorFPCvPCc();
extern "C" void do_end__Q28JMessage10TProcessorFv();
extern "C" void do_character__Q28JMessage10TProcessorFi();
extern "C" bool do_tag__Q28JMessage10TProcessorFUlPCvUl();
extern "C" void do_select_begin__Q28JMessage10TProcessorFUl();
extern "C" void do_select_end__Q28JMessage10TProcessorFv();
extern "C" void do_select_separate__Q28JMessage10TProcessorFv();
extern "C" void on_tag___Q28JMessage10TProcessorFv();
extern "C" void do_resetStatus___Q28JMessage10TProcessorFPCc();
extern "C" bool do_setBegin_isReady___Q28JMessage10TProcessorCFv();
extern "C" void do_tag___Q28JMessage10TProcessorFUlPCvUl();
extern "C" void process_character___Q28JMessage10TProcessorFv();
extern "C" void process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor();
extern "C" void process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor();
extern "C" void process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor();
extern "C" void process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor();
extern "C" void
__ct__Q28JMessage18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl();
extern "C" void __dt__Q28JMessage18TSequenceProcessorFv();
extern "C" void process__Q28JMessage18TSequenceProcessorFPCc();
extern "C" void on_isReady__Q28JMessage18TSequenceProcessorFv();
extern "C" void
on_jump_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessor_PCvUl();
extern "C" void on_jump_isReady__Q28JMessage18TSequenceProcessorFv();
extern "C" void on_jump__Q28JMessage18TSequenceProcessorFPCvPCc();
extern "C" void
on_branch_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessorUl_PCvPCvUl();
extern "C" void on_branch_query__Q28JMessage18TSequenceProcessorFUl();
extern "C" void on_branch_queryResult__Q28JMessage18TSequenceProcessorFv();
extern "C" void on_branch__Q28JMessage18TSequenceProcessorFPCvPCc();
extern "C" bool do_isReady__Q28JMessage18TSequenceProcessorFv();
extern "C" bool do_jump_isReady__Q28JMessage18TSequenceProcessorFv();
extern "C" void do_jump__Q28JMessage18TSequenceProcessorFPCvPCc();
extern "C" void do_branch_query__Q28JMessage18TSequenceProcessorFUl();
extern "C" s32 do_branch_queryResult__Q28JMessage18TSequenceProcessorFv();
extern "C" void do_branch__Q28JMessage18TSequenceProcessorFPCvPCc();
extern "C" void do_resetStatus___Q28JMessage18TSequenceProcessorFPCc();
extern "C" void do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv();
extern "C" void do_begin___Q28JMessage18TSequenceProcessorFPCvPCc();
extern "C" void do_end___Q28JMessage18TSequenceProcessorFv();
extern "C" void do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl();
extern "C" void process_setMessageIndex_reserved___Q28JMessage18TSequenceProcessorFUs();
extern "C" void
process_setMessageCode___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUsUs();
extern "C" void
process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor();
extern "C" void
process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor();
extern "C" void
process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl();
extern "C" void
process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl();
extern "C" void __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference();
extern "C" void __dt__Q28JMessage19TRenderingProcessorFv();
extern "C" void process__Q28JMessage19TRenderingProcessorFPCc();
extern "C" void do_begin___Q28JMessage19TRenderingProcessorFPCvPCc();
extern "C" void do_end___Q28JMessage19TRenderingProcessorFv();
extern "C" void do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl();
extern "C" void on_message__Q28JMessage10TProcessorCFUl();
extern "C" void getMessageText_messageCode__Q28JMessage10TProcessorCFUl();

//
// External References:
//

extern "C" void setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs();
extern "C" void toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb();
extern "C" void Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9B70-803C9B94 -00001 0024+00 1/1 0/0 0/0 .data            @1418 */
SECTION_DATA static void* lit_1418[9] = {
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0x104),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0xE0),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0xD4),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0xC0),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0xAC),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0x98),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0x128),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0x128),
    (void*)(((char*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl) + 0x48),
};

/* 803C9B94-803C9BD4 026CB4 0040+00 2/2 0/0 0/0 .data __vt__Q28JMessage19TRenderingProcessor */
SECTION_DATA extern void* __vt__Q28JMessage19TRenderingProcessor[16] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage19TRenderingProcessorFv,
    (void*)do_reset__Q28JMessage10TProcessorFv,
    (void*)do_begin__Q28JMessage10TProcessorFPCvPCc,
    (void*)do_end__Q28JMessage10TProcessorFv,
    (void*)do_character__Q28JMessage10TProcessorFi,
    (void*)do_tag__Q28JMessage10TProcessorFUlPCvUl,
    (void*)do_select_begin__Q28JMessage10TProcessorFUl,
    (void*)do_select_end__Q28JMessage10TProcessorFv,
    (void*)do_select_separate__Q28JMessage10TProcessorFv,
    (void*)do_resetStatus___Q28JMessage10TProcessorFPCc,
    (void*)do_setBegin_isReady___Q28JMessage10TProcessorCFv,
    (void*)do_begin___Q28JMessage19TRenderingProcessorFPCvPCc,
    (void*)do_end___Q28JMessage19TRenderingProcessorFv,
    (void*)do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl,
};

/* 803C9BD4-803C9C2C 026CF4 0058+00 2/2 0/0 0/0 .data __vt__Q28JMessage18TSequenceProcessor */
SECTION_DATA extern void* __vt__Q28JMessage18TSequenceProcessor[22] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage18TSequenceProcessorFv,
    (void*)do_reset__Q28JMessage10TProcessorFv,
    (void*)do_begin__Q28JMessage10TProcessorFPCvPCc,
    (void*)do_end__Q28JMessage10TProcessorFv,
    (void*)do_character__Q28JMessage10TProcessorFi,
    (void*)do_tag__Q28JMessage10TProcessorFUlPCvUl,
    (void*)do_select_begin__Q28JMessage10TProcessorFUl,
    (void*)do_select_end__Q28JMessage10TProcessorFv,
    (void*)do_select_separate__Q28JMessage10TProcessorFv,
    (void*)do_resetStatus___Q28JMessage18TSequenceProcessorFPCc,
    (void*)do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv,
    (void*)do_begin___Q28JMessage18TSequenceProcessorFPCvPCc,
    (void*)do_end___Q28JMessage18TSequenceProcessorFv,
    (void*)do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl,
    (void*)do_isReady__Q28JMessage18TSequenceProcessorFv,
    (void*)do_jump_isReady__Q28JMessage18TSequenceProcessorFv,
    (void*)do_jump__Q28JMessage18TSequenceProcessorFPCvPCc,
    (void*)do_branch_query__Q28JMessage18TSequenceProcessorFUl,
    (void*)do_branch_queryResult__Q28JMessage18TSequenceProcessorFv,
    (void*)do_branch__Q28JMessage18TSequenceProcessorFPCvPCc,
};

/* 803C9C2C-803C9C6C 026D4C 0040+00 3/3 0/0 0/0 .data            __vt__Q28JMessage10TProcessor */
SECTION_DATA extern void* __vt__Q28JMessage10TProcessor[16] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage10TProcessorFv,
    (void*)do_reset__Q28JMessage10TProcessorFv,
    (void*)do_begin__Q28JMessage10TProcessorFPCvPCc,
    (void*)do_end__Q28JMessage10TProcessorFv,
    (void*)do_character__Q28JMessage10TProcessorFi,
    (void*)do_tag__Q28JMessage10TProcessorFUlPCvUl,
    (void*)do_select_begin__Q28JMessage10TProcessorFUl,
    (void*)do_select_end__Q28JMessage10TProcessorFv,
    (void*)do_select_separate__Q28JMessage10TProcessorFv,
    (void*)do_resetStatus___Q28JMessage10TProcessorFPCc,
    (void*)do_setBegin_isReady___Q28JMessage10TProcessorCFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 803C9C6C-803C9C80 026D8C 0010+04 1/1 2/2 0/0 .data            __vt__Q28JMessage10TReference */
SECTION_DATA extern void* __vt__Q28JMessage10TReference[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage10TReferenceFv,
    (void*)do_word__Q28JMessage10TReferenceCFUl,
    /* padding */
    NULL,
};

/* 802A7AF8-802A7B40 2A2438 0048+00 1/0 2/2 0/0 .text            __dt__Q28JMessage10TReferenceFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TReference::~TReference() {
    nofralloc
#include "asm/JSystem/JMessage/processor/__dt__Q28JMessage10TReferenceFv.s"
}
#pragma pop

/* 802A7B40-802A7B48 2A2480 0008+00 1/0 2/0 0/0 .text do_word__Q28JMessage10TReferenceCFUl */
bool JMessage::TReference::do_word(u32 param_0) const {
    return false;
}

/* 802A7B48-802A7B90 2A2488 0048+00 3/2 0/0 0/0 .text            __dt__Q28JMessage10TProcessorFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TProcessor::~TProcessor() {
    nofralloc
#include "asm/JSystem/JMessage/processor/__dt__Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A7B90-802A7BF8 2A24D0 0068+00 0/0 1/1 0/0 .text            reset__Q28JMessage10TProcessorFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::reset() {
    nofralloc
#include "asm/JSystem/JMessage/processor/reset__Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A7BF8-802A7C30 2A2538 0038+00 1/1 8/8 0/0 .text
 * stack_pushCurrent__Q28JMessage10TProcessorFPCc               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::stack_pushCurrent(char const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/stack_pushCurrent__Q28JMessage10TProcessorFPCc.s"
}
#pragma pop

/* 802A7C30-802A7C54 2A2570 0024+00 1/1 0/0 0/0 .text stack_popCurrent__Q28JMessage10TProcessorFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::stack_popCurrent() {
    nofralloc
#include "asm/JSystem/JMessage/processor/stack_popCurrent__Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A7C54-802A7CD4 2A2594 0080+00 1/1 1/1 0/0 .text
 * getResource_groupID__Q28JMessage10TProcessorCFUs             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::getResource_groupID(u16 param_0) const {
    nofralloc
#include "asm/JSystem/JMessage/processor/getResource_groupID__Q28JMessage10TProcessorCFUs.s"
}
#pragma pop

/* 802A7CD4-802A7E38 2A2614 0164+00 0/0 1/1 0/0 .text
 * toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::toMessageCode_messageID(u32 param_0, u32 param_1,
                                                       bool* param_2) const {
    nofralloc
#include "asm/JSystem/JMessage/processor/toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb.s"
}
#pragma pop

/* 802A7E38-802A7EDC 2A2778 00A4+00 1/1 0/0 0/0 .text
 * on_select_begin__Q28JMessage10TProcessorFPFPQ28JMessage10TProcessor_PCcPCvPCcUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::on_select_begin(char const* (*)(JMessage::TProcessor*),
                                               void const* param_1, char const* param_2,
                                               u32 param_3) {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_select_begin__Q28JMessage10TProcessorFPFPQ28JMessage10TProcessor_PCcPCvPCcUl.s"
}
#pragma pop

/* 802A7EDC-802A7F34 2A281C 0058+00 1/1 0/0 0/0 .text on_select_end__Q28JMessage10TProcessorFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::on_select_end() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_select_end__Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A7F34-802A7FC0 2A2874 008C+00 1/1 0/0 0/0 .text
 * on_select_separate__Q28JMessage10TProcessorFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::on_select_separate() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_select_separate__Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A7FC0-802A7FC4 2A2900 0004+00 3/0 2/0 0/0 .text            do_reset__Q28JMessage10TProcessorFv
 */
void JMessage::TProcessor::do_reset() {
    /* empty function */
}

/* 802A7FC4-802A7FC8 2A2904 0004+00 3/0 0/0 0/0 .text do_begin__Q28JMessage10TProcessorFPCvPCc */
void JMessage::TProcessor::do_begin(void const* param_0, char const* param_1) {
    /* empty function */
}

/* 802A7FC8-802A7FCC 2A2908 0004+00 3/0 0/0 0/0 .text            do_end__Q28JMessage10TProcessorFv
 */
void JMessage::TProcessor::do_end() {
    /* empty function */
}

/* 802A7FCC-802A7FD0 2A290C 0004+00 3/0 0/0 0/0 .text do_character__Q28JMessage10TProcessorFi */
void JMessage::TProcessor::do_character(int param_0) {
    /* empty function */
}

/* 802A7FD0-802A7FD8 2A2910 0008+00 3/0 0/0 0/0 .text do_tag__Q28JMessage10TProcessorFUlPCvUl */
bool JMessage::TProcessor::do_tag(u32 param_0, void const* param_1, u32 param_2) {
    return false;
}

/* 802A7FD8-802A7FDC 2A2918 0004+00 3/0 6/0 0/0 .text do_select_begin__Q28JMessage10TProcessorFUl
 */
void JMessage::TProcessor::do_select_begin(u32 param_0) {
    /* empty function */
}

/* 802A7FDC-802A7FE0 2A291C 0004+00 3/0 6/0 0/0 .text do_select_end__Q28JMessage10TProcessorFv */
void JMessage::TProcessor::do_select_end() {
    /* empty function */
}

/* 802A7FE0-802A7FE4 2A2920 0004+00 3/0 6/0 0/0 .text
 * do_select_separate__Q28JMessage10TProcessorFv                */
void JMessage::TProcessor::do_select_separate() {
    /* empty function */
}

/* 802A7FE4-802A8084 2A2924 00A0+00 1/1 0/0 0/0 .text            on_tag___Q28JMessage10TProcessorFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::on_tag_() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_tag___Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A8084-802A8088 2A29C4 0004+00 2/0 4/0 0/0 .text do_resetStatus___Q28JMessage10TProcessorFPCc
 */
void JMessage::TProcessor::do_resetStatus_(char const* param_0) {
    /* empty function */
}

/* 802A8088-802A8090 2A29C8 0008+00 2/0 4/0 0/0 .text
 * do_setBegin_isReady___Q28JMessage10TProcessorCFv             */
bool JMessage::TProcessor::do_setBegin_isReady_() const {
    return true;
}

/* 802A8090-802A81EC 2A29D0 015C+00 2/2 0/0 0/0 .text do_tag___Q28JMessage10TProcessorFUlPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::do_tag_(u32 param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_tag___Q28JMessage10TProcessorFUlPCvUl.s"
}
#pragma pop

/* 802A81EC-802A828C 2A2B2C 00A0+00 2/2 0/0 0/0 .text
 * process_character___Q28JMessage10TProcessorFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::process_character_() {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_character___Q28JMessage10TProcessorFv.s"
}
#pragma pop

/* 802A828C-802A82F4 2A2BCC 0068+00 6/6 6/6 0/0 .text
 * process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::process_onCharacterEnd_normal_(JMessage::TProcessor* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor.s"
}
#pragma pop

/* 802A82F4-802A833C 2A2C34 0048+00 1/1 0/0 0/0 .text
 * process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::process_onCharacterEnd_select_(JMessage::TProcessor* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor.s"
}
#pragma pop

/* 802A833C-802A8358 2A2C7C 001C+00 1/1 0/0 0/0 .text
 * process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::process_onSelect_limited_(JMessage::TProcessor* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor.s"
}
#pragma pop

/* 802A8358-802A8374 2A2C98 001C+00 1/1 0/0 0/0 .text
 * process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::process_onSelect_(JMessage::TProcessor* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor.s"
}
#pragma pop

/* 802A8374-802A83B8 2A2CB4 0044+00 0/0 2/2 0/0 .text
 * __ct__Q28JMessage18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TSequenceProcessor::TSequenceProcessor(JMessage::TReference const* param_0,
                                                     JMessage::TControl* param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/__ct__Q28JMessage18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl.s"
}
#pragma pop

/* 802A83B8-802A8418 2A2CF8 0060+00 1/0 2/2 0/0 .text __dt__Q28JMessage18TSequenceProcessorFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TSequenceProcessor::~TSequenceProcessor() {
    nofralloc
#include "asm/JSystem/JMessage/processor/__dt__Q28JMessage18TSequenceProcessorFv.s"
}
#pragma pop

/* 802A8418-802A85A4 2A2D58 018C+00 0/0 1/1 0/0 .text process__Q28JMessage18TSequenceProcessorFPCc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::process(char const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process__Q28JMessage18TSequenceProcessorFPCc.s"
}
#pragma pop

/* 802A85A4-802A85D0 2A2EE4 002C+00 1/1 0/0 0/0 .text
 * on_isReady__Q28JMessage18TSequenceProcessorFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_isReady() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_isReady__Q28JMessage18TSequenceProcessorFv.s"
}
#pragma pop

/* 802A85D0-802A85E4 2A2F10 0014+00 1/1 0/0 0/0 .text
 * on_jump_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessor_PCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::on_jump_register(void const* (*)(JMessage::TSequenceProcessor const*),
                                               u32 param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/func_802A85D0.s"
}
#pragma pop

/* 802A85E4-802A8610 2A2F24 002C+00 1/1 0/0 0/0 .text
 * on_jump_isReady__Q28JMessage18TSequenceProcessorFv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_jump_isReady() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_jump_isReady__Q28JMessage18TSequenceProcessorFv.s"
}
#pragma pop

/* 802A8610-802A8690 2A2F50 0080+00 1/1 0/0 0/0 .text
 * on_jump__Q28JMessage18TSequenceProcessorFPCvPCc              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_jump(void const* param_0, char const* param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_jump__Q28JMessage18TSequenceProcessorFPCvPCc.s"
}
#pragma pop

/* 802A8690-802A86A0 2A2FD0 0010+00 1/1 0/0 0/0 .text
 * on_branch_register__Q28JMessage18TSequenceProcessorFPFPCQ28JMessage18TSequenceProcessorUl_PCvPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_branch_register(
    void const* (*)(JMessage::TSequenceProcessor const*, u32), void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/processor/func_802A8690.s"
}
#pragma pop

/* 802A86A0-802A86D4 2A2FE0 0034+00 1/1 0/0 0/0 .text
 * on_branch_query__Q28JMessage18TSequenceProcessorFUl          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_branch_query(u32 param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_branch_query__Q28JMessage18TSequenceProcessorFUl.s"
}
#pragma pop

/* 802A86D4-802A8700 2A3014 002C+00 1/1 0/0 0/0 .text
 * on_branch_queryResult__Q28JMessage18TSequenceProcessorFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_branch_queryResult() {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_branch_queryResult__Q28JMessage18TSequenceProcessorFv.s"
}
#pragma pop

/* 802A8700-802A8780 2A3040 0080+00 1/1 0/0 0/0 .text
 * on_branch__Q28JMessage18TSequenceProcessorFPCvPCc            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::on_branch(void const* param_0, char const* param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_branch__Q28JMessage18TSequenceProcessorFPCvPCc.s"
}
#pragma pop

/* 802A8780-802A8788 2A30C0 0008+00 1/0 0/0 0/0 .text
 * do_isReady__Q28JMessage18TSequenceProcessorFv                */
bool JMessage::TSequenceProcessor::do_isReady() {
    return true;
}

/* 802A8788-802A8790 2A30C8 0008+00 1/0 0/0 0/0 .text
 * do_jump_isReady__Q28JMessage18TSequenceProcessorFv           */
bool JMessage::TSequenceProcessor::do_jump_isReady() {
    return true;
}

/* 802A8790-802A8794 2A30D0 0004+00 1/0 0/0 0/0 .text
 * do_jump__Q28JMessage18TSequenceProcessorFPCvPCc              */
void JMessage::TSequenceProcessor::do_jump(void const* param_0, char const* param_1) {
    /* empty function */
}

/* 802A8794-802A8798 2A30D4 0004+00 1/0 2/0 0/0 .text
 * do_branch_query__Q28JMessage18TSequenceProcessorFUl          */
void JMessage::TSequenceProcessor::do_branch_query(u32 param_0) {
    /* empty function */
}

/* 802A8798-802A87A0 2A30D8 0008+00 1/0 2/0 0/0 .text
 * do_branch_queryResult__Q28JMessage18TSequenceProcessorFv     */
s32 JMessage::TSequenceProcessor::do_branch_queryResult() {
    return -2;
}

/* 802A87A0-802A87A4 2A30E0 0004+00 1/0 2/0 0/0 .text
 * do_branch__Q28JMessage18TSequenceProcessorFPCvPCc            */
void JMessage::TSequenceProcessor::do_branch(void const* param_0, char const* param_1) {
    /* empty function */
}

/* 802A87A4-802A87C0 2A30E4 001C+00 1/0 2/0 0/0 .text
 * do_resetStatus___Q28JMessage18TSequenceProcessorFPCc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::do_resetStatus_(char const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_resetStatus___Q28JMessage18TSequenceProcessorFPCc.s"
}
#pragma pop

/* 802A87C0-802A87D0 2A3100 0010+00 1/0 2/0 0/0 .text
 * do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::do_setBegin_isReady_() const {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv.s"
}
#pragma pop

/* 802A87D0-802A87D4 2A3110 0004+00 1/0 2/0 0/0 .text
 * do_begin___Q28JMessage18TSequenceProcessorFPCvPCc            */
void JMessage::TSequenceProcessor::do_begin_(void const* param_0, char const* param_1) {
    /* empty function */
}

/* 802A87D4-802A87E0 2A3114 000C+00 1/0 2/0 0/0 .text do_end___Q28JMessage18TSequenceProcessorFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::do_end_() {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_end___Q28JMessage18TSequenceProcessorFv.s"
}
#pragma pop

/* 802A87E0-802A892C 2A3120 014C+00 2/0 2/0 0/0 .text
 * do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::do_tag_(u32 param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl.s"
}
#pragma pop

/* 802A892C-802A8944 2A326C 0018+00 1/1 0/0 0/0 .text
 * process_setMessageIndex_reserved___Q28JMessage18TSequenceProcessorFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TSequenceProcessor::process_setMessageIndex_reserved_(u16 param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_setMessageIndex_reserved___Q28JMessage18TSequenceProcessorFUs.s"
}
#pragma pop

/* 802A8944-802A89B8 2A3284 0074+00 4/4 0/0 0/0 .text
 * process_setMessageCode___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUsUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::process_setMessageCode_(JMessage::TSequenceProcessor const* param_0,
                                                      u16 param_1, u16 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/processor/func_802A8944.s"
}
#pragma pop

/* 802A89B8-802A89EC 2A32F8 0034+00 1/1 0/0 0/0 .text
 * process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::process_onJump_limited_(JMessage::TSequenceProcessor const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/func_802A89B8.s"
}
#pragma pop

/* 802A89EC-802A8A18 2A332C 002C+00 1/1 0/0 0/0 .text
 * process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::process_onJump_(JMessage::TSequenceProcessor const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor.s"
}
#pragma pop

/* 802A8A18-802A8A50 2A3358 0038+00 1/1 0/0 0/0 .text
 * process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::process_onBranch_limited_(JMessage::TSequenceProcessor const* param_0,
                                                        u32 param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/func_802A8A18.s"
}
#pragma pop

/* 802A8A50-802A8A84 2A3390 0034+00 1/1 0/0 0/0 .text
 * process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JMessage::TSequenceProcessor::process_onBranch_(JMessage::TSequenceProcessor const* param_0,
                                                u32 param_1) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl.s"
}
#pragma pop

/* 802A8A84-802A8AC0 2A33C4 003C+00 0/0 4/4 0/0 .text
 * __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TRenderingProcessor::TRenderingProcessor(JMessage::TReference const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/__ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference.s"
}
#pragma pop

/* 802A8AC0-802A8B20 2A3400 0060+00 1/0 6/6 0/0 .text __dt__Q28JMessage19TRenderingProcessorFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TRenderingProcessor::~TRenderingProcessor() {
    nofralloc
#include "asm/JSystem/JMessage/processor/__dt__Q28JMessage19TRenderingProcessorFv.s"
}
#pragma pop

/* 802A8B20-802A8BA4 2A3460 0084+00 0/0 4/4 0/0 .text
 * process__Q28JMessage19TRenderingProcessorFPCc                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TRenderingProcessor::process(char const* param_0) {
    nofralloc
#include "asm/JSystem/JMessage/processor/process__Q28JMessage19TRenderingProcessorFPCc.s"
}
#pragma pop

/* 802A8BA4-802A8BA8 2A34E4 0004+00 1/0 4/0 0/0 .text
 * do_begin___Q28JMessage19TRenderingProcessorFPCvPCc           */
void JMessage::TRenderingProcessor::do_begin_(void const* param_0, char const* param_1) {
    /* empty function */
}

/* 802A8BA8-802A8BAC 2A34E8 0004+00 1/0 4/0 0/0 .text do_end___Q28JMessage19TRenderingProcessorFv
 */
void JMessage::TRenderingProcessor::do_end_() {
    /* empty function */
}

/* 802A8BAC-802A8C24 2A34EC 0078+00 1/0 4/0 0/0 .text
 * do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TRenderingProcessor::do_tag_(u32 param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/processor/do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl.s"
}
#pragma pop

/* 802A8C24-802A8C44 2A3564 0020+00 1/1 0/0 0/0 .text on_message__Q28JMessage10TProcessorCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::on_message(u32 param_0) const {
    nofralloc
#include "asm/JSystem/JMessage/processor/on_message__Q28JMessage10TProcessorCFUl.s"
}
#pragma pop

/* 802A8C44-802A8CDC 2A3584 0098+00 1/1 0/0 0/0 .text
 * getMessageText_messageCode__Q28JMessage10TProcessorCFUl      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TProcessor::getMessageText_messageCode(u32 param_0) const {
    nofralloc
#include "asm/JSystem/JMessage/processor/getMessageText_messageCode__Q28JMessage10TProcessorCFUl.s"
}
#pragma pop
