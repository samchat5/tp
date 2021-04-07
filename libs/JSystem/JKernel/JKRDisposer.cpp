//
// Generated By: dol2asm
// Translation Unit: JKRDisposer
//

#include "JSystem/JKernel/JKRDisposer.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

struct JKRHeap {
    /* 802CE83C */ void findFromRoot(void*);
};

struct JKRDisposer {
    /* 802D147C */ JKRDisposer();
    /* 802D14E4 */ ~JKRDisposer();
};

//
// Forward References:
//

extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();

//
// External References:
//

extern "C" void findFromRoot__7JKRHeapFPv();
extern "C" void __dl__FPv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC0F0-803CC100 029210 000C+04 2/2 0/0 0/0 .data            __vt__11JKRDisposer */
SECTION_DATA extern void* __vt__11JKRDisposer[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11JKRDisposerFv,
    /* padding */
    NULL,
};

/* 802D147C-802D14E4 2CBDBC 0068+00 0/0 12/12 0/0 .text            __ct__11JKRDisposerFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDisposer::JKRDisposer() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDisposer/__ct__11JKRDisposerFv.s"
}
#pragma pop

/* 802D14E4-802D1568 2CBE24 0084+00 1/0 10/10 0/0 .text            __dt__11JKRDisposerFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRDisposer::~JKRDisposer() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDisposer/__dt__11JKRDisposerFv.s"
}
#pragma pop
