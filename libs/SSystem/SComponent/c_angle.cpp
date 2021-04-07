//
// Generated By: dol2asm
// Translation Unit: c_angle
//

#include "SSystem/SComponent/c_angle.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "msl_c/math.h"

f32 cAngle_NS_Adjust(f32,f32,f32);

extern "C" void __ct__7cSAngleFRC7cSAngle();
extern "C" void __ct__7cSAngleFs();
extern "C" void __ct__7cSAngleFf();
extern "C" void Val__7cSAngleFRC7cSAngle();
extern "C" void Val__7cSAngleFs();
extern "C" void Val__7cSAngleFf();
extern "C" void Degree__7cSAngleCFv();
extern "C" void Radian__7cSAngleCFv();
extern "C" void Norm__7cSAngleCFv();
extern "C" void Abs__7cSAngleCFv();
extern "C" void Inv__7cSAngleCFv();
extern "C" void Sin__7cSAngleCFv();
extern "C" void Cos__7cSAngleCFv();
extern "C" void __mi__7cSAngleCFv();
extern "C" void __pl__7cSAngleCFRC7cSAngle();
extern "C" void __mi__7cSAngleCFRC7cSAngle();
extern "C" void __apl__7cSAngleFRC7cSAngle();
extern "C" void __ami__7cSAngleFRC7cSAngle();
extern "C" void __pl__7cSAngleCFs();
extern "C" void __mi__7cSAngleCFs();
extern "C" void __apl__7cSAngleFs();
extern "C" void __ml__7cSAngleCFf();
extern "C" void __amu__7cSAngleFf();
extern "C" void __pl__FsRC7cSAngle();
extern "C" void __mi__FsRC7cSAngle();
extern "C" void __ct__7cDegreeFf();
extern "C" void Formal__7cDegreeFv();
extern "C" void Val__7cDegreeFf();
extern "C" void Radian__7cDegreeCFv();
extern "C" void Sin__7cDegreeCFv();
extern "C" void Cos__7cDegreeCFv();
extern "C" void Tan__7cDegreeCFv();
extern "C" void __ct__7cSPolarFRC4cXyz();
extern "C" void Formal__7cSPolarFv();
extern "C" void Val__7cSPolarFfss();
extern "C" void Val__7cSPolarFRC4cXyz();
extern "C" void Xyz__7cSPolarCFv();
extern "C" void Globe__7cSPolarCFP7cSGlobe();
extern "C" void __ct__7cSGlobeFRC7cSGlobe();
extern "C" void __ct__7cSGlobeFfss();
extern "C" void __ct__7cSGlobeFfRC7cSAngleRC7cSAngle();
extern "C" void __ct__7cSGlobeFRC4cXyz();
extern "C" void Formal__7cSGlobeFv();
extern "C" void Val__7cSGlobeFRC7cSGlobe();
extern "C" void Val__7cSGlobeFfss();
extern "C" void Val__7cSGlobeFfRC7cSAngleRC7cSAngle();
extern "C" void Val__7cSGlobeFRC4cXyz();
extern "C" void Xyz__7cSGlobeCFv();
extern "C" void Polar__7cSGlobeCFP7cSPolar();
extern "C" void Norm__7cSGlobeCFv();
extern "C" void Invert__7cSGlobeFv();
extern "C" void func_80271BA8();
extern "C" void __sinit_c_angle_cpp();
extern "C" extern u8 _0__7cSAngle[2 + 2 /* padding */];
extern "C" extern u8 _90__7cSAngle[2 + 2 /* padding */];
extern "C" extern u8 _180__7cSAngle[2 + 2 /* padding */];
extern "C" extern u8 _270__7cSAngle[2 + 6 /* padding */];

//
// External References:
//

f32 cM_atan2f(f32, f32);

extern "C" void __dt__7cSAngleFv();
extern "C" void cM_atan2f__Fff();
extern "C" void __register_global_object();

//
// Declarations:
//

/* 80270F68-80270F98 0030+00 s=0 e=33 z=2  None .text      __ct__7cSAngleFRC7cSAngle */
cSAngle::cSAngle(const cSAngle& angle) {
    this->Val(angle);
}

/* 80270F98-80270FC8 0030+00 s=14 e=50 z=4  None .text      __ct__7cSAngleFs */
cSAngle::cSAngle(s16 angle) {
    this->Val(angle);
}

/* 80270FC8-80270FF8 0030+00 s=0 e=22 z=0  None .text      __ct__7cSAngleFf */
cSAngle::cSAngle(float angle) {
    this->Val(angle);
}

/* 80270FF8-80271004 000C+00 s=2 e=6 z=0  None .text      Val__7cSAngleFRC7cSAngle */
void cSAngle::Val(const cSAngle& other) {
    this->mAngle = other.mAngle;
}

/* 80271004-8027100C 0008+00 s=4 e=7 z=0  None .text      Val__7cSAngleFs */
void cSAngle::Val(s16 val) {
    this->mAngle = val;
}

/* 8027100C-80271030 0024+00 s=1 e=8 z=0  None .text      Val__7cSAngleFf */
void cSAngle::Val(float f) {
    this->mAngle = 182.04445f * f;
}

/* 80271030-80271064 0034+00 s=0 e=11 z=0  None .text      Degree__7cSAngleCFv */
float cSAngle::Degree(void) const {
    return (360.0f / 65536.0f) * this->mAngle;
}

/* 80271064-80271098 0034+00 s=3 e=0 z=0  None .text      Radian__7cSAngleCFv */
float cSAngle::Radian(void) const {
    return 9.58738E-5f * this->mAngle;
}

/* 80271098-802710CC 0034+00 s=0 e=1 z=0  None .text      Norm__7cSAngleCFv */
float cSAngle::Norm(void) const {
    return 3.0517578E-5f * this->mAngle;
}

/* 802710CC-802710E8 001C+00 s=0 e=5 z=1  None .text      Abs__7cSAngleCFv */
s16 cSAngle::Abs(void) const {
    return mAngle >= 0 ? mAngle : -mAngle;
}

/* 802710E8-802710F8 0010+00 s=2 e=22 z=2  None .text      Inv__7cSAngleCFv */
s16 cSAngle::Inv(void) const {
    return mAngle - 0x8000;
}

/* 802710F8-80271120 0028+00 s=0 e=6 z=1  None .text      Sin__7cSAngleCFv */
float cSAngle::Sin(void) const {
    return sin(this->Radian());
}

/* 80271120-80271148 0028+00 s=0 e=8 z=1  None .text      Cos__7cSAngleCFv */
float cSAngle::Cos(void) const {
    return cos(this->Radian());
}

/* 80271148-80271174 002C+00 s=2 e=8 z=0  None .text      __mi__7cSAngleCFv */
cSAngle cSAngle::operator-(void) const {
    return cSAngle(static_cast<s16>(-mAngle));
}

/* 80271174-802711A4 0030+00 s=0 e=30 z=1  None .text      __pl__7cSAngleCFRC7cSAngle */
cSAngle cSAngle::operator+(const cSAngle& other) const {
    return cSAngle(static_cast<s16>(mAngle + other.mAngle));
}

/* 802711A4-802711D4 0030+00 s=2 e=37 z=0  None .text      __mi__7cSAngleCFRC7cSAngle */
cSAngle cSAngle::operator-(const cSAngle& other) const {
    return cSAngle(static_cast<s16>(mAngle - other.mAngle));
}

/* 802711D4-802711E8 0014+00 s=0 e=15 z=0  None .text      __apl__7cSAngleFRC7cSAngle */
void cSAngle::operator+=(const cSAngle& other) {
    mAngle += other.mAngle;
}

/* 802711E8-802711FC 0014+00 s=0 e=3 z=0  None .text      __ami__7cSAngleFRC7cSAngle */
void cSAngle::operator-=(const cSAngle& other) {
    mAngle -= other.mAngle;
}

/* 802711FC-80271228 002C+00 s=0 e=5 z=0  None .text      __pl__7cSAngleCFs */
cSAngle cSAngle::operator+(short other) const {
    return cSAngle(static_cast<s16>(mAngle + other));
}

/* 80271228-80271254 002C+00 s=0 e=9 z=3  None .text      __mi__7cSAngleCFs */
cSAngle cSAngle::operator-(short other) const {
    return cSAngle(static_cast<s16>(mAngle - other));
}

/* 80271254-80271264 0010+00 s=0 e=1 z=0  None .text      __apl__7cSAngleFs */
void cSAngle::operator+=(short other) {
    mAngle += other;
}

/* 80271264-802712B4 0050+00 s=0 e=31 z=0  None .text      __ml__7cSAngleCFf */
cSAngle cSAngle::operator*(float f1) const {
    return cSAngle(static_cast<s16>(mAngle * f1));
}

/* 802712B4-802712F4 0040+00 s=0 e=3 z=0  None .text      __amu__7cSAngleFf */
void cSAngle::operator*=(float f1) {
    this->mAngle *= f1;
}

/* 802712F4-80271320 002C+00 s=0 e=2 z=0  None .text      __pl__FsRC7cSAngle */
cSAngle operator+(short other, const cSAngle& angle) {
    return cSAngle(static_cast<s16>(other + angle.Val()));
}

/* 80271320-8027134C 002C+00 s=0 e=5 z=0  None .text      __mi__FsRC7cSAngle */
cSAngle operator-(short other, const cSAngle& angle) {
    return cSAngle(static_cast<s16>(other - angle.Val()));
}

/* 8027134C-8027137C 0030+00 s=0 e=3 z=0  None .text      __ct__7cDegreeFf */
cDegree::cDegree(float f) {
    this->Val(f);
}

/* 8027137C-802713BC 0040+00 s=1 e=0 z=0  None .text      Formal__7cDegreeFv */
cDegree& cDegree::Formal(void) {
    mDegree = cAngle_NS_Adjust(mDegree, -180.0f, 180.0f);
    return *this;
}

/* 802713BC-802713E0 0024+00 s=1 e=0 z=0  None .text      Val__7cDegreeFf */
void cDegree::Val(float f) {
    mDegree = f;
    this->Formal();
}

/* 802713E0-802713F0 0010+00 s=3 e=0 z=0  None .text      Radian__7cDegreeCFv */
float cDegree::Radian(void) const {
    return 0.017453292f * mDegree;
}

/* 802713F0-80271418 0028+00 s=0 e=1 z=0  None .text      Sin__7cDegreeCFv */
float cDegree::Sin(void) const {
    return sin(this->Radian());
}

/* 80271418-80271440 0028+00 s=0 e=2 z=0  None .text      Cos__7cDegreeCFv */
float cDegree::Cos(void) const {
    return cos(this->Radian());
}

/* 80271440-80271468 0028+00 s=0 e=1 z=0  None .text      Tan__7cDegreeCFv */
float cDegree::Tan(void) const {
    return tan(this->Radian());
}

/* 80271468-80271498 0030+00 s=1 e=0 z=0  None .text      __ct__7cSPolarFRC4cXyz */
cSPolar::cSPolar(const cXyz& xyz) {
    this->Val(xyz);
}

/* 80271498-80271558 00C0+00 s=2 e=0 z=0  None .text      Formal__7cSPolarFv */
cSPolar& cSPolar::Formal(void) {
    if (mRadial < 0.0f) {
        mRadial = -mRadial;
        cSAngle tmp(static_cast<s16>(-0x8000));
        mAngle1.Val(tmp - mAngle1);
        mAngle2.Val(mAngle2.Inv());
    }
    if (mAngle1.Val() < 0 && mAngle1.Val() != -0x8000) {
        mAngle1.Val(-mAngle1);
        mAngle2.Val(mAngle2.Inv());
    }
    return *this;
}

/* 80271558-802715BC 0064+00 s=1 e=0 z=0  None .text      Val__7cSPolarFfss */
void cSPolar::Val(float f, short s1, short s2) {
    mRadial = f;
    mAngle1 = cSAngle(s1);
    mAngle2 = cSAngle(s2);
    this->Formal();
}

inline double square(float f) {
    return f * f;
}

/* 802715BC-802716EC 0130+00 s=1 e=0 z=0  None .text      Val__7cSPolarFRC4cXyz */
void cSPolar::Val(const cXyz& xyz) {
    float x, y, z, tmp4;
    x = xyz.x;
    y = xyz.y;
    z = xyz.z;
    double tmp = square(z) + square(x);
    double tmp2 = square(y) + tmp;
    tmp4 = (tmp > 0.0) ? (float)sqrt(tmp) : 0.0f;
    mRadial = (tmp2 > 0.0) ? (float)sqrt(tmp2) : 0.0f;
    mAngle1.Val(static_cast<s16>(cM_atan2f(tmp4, y) * 10430.378f));
    mAngle2.Val(static_cast<s16>(cM_atan2f(x, z) * 10430.378f));
    this->Formal();
}

/* 802716EC-802717B4 00C8+00 s=1 e=1 z=0  None .text      Xyz__7cSPolarCFv */
cXyz cSPolar::Xyz(void) const {
    float ang1Cos;
    float ang2Cos;
    float ang1Sin = mRadial * (float)sin(mAngle1.Radian());
    ang2Cos = (float)cos(mAngle2.Radian());
    ang1Cos = mRadial * (float)cos(mAngle1.Radian());
    float ang2Sin = sin(mAngle2.Radian());
    return cXyz(ang1Sin * ang2Sin, ang1Cos, ang1Sin * ang2Cos);
}

/* 802717B4-802717F0 003C+00 s=1 e=0 z=0  None .text      Globe__7cSPolarCFP7cSGlobe */
void cSPolar::Globe(cSGlobe* globe) const {
    globe->Val(mRadial, 0x4000 - mAngle1.Val(), mAngle2.Val());
}

/* 802717F0-80271820 0030+00 s=0 e=6 z=0  None .text      __ct__7cSGlobeFRC7cSGlobe */
cSGlobe::cSGlobe(const cSGlobe& other) {
    this->Val(other);
}

/* 80271820-80271850 0030+00 s=0 e=3 z=0  None .text      __ct__7cSGlobeFfss */
cSGlobe::cSGlobe(float f, short s1, short s2) {
    this->Val(f, s1, s2);
}

/* 80271850-80271880 0030+00 s=1 e=4 z=0  None .text      __ct__7cSGlobeFfRC7cSAngleRC7cSAngle */
cSGlobe::cSGlobe(float f, const cSAngle& a1, const cSAngle& a2) {
    this->Val(f, a1, a2);
}

/* 80271880-802718B0 0030+00 s=0 e=35 z=3  None .text      __ct__7cSGlobeFRC4cXyz */
cSGlobe::cSGlobe(const cXyz& xyz) {
    this->Val(xyz);
}

/* 802718B0-8027196C 00BC+00 s=5 e=0 z=0  None .text      Formal__7cSGlobeFv */
cSGlobe& cSGlobe::Formal(void) {
    if (mRadius < 0.0f) {
        mRadius = -mRadius;
        mAzimuth = -mAzimuth;
        mInclination.Val(mInclination.Inv());
    }
    if (mAzimuth.Val() < -0x4000 || 0x4000 < mAzimuth.Val()) {
        mAzimuth.mirrorAtMaxNeg();
        mInclination.Val(mInclination.Inv());
    }
    return *this;
}

/* 8027196C-802719A4 0038+00 s=1 e=0 z=0  None .text      Val__7cSGlobeFRC7cSGlobe */
void cSGlobe::Val(const cSGlobe& other) {
    mRadius = other.mRadius;
    mAzimuth = other.mAzimuth;
    mInclination = other.mInclination;
    this->Formal();
}

/* 802719A4-80271A08 0064+00 s=2 e=3 z=0  None .text      Val__7cSGlobeFfss */
void cSGlobe::Val(float f, short s1, short s2) {
    mRadius = f;
    mAzimuth = cSAngle(s1);
    mInclination = cSAngle(s2);
    this->Formal();
}

/* 80271A08-80271A70 0068+00 s=1 e=11 z=0  None .text      Val__7cSGlobeFfRC7cSAngleRC7cSAngle */
void cSGlobe::Val(float f, const cSAngle& a1, const cSAngle& a2) {
    mRadius = f;
    mAzimuth = cSAngle(a1.Val());
    mInclination = cSAngle(a2.Val());
    this->Formal();
}

/* 80271A70-80271AB4 0044+00 s=1 e=38 z=0  None .text      Val__7cSGlobeFRC4cXyz */
void cSGlobe::Val(const cXyz& xyz) {
    cSPolar csp(xyz);
    csp.Globe(this);
    this->Formal();
}

/* 80271AB4-80271AF4 0040+00 s=1 e=38 z=0  None .text      Xyz__7cSGlobeCFv */
cXyz cSGlobe::Xyz(void) const {
    cSPolar csp;
    this->Polar(&csp);
    return csp.Xyz();
}

/* 80271AF4-80271B30 003C+00 s=1 e=0 z=0  None .text      Polar__7cSGlobeCFP7cSPolar */
void cSGlobe::Polar(cSPolar* csp) const {
    csp->Val(mRadius, 0x4000 - mAzimuth.Val(), mInclination.Val());
}

/* 80271B30-80271B7C 004C+00 s=0 e=3 z=0  None .text      Norm__7cSGlobeCFv */
cXyz cSGlobe::Norm(void) const {
    cSGlobe glob(1.0f, mAzimuth, mInclination);
    return glob.Xyz();
}

/* 80271B7C-80271BA8 002C+00 s=0 e=2 z=0  None .text      Invert__7cSGlobeFv */
cSGlobe& cSGlobe::Invert(void) {
    mRadius = -mRadius;
    return this->Formal();
}

/* 80271BA8-80271BD4 002C+00 s=1 e=0 z=0  None .text      Adjust<f>__6cAngleFfff */
// cAngle::Adjust<f32>(f32, f32, f32)
float cAngle_NS_Adjust(float f1, float f2, float f3) {
    while (f1 >= f3) {
        f1 -= f3 - f2;
    }
    while (f1 < f2) {
        f1 += f3 - f2;
    }
    return f1;
}

/* ############################################################################################## */
/* 80430F98-80430FA4 05DCB8 000C+00 1/1 0/0 0/0 .bss             @2401 */
static u8 lit_2401[12];

/* 80430FA4-80430FB0 05DCC4 000C+00 0/1 0/0 0/0 .bss             @2402 */
#pragma push
#pragma force_active on
static u8 lit_2402[12];
#pragma pop

/* 80430FB0-80430FBC 05DCD0 000C+00 0/1 0/0 0/0 .bss             @2403 */
#pragma push
#pragma force_active on
static u8 lit_2403[12];
#pragma pop

/* 80430FBC-80430FC8 05DCDC 000C+00 0/1 0/0 0/0 .bss             @2404 */
#pragma push
#pragma force_active on
static u8 lit_2404[12];
#pragma pop

/* 80430FC8-80430FD8 05DCE8 000C+04 0/1 0/0 0/0 .bss             @2405 */
#pragma push
#pragma force_active on
static u8 lit_2405[12 + 4 /* padding */];
#pragma pop

/* 80451188-8045118C 000688 0002+02 1/1 22/22 0/0 .sbss            _0__7cSAngle */
extern u8 _0__7cSAngle[2 + 2 /* padding */];
u8 _0__7cSAngle[2 + 2 /* padding */];

/* 8045118C-80451190 00068C 0002+02 1/1 0/0 0/0 .sbss            _1__7cSAngle */
static u8 _1__7cSAngle[2 + 2 /* padding */];

/* 80451190-80451194 000690 0002+02 1/1 6/6 0/0 .sbss            _90__7cSAngle */
extern u8 _90__7cSAngle[2 + 2 /* padding */];
u8 _90__7cSAngle[2 + 2 /* padding */];

/* 80451194-80451198 000694 0002+02 1/1 2/2 0/0 .sbss            _180__7cSAngle */
extern u8 _180__7cSAngle[2 + 2 /* padding */];
u8 _180__7cSAngle[2 + 2 /* padding */];

/* 80451198-804511A0 000698 0002+06 1/1 3/3 0/0 .sbss            _270__7cSAngle */
extern u8 _270__7cSAngle[2 + 6 /* padding */];
u8 _270__7cSAngle[2 + 6 /* padding */];

/* 80271BD4-80271C8C 26C514 00B8+00 0/0 1/0 0/0 .text            __sinit_c_angle_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_c_angle_cpp() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__sinit_c_angle_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80271BD4 = (void*)__sinit_c_angle_cpp;
#pragma pop
