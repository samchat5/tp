//
// Generated By: dol2asm
// Translation Unit: J3DAnmLoader
//

#include "JSystem/J3DGraphLoader/J3DAnmLoader.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct ResNTAB {};

struct JUTNameTab {
    /* 802DEA1C */ void setResource(ResNTAB const*);
};

struct J3DAnmVtxColorKeyData {};

struct J3DAnmVtxColorKey {
    /* 8032A4E0 */ J3DAnmVtxColorKey();
};

struct J3DAnmVtxColorFullData {};

struct J3DAnmVtxColorFull {
    /* 8032A30C */ J3DAnmVtxColorFull();
};

struct J3DAnmVisibilityFullData {};

struct J3DAnmVisibilityFull {
    /* 8033979C */ ~J3DAnmVisibilityFull();
    /* 803397F8 */ s32 getKind() const;
};

struct J3DAnmTransformKeyData {};

struct J3DAnmTransformKey {};

struct J3DAnmTransformFullData {};

struct J3DAnmTransformFull {};

struct J3DAnmTransform {
    /* 80328E40 */ J3DAnmTransform(s16, f32*, s16*, f32*);
};

struct J3DAnmTextureSRTKeyData {};

struct J3DAnmTextureSRTKey {
    /* 80329E5C */ J3DAnmTextureSRTKey();
};

struct J3DAnmTexPatternFullData {};

struct J3DAnmTexPattern {
    /* 8032AED8 */ J3DAnmTexPattern();
};

struct J3DAnmTevRegKeyData {};

struct J3DAnmTevRegKey {
    /* 8032AE18 */ J3DAnmTevRegKey();
};

struct J3DAnmLoaderDataBaseFlag {};

struct J3DAnmBase {};

struct J3DAnmLoaderDataBase {
    /* 80337B40 */ void load(void const*, J3DAnmLoaderDataBaseFlag);
    /* 80338134 */ void setResource(J3DAnmBase*, void const*);
};

struct J3DAnmLoader {
    /* 80339800 */ ~J3DAnmLoader();
};

struct J3DAnmClusterKey {};

struct J3DAnmColorKeyData {};

struct J3DAnmColorKey {
    /* 8032AB00 */ J3DAnmColorKey();
};

struct J3DAnmClusterKeyData {};

struct J3DAnmKeyLoader_v15 {
    /* 803384E0 */ J3DAnmKeyLoader_v15();
    /* 803384FC */ ~J3DAnmKeyLoader_v15();
    /* 80338D44 */ void load(void const*);
    /* 80338E8C */ void setResource(J3DAnmBase*, void const*);
    /* 80338FEC */ void readAnmTransform(J3DAnmTransformKeyData const*);
    /* 80339014 */ void setAnmTransform(J3DAnmTransformKey*, J3DAnmTransformKeyData const*);
    /* 803390B0 */ void readAnmTextureSRT(J3DAnmTextureSRTKeyData const*);
    /* 803390D8 */ void setAnmTextureSRT(J3DAnmTextureSRTKey*, J3DAnmTextureSRTKeyData const*);
    /* 803392B0 */ void readAnmColor(J3DAnmColorKeyData const*);
    /* 803392D8 */ void setAnmColor(J3DAnmColorKey*, J3DAnmColorKeyData const*);
    /* 803393C4 */ void readAnmCluster(J3DAnmClusterKeyData const*);
    /* 803393EC */ void setAnmCluster(J3DAnmClusterKey*, J3DAnmClusterKeyData const*);
    /* 80339458 */ void readAnmTevReg(J3DAnmTevRegKeyData const*);
    /* 80339480 */ void setAnmTevReg(J3DAnmTevRegKey*, J3DAnmTevRegKeyData const*);
    /* 8033960C */ void readAnmVtxColor(J3DAnmVtxColorKeyData const*);
    /* 80339634 */ void setAnmVtxColor(J3DAnmVtxColorKey*, J3DAnmVtxColorKeyData const*);
};

struct J3DAnmColorFull {
    /* 8032A93C */ J3DAnmColorFull();
};

struct J3DAnmClusterFullData {};

struct J3DAnmColorFullData {};

struct J3DAnmClusterFull {};

struct J3DAnmFullLoader_v15 {
    /* 80338468 */ J3DAnmFullLoader_v15();
    /* 80338484 */ ~J3DAnmFullLoader_v15();
    /* 80338558 */ void load(void const*);
    /* 803386A0 */ void setResource(J3DAnmBase*, void const*);
    /* 80338800 */ void readAnmTransform(J3DAnmTransformFullData const*);
    /* 80338828 */ void setAnmTransform(J3DAnmTransformFull*, J3DAnmTransformFullData const*);
    /* 803388BC */ void readAnmColor(J3DAnmColorFullData const*);
    /* 803388E4 */ void setAnmColor(J3DAnmColorFull*, J3DAnmColorFullData const*);
    /* 803389B0 */ void readAnmTexPattern(J3DAnmTexPatternFullData const*);
    /* 803389D8 */ void setAnmTexPattern(J3DAnmTexPattern*, J3DAnmTexPatternFullData const*);
    /* 80338A7C */ void readAnmVisibility(J3DAnmVisibilityFullData const*);
    /* 80338AA4 */ void setAnmVisibility(J3DAnmVisibilityFull*, J3DAnmVisibilityFullData const*);
    /* 80338B20 */ void readAnmCluster(J3DAnmClusterFullData const*);
    /* 80338B48 */ void setAnmCluster(J3DAnmClusterFull*, J3DAnmClusterFullData const*);
    /* 80338BB4 */ void readAnmVtxColor(J3DAnmVtxColorFullData const*);
    /* 80338BDC */ void setAnmVtxColor(J3DAnmVtxColorFull*, J3DAnmVtxColorFullData const*);
};

//
// Forward References:
//

extern "C" void load__20J3DAnmLoaderDataBaseFPCv24J3DAnmLoaderDataBaseFlag();
extern "C" void setResource__20J3DAnmLoaderDataBaseFP10J3DAnmBasePCv();
extern "C" void __ct__20J3DAnmFullLoader_v15Fv();
extern "C" void __dt__20J3DAnmFullLoader_v15Fv();
extern "C" void __ct__19J3DAnmKeyLoader_v15Fv();
extern "C" void __dt__19J3DAnmKeyLoader_v15Fv();
extern "C" void load__20J3DAnmFullLoader_v15FPCv();
extern "C" void setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv();
extern "C" void readAnmTransform__20J3DAnmFullLoader_v15FPC23J3DAnmTransformFullData();
extern "C" void
setAnmTransform__20J3DAnmFullLoader_v15FP19J3DAnmTransformFullPC23J3DAnmTransformFullData();
extern "C" void readAnmColor__20J3DAnmFullLoader_v15FPC19J3DAnmColorFullData();
extern "C" void setAnmColor__20J3DAnmFullLoader_v15FP15J3DAnmColorFullPC19J3DAnmColorFullData();
extern "C" void readAnmTexPattern__20J3DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData();
extern "C" void
setAnmTexPattern__20J3DAnmFullLoader_v15FP16J3DAnmTexPatternPC24J3DAnmTexPatternFullData();
extern "C" void readAnmVisibility__20J3DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData();
extern "C" void
setAnmVisibility__20J3DAnmFullLoader_v15FP20J3DAnmVisibilityFullPC24J3DAnmVisibilityFullData();
extern "C" void readAnmCluster__20J3DAnmFullLoader_v15FPC21J3DAnmClusterFullData();
extern "C" void
setAnmCluster__20J3DAnmFullLoader_v15FP17J3DAnmClusterFullPC21J3DAnmClusterFullData();
extern "C" void readAnmVtxColor__20J3DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData();
extern "C" void
setAnmVtxColor__20J3DAnmFullLoader_v15FP18J3DAnmVtxColorFullPC22J3DAnmVtxColorFullData();
extern "C" void load__19J3DAnmKeyLoader_v15FPCv();
extern "C" void setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv();
extern "C" void readAnmTransform__19J3DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData();
extern "C" void
setAnmTransform__19J3DAnmKeyLoader_v15FP18J3DAnmTransformKeyPC22J3DAnmTransformKeyData();
extern "C" void readAnmTextureSRT__19J3DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData();
extern "C" void
setAnmTextureSRT__19J3DAnmKeyLoader_v15FP19J3DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData();
extern "C" void readAnmColor__19J3DAnmKeyLoader_v15FPC18J3DAnmColorKeyData();
extern "C" void setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData();
extern "C" void readAnmCluster__19J3DAnmKeyLoader_v15FPC20J3DAnmClusterKeyData();
extern "C" void setAnmCluster__19J3DAnmKeyLoader_v15FP16J3DAnmClusterKeyPC20J3DAnmClusterKeyData();
extern "C" void readAnmTevReg__19J3DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData();
extern "C" void setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData();
extern "C" void readAnmVtxColor__19J3DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData();
extern "C" void
setAnmVtxColor__19J3DAnmKeyLoader_v15FP17J3DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData();
extern "C" void __dt__20J3DAnmVisibilityFullFv();
extern "C" s32 getKind__20J3DAnmVisibilityFullCFv();
extern "C" void __dt__12J3DAnmLoaderFv();
extern "C" void func_80339848(void const*, void const*);
extern "C" void func_80339860(void const*, void const*);
extern "C" extern char const* const J3DAnmLoader__stringBase0;

//
// External References:
//

extern "C" void OSReport();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setResource__10JUTNameTabFPC7ResNTAB();
extern "C" void func_802F4260(void const*, void const*);
extern "C" void func_802F42C0(void const*, void const*);
extern "C" void func_8030A458(void const*, void const*);
extern "C" void func_8030A470(void const*, void const*);
extern "C" void func_8030A488(void const*, void const*);
extern "C" void func_8030A4A0(void const*, void const*);
extern "C" void func_8030A4B8(void const*, void const*);
extern "C" void func_8030A4D0(void const*, void const*);
extern "C" void func_8030A4E8(void const*, void const*);
extern "C" void func_8030A500(void const*, void const*);
extern "C" void func_8030A518(void const*, void const*);
extern "C" void func_8030A530(void const*, void const*);
extern "C" void func_8030A548(void const*, void const*);
extern "C" void func_8030A560(void const*, void const*);
extern "C" void func_8030A578(void const*, void const*);
extern "C" void __ct__15J3DAnmTransformFsPfPsPf();
extern "C" void __ct__19J3DAnmTextureSRTKeyFv();
extern "C" void __ct__18J3DAnmVtxColorFullFv();
extern "C" void __ct__17J3DAnmVtxColorKeyFv();
extern "C" void __ct__15J3DAnmColorFullFv();
extern "C" void __ct__14J3DAnmColorKeyFv();
extern "C" void __ct__15J3DAnmTevRegKeyFv();
extern "C" void __ct__16J3DAnmTexPatternFv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__10J3DAnmBase[4];
extern "C" extern void* __vt__18J3DAnmTransformKey[5];
extern "C" extern void* __vt__16J3DAnmClusterKey[5];
extern "C" extern void* __vt__13J3DAnmCluster[5];
extern "C" extern void* __vt__17J3DAnmClusterFull[5];
extern "C" extern void* __vt__27J3DAnmTransformFullWithLerp[5];
extern "C" extern void* __vt__19J3DAnmTransformFull[5 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CF238-803CF24C 02C358 0014+00 2/2 0/0 0/0 .data            __vt__19J3DAnmKeyLoader_v15 */
SECTION_DATA extern void* __vt__19J3DAnmKeyLoader_v15[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)load__19J3DAnmKeyLoader_v15FPCv,
    (void*)setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv,
    (void*)__dt__19J3DAnmKeyLoader_v15Fv,
};

/* 803CF24C-803CF260 02C36C 0014+00 2/2 0/0 0/0 .data            __vt__20J3DAnmFullLoader_v15 */
SECTION_DATA extern void* __vt__20J3DAnmFullLoader_v15[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)load__20J3DAnmFullLoader_v15FPCv,
    (void*)setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv,
    (void*)__dt__20J3DAnmFullLoader_v15Fv,
};

/* 803CF260-803CF274 02C380 0014+00 5/5 0/0 0/0 .data            __vt__12J3DAnmLoader */
SECTION_DATA extern void* __vt__12J3DAnmLoader[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)__dt__12J3DAnmLoaderFv,
};

/* 803CF274-803CF288 02C394 0010+04 2/2 0/0 0/0 .data            __vt__20J3DAnmVisibilityFull */
SECTION_DATA extern void* __vt__20J3DAnmVisibilityFull[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20J3DAnmVisibilityFullFv,
    (void*)getKind__20J3DAnmVisibilityFullCFv,
    /* padding */
    NULL,
};

/* 804564C0-804564C8 004AC0 0004+04 13/13 0/0 0/0 .sdata2          @889 */
SECTION_SDATA2 static f32 lit_889[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80337B40-80338134 332480 05F4+00 0/0 7/7 1/1 .text
 * load__20J3DAnmLoaderDataBaseFPCv24J3DAnmLoaderDataBaseFlag   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmLoaderDataBase::load(void const* param_0, J3DAnmLoaderDataBaseFlag param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/load__20J3DAnmLoaderDataBaseFPCv24J3DAnmLoaderDataBaseFlag.s"
}
#pragma pop

/* 80338134-80338468 332A74 0334+00 0/0 1/1 0/0 .text
 * setResource__20J3DAnmLoaderDataBaseFP10J3DAnmBasePCv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmLoaderDataBase::setResource(J3DAnmBase* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setResource__20J3DAnmLoaderDataBaseFP10J3DAnmBasePCv.s"
}
#pragma pop

/* 80338468-80338484 332DA8 001C+00 2/2 0/0 0/0 .text            __ct__20J3DAnmFullLoader_v15Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmFullLoader_v15::J3DAnmFullLoader_v15() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__ct__20J3DAnmFullLoader_v15Fv.s"
}
#pragma pop

/* 80338484-803384E0 332DC4 005C+00 3/2 0/0 0/0 .text            __dt__20J3DAnmFullLoader_v15Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmFullLoader_v15::~J3DAnmFullLoader_v15() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__dt__20J3DAnmFullLoader_v15Fv.s"
}
#pragma pop

/* 803384E0-803384FC 332E20 001C+00 2/2 0/0 0/0 .text            __ct__19J3DAnmKeyLoader_v15Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmKeyLoader_v15::J3DAnmKeyLoader_v15() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__ct__19J3DAnmKeyLoader_v15Fv.s"
}
#pragma pop

/* 803384FC-80338558 332E3C 005C+00 3/2 0/0 0/0 .text            __dt__19J3DAnmKeyLoader_v15Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmKeyLoader_v15::~J3DAnmKeyLoader_v15() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__dt__19J3DAnmKeyLoader_v15Fv.s"
}
#pragma pop

/* 80338558-803386A0 332E98 0148+00 2/1 0/0 0/0 .text            load__20J3DAnmFullLoader_v15FPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::load(void const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/load__20J3DAnmFullLoader_v15FPCv.s"
}
#pragma pop

/* 803386A0-80338800 332FE0 0160+00 2/1 0/0 0/0 .text
 * setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setResource(J3DAnmBase* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv.s"
}
#pragma pop

/* 80338800-80338828 333140 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__20J3DAnmFullLoader_v15FPC23J3DAnmTransformFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmTransform(J3DAnmTransformFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmTransform__20J3DAnmFullLoader_v15FPC23J3DAnmTransformFullData.s"
}
#pragma pop

/* 80338828-803388BC 333168 0094+00 2/2 0/0 0/0 .text
 * setAnmTransform__20J3DAnmFullLoader_v15FP19J3DAnmTransformFullPC23J3DAnmTransformFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmTransform(J3DAnmTransformFull* param_0,
                                               J3DAnmTransformFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80338828.s"
}
#pragma pop

/* 803388BC-803388E4 3331FC 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__20J3DAnmFullLoader_v15FPC19J3DAnmColorFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmColor(J3DAnmColorFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmColor__20J3DAnmFullLoader_v15FPC19J3DAnmColorFullData.s"
}
#pragma pop

/* 803388E4-803389B0 333224 00CC+00 2/2 0/0 0/0 .text
 * setAnmColor__20J3DAnmFullLoader_v15FP15J3DAnmColorFullPC19J3DAnmColorFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmColor(J3DAnmColorFull* param_0,
                                           J3DAnmColorFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setAnmColor__20J3DAnmFullLoader_v15FP15J3DAnmColorFullPC19J3DAnmColorFullData.s"
}
#pragma pop

/* 803389B0-803389D8 3332F0 0028+00 1/1 0/0 0/0 .text
 * readAnmTexPattern__20J3DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmTexPattern(J3DAnmTexPatternFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmTexPattern__20J3DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData.s"
}
#pragma pop

/* 803389D8-80338A7C 333318 00A4+00 2/2 0/0 0/0 .text
 * setAnmTexPattern__20J3DAnmFullLoader_v15FP16J3DAnmTexPatternPC24J3DAnmTexPatternFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmTexPattern(J3DAnmTexPattern* param_0,
                                                J3DAnmTexPatternFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_803389D8.s"
}
#pragma pop

/* 80338A7C-80338AA4 3333BC 0028+00 1/1 0/0 0/0 .text
 * readAnmVisibility__20J3DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmVisibility(J3DAnmVisibilityFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmVisibility__20J3DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData.s"
}
#pragma pop

/* 80338AA4-80338B20 3333E4 007C+00 2/2 0/0 0/0 .text
 * setAnmVisibility__20J3DAnmFullLoader_v15FP20J3DAnmVisibilityFullPC24J3DAnmVisibilityFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmVisibility(J3DAnmVisibilityFull* param_0,
                                                J3DAnmVisibilityFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80338AA4.s"
}
#pragma pop

/* 80338B20-80338B48 333460 0028+00 1/1 0/0 0/0 .text
 * readAnmCluster__20J3DAnmFullLoader_v15FPC21J3DAnmClusterFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmCluster(J3DAnmClusterFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmCluster__20J3DAnmFullLoader_v15FPC21J3DAnmClusterFullData.s"
}
#pragma pop

/* 80338B48-80338BB4 333488 006C+00 2/2 0/0 0/0 .text
 * setAnmCluster__20J3DAnmFullLoader_v15FP17J3DAnmClusterFullPC21J3DAnmClusterFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmCluster(J3DAnmClusterFull* param_0,
                                             J3DAnmClusterFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80338B48.s"
}
#pragma pop

/* 80338BB4-80338BDC 3334F4 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__20J3DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::readAnmVtxColor(J3DAnmVtxColorFullData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmVtxColor__20J3DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData.s"
}
#pragma pop

/* 80338BDC-80338D44 33351C 0168+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__20J3DAnmFullLoader_v15FP18J3DAnmVtxColorFullPC22J3DAnmVtxColorFullData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmFullLoader_v15::setAnmVtxColor(J3DAnmVtxColorFull* param_0,
                                              J3DAnmVtxColorFullData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80338BDC.s"
}
#pragma pop

/* 80338D44-80338E8C 333684 0148+00 2/1 0/0 0/0 .text            load__19J3DAnmKeyLoader_v15FPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::load(void const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/load__19J3DAnmKeyLoader_v15FPCv.s"
}
#pragma pop

/* 80338E8C-80338FEC 3337CC 0160+00 2/1 0/0 0/0 .text
 * setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setResource(J3DAnmBase* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv.s"
}
#pragma pop

/* 80338FEC-80339014 33392C 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__19J3DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmTransform(J3DAnmTransformKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmTransform__19J3DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData.s"
}
#pragma pop

/* 80339014-803390B0 333954 009C+00 2/2 0/0 0/0 .text
 * setAnmTransform__19J3DAnmKeyLoader_v15FP18J3DAnmTransformKeyPC22J3DAnmTransformKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmTransform(J3DAnmTransformKey* param_0,
                                              J3DAnmTransformKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80339014.s"
}
#pragma pop

/* 803390B0-803390D8 3339F0 0028+00 1/1 0/0 0/0 .text
 * readAnmTextureSRT__19J3DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmTextureSRT(J3DAnmTextureSRTKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmTextureSRT__19J3DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData.s"
}
#pragma pop

/* 803390D8-803392B0 333A18 01D8+00 2/2 0/0 0/0 .text
 * setAnmTextureSRT__19J3DAnmKeyLoader_v15FP19J3DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmTextureSRT(J3DAnmTextureSRTKey* param_0,
                                               J3DAnmTextureSRTKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_803390D8.s"
}
#pragma pop

/* 803392B0-803392D8 333BF0 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__19J3DAnmKeyLoader_v15FPC18J3DAnmColorKeyData   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmColor(J3DAnmColorKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmColor__19J3DAnmKeyLoader_v15FPC18J3DAnmColorKeyData.s"
}
#pragma pop

/* 803392D8-803393C4 333C18 00EC+00 2/2 0/0 0/0 .text
 * setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmColor(J3DAnmColorKey* param_0,
                                          J3DAnmColorKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setAnmColor__19J3DAnmKeyLoader_v15FP14J3DAnmColorKeyPC18J3DAnmColorKeyData.s"
}
#pragma pop

/* 803393C4-803393EC 333D04 0028+00 1/1 0/0 0/0 .text
 * readAnmCluster__19J3DAnmKeyLoader_v15FPC20J3DAnmClusterKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmCluster(J3DAnmClusterKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmCluster__19J3DAnmKeyLoader_v15FPC20J3DAnmClusterKeyData.s"
}
#pragma pop

/* 803393EC-80339458 333D2C 006C+00 2/2 0/0 0/0 .text
 * setAnmCluster__19J3DAnmKeyLoader_v15FP16J3DAnmClusterKeyPC20J3DAnmClusterKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmCluster(J3DAnmClusterKey* param_0,
                                            J3DAnmClusterKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_803393EC.s"
}
#pragma pop

/* 80339458-80339480 333D98 0028+00 1/1 0/0 0/0 .text
 * readAnmTevReg__19J3DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmTevReg(J3DAnmTevRegKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmTevReg__19J3DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData.s"
}
#pragma pop

/* 80339480-8033960C 333DC0 018C+00 2/2 0/0 0/0 .text
 * setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmTevReg(J3DAnmTevRegKey* param_0,
                                           J3DAnmTevRegKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/setAnmTevReg__19J3DAnmKeyLoader_v15FP15J3DAnmTevRegKeyPC19J3DAnmTevRegKeyData.s"
}
#pragma pop

/* 8033960C-80339634 333F4C 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__19J3DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::readAnmVtxColor(J3DAnmVtxColorKeyData const* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/readAnmVtxColor__19J3DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData.s"
}
#pragma pop

/* 80339634-8033979C 333F74 0168+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__19J3DAnmKeyLoader_v15FP17J3DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmKeyLoader_v15::setAnmVtxColor(J3DAnmVtxColorKey* param_0,
                                             J3DAnmVtxColorKeyData const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80339634.s"
}
#pragma pop

/* 8033979C-803397F8 3340DC 005C+00 1/0 0/0 0/0 .text            __dt__20J3DAnmVisibilityFullFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmVisibilityFull::~J3DAnmVisibilityFull() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__dt__20J3DAnmVisibilityFullFv.s"
}
#pragma pop

/* 803397F8-80339800 334138 0008+00 1/0 0/0 0/0 .text            getKind__20J3DAnmVisibilityFullCFv
 */
s32 J3DAnmVisibilityFull::getKind() const {
    return 6;
}

/* 80339800-80339848 334140 0048+00 1/0 0/0 0/0 .text            __dt__12J3DAnmLoaderFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmLoader::~J3DAnmLoader() {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/__dt__12J3DAnmLoaderFv.s"
}
#pragma pop

/* 80339848-80339860 334188 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<21J3DAnmClusterKeyTable>__FPCvPCv      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80339848(void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80339848.s"
}
#pragma pop

/* 80339860-80339878 3341A0 0018+00 1/1 0/0 0/0 .text
 * JSUConvertOffsetToPtr<22J3DAnmClusterFullTable>__FPCvPCv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80339860(void const* param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphLoader/J3DAnmLoader/func_80339860.s"
}
#pragma pop

/* 803A2130-803A2170 02E790 003D+03 6/6 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_803A2130 =
    "J3DAnmLoader: this is not a J3D Binary.\n";
SECTION_DEAD static char const* const stringBase_803A2159 = "Unknown data block\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A216D = "\0\0";
#pragma pop
