//
// Generated By: dol2asm
// Translation Unit: c_angle
//

#include "SSystem/SComponent/c_angle.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cXyz {};

struct cSPolar;
struct cSAngle {
    /* 80030510 */ ~cSAngle();
    /* 80270F98 */ cSAngle(s16);
    /* 80270FC8 */ cSAngle(f32);
    /* 80270F68 */ cSAngle(cSAngle const&);
    /* 80271004 */ void Val(s16);
    /* 8027100C */ void Val(f32);
    /* 80270FF8 */ void Val(cSAngle const&);
    /* 80271030 */ void Degree() const;
    /* 80271064 */ void Radian() const;
    /* 80271098 */ void Norm() const;
    /* 802710CC */ void Abs() const;
    /* 802710E8 */ void Inv() const;
    /* 802710F8 */ void Sin() const;
    /* 80271120 */ void Cos() const;
    /* 802711A4 */ void operator-(cSAngle const&) const;
    /* 80271228 */ void operator-(s16) const;
    /* 80271148 */ void operator-() const;
    /* 80271174 */ void operator+(cSAngle const&) const;
    /* 802711FC */ void operator+(s16) const;
    /* 802711D4 */ void operator+=(cSAngle const&);
    /* 80271254 */ void operator+=(s16);
    /* 802711E8 */ void operator-=(cSAngle const&);
    /* 80271264 */ void operator*(f32) const;
    /* 802712B4 */ void operator*=(f32);
};

struct cSGlobe {
    /* 80271820 */ cSGlobe(f32, s16, s16);
    /* 80271880 */ cSGlobe(cXyz const&);
    /* 802717F0 */ cSGlobe(cSGlobe const&);
    /* 80271850 */ cSGlobe(f32, cSAngle const&, cSAngle const&);
    /* 802718B0 */ void Formal();
    /* 802719A4 */ void Val(f32, s16, s16);
    /* 80271A08 */ void Val(f32, cSAngle const&, cSAngle const&);
    /* 8027196C */ void Val(cSGlobe const&);
    /* 80271A70 */ void Val(cXyz const&);
    /* 80271AB4 */ void Xyz() const;
    /* 80271AF4 */ void Polar(cSPolar*) const;
    /* 80271B30 */ void Norm() const;
    /* 80271B7C */ void Invert();
};

struct cSPolar {
    /* 80271468 */ cSPolar(cXyz const&);
    /* 80271498 */ void Formal();
    /* 80271558 */ void Val(f32, s16, s16);
    /* 802715BC */ void Val(cXyz const&);
    /* 802716EC */ void Xyz() const;
    /* 802717B4 */ void Globe(cSGlobe*) const;
};

struct cDegree {
    /* 8027134C */ cDegree(f32);
    /* 8027137C */ void Formal();
    /* 802713BC */ void Val(f32);
    /* 802713E0 */ void Radian() const;
    /* 802713F0 */ void Sin() const;
    /* 80271418 */ void Cos() const;
    /* 80271440 */ void Tan() const;
};

struct cAngle {
    /*          */ template <typename A1>
    /*          */ void Adjust(/* f32, f32, f32 */);
    /* 80271BA8 */ /* Adjust<f32> */
    void Adjust__template0(f32, f32, f32);
};

//
// Forward References:
//

void operator+(s16, cSAngle const&);
void operator-(s16, cSAngle const&);

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

void cM_atan2f(f32, f32);

extern "C" void __dt__7cSAngleFv();
extern "C" void cM_atan2f__Fff();
extern "C" void __register_global_object();
extern "C" void cos();
extern "C" void sin();
extern "C" void tan();
extern "C" void sqrt();

//
// Declarations:
//

/* 80270F68-80270F98 0030+00 s=0 e=33 z=2  None .text      __ct__7cSAngleFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSAngle::cSAngle(cSAngle const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSAngleFRC7cSAngle.s"
}
#pragma pop

/* 80270F98-80270FC8 0030+00 s=14 e=50 z=4  None .text      __ct__7cSAngleFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSAngle::cSAngle(s16 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSAngleFs.s"
}
#pragma pop

/* 80270FC8-80270FF8 0030+00 s=0 e=22 z=0  None .text      __ct__7cSAngleFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSAngle::cSAngle(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSAngleFf.s"
}
#pragma pop

/* 80270FF8-80271004 000C+00 s=2 e=6 z=0  None .text      Val__7cSAngleFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Val(cSAngle const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSAngleFRC7cSAngle.s"
}
#pragma pop

/* 80271004-8027100C 0008+00 s=4 e=7 z=0  None .text      Val__7cSAngleFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Val(s16 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSAngleFs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455208-8045520C 0004+00 s=1 e=0 z=0  None .sdata2    @2248 */
SECTION_SDATA2 static f32 lit_2248 = 182.04444885253906f;

/* 8027100C-80271030 0024+00 s=1 e=8 z=0  None .text      Val__7cSAngleFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Val(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSAngleFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045520C-80455210 0004+00 s=1 e=0 z=0  None .sdata2    @2260 */
SECTION_SDATA2 static f32 lit_2260 = 0.0054931640625f;

/* 80455210-80455218 0008+00 s=5 e=0 z=0  None .sdata2    @2263 */
SECTION_SDATA2 static f64 lit_2263 = 4503601774854144.0 /* cast s32 to float */;

/* 80271030-80271064 0034+00 s=0 e=11 z=0  None .text      Degree__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Degree() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Degree__7cSAngleCFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455218-8045521C 0004+00 s=1 e=0 z=0  None .sdata2    @2269 */
SECTION_SDATA2 static f32 lit_2269 = 9.58738019107841e-05f;

/* 80271064-80271098 0034+00 s=3 e=0 z=0  None .text      Radian__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Radian() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Radian__7cSAngleCFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045521C-80455220 0004+00 s=1 e=0 z=0  None .sdata2    @2277 */
SECTION_SDATA2 static f32 lit_2277 = 3.0517578125e-05f;

/* 80271098-802710CC 0034+00 s=0 e=1 z=0  None .text      Norm__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Norm() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Norm__7cSAngleCFv.s"
}
#pragma pop

/* 802710CC-802710E8 001C+00 s=0 e=5 z=1  None .text      Abs__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Abs() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Abs__7cSAngleCFv.s"
}
#pragma pop

/* 802710E8-802710F8 0010+00 s=2 e=22 z=2  None .text      Inv__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Inv() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Inv__7cSAngleCFv.s"
}
#pragma pop

/* 802710F8-80271120 0028+00 s=0 e=6 z=1  None .text      Sin__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Sin() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Sin__7cSAngleCFv.s"
}
#pragma pop

/* 80271120-80271148 0028+00 s=0 e=8 z=1  None .text      Cos__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::Cos() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Cos__7cSAngleCFv.s"
}
#pragma pop

/* 80271148-80271174 002C+00 s=2 e=8 z=0  None .text      __mi__7cSAngleCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator-() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__mi__7cSAngleCFv.s"
}
#pragma pop

/* 80271174-802711A4 0030+00 s=0 e=30 z=1  None .text      __pl__7cSAngleCFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator+(cSAngle const& param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__pl__7cSAngleCFRC7cSAngle.s"
}
#pragma pop

/* 802711A4-802711D4 0030+00 s=2 e=37 z=0  None .text      __mi__7cSAngleCFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator-(cSAngle const& param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__mi__7cSAngleCFRC7cSAngle.s"
}
#pragma pop

/* 802711D4-802711E8 0014+00 s=0 e=15 z=0  None .text      __apl__7cSAngleFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator+=(cSAngle const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__apl__7cSAngleFRC7cSAngle.s"
}
#pragma pop

/* 802711E8-802711FC 0014+00 s=0 e=3 z=0  None .text      __ami__7cSAngleFRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator-=(cSAngle const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ami__7cSAngleFRC7cSAngle.s"
}
#pragma pop

/* 802711FC-80271228 002C+00 s=0 e=5 z=0  None .text      __pl__7cSAngleCFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator+(s16 param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__pl__7cSAngleCFs.s"
}
#pragma pop

/* 80271228-80271254 002C+00 s=0 e=9 z=3  None .text      __mi__7cSAngleCFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator-(s16 param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__mi__7cSAngleCFs.s"
}
#pragma pop

/* 80271254-80271264 0010+00 s=0 e=1 z=0  None .text      __apl__7cSAngleFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator+=(s16 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__apl__7cSAngleFs.s"
}
#pragma pop

/* 80271264-802712B4 0050+00 s=0 e=31 z=0  None .text      __ml__7cSAngleCFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator*(f32 param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ml__7cSAngleCFf.s"
}
#pragma pop

/* 802712B4-802712F4 0040+00 s=0 e=3 z=0  None .text      __amu__7cSAngleFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSAngle::operator*=(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__amu__7cSAngleFf.s"
}
#pragma pop

/* 802712F4-80271320 002C+00 s=0 e=2 z=0  None .text      __pl__FsRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void operator+(s16 param_0, cSAngle const& param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__pl__FsRC7cSAngle.s"
}
#pragma pop

/* 80271320-8027134C 002C+00 s=0 e=5 z=0  None .text      __mi__FsRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void operator-(s16 param_0, cSAngle const& param_1) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__mi__FsRC7cSAngle.s"
}
#pragma pop

/* 8027134C-8027137C 0030+00 s=0 e=3 z=0  None .text      __ct__7cDegreeFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cDegree::cDegree(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cDegreeFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455220-80455224 0004+00 s=1 e=0 z=0  None .sdata2    @2440 */
SECTION_SDATA2 static f32 lit_2440 = -180.0f;

/* 80455224-80455228 0004+00 s=1 e=0 z=0  None .sdata2    @2441 */
SECTION_SDATA2 static f32 lit_2441 = 180.0f;

/* 8027137C-802713BC 0040+00 s=1 e=0 z=0  None .text      Formal__7cDegreeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Formal() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Formal__7cDegreeFv.s"
}
#pragma pop

/* 802713BC-802713E0 0024+00 s=1 e=0 z=0  None .text      Val__7cDegreeFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Val(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cDegreeFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455228-8045522C 0004+00 s=1 e=0 z=0  None .sdata2    @2474 */
SECTION_SDATA2 static f32 lit_2474 = 0.01745329238474369f;

/* 802713E0-802713F0 0010+00 s=3 e=0 z=0  None .text      Radian__7cDegreeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Radian() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Radian__7cDegreeCFv.s"
}
#pragma pop

/* 802713F0-80271418 0028+00 s=0 e=1 z=0  None .text      Sin__7cDegreeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Sin() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Sin__7cDegreeCFv.s"
}
#pragma pop

/* 80271418-80271440 0028+00 s=0 e=2 z=0  None .text      Cos__7cDegreeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Cos() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Cos__7cDegreeCFv.s"
}
#pragma pop

/* 80271440-80271468 0028+00 s=0 e=1 z=0  None .text      Tan__7cDegreeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cDegree::Tan() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Tan__7cDegreeCFv.s"
}
#pragma pop

/* 80271468-80271498 0030+00 s=1 e=0 z=0  None .text      __ct__7cSPolarFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSPolar::cSPolar(cXyz const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSPolarFRC4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045522C-80455230 0004+00 s=3 e=0 z=0  None .sdata2    @2491 */
SECTION_SDATA2 static u8 lit_2491[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80271498-80271558 00C0+00 s=2 e=0 z=0  None .text      Formal__7cSPolarFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSPolar::Formal() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Formal__7cSPolarFv.s"
}
#pragma pop

/* 80271558-802715BC 0064+00 s=1 e=0 z=0  None .text      Val__7cSPolarFfss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSPolar::Val(f32 param_0, s16 param_1, s16 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSPolarFfss.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455230-80455238 0008+00 s=1 e=0 z=0  None .sdata2    @2671 */
SECTION_SDATA2 static u8 lit_2671[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455238-8045523C 0004+00 s=1 e=0 z=0  None .sdata2    @2672 */
SECTION_SDATA2 static f32 lit_2672 = 10430.3779296875f;

/* 802715BC-802716EC 0130+00 s=1 e=0 z=0  None .text      Val__7cSPolarFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSPolar::Val(cXyz const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSPolarFRC4cXyz.s"
}
#pragma pop

/* 802716EC-802717B4 00C8+00 s=1 e=1 z=0  None .text      Xyz__7cSPolarCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSPolar::Xyz() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Xyz__7cSPolarCFv.s"
}
#pragma pop

/* 802717B4-802717F0 003C+00 s=1 e=0 z=0  None .text      Globe__7cSPolarCFP7cSGlobe */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSPolar::Globe(cSGlobe* param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Globe__7cSPolarCFP7cSGlobe.s"
}
#pragma pop

/* 802717F0-80271820 0030+00 s=0 e=6 z=0  None .text      __ct__7cSGlobeFRC7cSGlobe */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSGlobe::cSGlobe(cSGlobe const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSGlobeFRC7cSGlobe.s"
}
#pragma pop

/* 80271820-80271850 0030+00 s=0 e=3 z=0  None .text      __ct__7cSGlobeFfss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSGlobe::cSGlobe(f32 param_0, s16 param_1, s16 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSGlobeFfss.s"
}
#pragma pop

/* 80271850-80271880 0030+00 s=1 e=4 z=0  None .text      __ct__7cSGlobeFfRC7cSAngleRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSGlobe::cSGlobe(f32 param_0, cSAngle const& param_1, cSAngle const& param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSGlobeFfRC7cSAngleRC7cSAngle.s"
}
#pragma pop

/* 80271880-802718B0 0030+00 s=0 e=35 z=3  None .text      __ct__7cSGlobeFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cSGlobe::cSGlobe(cXyz const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__ct__7cSGlobeFRC4cXyz.s"
}
#pragma pop

/* 802718B0-8027196C 00BC+00 s=5 e=0 z=0  None .text      Formal__7cSGlobeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Formal() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Formal__7cSGlobeFv.s"
}
#pragma pop

/* 8027196C-802719A4 0038+00 s=1 e=0 z=0  None .text      Val__7cSGlobeFRC7cSGlobe */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Val(cSGlobe const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSGlobeFRC7cSGlobe.s"
}
#pragma pop

/* 802719A4-80271A08 0064+00 s=2 e=3 z=0  None .text      Val__7cSGlobeFfss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Val(f32 param_0, s16 param_1, s16 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSGlobeFfss.s"
}
#pragma pop

/* 80271A08-80271A70 0068+00 s=1 e=11 z=0  None .text      Val__7cSGlobeFfRC7cSAngleRC7cSAngle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Val(f32 param_0, cSAngle const& param_1, cSAngle const& param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSGlobeFfRC7cSAngleRC7cSAngle.s"
}
#pragma pop

/* 80271A70-80271AB4 0044+00 s=1 e=38 z=0  None .text      Val__7cSGlobeFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Val(cXyz const& param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Val__7cSGlobeFRC4cXyz.s"
}
#pragma pop

/* 80271AB4-80271AF4 0040+00 s=1 e=38 z=0  None .text      Xyz__7cSGlobeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Xyz() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Xyz__7cSGlobeCFv.s"
}
#pragma pop

/* 80271AF4-80271B30 003C+00 s=1 e=0 z=0  None .text      Polar__7cSGlobeCFP7cSPolar */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Polar(cSPolar* param_0) const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Polar__7cSGlobeCFP7cSPolar.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045523C-80455240 0004+00 s=1 e=0 z=0  None .sdata2    @2744 */
SECTION_SDATA2 static f32 lit_2744 = 1.0f;

/* 80271B30-80271B7C 004C+00 s=0 e=3 z=0  None .text      Norm__7cSGlobeCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Norm() const {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Norm__7cSGlobeCFv.s"
}
#pragma pop

/* 80271B7C-80271BA8 002C+00 s=0 e=2 z=0  None .text      Invert__7cSGlobeFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cSGlobe::Invert() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/Invert__7cSGlobeFv.s"
}
#pragma pop

/* 80271BA8-80271BD4 002C+00 s=1 e=0 z=0  None .text      Adjust<f>__6cAngleFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cAngle::Adjust__template0(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/func_80271BA8.s"
}
#pragma pop

/* ############################################################################################## */
/* 80430F98-80430FA4 000C+00 s=1 e=0 z=0  None .bss       @2401 */
static u8 lit_2401[12];

/* 80430FA4-80430FB0 000C+00 s=1 e=0 z=0  None .bss       @2402 */
static u8 lit_2402[12];

/* 80430FB0-80430FBC 000C+00 s=1 e=0 z=0  None .bss       @2403 */
static u8 lit_2403[12];

/* 80430FBC-80430FC8 000C+00 s=1 e=0 z=0  None .bss       @2404 */
static u8 lit_2404[12];

/* 80430FC8-80430FD8 000C+04 s=1 e=0 z=0  None .bss       @2405 */
static u8 lit_2405[12 + 4 /* padding */];

/* 80451188-8045118C 0002+02 s=1 e=22 z=0  None .sbss      _0__7cSAngle */
u8 _0__7cSAngle[2 + 2 /* padding */];

/* 8045118C-80451190 0002+02 s=1 e=0 z=0  None .sbss      _1__7cSAngle */
static u8 _1__7cSAngle[2 + 2 /* padding */];

/* 80451190-80451194 0002+02 s=1 e=6 z=0  None .sbss      _90__7cSAngle */
u8 _90__7cSAngle[2 + 2 /* padding */];

/* 80451194-80451198 0002+02 s=1 e=2 z=0  None .sbss      _180__7cSAngle */
u8 _180__7cSAngle[2 + 2 /* padding */];

/* 80451198-804511A0 0002+06 s=1 e=3 z=0  None .sbss      _270__7cSAngle */
u8 _270__7cSAngle[2 + 6 /* padding */];

/* 80271BD4-80271C8C 00B8+00 s=0 e=1 z=0  None .text      __sinit_c_angle_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_c_angle_cpp() {
    nofralloc
#include "asm/SSystem/SComponent/c_angle/__sinit_c_angle_cpp.s"
}
#pragma pop
