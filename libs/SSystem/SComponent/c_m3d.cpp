/**
 * c_m3d.cpp
 *
 */

#include "SSystem/SComponent/c_m3d.h"
#include "math.h"
#include "SSystem/SComponent/c_m3d_g_aab.h"
#include "SSystem/SComponent/c_m3d_g_cyl.h"
#include "SSystem/SComponent/c_m3d_g_lin.h"
#include "SSystem/SComponent/c_m3d_g_sph.h"
#include "SSystem/SComponent/c_m3d_g_tri.h"
#include "SSystem/SComponent/c_m3d_g_cps.h"
#include "SSystem/SComponent/c_math.h"
#include "SSystem/SComponent/c_sxyz.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "global.h"

//
// Forward References:
//

extern "C" static void cM3d_InDivPos1__FPC3VecPC3VecfP3Vec();
extern "C" void cM3d_InDivPos2__FPC3VecPC3VecfP3Vec();
extern "C" void cM3d_Len2dSq__Fffff();
extern "C" void cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf();
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void cM3d_SignedLenPlaAndPos__FPC8cM3dGPlaPC3Vec();
extern "C" void cM3d_VectorProduct2d__Fffffff();
extern "C" void cM3d_VectorProduct__FPC4cXyzPC4cXyzPC4cXyzP4cXyz();
extern "C" void cM3d_CalcPla__FPC3VecPC3VecPC3VecP3VecPf();
extern "C" void cM3d_Cross_AabAab__FPC8cM3dGAabPC8cM3dGAab();
extern "C" void cM3d_Cross_AabCyl__FPC8cM3dGAabPC8cM3dGCyl();
extern "C" void cM3d_Cross_AabSph__FPC8cM3dGAabPC8cM3dGSph();
extern "C" static void cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf();
extern "C" static void cM3d_CrossInfLineVsInfPlane_proc__FffPC3VecPC3VecP3Vec();
extern "C" void cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb();
extern "C" void cM3d_Cross_MinMaxBoxLine__FPC3VecPC3VecPC3VecPC3Vec();
extern "C" static void cM3d_InclusionCheckPosIn3PosBox3d__FPC3VecPC3VecPC3VecPC3Vecf();
extern "C" static void cM3d_InclusionCheckPosIn3PosBox2d__Ffffffffff();
extern "C" static void cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vecf();
extern "C" static void cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vec();
extern "C" static void cM3d_CrossX_LinTri_proc__FPC8cM3dGTriPC3Vec();
extern "C" void cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vec();
extern "C" static void cM3d_CrossY_LinTri_proc__FPC8cM3dGTriPC3Vec();
extern "C" void cM3d_CrossY_Tri__FRC3VecRC3VecRC3VecRC8cM3dGPlaPC3Vec();
extern "C" void cM3d_CrossY_Tri_Front__FRC3VecRC3VecRC3VecPC3Vec();
extern "C" static void cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPf();
extern "C" static void cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vecf();
extern "C" static void cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPC10cM3d_RangePf();
extern "C" static void cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vecf();
extern "C" static void cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vec();
extern "C" static void cM3d_CrossZ_LinTri_proc__FPC8cM3dGTriPC3Vec();
extern "C" void cM3d_Cross_LinTri__FPC8cM3dGLinPC8cM3dGTriP3Vecbb();
extern "C" static void cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec();
extern "C" static void cM3d_Cross_SphPnt__FPC8cM3dGSphPC3Vec();
extern "C" void cM3d_Cross_LinSph__FPC8cM3dGLinPC8cM3dGSphP3Vec();
extern "C" void cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec();
extern "C" void cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphPf();
extern "C" void cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphP3VecPf();
extern "C" void cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPf();
extern "C" static void cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPfPf();
extern "C" void cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphP3Vec();
extern "C" static void cM3d_CalcSphVsTriCrossPoint__FPC8cM3dGSphPC8cM3dGTriP3Vec();
extern "C" void cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec();
extern "C" void cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylPf();
extern "C" void cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylP3Vec();
extern "C" void cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec();
extern "C" void cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec();
extern "C" static void cM3d_Cross_CylPntPnt__FPC8cM3dGCylPC3VecPC3VecP3VecP3Vec();
extern "C" static void cM3d_Cross_CylPnt__FPC8cM3dGCylPC3Vec();
extern "C" void cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec();
extern "C" void cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec();
extern "C" static void cM3d_Cross_CpsSph_CrossPos__FRC8cM3dGCpsRC8cM3dGSphRC3VecP3Vec();
extern "C" void cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec();
extern "C" void cM3d_Cross_TriTri__FRC8cM3dGTriRC8cM3dGTriP3Vec();
extern "C" void cM3d_Cross_CpsTri__FRC8cM3dGCps8cM3dGTriP3Vec();
extern "C" void cM3d_CalcVecAngle__FRC3VecPsPs();
extern "C" void cM3d_CalcVecZAngle__FRC3VecP5csXyz();
extern "C" static void cM3d_PlaneCrossLineProcWork__FfffffffPfPf();
extern "C" static void cM3d_2PlaneCrossLine__FRC8cM3dGPlaRC8cM3dGPlaP8cM3dGLin();
extern "C" void cM3d_3PlaneCrossPos__FRC8cM3dGPlaRC8cM3dGPlaRC8cM3dGPlaP3Vec();
extern "C" void cM3d_lineVsPosSuisenCross__FPC8cM3dGLinPC3VecP3Vec();
extern "C" void cM3d_lineVsPosSuisenCross__FRC3VecRC3VecRC3VecP3Vec();
extern "C" void cM3d_2PlaneLinePosNearPos__FRC8cM3dGPlaRC8cM3dGPlaPC3VecP3Vec();
extern "C" void cM3d_CrawVec__FRC3VecRC3VecP3Vec();
extern "C" void __sinit_c_m3d_cpp();

//
// External References:
//

extern "C" void cM_atan2s__Fff();
extern "C" void __ct__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void CalcPos__8cM3dGLinCFP3Vecf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern void* __vt__8cM3dGLin[3];
extern "C" extern void* __vt__8cM3dGSph[3];

//
// Declarations:
//

f32 G_CM3D_F_ABS_MIN = 32 * FLT_EPSILON;

/* 80268560-802685B0 262EA0 0050+00 2/2 0/0 0/0 .text            cM3d_InDivPos1__FPC3VecPC3VecfP3Vec
 */
void cM3d_InDivPos1(const Vec* pVecA, const Vec* pVecB, f32 pF, Vec* pOut) {
    Vec tmp;
    VECScale(pVecB, &tmp, pF);
    VECAdd(&tmp, pVecA, pOut);
}

/* 802685B0-80268614 262EF0 0064+00 2/2 1/1 2/2 .text            cM3d_InDivPos2__FPC3VecPC3VecfP3Vec
 */
void cM3d_InDivPos2(const Vec* pVecA, const Vec* pVecB, f32 pF, Vec* pOut) {
    Vec tmp;
    VECSubtract(pVecB, pVecA, &tmp);
    cM3d_InDivPos1(pVecA, &tmp, pF, pOut);
}

/* 80268614-8026862C 262F54 0018+00 3/3 4/4 0/0 .text            cM3d_Len2dSq__Fffff */
f32 cM3d_Len2dSq(f32 pX1, f32 pY1, f32 pX2, f32 pY2) {
    f32 xDiff = pX1 - pX2;
    f32 yDiff = pY1 - pY2;
    return xDiff * xDiff + yDiff * yDiff;
}

/* ############################################################################################## */
/* 80451180-80451188 000680 0004+04 29/29 44/44 65/65 .sbss            G_CM3D_F_ABS_MIN */
extern f32 G_CM3D_F_ABS_MIN;

/* 80455118-80455120 003718 0004+04 28/28 0/0 0/0 .sdata2          @2256 */
SECTION_SDATA2 static f32 lit_2256[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80455120-80455128 003720 0008+00 9/9 0/0 0/0 .sdata2          @2257 */
SECTION_SDATA2 static f64 lit_2257 = 0.5;

/* 80455128-80455130 003728 0008+00 9/9 0/0 0/0 .sdata2          @2258 */
SECTION_SDATA2 static f64 lit_2258 = 3.0;

/* 80455130-80455138 003730 0008+00 9/9 0/0 0/0 .sdata2          @2259 */
SECTION_SDATA2 static u8 lit_2259[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455138-8045513C 003738 0004+00 14/14 0/0 0/0 .sdata2          @2273 */
SECTION_SDATA2 static f32 lit_2273 = 1.0f;

/* 8026862C-80268710 262F6C 00E4+00 0/0 10/10 3/3 .text cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf
 */
bool cM3d_Len2dSqPntAndSegLine(f32 param_1, f32 param_2, f32 param_3, f32 param_4, f32 p5, f32 p6,
                               f32* param_7, f32* param_8, f32* param_9) {
    bool retVal = false;
    f32 param_5 = p5 - param_3;
    f32 param_6 = p6 - param_4;
    f32 len = param_5 * param_5 + param_6 * param_6;
    if (cM3d_IsZero(len)) {
        *param_9 = /* 0.0 */ FLOAT_LABEL(lit_2256);
        return retVal;
    } else {
        len = (param_5 * (param_1 - param_3) + param_6 * (param_2 - param_4)) / len;
        if (len >= /* 0.0 */ FLOAT_LABEL(lit_2256) && len <= /* 1.0 */ FLOAT_LABEL(lit_2273)) {
            retVal = true;
        }
        *param_7 = param_3 + param_5 * len;
        *param_8 = param_4 + param_6 * len;
        *param_9 = cM3d_Len2dSq(*param_7, *param_8, param_1, param_2);
        return retVal;
    }
}

/* 80268710-80268814 263050 0104+00 2/2 8/8 9/9 .text
 * cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf         */
bool cM3d_Len3dSqPntAndSegLine(const cM3dGLin* pLine, const Vec* pVec, Vec* pOutVec, f32* pOutF) {
    bool retVal = false;
    Vec tmp;
    VECSubtract(&pLine->GetEndP(), &pLine->GetStartP(), &tmp);
    f32 seqLen = VECDotProduct(&tmp, &tmp);
    if (cM3d_IsZero(seqLen)) {
        *pOutF = /* 0.0 */ FLOAT_LABEL(lit_2256);
        return retVal;
    } else {
        Vec tmp2;
        VECSubtract(pVec, &pLine->GetStartP(), &tmp2);
        f32 tmpF = VECDotProduct(&tmp2, &tmp);
        tmpF /= seqLen;
        if (tmpF < /* 0.0 */ FLOAT_LABEL(lit_2256) || tmpF > /* 1.0 */ FLOAT_LABEL(lit_2273)) {
            retVal = false;
        } else {
            retVal = true;
        }
        VECScale(&tmp, &tmp, tmpF);
        VECAdd(&tmp, &pLine->GetStartP(), pOutVec);
        *pOutF = VECSquareDistance(pOutVec, pVec);
        return retVal;
    }
}

/* 80268814-80268894 263154 0080+00 1/1 3/3 0/0 .text cM3d_SignedLenPlaAndPos__FPC8cM3dGPlaPC3Vec
 */
f32 cM3d_SignedLenPlaAndPos(const cM3dGPla* pPlane, const Vec* pPosition) {
    f32 mag = VECMag(&pPlane->GetNP());
    if (cM3d_IsZero(mag)) {
        return /* 0.0 */ FLOAT_LABEL(lit_2256);
    } else {
        return (pPlane->mD + VECDotProduct(&pPlane->GetNP(), pPosition)) / mag;
    }
}

/* 80268894-802688B4 2631D4 0020+00 11/11 2/2 2/2 .text            cM3d_VectorProduct2d__Fffffff */
f32 cM3d_VectorProduct2d(f32 pX1, f32 pY1, f32 pX2, f32 pY2, f32 pX3, f32 pY3) {
    return (pX2 - pX1) * (pY3 - pY1) - (pY2 - pY1) * (pX3 - pX1);
}

/* 802688B4-8026891C 2631F4 0068+00 0/0 0/0 1/1 .text
 * cM3d_VectorProduct__FPC4cXyzPC4cXyzPC4cXyzP4cXyz             */
void cM3d_VectorProduct(const cXyz* pVecA, const cXyz* pVecB, const cXyz* pVecC, cXyz* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    VECSubtract(pVecB, pVecA, &tmp1);
    VECSubtract(pVecC, pVecA, &tmp2);
    VECCrossProduct(&tmp1, &tmp2, pVecOut);
}

/* ############################################################################################## */
/* 8045513C-80455140 00373C 0004+00 1/1 0/0 0/0 .sdata2          @2346 */
SECTION_SDATA2 static f32 lit_2346 = 1.0f / 50.0f;

/* 8026891C-802689E8 26325C 00CC+00 0/0 2/2 0/0 .text cM3d_CalcPla__FPC3VecPC3VecPC3VecP3VecPf */
void cM3d_CalcPla(const Vec* pVecA, const Vec* pVecB, const Vec* pVecC, Vec* pVecOut, f32* pD) {
    Vec tmp2;
    Vec tmp1;
    VECSubtract(pVecB, pVecA, &tmp1);
    VECSubtract(pVecC, pVecA, &tmp2);
    VECCrossProduct(&tmp1, &tmp2, pVecOut);
    f32 mag = VECMag(pVecOut);
    if (fabsf(mag) >= /* 0.02 */ FLOAT_LABEL(lit_2346)) {
        VECScale(pVecOut, pVecOut, /* 1.0 */ FLOAT_LABEL(lit_2273) / mag);
        *pD = -VECDotProduct(pVecOut, pVecA);
    } else {
        f32 zero = /* 0.0 */ FLOAT_LABEL(lit_2256);
        pVecOut->y = zero;
        *pD = zero;
        pVecOut->z = zero;
        pVecOut->x = zero;
    }
}

inline bool cM3d_CrossNumSection(f32 lMinX, f32 lMaxX, f32 rMinX, f32 rMaxX) {
    if (lMinX > rMaxX) {
        return false;
    } else if (lMaxX < rMinX) {
        return false;
    } else if (rMinX > lMaxX) {
        return false;
    } else if (rMaxX < lMinX) {
        return false;
    } else {
        return true;
    }
}

/* 802689E8-80268B0C 263328 0124+00 0/0 4/4 0/0 .text cM3d_Cross_AabAab__FPC8cM3dGAabPC8cM3dGAab
 */
bool cM3d_Cross_AabAab(const cM3dGAab* pAabA, const cM3dGAab* pAabB) {
    if (cM3d_CrossNumSection(pAabA->GetMinP()->x, pAabA->GetMaxP()->x, pAabB->GetMinP()->x,
                             pAabB->GetMaxP()->x) &&
        cM3d_CrossNumSection(pAabA->GetMinP()->y, pAabA->GetMaxP()->y, pAabB->GetMinP()->y,
                             pAabB->GetMaxP()->y) &&
        cM3d_CrossNumSection(pAabA->GetMinP()->z, pAabA->GetMaxP()->z, pAabB->GetMinP()->z,
                             pAabB->GetMaxP()->z))
    {
        return true;
    } else {
        return false;
    }
}

/* 80268B0C-80268BB4 26344C 00A8+00 0/0 4/4 0/0 .text cM3d_Cross_AabCyl__FPC8cM3dGAabPC8cM3dGCyl
 */
bool cM3d_Cross_AabCyl(const cM3dGAab* pAab, const cM3dGCyl* pCyl) {
    if (pAab->GetMinP()->x > pCyl->GetCP()->x + pCyl->GetR()) {
        return false;
    } else if (pAab->GetMaxP()->x < pCyl->GetCP()->x - pCyl->GetR()) {
        return false;
    } else if (pAab->GetMinP()->z > pCyl->GetCP()->z + pCyl->GetR()) {
        return false;
    } else if (pAab->GetMaxP()->z < pCyl->GetCP()->z - pCyl->GetR()) {
        return false;
    } else if (pAab->GetMinP()->y > pCyl->GetCP()->y + pCyl->GetH()) {
        return false;
    } else if (pAab->GetMaxP()->y < pCyl->GetCP()->y) {
        return false;
    } else {
        return true;
    }
}

/* 80268BB4-80268C5C 2634F4 00A8+00 0/0 2/2 0/0 .text cM3d_Cross_AabSph__FPC8cM3dGAabPC8cM3dGSph
 */
bool cM3d_Cross_AabSph(const cM3dGAab* pAab, const cM3dGSph* pSph) {
    f32 radius = pSph->GetR();
    f32 cx = pSph->GetC().x;
    if (pAab->GetMinX() > cx + radius) {
        return false;
    } else if (pAab->GetMaxX() < cx - radius) {
        return false;
    }

    f32 cz = pSph->GetC().z;
    if (pAab->GetMinZ() > cz + radius) {
        return false;
    } else if (pAab->GetMaxZ() < cz - radius) {
        return false;
    }

    f32 cy = pSph->GetC().y;
    if (pAab->GetMinY() > cy + radius) {
        return false;
    } else if (pAab->GetMaxY() < cy - radius) {
        return false;
    }
    return true;
}

/* 80268C5C-80268ED4 26359C 0278+00 3/3 0/0 0/0 .text
 * cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf               */
// matches with literals
#ifdef NONMATCHING
int cM3d_Check_LinLin(const cM3dGLin* lin_a, const cM3dGLin* lin_b, f32* dst_a, f32* dst_b) {
    Vec linAVec;
    Vec linBVec;
    lin_a->CalcVec(&linAVec);
    lin_b->CalcVec(&linBVec);
    f32 linALen = VECMag(&linAVec);
    f32 linBLen = VECMag(&linBVec);
    if (cM3d_IsZero(linALen) || cM3d_IsZero(linBLen)) {
        return 1;
    } else {
        f32 invLinALen = 1.0f / linALen;
        f32 invLinBLen = 1.0f / linBLen;
        VECScale(&linAVec, &linAVec, invLinALen);
        VECScale(&linBVec, &linBVec, invLinBLen);
        Vec tmp;
        VECSubtract(&lin_a->GetStartP(), &lin_b->GetStartP(), &tmp);
        f32 tmpF = -VECDotProduct(&linAVec, &linBVec);
        f32 tmpF2 = VECDotProduct(&tmp, &linAVec);
        VECSquareMag(&tmp);  // result not used
        f32 tmpF3 = fabsf(1.0f - (tmpF * tmpF));
        if (!cM3d_IsZero(tmpF3)) {
            f32 tmpF4 = -VECDotProduct(&tmp, &linBVec);
            f32 tmpF7 = 1.0f / tmpF3;
            f32 outFloatAtmp = ((tmpF * tmpF4) - tmpF2) * tmpF7;
            *dst_a = outFloatAtmp * invLinALen;
            f32 outFloatBtmp = ((tmpF * tmpF2) - tmpF4) * tmpF7;
            *dst_b = outFloatBtmp * invLinBLen;
            return 3;
        } else {
            f32 tmpF5 = -tmpF2;
            f32 tmpF6 = 0.0f;
            if (tmpF5 < 0.0f || (tmpF5 > linALen)) {
                tmpF6 = linBLen;
                tmpF5 = (tmpF6 * tmpF) - tmpF2;
            }
            f32 tmpF7 = VECDotProduct(&tmp, &linBVec);
            if (tmpF5 < 0.0f || tmpF5 > linALen) {
                tmpF5 = 0.0f;
                tmpF6 = tmpF7;
            }
            if (tmpF6 < 0.0f || tmpF6 > linBLen) {
                tmpF5 = linALen;
                tmpF6 = tmpF7 + (-linALen * tmpF);
            }
            *dst_a = tmpF5 * invLinALen;
            *dst_b = tmpF6 * invLinBLen;
            return 2;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int cM3d_Check_LinLin(cM3dGLin const* param_0, cM3dGLin const* param_1, f32* param_2,
                                 f32* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Check_LinLin__FPC8cM3dGLinPC8cM3dGLinPfPf.s"
}
#pragma pop
#endif

/* 80268ED4-80268F34 263814 0060+00 2/2 0/0 0/0 .text
 * cM3d_CrossInfLineVsInfPlane_proc__FffPC3VecPC3VecP3Vec       */
static bool cM3d_CrossInfLineVsInfPlane_proc(f32 pFloatA, f32 pFloatB, const Vec* pVecA,
                                             const Vec* pVecB, Vec* pVecOut) {
    if (cM3d_IsZero(pFloatA - pFloatB)) {
        *pVecOut = *pVecB;
        return false;
    } else {
        cM3d_InDivPos2(pVecA, pVecB, pFloatA / (pFloatA - pFloatB), pVecOut);
        return true;
    }
}

/* 80268F34-80269050 263874 011C+00 3/3 1/1 0/0 .text
 * cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb            */
// matches with literals
#ifdef NONMATCHING
bool cM3d_Cross_LinPla(const cM3dGLin* lin, const cM3dGPla* pla, Vec* dst, bool a, bool b) {
    f32 startVal = pla->getPlaneFunc(&lin->GetStartP());
    f32 endVal = pla->getPlaneFunc(&lin->GetEndP());
    if (startVal * endVal > 0.0f) {
        *dst = lin->GetEnd();
        return false;
    } else {
        if (startVal >= 0.0f && endVal <= 0.0f) {
            if (a) {
                return cM3d_CrossInfLineVsInfPlane_proc(startVal, endVal, &lin->GetStartP(), &lin->GetEndP(), dst);
            }
        } else {
            if (b) {
                return cM3d_CrossInfLineVsInfPlane_proc(startVal, endVal, &lin->GetStartP(), &lin->GetEndP(), dst);
            }
        }
        *dst = lin->GetEnd();
        return false;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_LinPla(cM3dGLin const* param_0, cM3dGPla const* param_1, Vec* param_2,
                           bool param_3, bool param_4) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_LinPla__FPC8cM3dGLinPC8cM3dGPlaP3Vecbb.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80455140-80455144 003740 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE0 */
SECTION_SDATA2 static u32 BPCP_OUTCODE0 = 0x00000001;

/* 80455144-80455148 003744 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE1 */
SECTION_SDATA2 static u32 BPCP_OUTCODE1 = 0x00000002;

/* 80455148-8045514C 003748 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE4 */
SECTION_SDATA2 static u32 BPCP_OUTCODE4 = 0x00000010;

/* 8045514C-80455150 00374C 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE5 */
SECTION_SDATA2 static u32 BPCP_OUTCODE5 = 0x00000020;

/* 80455150-80455154 003750 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE2 */
SECTION_SDATA2 static u32 BPCP_OUTCODE2 = 0x00000004;

/* 80455154-80455158 003754 0004+00 1/1 0/0 0/0 .sdata2          BPCP_OUTCODE3 */
SECTION_SDATA2 static u32 BPCP_OUTCODE3 = 0x00000008;

/* 80455158-8045515C 003758 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE0 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE0 = 0x00000001;

/* 8045515C-80455160 00375C 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE1 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE1 = 0x00000002;

/* 80455160-80455164 003760 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE2 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE2 = 0x00000004;

/* 80455164-80455168 003764 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE3 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE3 = 0x00000008;

/* 80455168-8045516C 003768 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE4 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE4 = 0x00000010;

/* 8045516C-80455170 00376C 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE5 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE5 = 0x00000020;

/* 80455170-80455174 003770 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE6 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE6 = 0x00000040;

/* 80455174-80455178 003774 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE7 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE7 = 0x00000080;

/* 80455178-8045517C 003778 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE8 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE8 = 0x00000100;

/* 8045517C-80455180 00377C 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE9 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE9 = 0x00000200;

/* 80455180-80455184 003780 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE10 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE10 = 0x00000400;

/* 80455184-80455188 003784 0004+00 1/1 0/0 0/0 .sdata2          BEVEL2D_OUTCODE11 */
SECTION_SDATA2 static u32 BEVEL2D_OUTCODE11 = 0x00000800;

/* 80455188-8045518C 003788 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE0 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE0 = 0x00000001;

/* 8045518C-80455190 00378C 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE1 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE1 = 0x00000002;

/* 80455190-80455194 003790 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE2 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE2 = 0x00000004;

/* 80455194-80455198 003794 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE3 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE3 = 0x00000008;

/* 80455198-8045519C 003798 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE4 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE4 = 0x00000010;

/* 8045519C-804551A0 00379C 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE5 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE5 = 0x00000020;

/* 804551A0-804551A4 0037A0 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE6 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE6 = 0x00000040;

/* 804551A4-804551A8 0037A4 0004+00 1/1 0/0 0/0 .sdata2          BEVEL3D_OUTCODE7 */
SECTION_SDATA2 static u32 BEVEL3D_OUTCODE7 = 0x00000080;

/* 804551A8-804551AC 0037A8 0004+00 1/1 0/0 0/0 .sdata2          @3082 */
SECTION_SDATA2 static f32 lit_3082 = -1.0f;

/* 80269050-80269C2C 263990 0BDC+00 0/0 2/2 0/0 .text
 * cM3d_Cross_MinMaxBoxLine__FPC3VecPC3VecPC3VecPC3Vec          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_MinMaxBoxLine(Vec const* param_0, Vec const* param_1, Vec const* param_2,
                                  Vec const* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_MinMaxBoxLine__FPC3VecPC3VecPC3VecPC3Vec.s"
}
#pragma pop

/* 80269C2C-80269D64 26456C 0138+00 1/1 0/0 0/0 .text
 * cM3d_InclusionCheckPosIn3PosBox3d__FPC3VecPC3VecPC3VecPC3Vecf */
bool cM3d_InclusionCheckPosIn3PosBox3d(const Vec* pVecA, const Vec* pVecB, const Vec* pVecC,
                                       const Vec* pVecD, f32 pF) {
    f32 min, max;
    if (pVecA->x < pVecB->x) {
        min = pVecA->x;
        max = pVecB->x;
    } else {
        min = pVecB->x;
        max = pVecA->x;
    }
    if (min > pVecC->x) {
        min = pVecC->x;
    } else if (max < pVecC->x) {
        max = pVecC->x;
    }
    if (min - pF > pVecD->x || max + pF < pVecD->x) {
        return false;
    }

    if (pVecA->z < pVecB->z) {
        min = pVecA->z;
        max = pVecB->z;
    } else {
        min = pVecB->z;
        max = pVecA->z;
    }
    if (min > pVecC->z) {
        min = pVecC->z;
    } else if (max < pVecC->z) {
        max = pVecC->z;
    }
    if (min - pF > pVecD->z || max + pF < pVecD->z) {
        return false;
    }

    if (pVecA->y < pVecB->y) {
        min = pVecA->y;
        max = pVecB->y;
    } else {
        min = pVecB->y;
        max = pVecA->y;
    }
    if (min > pVecC->y) {
        min = pVecC->y;
    } else if (max < pVecC->y) {
        max = pVecC->y;
    }
    if (min - pF > pVecD->y || max + pF < pVecD->y) {
        return false;
    }
    return true;
}

/* 80269D64-80269E18 2646A4 00B4+00 11/11 0/0 0/0 .text
 * cM3d_InclusionCheckPosIn3PosBox2d__Ffffffffff                */
static bool cM3d_InclusionCheckPosIn3PosBox2d(f32 param_1, f32 param_2, f32 param_3,
                                                  f32 param_4, f32 param_5, f32 param_6,
                                                  f32 param_7, f32 param_8, f32 param_9) {
    f32 dVar6 = param_9;
    f32 dVar7;
    if (param_1 < param_3) {
        dVar7 = param_1;
    } else {
        dVar7 = param_3;
        param_3 = param_1;
    }

    if (dVar7 > param_5) {
        dVar7 = param_5;   
    } else if (param_3 < param_5) {
        param_3 = param_5;
    }

    if (dVar7 - dVar6 > param_7 || param_3 + dVar6 < param_7) {
        return false;
    } 

    f32 fVar1;
    if (param_2 < param_4) {
        fVar1 = param_2;
    } else {
        fVar1 = param_4;
        param_4 = param_2;
    }

    if (fVar1 > param_6) {
        fVar1 = param_6;
    } else if (param_4 < param_6) {
        param_4 = param_6;
    }
    
    if (fVar1 - dVar6 > param_8 || param_4 + dVar6 < param_8)
    {
        return false;
    }
    return true;
}

/* ############################################################################################## */
/* 804551AC-804551B0 0037AC 0004+00 11/11 0/0 0/0 .sdata2          @3205 */
SECTION_SDATA2 static f32 lit_3205 = 0.004999999888241291f;

/* 80269E18-80269FBC 264758 01A4+00 1/1 0/0 0/0 .text cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossX_Tri(cM3dGTri const* param_0, Vec const* param_1, f32 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804551B0-804551B4 0037B0 0004+00 7/7 0/0 0/0 .sdata2          @3229 */
SECTION_SDATA2 static f32 lit_3229 = 20.0f;

/* 804551B4-804551B8 0037B4 0004+00 8/8 0/0 0/0 .sdata2          @3230 */
SECTION_SDATA2 static f32 lit_3230 = -20.0f;

/* 80269FBC-8026A160 2648FC 01A4+00 1/1 0/0 0/0 .text            cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossX_Tri(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossX_Tri__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026A160-8026A2E4 264AA0 0184+00 1/1 0/0 0/0 .text cM3d_CrossX_LinTri_proc__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossX_LinTri_proc(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossX_LinTri_proc__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026A2E4-8026A488 264C24 01A4+00 2/2 0/0 1/1 .text            cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_CrossY_Tri(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026A488-8026A60C 264DC8 0184+00 1/1 0/0 0/0 .text cM3d_CrossY_LinTri_proc__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossY_LinTri_proc(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_LinTri_proc__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026A60C-8026A7B8 264F4C 01AC+00 0/0 2/2 0/0 .text
 * cM3d_CrossY_Tri__FRC3VecRC3VecRC3VecRC8cM3dGPlaPC3Vec        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_CrossY_Tri(Vec const& param_0, Vec const& param_1, Vec const& param_2,
                         cM3dGPla const& param_3, Vec const* param_4) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri__FRC3VecRC3VecRC3VecRC8cM3dGPlaPC3Vec.s"
}
#pragma pop

/* 8026A7B8-8026A8C0 2650F8 0108+00 0/0 1/1 0/0 .text
 * cM3d_CrossY_Tri_Front__FRC3VecRC3VecRC3VecPC3Vec             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_CrossY_Tri_Front(Vec const& param_0, Vec const& param_1, Vec const& param_2,
                               Vec const* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri_Front__FRC3VecRC3VecRC3VecPC3Vec.s"
}
#pragma pop

/* 8026A8C0-8026A944 265200 0084+00 1/1 0/0 0/0 .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossY_Tri(cM3dGTri const* param_0, Vec const* param_1, f32* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPf.s"
}
#pragma pop

/* 8026A944-8026AAE8 265284 01A4+00 1/1 0/0 0/0 .text cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossY_Tri(cM3dGTri const* param_0, Vec const* param_1, f32 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri__FPC8cM3dGTriPC3Vecf.s"
}
#pragma pop

/* 8026AAE8-8026ABD8 265428 00F0+00 1/1 0/0 0/0 .text
 * cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPC10cM3d_RangePf          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossY_Tri(cM3dGTri const* param_0, Vec const* param_1,
                                cM3d_Range const* param_2, f32* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossY_Tri__FPC8cM3dGTriPC3VecPC10cM3d_RangePf.s"
}
#pragma pop

/* 8026ABD8-8026AD7C 265518 01A4+00 1/1 0/0 0/0 .text cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossZ_Tri(cM3dGTri const* param_0, Vec const* param_1, f32 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vecf.s"
}
#pragma pop

/* 8026AD7C-8026AF20 2656BC 01A4+00 1/1 0/0 0/0 .text            cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossZ_Tri(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossZ_Tri__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026AF20-8026B0A4 265860 0184+00 1/1 0/0 0/0 .text cM3d_CrossZ_LinTri_proc__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_CrossZ_LinTri_proc(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CrossZ_LinTri_proc__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 804551B8-804551BC 0037B8 0004+00 1/1 0/0 0/0 .sdata2          @3497 */
SECTION_SDATA2 static f32 lit_3497 = 1.0f / 125.0f;

/* 8026B0A4-8026B17C 2659E4 00D8+00 1/1 1/1 0/0 .text
 * cM3d_Cross_LinTri__FPC8cM3dGLinPC8cM3dGTriP3Vecbb            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_LinTri(cM3dGLin const* param_0, cM3dGTri const* param_1, Vec* param_2,
                           bool param_3, bool param_4) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_LinTri__FPC8cM3dGLinPC8cM3dGTriP3Vecbb.s"
}
#pragma pop

/* 8026B17C-8026B238 265ABC 00BC+00 1/1 0/0 0/0 .text cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_Cross_LinTri_Easy(cM3dGTri const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_LinTri_Easy__FPC8cM3dGTriPC3Vec.s"
}
#pragma pop

/* 8026B238-8026B280 265B78 0048+00 1/1 0/0 0/0 .text cM3d_Cross_SphPnt__FPC8cM3dGSphPC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_Cross_SphPnt(cM3dGSph const* param_0, Vec const* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_SphPnt__FPC8cM3dGSphPC3Vec.s"
}
#pragma pop

/* 8026B280-8026B4E8 265BC0 0268+00 1/1 0/0 2/2 .text
 * cM3d_Cross_LinSph__FPC8cM3dGLinPC8cM3dGSphP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_LinSph(cM3dGLin const* param_0, cM3dGSph const* param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_LinSph__FPC8cM3dGLinPC8cM3dGSphP3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 804551BC-804551C0 0037BC 0004+00 2/2 0/0 0/0 .sdata2          @3739 */
SECTION_SDATA2 static f32 lit_3739 = 2.0f;

/* 804551C0-804551C4 0037C0 0004+00 2/2 0/0 0/0 .sdata2          @3740 */
SECTION_SDATA2 static f32 lit_3740 = 4.0f;

/* 8026B4E8-8026B8A4 265E28 03BC+00 1/1 2/2 0/0 .text
 * cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int cM3d_Cross_LinSph_CrossPos(cM3dGSph const& param_0, cM3dGLin const& param_1, Vec* param_2,
                                   Vec* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_LinSph_CrossPos__FRC8cM3dGSphRC8cM3dGLinP3VecP3Vec.s"
}
#pragma pop

/* 8026B8A4-8026BA48 2661E4 01A4+00 0/0 2/2 0/0 .text cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphPf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CylSph(cM3dGCyl const* param_0, cM3dGSph const* param_1, f32* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphPf.s"
}
#pragma pop

/* 8026BA48-8026BC7C 266388 0234+00 1/1 2/2 0/0 .text
 * cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphP3VecPf            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CylSph(cM3dGCyl const* param_0, cM3dGSph const* param_1, Vec* param_2,
                           f32* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylSph__FPC8cM3dGCylPC8cM3dGSphP3VecPf.s"
}
#pragma pop

/* 8026BC7C-8026BCFC 2665BC 0080+00 0/0 1/1 0/0 .text cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_SphSph(cM3dGSph const* param_0, cM3dGSph const* param_1, f32* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPf.s"
}
#pragma pop

/* 8026BCFC-8026BD88 26663C 008C+00 1/1 0/0 0/0 .text
 * cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPfPf               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_Cross_SphSph(cM3dGSph const* param_0, cM3dGSph const* param_1, f32* param_2,
                                  f32* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphPfPf.s"
}
#pragma pop

/* 8026BD88-8026BE5C 2666C8 00D4+00 0/0 1/1 0/0 .text
 * cM3d_Cross_SphSph__FPC8cM3dGSphPC8cM3dGSphP3Vec              */
bool cM3d_Cross_SphSph(const cM3dGSph* pSphereA, const cM3dGSph* pSphereB, Vec* pVecOut) {
    f32 centerDist;
    f32 overlapLen;
    if (cM3d_Cross_SphSph(pSphereA, pSphereB, &centerDist, &overlapLen)) {
        if (!cM3d_IsZero(centerDist)) {
            // could be an inlined function
            f32 tmpF = pSphereB->GetR() / centerDist;
            Vec tmp;
            VECSubtract(&pSphereA->GetC(), &pSphereB->GetC(), &tmp);
            VECScale(&tmp, &tmp, tmpF);
            VECAdd(&tmp, &pSphereB->GetC(), pVecOut);
        } else {
            *pVecOut = pSphereA->GetC();
        }
        return true;
    } else {
        return false;
    }
}

/* ############################################################################################## */
/* 804551C4-804551C8 0037C4 0004+00 8/8 0/0 0/0 .sdata2          @3892 */
SECTION_SDATA2 static f32 lit_3892 = 0.5f;

/* 8026BE5C-8026BF04 26679C 00A8+00 1/1 0/0 0/0 .text
 * cM3d_CalcSphVsTriCrossPoint__FPC8cM3dGSphPC8cM3dGTriP3Vec    */
void cM3d_CalcSphVsTriCrossPoint(const cM3dGSph* pSphere, const cM3dGTri* pTriangle, Vec* pVecOut) {
    Vec tmp2;
    Vec tmp;
    VECAdd(&pTriangle->mA, &pTriangle->mB, &tmp);
    VECScale(&tmp, &tmp2, /* 0.5 */ FLOAT_LABEL(lit_3892));
    f32 sqDist = VECSquareDistance(&tmp2, &pSphere->GetC());
    if (cM3d_IsZero(sqDist)) {
        *pVecOut = pSphere->GetC();
    } else {
        cM3d_InDivPos2(&pSphere->GetC(), &tmp2, pSphere->GetR() / sqDist, pVecOut);
    }
}

/* 8026BF04-8026C22C 266844 0328+00 1/1 4/4 0/0 .text
 * cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_SphTri(cM3dGSph const* param_0, cM3dGTri const* param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec.s"
}
#pragma pop

/* 8026C22C-8026C3B4 266B6C 0188+00 0/0 1/1 0/0 .text cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylPf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CylCyl(cM3dGCyl const* param_0, cM3dGCyl const* param_1, f32* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylPf.s"
}
#pragma pop

/* 8026C3B4-8026C5D0 266CF4 021C+00 0/0 1/1 0/0 .text
 * cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CylCyl(cM3dGCyl const* param_0, cM3dGCyl const* param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylCyl__FPC8cM3dGCylPC8cM3dGCylP3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 804551C8-804551CC 0037C8 0004+00 1/1 0/0 0/0 .sdata2          @4255 */
SECTION_SDATA2 static f32 lit_4255 = 1000000000.0f;

/* 8026C5D0-8026C944 266F10 0374+00 0/0 2/2 0/0 .text
 * cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CylTri(cM3dGCyl const* param_0, cM3dGTri const* param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec.s"
}
#pragma pop

/* 8026C944-8026D044 267284 0700+00 1/1 2/2 1/1 .text
 * cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int cM3d_Cross_CylLin(cM3dGCyl const* param_0, cM3dGLin const* param_1, Vec* param_2,
                          Vec* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CylLin__FPC8cM3dGCylPC8cM3dGLinP3VecP3Vec.s"
}
#pragma pop

/* 8026D044-8026D0B0 267984 006C+00 1/1 0/0 0/0 .text
 * cM3d_Cross_CylPntPnt__FPC8cM3dGCylPC3VecPC3VecP3VecP3Vec     */
static int cM3d_Cross_CylPntPnt(const cM3dGCyl* pCylinder, const Vec* pVecStart, const Vec* pVecEnd,
                                Vec* pVecOutA, Vec* pVecOutB) {
    cM3dGLin lin;
    lin.SetStartEnd(*pVecStart, *pVecEnd);
    return cM3d_Cross_CylLin(pCylinder, &lin, pVecOutA, pVecOutB);
}

/* 8026D0B0-8026D114 2679F0 0064+00 2/2 0/0 0/0 .text cM3d_Cross_CylPnt__FPC8cM3dGCylPC3Vec */
bool cM3d_Cross_CylPnt(const cM3dGCyl* pCylinder, const Vec* pPoint) {
    f32 dX = pCylinder->GetCP()->getXDiff(pPoint);
    f32 dZ = pCylinder->GetCP()->getZDiff(pPoint);
    f32 maxY = pCylinder->GetCP()->y + pCylinder->GetH();
    if (dX * dX + dZ * dZ < pCylinder->GetR() * pCylinder->GetR() &&
        pCylinder->GetCP()->y < pPoint->y && maxY > pPoint->y)
    {
        return true;
    } else {
        return false;
    }
}

/* 8026D114-8026D3D4 267A54 02C0+00 0/0 2/2 0/0 .text
 * cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CpsCps(cM3dGCps const& param_0, cM3dGCps const& param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CpsCps__FRC8cM3dGCpsRC8cM3dGCpsP3Vec.s"
}
#pragma pop

/* 8026D3D4-8026DAE0 267D14 070C+00 0/0 4/4 0/0 .text
 * cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CpsCyl(cM3dGCps const& param_0, cM3dGCyl const& param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CpsCyl__FRC8cM3dGCpsRC8cM3dGCylP3Vec.s"
}
#pragma pop

/* 8026DAE0-8026DC3C 268420 015C+00 1/1 0/0 0/0 .text
 * cM3d_Cross_CpsSph_CrossPos__FRC8cM3dGCpsRC8cM3dGSphRC3VecP3Vec */
// Matches with literals
#ifdef NONMATCHING
static bool cM3d_Cross_CpsSph_CrossPos(cM3dGCps const& param_1, cM3dGSph const& param_2,
                                           Vec const& param_3, Vec* param_4) {
    Vec aVStack_70;
    Vec VStack_7c;
    int iVar5 = cM3d_Cross_LinSph_CrossPos(param_2, param_1, &aVStack_70, &VStack_7c);
    if (iVar5 == 1) {
        *param_4 = aVStack_70;
    } else if (iVar5 == 2) {
        f32 dVar8 = VECSquareDistance(&aVStack_70, &param_1.GetStartP());
        f32 dVar9 = VECSquareDistance(&VStack_7c, &param_1.GetStartP());
        if (dVar8 < dVar9) {
            *param_4 = aVStack_70;
        } else {
            *param_4 = VStack_7c;
        }
    } else {
        f32 dVar8 = param_1.GetR() + param_2.GetR();
        *param_4 = param_3;
        if (cM3d_IsZero(dVar8)) {
            *param_4 = param_3;
        }
        Vec auStack_88;
        VECSubtract(&param_3, param_2.GetCP(), &auStack_88);
        VECScale(&auStack_88, &auStack_88, 0.5f);
        VECAdd(param_4, &auStack_88, param_4);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm bool cM3d_Cross_CpsSph_CrossPos(cM3dGCps const& param_0, cM3dGSph const& param_1,
                                           Vec const& param_2, Vec* param_3) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CpsSph_CrossPos__FRC8cM3dGCpsRC8cM3dGSphRC3VecP3Vec.s"
}
#pragma pop
#endif

/* 8026DC3C-8026DE2C 26857C 01F0+00 0/0 4/4 0/0 .text
 * cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec              */
// Matches with literals
#ifdef NONMATCHING
bool cM3d_Cross_CpsSph(cM3dGCps const& param_1, cM3dGSph const& param_2, Vec* param_3) {
    f32 local_38 = VECDistance(&param_1.GetStartP(), param_2.GetCP());
    if (local_38 < param_1.GetR() + param_2.GetR()) {
        cM3d_Cross_CpsSph_CrossPos(param_1, param_2, param_1.GetStartP(), param_3);
        return true;
    }
    local_38 = VECDistance(&param_1.GetEndP(), param_2.GetCP());
    if (local_38 < param_1.GetR() + param_2.GetR()) {
        cM3d_Cross_CpsSph_CrossPos(param_1, param_2, param_1.GetEndP(), param_3);
        return true;
    }
    Vec auStack_34;
    if (cM3d_Len3dSqPntAndSegLine(&param_1, param_2.GetCP(), &auStack_34, &local_38) != 0) {
        if (sqrtf(local_38) < param_1.GetR() + param_2.GetR()) {
            cM3d_Cross_CpsSph_CrossPos(param_1, param_2, auStack_34, param_3);
            return true;
        }
    }
    return false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CpsSph(cM3dGCps const& param_0, cM3dGSph const& param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec.s"
}
#pragma pop
#endif

/* 8026DE2C-8026E12C 26876C 0300+00 0/0 1/1 0/0 .text
 * cM3d_Cross_TriTri__FRC8cM3dGTriRC8cM3dGTriP3Vec              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_TriTri(cM3dGTri const& param_0, cM3dGTri const& param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_TriTri__FRC8cM3dGTriRC8cM3dGTriP3Vec.s"
}
#pragma pop

inline void cM3d_2LinCenter(cM3dGLin const pLinA, f32 pLinAF, cM3dGLin const& pLinB, f32 pLinBF,
                            Vec* pVecOut) {
    Vec tmp, tmp2;
    pLinA.CalcPos(&tmp, pLinAF);
    pLinB.CalcPos(&tmp2, pLinBF);
    VECAdd(&tmp, &tmp2, pVecOut);
    VECScale(pVecOut, pVecOut, /* 0.5 */ FLOAT_LABEL(lit_3892));
}

/* 8026E12C-8026E4FC 268A6C 03D0+00 0/0 2/2 0/0 .text
 * cM3d_Cross_CpsTri__FRC8cM3dGCps8cM3dGTriP3Vec                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool cM3d_Cross_CpsTri(cM3dGCps const& param_0, cM3dGTri param_1, Vec* param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_Cross_CpsTri__FRC8cM3dGCps8cM3dGTriP3Vec.s"
}
#pragma pop

/* 8026E4FC-8026E570 268E3C 0074+00 0/0 0/0 1/1 .text            cM3d_CalcVecAngle__FRC3VecPsPs */
void cM3d_CalcVecAngle(const Vec& pVec, s16* pOutA, s16* pOutB) {
    *pOutA = -cM_atan2s(-pVec.z * pVec.y, /* 1.0 */ FLOAT_LABEL(lit_2273));
    *pOutB = cM_atan2s(-pVec.x * pVec.y, /* 1.0 */ FLOAT_LABEL(lit_2273));
}

/* 8026E570-8026E6C4 268EB0 0154+00 0/0 1/1 0/0 .text            cM3d_CalcVecZAngle__FRC3VecP5csXyz
 */
// Matches with literals
#ifdef NONMATCHING
void cM3d_CalcVecZAngle(Vec const& param_0, csXyz* param_1) {
    param_1->x = -cM_atan2s(param_0.y, sqrtf(param_0.x * param_0.x + param_0.z * param_0.z));;
    param_1->y = cM_atan2s(param_0.x, param_0.z);
    param_1->z = 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cM3d_CalcVecZAngle(Vec const& param_0, csXyz* param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_m3d/cM3d_CalcVecZAngle__FRC3VecP5csXyz.s"
}
#pragma pop
#endif

/* 8026E6C4-8026E6F0 269004 002C+00 1/1 0/0 0/0 .text cM3d_PlaneCrossLineProcWork__FfffffffPfPf */
void cM3d_PlaneCrossLineProcWork(f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32* pF1,
                                 f32* pF2) {
    *pF1 = ((f2 * f7) - (f4 * f6)) / f5;
    *pF2 = ((f3 * f6) - (f1 * f7)) / f5;
}

/* 8026E6F0-8026E8A0 269030 01B0+00 2/2 0/0 0/0 .text
 * cM3d_2PlaneCrossLine__FRC8cM3dGPlaRC8cM3dGPlaP8cM3dGLin      */
static int cM3d_2PlaneCrossLine(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB,
                                cM3dGLin* pLinOut) {
    Vec tmp;
    VECCrossProduct(&pPlaneA.GetNP(), &pPlaneB.GetNP(), &tmp);
    if (cM3d_IsZero(tmp.x) && cM3d_IsZero(tmp.y) && cM3d_IsZero(tmp.z)) {
        return 0;
    } else {
        f32 absTX = fabsf(tmp.x);
        f32 absTY = fabsf(tmp.y);
        f32 absTZ = fabsf(tmp.z);
        if (absTX >= absTY && absTX >= absTZ) {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().y, pPlaneA.GetNP().z, pPlaneB.GetNP().y,
                                        pPlaneB.GetNP().z, tmp.x, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().y, &pLinOut->GetStartP().z);
            pLinOut->GetStartP().x = /* 0.0 */ FLOAT_LABEL(lit_2256);
        } else if (absTY >= absTX && absTY >= absTZ) {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().z, pPlaneA.GetNP().x, pPlaneB.GetNP().z,
                                        pPlaneB.GetNP().x, tmp.y, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().z, &pLinOut->GetStartP().x);
            pLinOut->GetStartP().y = /* 0.0 */ FLOAT_LABEL(lit_2256);
        } else {
            cM3d_PlaneCrossLineProcWork(pPlaneA.GetNP().x, pPlaneA.GetNP().y, pPlaneB.GetNP().x,
                                        pPlaneB.GetNP().y, tmp.z, pPlaneA.GetD(), pPlaneB.GetD(),
                                        &pLinOut->GetStartP().x, &pLinOut->GetStartP().y);
            pLinOut->GetStartP().z = /* 0.0 */ FLOAT_LABEL(lit_2256);
        }
        f32 scale = VECMag(&pLinOut->GetStartP());
        if (cM3d_IsZero(scale)) {
            scale = /* 1.0 */ FLOAT_LABEL(lit_2273);
        }
        VECScale(&tmp, &tmp, scale);
        VECAdd(&pLinOut->GetStartP(), &tmp, &pLinOut->GetEndP());
        return 1;
    }
}

/* 8026E8A0-8026E980 2691E0 00E0+00 0/0 1/1 0/0 .text
 * cM3d_3PlaneCrossPos__FRC8cM3dGPlaRC8cM3dGPlaRC8cM3dGPlaP3Vec */
bool cM3d_3PlaneCrossPos(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB, const cM3dGPla& pPlaneC,
                         Vec* pVecOut) {
    cM3dGLin lin;
    if (!cM3d_2PlaneCrossLine(pPlaneA, pPlaneB, &lin)) {
        return false;
    } else {
        const Vec* end = &lin.GetEndP();
        f32 tmpf1 = pPlaneC.getPlaneFunc(&lin.GetStartP());
        f32 tmpf2 = pPlaneC.getPlaneFunc(end);
        if (!cM3d_CrossInfLineVsInfPlane_proc(tmpf1, tmpf2, &lin.GetStartP(), end, pVecOut)) {
            return false;
        } else {
            return true;
        }
    }
}

/* 8026E980-8026EA5C 2692C0 00DC+00 1/1 1/1 0/0 .text
 * cM3d_lineVsPosSuisenCross__FPC8cM3dGLinPC3VecP3Vec           */
f32 cM3d_lineVsPosSuisenCross(const cM3dGLin* pLine, const Vec* pPoint, Vec* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    Vec tmp3;
    pLine->CalcVec(&tmp1);
    f32 diffLen = VECSquareMag(&tmp1);
    if (cM3d_IsZero(diffLen)) {
        *pVecOut = *pPoint;
        return /* 0.0 */ FLOAT_LABEL(lit_2256);
    } else {
        VECSubtract(pPoint, &pLine->GetStartP(), &tmp2);
        f32 retVal = VECDotProduct(&tmp2, &tmp1) / diffLen;
        VECScale(&tmp1, &tmp3, retVal);
        VECAdd(&tmp3, &pLine->GetStartP(), pVecOut);
        return retVal;
    }
}

/* 8026EA5C-8026EB38 26939C 00DC+00 0/0 1/1 0/0 .text
 * cM3d_lineVsPosSuisenCross__FRC3VecRC3VecRC3VecP3Vec          */
f32 cM3d_lineVsPosSuisenCross(const Vec& pLinePointA, const Vec& pLinePointB, const Vec& pPoint,
                              Vec* pVecOut) {
    Vec tmp1;
    Vec tmp2;
    Vec tmp3;
    VECSubtract(&pLinePointB, &pLinePointA, &tmp1);
    f32 diffLen = VECSquareMag(&tmp1);
    if (cM3d_IsZero(diffLen)) {
        *pVecOut = pPoint;
        return /* 0.0 */ FLOAT_LABEL(lit_2256);
    } else {
        VECSubtract(&pPoint, &pLinePointA, &tmp2);
        f32 dotProd = VECDotProduct(&tmp2, &tmp1);
        f32 retVal = dotProd / diffLen;
        VECScale(&tmp1, &tmp3, retVal);
        VECAdd(&tmp3, &pLinePointA, pVecOut);
        return retVal;
    }
}

/* 8026EB38-8026EBBC 269478 0084+00 0/0 1/1 0/0 .text
 * cM3d_2PlaneLinePosNearPos__FRC8cM3dGPlaRC8cM3dGPlaPC3VecP3Vec */
int cM3d_2PlaneLinePosNearPos(const cM3dGPla& pPlaneA, const cM3dGPla& pPlaneB, const Vec* pVec,
                              Vec* pVecOut) {
    cM3dGLin lin;
    if (!cM3d_2PlaneCrossLine(pPlaneA, pPlaneB, &lin)) {
        return FALSE;
    } else {
        cM3d_lineVsPosSuisenCross(&lin, pVec, pVecOut);
        return TRUE;
    }
}

/* 8026EBBC-8026EC3C 2694FC 0080+00 0/0 1/1 0/0 .text            cM3d_CrawVec__FRC3VecRC3VecP3Vec */
void cM3d_CrawVec(const Vec& pVecA, const Vec& pVecB, Vec* pVecOut) {
    Vec tmp;
    VECScale(&pVecA, &tmp, fabsf(pVecB.x * pVecA.x + pVecB.y * pVecA.y + pVecB.z * pVecA.z));
    VECAdd(&tmp, &pVecB, pVecOut);
}
