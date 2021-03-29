//
// Generated By: dol2asm
// Translation Unit: JASCalc
//

#include "JSystem/JAudio2/JASCalc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASCalc {
    /* 8028F2E8 */ void imixcopy(s16 const*, s16 const*, s16*, u32);
    /* 8028F318 */ void bcopyfast(void const*, void*, u32);
    /* 8028F354 */ void bcopy(void const*, void*, u32);
    /* 8028F454 */ void bzerofast(void*, u32);
    /* 8028F480 */ void bzero(void*, u32);
    /* 8028F578 */ void pow2(f32);
    /*          */ template <typename A1, typename B1>
    /*          */ void clamp(/* s32 */);
    /* 8028F69C */ /* clamp<s16, s32> */
    void clamp__template0(s32);
};

//
// Forward References:
//

extern "C" void imixcopy__7JASCalcFPCsPCsPsUl();
extern "C" void bcopyfast__7JASCalcFPCvPvUl();
extern "C" void bcopy__7JASCalcFPCvPvUl();
extern "C" void bzerofast__7JASCalcFPvUl();
extern "C" void bzero__7JASCalcFPvUl();
extern "C" void pow2__7JASCalcFf();
extern "C" void func_8028F69C();
extern "C" extern u8 const CUTOFF_TO_IIR_TABLE__7JASCalc[1024];

//
// External References:
//

extern "C" void DCZeroRange();
extern "C" extern u32 __float_huge;

//
// Declarations:
//

/* 8028F2E8-8028F318 0030+00 s=0 e=1 z=0  None .text      imixcopy__7JASCalcFPCsPCsPsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::imixcopy(s16 const* param_0, s16 const* param_1, s16* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/imixcopy__7JASCalcFPCsPCsPsUl.s"
}
#pragma pop

/* 8028F318-8028F354 003C+00 s=1 e=0 z=0  None .text      bcopyfast__7JASCalcFPCvPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::bcopyfast(void const* param_0, void* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/bcopyfast__7JASCalcFPCvPvUl.s"
}
#pragma pop

/* 8028F354-8028F454 0100+00 s=0 e=3 z=0  None .text      bcopy__7JASCalcFPCvPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::bcopy(void const* param_0, void* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/bcopy__7JASCalcFPCvPvUl.s"
}
#pragma pop

/* 8028F454-8028F480 002C+00 s=1 e=0 z=0  None .text      bzerofast__7JASCalcFPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::bzerofast(void* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/bzerofast__7JASCalcFPvUl.s"
}
#pragma pop

/* 8028F480-8028F578 00F8+00 s=0 e=6 z=0  None .text      bzero__7JASCalcFPvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::bzero(void* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/bzero__7JASCalcFPvUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039ABB8-8039AFB8 0400+00 s=0 e=4 z=0  None .rodata    CUTOFF_TO_IIR_TABLE__7JASCalc */
SECTION_RODATA u8 const CUTOFF_TO_IIR_TABLE__7JASCalc[1024] = {
    0x0F, 0x5C, 0x0A, 0x3D, 0x46, 0x65, 0x1E, 0x73, 0x0F, 0x5E, 0x0A, 0x3D, 0x46, 0x64, 0x1E, 0x73,
    0x0F, 0x63, 0x0A, 0x3C, 0x46, 0x61, 0x1E, 0x71, 0x0F, 0x6C, 0x0A, 0x3C, 0x46, 0x5B, 0x1E, 0x6F,
    0x0F, 0x79, 0x0A, 0x3A, 0x46, 0x53, 0x1E, 0x6B, 0x0F, 0x89, 0x0A, 0x39, 0x46, 0x49, 0x1E, 0x67,
    0x0F, 0x9C, 0x0A, 0x37, 0x46, 0x3D, 0x1E, 0x62, 0x0F, 0xB4, 0x0A, 0x35, 0x46, 0x2E, 0x1E, 0x5B,
    0x0F, 0xCE, 0x0A, 0x33, 0x46, 0x1D, 0x1E, 0x54, 0x0F, 0xED, 0x0A, 0x30, 0x46, 0x0A, 0x1E, 0x4C,
    0x10, 0x0F, 0x0A, 0x2D, 0x45, 0xF5, 0x1E, 0x43, 0x10, 0x34, 0x0A, 0x29, 0x45, 0xDE, 0x1E, 0x39,
    0x10, 0x5D, 0x0A, 0x26, 0x45, 0xC4, 0x1E, 0x2D, 0x10, 0x8A, 0x0A, 0x22, 0x45, 0xA8, 0x1E, 0x21,
    0x10, 0xBA, 0x0A, 0x1D, 0x45, 0x8A, 0x1E, 0x14, 0x10, 0xEE, 0x0A, 0x18, 0x45, 0x6A, 0x1E, 0x06,
    0x11, 0x26, 0x0A, 0x13, 0x45, 0x47, 0x1D, 0xF7, 0x11, 0x61, 0x0A, 0x0E, 0x45, 0x22, 0x1D, 0xE7,
    0x11, 0x9F, 0x0A, 0x08, 0x44, 0xFB, 0x1D, 0xD6, 0x11, 0xE1, 0x0A, 0x02, 0x44, 0xD2, 0x1D, 0xC5,
    0x12, 0x27, 0x09, 0xFC, 0x44, 0xA6, 0x1D, 0xB2, 0x12, 0x70, 0x09, 0xF5, 0x44, 0x78, 0x1D, 0x9E,
    0x12, 0xBD, 0x09, 0xEE, 0x44, 0x48, 0x1D, 0x89, 0x13, 0x0E, 0x09, 0xE7, 0x44, 0x16, 0x1D, 0x73,
    0x13, 0x62, 0x09, 0xDF, 0x43, 0xE1, 0x1D, 0x5D, 0x13, 0xB9, 0x09, 0xD7, 0x43, 0xAB, 0x1D, 0x45,
    0x14, 0x15, 0x09, 0xCF, 0x43, 0x72, 0x1D, 0x2C, 0x14, 0x73, 0x09, 0xC7, 0x43, 0x36, 0x1D, 0x13,
    0x14, 0xD6, 0x09, 0xBE, 0x42, 0xF9, 0x1C, 0xF8, 0x15, 0x3C, 0x09, 0xB4, 0x42, 0xB9, 0x1C, 0xDD,
    0x15, 0xA5, 0x09, 0xAB, 0x42, 0x77, 0x1C, 0xC0, 0x16, 0x12, 0x09, 0xA1, 0x42, 0x33, 0x1C, 0xA3,
    0x16, 0x83, 0x09, 0x97, 0x41, 0xED, 0x1C, 0x84, 0x16, 0xF7, 0x09, 0x8C, 0x41, 0xA4, 0x1C, 0x65,
    0x17, 0x6F, 0x09, 0x81, 0x41, 0x59, 0x1C, 0x44, 0x17, 0xEA, 0x09, 0x76, 0x41, 0x0C, 0x1C, 0x23,
    0x18, 0x69, 0x09, 0x6A, 0x40, 0xBD, 0x1C, 0x01, 0x18, 0xEB, 0x09, 0x5F, 0x40, 0x6B, 0x1B, 0xDD,
    0x19, 0x72, 0x09, 0x52, 0x40, 0x18, 0x1B, 0xB9, 0x19, 0xFB, 0x09, 0x46, 0x3F, 0xC2, 0x1B, 0x94,
    0x1A, 0x88, 0x09, 0x39, 0x3F, 0x69, 0x1B, 0x6E, 0x1B, 0x19, 0x09, 0x2C, 0x3F, 0x0F, 0x1B, 0x47,
    0x1B, 0xAE, 0x09, 0x1E, 0x3E, 0xB2, 0x1B, 0x1E, 0x1C, 0x46, 0x09, 0x11, 0x3E, 0x53, 0x1A, 0xF5,
    0x1C, 0xE1, 0x09, 0x02, 0x3D, 0xF2, 0x1A, 0xCB, 0x1D, 0x80, 0x08, 0xF4, 0x3D, 0x8E, 0x1A, 0xA0,
    0x1E, 0x23, 0x08, 0xE5, 0x3D, 0x29, 0x1A, 0x74, 0x1E, 0xC9, 0x08, 0xD6, 0x3C, 0xC1, 0x1A, 0x47,
    0x1F, 0x73, 0x08, 0xC7, 0x3C, 0x57, 0x1A, 0x19, 0x20, 0x20, 0x08, 0xB7, 0x3B, 0xEA, 0x19, 0xEB,
    0x20, 0xD1, 0x08, 0xA7, 0x3B, 0x7C, 0x19, 0xBB, 0x21, 0x86, 0x08, 0x96, 0x3B, 0x0B, 0x19, 0x8A,
    0x22, 0x3E, 0x08, 0x86, 0x3A, 0x98, 0x19, 0x58, 0x22, 0xFA, 0x08, 0x75, 0x3A, 0x22, 0x19, 0x25,
    0x23, 0xB9, 0x08, 0x63, 0x39, 0xAB, 0x18, 0xF2, 0x24, 0x7C, 0x08, 0x51, 0x39, 0x31, 0x18, 0xBD,
    0x25, 0x42, 0x08, 0x3F, 0x38, 0xB5, 0x18, 0x87, 0x26, 0x0C, 0x08, 0x2D, 0x38, 0x37, 0x18, 0x51,
    0x26, 0xDA, 0x08, 0x1A, 0x37, 0xB6, 0x18, 0x19, 0x27, 0xAB, 0x08, 0x07, 0x37, 0x34, 0x17, 0xE1,
    0x28, 0x80, 0x07, 0xF4, 0x36, 0xAF, 0x17, 0xA7, 0x29, 0x58, 0x07, 0xE0, 0x36, 0x28, 0x17, 0x6D,
    0x2A, 0x34, 0x07, 0xCC, 0x35, 0x9E, 0x17, 0x31, 0x2B, 0x14, 0x07, 0xB8, 0x35, 0x12, 0x16, 0xF5,
    0x2B, 0xF7, 0x07, 0xA3, 0x34, 0x85, 0x16, 0xB7, 0x2C, 0xDD, 0x07, 0x8E, 0x33, 0xF4, 0x16, 0x79,
    0x2D, 0xC8, 0x07, 0x79, 0x33, 0x62, 0x16, 0x3A, 0x2E, 0xB5, 0x07, 0x64, 0x32, 0xCD, 0x15, 0xFA,
    0x2F, 0xA7, 0x07, 0x4E, 0x32, 0x37, 0x15, 0xB8, 0x30, 0x9C, 0x07, 0x37, 0x31, 0x9E, 0x15, 0x76,
    0x31, 0x94, 0x07, 0x21, 0x31, 0x02, 0x15, 0x33, 0x32, 0x90, 0x07, 0x0A, 0x30, 0x65, 0x14, 0xEF,
    0x33, 0x90, 0x06, 0xF3, 0x2F, 0xC5, 0x14, 0xAA, 0x34, 0x93, 0x06, 0xDB, 0x2F, 0x23, 0x14, 0x64,
    0x35, 0x9A, 0x06, 0xC3, 0x2E, 0x7F, 0x14, 0x1C, 0x36, 0xA4, 0x06, 0xAB, 0x2D, 0xD8, 0x13, 0xD4,
    0x37, 0xB2, 0x06, 0x92, 0x2D, 0x2F, 0x13, 0x8C, 0x38, 0xC4, 0x06, 0x7A, 0x2C, 0x85, 0x13, 0x42,
    0x39, 0xD9, 0x06, 0x60, 0x2B, 0xD7, 0x12, 0xF7, 0x3A, 0xF1, 0x06, 0x47, 0x2B, 0x28, 0x12, 0xAB,
    0x3C, 0x0E, 0x06, 0x2D, 0x2A, 0x76, 0x12, 0x5E, 0x3D, 0x2E, 0x06, 0x13, 0x29, 0xC2, 0x12, 0x10,
    0x3E, 0x51, 0x05, 0xF8, 0x29, 0x0C, 0x11, 0xC1, 0x3F, 0x78, 0x05, 0xDE, 0x28, 0x54, 0x11, 0x72,
    0x40, 0xA3, 0x05, 0xC2, 0x27, 0x99, 0x11, 0x21, 0x41, 0xD1, 0x05, 0xA7, 0x26, 0xDC, 0x10, 0xCF,
    0x43, 0x02, 0x05, 0x8B, 0x26, 0x1D, 0x10, 0x7D, 0x44, 0x38, 0x05, 0x6F, 0x25, 0x5C, 0x10, 0x29,
    0x45, 0x71, 0x05, 0x53, 0x24, 0x99, 0x0F, 0xD4, 0x46, 0xAD, 0x05, 0x36, 0x23, 0xD3, 0x0F, 0x7F,
    0x47, 0xED, 0x05, 0x19, 0x23, 0x0B, 0x0F, 0x28, 0x49, 0x31, 0x04, 0xFB, 0x22, 0x41, 0x0E, 0xD1,
    0x4A, 0x78, 0x04, 0xDE, 0x21, 0x74, 0x0E, 0x78, 0x4B, 0xC2, 0x04, 0xC0, 0x20, 0xA5, 0x0E, 0x1F,
    0x4D, 0x11, 0x04, 0xA1, 0x1F, 0xD4, 0x0D, 0xC5, 0x4E, 0x63, 0x04, 0x82, 0x1F, 0x01, 0x0D, 0x69,
    0x4F, 0xB8, 0x04, 0x63, 0x1E, 0x2C, 0x0D, 0x0D, 0x51, 0x11, 0x04, 0x44, 0x1D, 0x54, 0x0C, 0xB0,
    0x52, 0x6E, 0x04, 0x24, 0x1C, 0x7A, 0x0C, 0x51, 0x53, 0xCE, 0x04, 0x04, 0x1B, 0x9E, 0x0B, 0xF2,
    0x55, 0x32, 0x03, 0xE4, 0x1A, 0xC0, 0x0B, 0x92, 0x56, 0x99, 0x03, 0xC3, 0x19, 0xDF, 0x0B, 0x31,
    0x58, 0x04, 0x03, 0xA2, 0x18, 0xFD, 0x0A, 0xCF, 0x59, 0x72, 0x03, 0x81, 0x18, 0x18, 0x0A, 0x6C,
    0x5A, 0xE5, 0x03, 0x5F, 0x17, 0x30, 0x0A, 0x08, 0x5C, 0x5A, 0x03, 0x3D, 0x16, 0x47, 0x09, 0xA3,
    0x5D, 0xD3, 0x03, 0x1B, 0x15, 0x5B, 0x09, 0x3D, 0x5F, 0x50, 0x02, 0xF9, 0x14, 0x6D, 0x08, 0xD6,
    0x60, 0xD1, 0x02, 0xD6, 0x13, 0x7D, 0x08, 0x6E, 0x62, 0x55, 0x02, 0xB2, 0x12, 0x8A, 0x08, 0x05,
    0x63, 0xDC, 0x02, 0x8F, 0x11, 0x96, 0x07, 0x9B, 0x65, 0x67, 0x02, 0x6B, 0x10, 0x9F, 0x07, 0x30,
    0x66, 0xF6, 0x02, 0x47, 0x0F, 0xA6, 0x06, 0xC5, 0x68, 0x88, 0x02, 0x22, 0x0E, 0xAA, 0x06, 0x58,
    0x6A, 0x1E, 0x01, 0xFD, 0x0D, 0xAD, 0x05, 0xEA, 0x6B, 0xB7, 0x01, 0xD8, 0x0C, 0xAD, 0x05, 0x7B,
    0x6D, 0x54, 0x01, 0xB2, 0x0B, 0xAB, 0x05, 0x0C, 0x6E, 0xF5, 0x01, 0x8D, 0x0A, 0xA6, 0x04, 0x9B,
    0x70, 0x99, 0x01, 0x66, 0x09, 0xA0, 0x04, 0x2A, 0x72, 0x41, 0x01, 0x40, 0x08, 0x97, 0x03, 0xB7,
    0x73, 0xEC, 0x01, 0x19, 0x07, 0x8C, 0x03, 0x44, 0x75, 0x9B, 0x00, 0xF2, 0x06, 0x7F, 0x02, 0xCF,
    0x77, 0x4D, 0x00, 0xCA, 0x05, 0x6F, 0x02, 0x5A, 0x79, 0x03, 0x00, 0xA3, 0x04, 0x5D, 0x01, 0xE3,
    0x7A, 0xBD, 0x00, 0x7A, 0x03, 0x49, 0x01, 0x6C, 0x7C, 0x7A, 0x00, 0x52, 0x02, 0x33, 0x00, 0xF4,
    0x7E, 0x3B, 0x00, 0x29, 0x01, 0x1B, 0x00, 0x7A, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039AFB8-8039AFD0 0018+00 s=1 e=0 z=0  None .rodata    __two_to_x$982 */
SECTION_RODATA static f32 const __two_to_x[6] = {
    0.6931471824645996f,   0.240226611495018f,     0.055502913892269135f,
    0.009625022299587727f, 0.0013131053419783711f, 0.0001830080582294613f,
};

/* 80455558-80455560 0004+04 s=1 e=0 z=0  None .sdata2    @847 */
SECTION_SDATA2 static f32 lit_847[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80455560-80455568 0008+00 s=1 e=0 z=0  None .sdata2    @850 */
SECTION_SDATA2 static f64 lit_850 = 4503601774854144.0 /* cast s32 to float */;

/* 80455568-8045556C 0004+00 s=1 e=0 z=0  None .sdata2    @969 */
SECTION_SDATA2 static u8 lit_969[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045556C-80455574 0008+00 s=1 e=0 z=0  None .sdata2    scale_frac$980 */
SECTION_SDATA2 static u8 scale_frac[8] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
};

/* 80455574-8045557C 0008+00 s=1 e=0 z=0  None .sdata2    two_to_frac$981 */
SECTION_SDATA2 static u8 two_to_frac[8] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x35, 0x04, 0xF3,
};

/* 8045557C-80455580 0004+00 s=1 e=0 z=0  None .sdata2    @994 */
SECTION_SDATA2 static f32 lit_994 = 0.75f;

/* 80455580-80455588 0004+04 s=1 e=0 z=0  None .sdata2    @995 */
SECTION_SDATA2 static f32 lit_995[1 + 1 /* padding */] = {
    0.25f,
    /* padding */
    0.0f,
};

/* 8028F578-8028F69C 0124+00 s=0 e=2 z=0  None .text      pow2__7JASCalcFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::pow2(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/pow2__7JASCalcFf.s"
}
#pragma pop

/* 8028F69C-8028F6C4 0028+00 s=0 e=4 z=0  None .text      clamp<s,l>__7JASCalcFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASCalc::clamp__template0(s32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/func_8028F69C.s"
}
#pragma pop
