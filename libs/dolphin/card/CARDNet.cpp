//
// Generated By: dol2asm
// Translation Unit: CARDNet
//

#include "dolphin/card/CARDNet.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void CARDGetSerialNo();
extern "C" extern u8 struct_80450A70[8];

//
// External References:
//

extern "C" void __CARDGetControlBlock();
extern "C" void __CARDPutControlBlock();

//
// Declarations:
//

/* 80359158-8035921C 00C4+00 s=0 e=1 z=0  None .text      CARDGetSerialNo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void CARDGetSerialNo() {
    nofralloc
#include "asm/dolphin/card/CARDNet/CARDGetSerialNo.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450A70-80450A78 0008+00 s=0 e=4 z=0  None .sdata     None */
SECTION_SDATA u8 struct_80450A70[8] = {
    /* 80450A70 0002 data_80450A70 __CARDVendorID */
    0xFF,
    0xFF,
    /* 80450A72 0006 data_80450A72 None */
    0x1C,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};
