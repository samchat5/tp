//
// Generated By: dol2asm
// Translation Unit: JKRAramHeap
//

#include "JSystem/JKernel/JKRAramHeap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JKRAramBlock> */
struct JSUList__template6 {
    /* 802D32B0 */ void func_802D32B0();
};

struct JKRHeap {
    /* 802CE83C */ void findFromRoot(void*);
};

struct JKRDisposer {
    /* 802D147C */ JKRDisposer();
    /* 802D14E4 */ ~JKRDisposer();
};

struct JKRAramHeap {
    struct EAllocMode {};

    /* 802D2E44 */ JKRAramHeap(u32, u32);
    /* 802D2F14 */ ~JKRAramHeap();
    /* 802D2FBC */ void alloc(u32, JKRAramHeap::EAllocMode);
    /* 802D3034 */ void allocFromHead(u32);
    /* 802D30BC */ void allocFromTail(u32);
    /* 802D3134 */ void getFreeSize();
    /* 802D31AC */ void getTotalFreeSize();
    /* 802D3218 */ void dump();
};

struct JKRAramBlock {
    /* 802D3304 */ JKRAramBlock(u32, u32, u32, u8, bool);
    /* 802D3434 */ void allocHead(u32, u8, JKRAramHeap*);
    /* 802D34D0 */ void allocTail(u32, u8, JKRAramHeap*);
};

//
// Forward References:
//

extern "C" void __ct__11JKRAramHeapFUlUl();
extern "C" void __dt__11JKRAramHeapFv();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void allocFromHead__11JKRAramHeapFUl();
extern "C" void allocFromTail__11JKRAramHeapFUl();
extern "C" void getFreeSize__11JKRAramHeapFv();
extern "C" void getTotalFreeSize__11JKRAramHeapFv();
extern "C" void dump__11JKRAramHeapFv();
extern "C" void __sinit_JKRAramHeap_cpp();
extern "C" void func_802D32B0();

//
// External References:
//

extern "C" void findFromRoot__7JKRHeapFPv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void __ct__12JKRAramBlockFUlUlUlUcb();
extern "C" void allocHead__12JKRAramBlockFUlUcP11JKRAramHeap();
extern "C" void allocTail__12JKRAramBlockFUlUcP11JKRAramHeap();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void __register_global_object();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC168-803CC178 029288 000C+04 2/2 0/0 0/0 .data            __vt__11JKRAramHeap */
SECTION_DATA extern void* __vt__11JKRAramHeap[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11JKRAramHeapFv,
    /* padding */
    NULL,
};

/* 80434300-8043430C 061020 000C+00 1/1 0/0 0/0 .bss             @297 */
static u8 lit_297[12];

/* 8043430C-80434318 06102C 000C+00 8/8 0/0 0/0 .bss             sAramList__11JKRAramHeap */
static u8 sAramList__11JKRAramHeap[12];

/* 802D2E44-802D2F14 2CD784 00D0+00 0/0 1/1 0/0 .text            __ct__11JKRAramHeapFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramHeap::JKRAramHeap(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/__ct__11JKRAramHeapFUlUl.s"
}
#pragma pop

/* 802D2F14-802D2FBC 2CD854 00A8+00 1/0 0/0 0/0 .text            __dt__11JKRAramHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRAramHeap::~JKRAramHeap() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/__dt__11JKRAramHeapFv.s"
}
#pragma pop

/* 802D2FBC-802D3034 2CD8FC 0078+00 0/0 5/5 0/0 .text
 * alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::alloc(u32 param_0, JKRAramHeap::EAllocMode param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode.s"
}
#pragma pop

/* 802D3034-802D30BC 2CD974 0088+00 1/1 0/0 0/0 .text            allocFromHead__11JKRAramHeapFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::allocFromHead(u32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/allocFromHead__11JKRAramHeapFUl.s"
}
#pragma pop

/* 802D30BC-802D3134 2CD9FC 0078+00 1/1 0/0 0/0 .text            allocFromTail__11JKRAramHeapFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::allocFromTail(u32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/allocFromTail__11JKRAramHeapFUl.s"
}
#pragma pop

/* 802D3134-802D31AC 2CDA74 0078+00 0/0 1/1 0/0 .text            getFreeSize__11JKRAramHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::getFreeSize() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/getFreeSize__11JKRAramHeapFv.s"
}
#pragma pop

/* 802D31AC-802D3218 2CDAEC 006C+00 0/0 2/2 0/0 .text            getTotalFreeSize__11JKRAramHeapFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::getTotalFreeSize() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/getTotalFreeSize__11JKRAramHeapFv.s"
}
#pragma pop

/* 802D3218-802D326C 2CDB58 0054+00 0/0 2/2 0/0 .text            dump__11JKRAramHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRAramHeap::dump() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/dump__11JKRAramHeapFv.s"
}
#pragma pop

/* 802D326C-802D32B0 2CDBAC 0044+00 0/0 1/0 0/0 .text            __sinit_JKRAramHeap_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JKRAramHeap_cpp() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/__sinit_JKRAramHeap_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_802D326C = (void*)__sinit_JKRAramHeap_cpp;
#pragma pop

/* 802D32B0-802D3304 2CDBF0 0054+00 1/1 0/0 0/0 .text            __dt__23JSUList<12JKRAramBlock>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802D32B0() {
    nofralloc
#include "asm/JSystem/JKernel/JKRAramHeap/func_802D32B0.s"
}
#pragma pop
