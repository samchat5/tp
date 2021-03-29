//
// Generated By: dol2asm
// Translation Unit: Z2SoundHandles
//

#include "Z2AudioLib/Z2SoundHandles.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAISoundID {};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct Z2SoundHandles {
    /* 802AB07C */ Z2SoundHandles();
    /* 802AB0B4 */ ~Z2SoundHandles();
    /* 802AB118 */ void initHandlesPool(u8);
    /* 802AB120 */ void deleteHandlesPool();
    /* 802AB254 */ void getHandleSoundID(JAISoundID);
    /* 802AB2A0 */ void getHandleUserData(u32);
    /* 802AB2D8 */ void getFreeHandle();
    /* 802AB3D0 */ void getLowPrioSound(JAISoundID);
    /* 802AB4A0 */ void stopAllSounds(u32);
    /* 802AB504 */ void isActive() const;
    /* 802AB538 */ void setPos(JGeometry::TVec3<f32> const&);
};

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JASMemPool {};
/* JASMemPool<Z2SoundHandlePool> */
struct JASMemPool__template4 {
    /* 802AB200 */ ~JASMemPool__template4();
};

struct JASGenericMemPool {
    /* 80290848 */ JASGenericMemPool();
    /* 80290860 */ ~JASGenericMemPool();
    /* 80290948 */ void alloc(u32);
    /* 80290994 */ void free(void*, u32);
};

struct JAISoundHandle {
    /* 802A2184 */ void releaseSound();
};

struct JAISound {
    /* 802A24DC */ void stop(u32);
};

//
// Forward References:
//

extern "C" void __ct__14Z2SoundHandlesFv();
extern "C" void __dt__14Z2SoundHandlesFv();
extern "C" void initHandlesPool__14Z2SoundHandlesFUc();
extern "C" void deleteHandlesPool__14Z2SoundHandlesFv();
extern "C" void func_802AB200();
extern "C" void getHandleSoundID__14Z2SoundHandlesF10JAISoundID();
extern "C" void getHandleUserData__14Z2SoundHandlesFUl();
extern "C" void getFreeHandle__14Z2SoundHandlesFv();
extern "C" void getLowPrioSound__14Z2SoundHandlesF10JAISoundID();
extern "C" void stopAllSounds__14Z2SoundHandlesFUl();
extern "C" void isActive__14Z2SoundHandlesCFv();
extern "C" void func_802AB538();
extern "C" extern u8 data_804341C4[16 + 4 /* padding */];

//
// External References:
//

void operator delete(void*);

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void __dt__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void releaseSound__14JAISoundHandleFv();
extern "C" void stop__8JAISoundFUl();
extern "C" void __dl__FPv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void __register_global_object();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" extern u8 data_80450B5C[4];
extern "C" extern u8 data_80451348[8];

//
// Declarations:
//

/* 802AB07C-802AB0B4 0038+00 s=0 e=1 z=0  None .text      __ct__14Z2SoundHandlesFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundHandles::Z2SoundHandles() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/__ct__14Z2SoundHandlesFv.s"
}
#pragma pop

/* 802AB0B4-802AB118 0064+00 s=0 e=1 z=0  None .text      __dt__14Z2SoundHandlesFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundHandles::~Z2SoundHandles() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/__dt__14Z2SoundHandlesFv.s"
}
#pragma pop

/* 802AB118-802AB120 0008+00 s=0 e=1 z=0  None .text      initHandlesPool__14Z2SoundHandlesFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::initHandlesPool(u8 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/initHandlesPool__14Z2SoundHandlesFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 804341B8-804341C4 000C+00 s=3 e=0 z=0  None .bss       @632 */
static u8 lit_632[12];

/* 804341C4-804341D8 0010+04 s=3 e=1 z=0  None .bss
 * memPool_$localstatic3$getMemPool___39JASPoolAllocObject<17Z2SoundHandlePool>Fv */
u8 data_804341C4[16 + 4 /* padding */];

/* 802AB120-802AB200 00E0+00 s=1 e=1 z=0  None .text      deleteHandlesPool__14Z2SoundHandlesFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::deleteHandlesPool() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/deleteHandlesPool__14Z2SoundHandlesFv.s"
}
#pragma pop

/* 802AB200-802AB254 0054+00 s=3 e=1 z=0  None .text      __dt__31JASMemPool<17Z2SoundHandlePool>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASMemPool__template4::~JASMemPool__template4() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/func_802AB200.s"
}
#pragma pop

/* 802AB254-802AB2A0 004C+00 s=0 e=6 z=0  None .text
 * getHandleSoundID__14Z2SoundHandlesF10JAISoundID              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::getHandleSoundID(JAISoundID param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getHandleSoundID__14Z2SoundHandlesF10JAISoundID.s"
}
#pragma pop

/* 802AB2A0-802AB2D8 0038+00 s=0 e=1 z=0  None .text      getHandleUserData__14Z2SoundHandlesFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::getHandleUserData(u32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getHandleUserData__14Z2SoundHandlesFUl.s"
}
#pragma pop

/* 802AB2D8-802AB3D0 00F8+00 s=0 e=3 z=0  None .text      getFreeHandle__14Z2SoundHandlesFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::getFreeHandle() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getFreeHandle__14Z2SoundHandlesFv.s"
}
#pragma pop

/* 802AB3D0-802AB4A0 00D0+00 s=0 e=2 z=0  None .text
 * getLowPrioSound__14Z2SoundHandlesF10JAISoundID               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::getLowPrioSound(JAISoundID param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/getLowPrioSound__14Z2SoundHandlesF10JAISoundID.s"
}
#pragma pop

/* 802AB4A0-802AB504 0064+00 s=0 e=1 z=0  None .text      stopAllSounds__14Z2SoundHandlesFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::stopAllSounds(u32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/stopAllSounds__14Z2SoundHandlesFUl.s"
}
#pragma pop

/* 802AB504-802AB538 0034+00 s=0 e=1 z=0  None .text      isActive__14Z2SoundHandlesCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::isActive() const {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/isActive__14Z2SoundHandlesCFv.s"
}
#pragma pop

/* 802AB538-802AB64C 0114+00 s=0 e=1 z=0  None .text
 * setPos__14Z2SoundHandlesFRCQ29JGeometry8TVec3<f>             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundHandles::setPos(JGeometry::TVec3<f32> const& param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundHandles/func_802AB538.s"
}
#pragma pop
