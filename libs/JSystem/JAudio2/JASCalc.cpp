//
// Generated By: dol2asm
// Translation Unit: JASCalc
//

#include "JSystem/JAudio2/JASCalc.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/os/OSCache.h"
#include "MSL_C/math.h"

//
// Types:
//

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 8028F2E8-8028F318 289C28 0030+00 0/0 1/1 0/0 .text            imixcopy__7JASCalcFPCsPCsPsUl */
void JASCalc::imixcopy(const s16 *s1, const s16 *s2, s16 *dst, u32 n) {
    for (n; n != 0; n--) {
        *dst++ = *((s16 *)s1)++;
        *dst++ = *((s16 *)s2)++;
    }
}

/* 8028F318-8028F354 289C58 003C+00 1/1 0/0 0/0 .text            bcopyfast__7JASCalcFPCvPvUl */
void JASCalc::bcopyfast(const void *src, void *dest, u32 size) {
    u32 copy1, copy2, copy3, copy4;

    u32 *usrc = (u32 *)src;
    u32 *udest = (u32 *)dest;

    for (size = size / (4 * sizeof(u32)); size != 0; size--) {
        copy1 = *((u32 *)usrc)++;
        copy2 = *((u32 *)usrc)++;
        copy3 = *((u32 *)usrc)++;
        copy4 = *((u32 *)usrc)++;

        *udest++ = copy1;
        *udest++ = copy2;
        *udest++ = copy3;
        *udest++ = copy4;
    }
}

/* 8028F354-8028F454 289C94 0100+00 0/0 3/3 0/0 .text            bcopy__7JASCalcFPCvPvUl */
void JASCalc::bcopy(const void *src, void *dest, u32 size) {
    u32 *usrc;
    u32 *udest;

    u8 *bsrc = (u8 *)src;
    u8 *bdest = (u8 *)dest;

    u8 endbitsSrc = (reinterpret_cast<u32>(bsrc) & 0x03);
    u8 enbitsDst = (reinterpret_cast<u32>(bdest) & 0x03);
    if ((endbitsSrc) == (enbitsDst) && (size & 0x0f) == 0) {
        bcopyfast(src, dest, size);
    }
    else if ((endbitsSrc == enbitsDst) && (size >= 16)) {
        if (endbitsSrc != 0) {
            for (endbitsSrc = 4 - endbitsSrc; endbitsSrc != 0; endbitsSrc--) {
                *bdest++ = (u32)*bsrc++;
                size--;
            }
        }

        udest = (u32 *)bdest;
        usrc = (u32 *)bsrc;

        for (; size >= 4; size -= 4) {
            *udest++ = *usrc++;
        }

        if (size != 0) {
            bdest = (u8 *)udest;
            bsrc = (u8 *)usrc;

            for (; size != 0; size--) {
                *bdest++ = (u32)*bsrc++;
            }
        }
    }
    else {
        for (; size != 0; size--) {
            *bdest++ = (u32)*bsrc++;
        }
    }
}

/* 8028F454-8028F480 289D94 002C+00 1/1 0/0 0/0 .text            bzerofast__7JASCalcFPvUl */
void JASCalc::bzerofast(void *dest, u32 size) {
    u32 *udest = (u32 *)dest;

    for (size = size / (4 * sizeof(u32)); size != 0; size--) {
        *udest++ = 0;
        *udest++ = 0;
        *udest++ = 0;
        *udest++ = 0;
    }
}

/* 8028F480-8028F578 289DC0 00F8+00 0/0 6/6 0/0 .text            bzero__7JASCalcFPvUl */
void JASCalc::bzero(void *dest, u32 size) {
    u32 *udest;
    u8 *bdest = (u8 *)dest;
    if ((size & 0x1f) == 0 && (reinterpret_cast<u32>(dest) & 0x1f) == 0) {
        DCZeroRange(dest, size);
        return;
    }

    u8 alignedbitsDst = reinterpret_cast<u32>(bdest) & 0x3;

    if ((size & 0xf) == 0 && alignedbitsDst == 0) {
        bzerofast(dest, size);
        return;
    }

    if (size >= 16) {
        if (alignedbitsDst != 0) {
            for (alignedbitsDst = 4 - alignedbitsDst; alignedbitsDst != 0; alignedbitsDst--) {
                *bdest++ = 0;
                size--;
            }
        }

        udest = (u32 *)bdest;
        for (; size >= 4; size -= 4) {
            *udest++ = 0;
        }

        if (size != 0) {
            bdest = (u8 *)udest;
            for (; size != 0; size--) {
                *bdest++ = 0;
            }
        }
    }
    else {
        for (; size != 0; size--) {
            *bdest++ = 0;
        }
    }
}

/* ############################################################################################## */
/* 8039ABB8-8039AFB8 027218 0400+00 0/0 4/4 0/0 .rodata          CUTOFF_TO_IIR_TABLE__7JASCalc */
SECTION_RODATA u8 const JASCalc::CUTOFF_TO_IIR_TABLE[1024] = {
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
COMPILER_STRIP_GATE(0x8039ABB8, &JASCalc::CUTOFF_TO_IIR_TABLE);

// currently required because of missing functions
// JASCalc::hannWindow(short *, unsigned long)
// JASCalc::hammWindow(short *, unsigned long)
// JASCalc::fft(float *, float *, unsigned long, long)
f32 JASCalc::fake1() { return 0.5f; }
f32 JASCalc::fake2(long x) { return JASCalc::clamp<s16, long>(x); }
f32 JASCalc::fake3() { return 0.0f; }

/* 8028F578-8028F69C 289EB8 0124+00 0/0 2/2 0/0 .text            pow2__7JASCalcFf */
f32 JASCalc::pow2(f32 x) {
    s32 frac_index = 0;
    union {
        s32 l;
        f32 f;
    } exponent;
    exponent.l = (x >= 0.0f ? (s32)(x - 0.5f) : (s32)(x + 0.5f)); // Shift towards 0 and round
    f32 pannedval = x - exponent.l; // strictly between 1.5 and -1.5

    // 2^x will not fit in an IEEE-754 float
    if(exponent.l > 128) {
        return HUGE_VALF;
    }

    // convert to exponent of IEEE-754 float
    exponent.l += 127;
    exponent.l <<= 23;

    // Calculate the mantissa

    static const f32 scale_frac[] = { 0.0f, 0.5f };
    // { 1 , 1/sqrt2 }
    static const f32 two_to_frac[] = {1.0f, 0.70710677f};
    // coefficients of Taylor polynomial of 2^x - 1 at 0:
    // 2^x - 1 = (log2) * x + (log2)^2 / 2! * x^2 + ...
    static const f32 __two_to_x[] = {
        0.6931472f, 0.24022661,
        0.055502914f, 0.009625022f,
        0.0013131053f, 1.8300806E-4f        
    };

    if (pannedval < 0.0f) {
        frac_index += 1;
    }
    
    f32 ret = pannedval + scale_frac[frac_index];

    // Evaluate Taylor polynomial using Horner's method
    ret = ret * (ret * (ret * (ret * (ret * (ret * __two_to_x[5] + __two_to_x[4]) +
        __two_to_x[3]) + __two_to_x[2]) + __two_to_x[1]) + __two_to_x[0]);
    // 2^n * (corrected mantissa)
    ret = exponent.f * (0.75f * two_to_frac[frac_index] + ((0.25f + ret) * two_to_frac[frac_index]));

    return ret;
}

/* 8028F69C-8028F6C4 289FDC 0028+00 0/0 4/4 0/0 .text            clamp<s,l>__7JASCalcFl */
// Could not make clamp not inline
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028F69C(void* _this, s32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASCalc/func_8028F69C.s"
}
#pragma pop
