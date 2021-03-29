//
// Generated By: dol2asm
// Translation Unit: JASChannel
//

#include "JSystem/JAudio2/JASChannel.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASWaveInfo {};

struct JASOscillator {
    struct Data {};

    struct EffectParams {};

    /* 8029BE94 */ JASOscillator();
    /* 8029BEC4 */ void initStart(JASOscillator::Data const*);
    /* 8029BF68 */ void incCounter(f32);
    /* 8029BFC8 */ void getValue() const;
    /* 8029BFE4 */ void release();
    /* 8029C0E0 */ void update();
};

template <typename A0>
struct JASMemPool_MultiThreaded {};
/* JASMemPool_MultiThreaded<JASChannel> */
struct JASMemPool_MultiThreaded__template2 {
    /* 802978DC */ ~JASMemPool_MultiThreaded__template2();
};

struct JASLfo {
    /* 8029BD14 */ JASLfo();
    /* 8029BD44 */ void getValue() const;
    /* 8029BDD8 */ void incCounter(f32);
    /* 8029BE2C */ void resetCounter();
};

struct JASGenericMemPool {
    /* 80290848 */ JASGenericMemPool();
    /* 80290994 */ void free(void*, u32);
};

struct JASDsp {
    struct TChannel {
        /* 8029DD8C */ void setWaveInfo(JASWaveInfo const&, u32, u32);
        /* 8029DEAC */ void setOscInfo(u32);
        /* 8029DEC4 */ void initAutoMixer();
        /* 8029DEF0 */ void setAutoMixer(u16, u8, u8, u8, u8);
        /* 8029DF1C */ void setPitch(u16);
        /* 8029DF34 */ void setMixerInitVolume(u8, s16);
        /* 8029DF54 */ void setMixerVolume(u8, s16);
        /* 8029DF80 */ void setPauseFlag(u8);
        /* 8029E09C */ void setBusConnect(u8, u8);
    };
};

struct JASDriver {
    /* 8029C9E8 */ void getDacRate();
    /* 8029E150 */ void getChannelLevel_dsp();
    /* 8029E180 */ void getOutputMode();
};

struct JASDSPChannel {
    /* 8029D320 */ void free();
    /* 8029D330 */ void start();
    /* 8029D340 */ void drop();
    /* 8029D44C */ void alloc(u8, s32 (*)(u32, JASDsp::TChannel*, void*), void*);
    /* 8029D4BC */ void allocForce(u8, s32 (*)(u32, JASDsp::TChannel*, void*), void*);
    /* 8029D534 */ void setPriority(u8);
};

struct JASChannel {
    struct PanVector {};

    /* 8029A800 */ JASChannel(void (*)(u32, JASChannel*, JASDsp::TChannel*, void*), void*);
    /* 8029A918 */ ~JASChannel();
    /* 8029A9F0 */ void play();
    /* 8029AA60 */ void playForce();
    /* 8029AAD0 */ void release(u16);
    /* 8029AB64 */ void setOscInit(u32, JASOscillator::Data const*);
    /* 8029AB98 */ void setMixConfig(u32, u16);
    /* 8029ABA8 */ void calcEffect(JASChannel::PanVector const*);
    /* 8029ABC0 */ void calcPan(JASChannel::PanVector const*);
    /* 8029ABEC */ void effectOsc(u32, JASOscillator::EffectParams*);
    /* 8029ACD4 */ void setKeySweepTarget(s32, u32);
    /* 8029AD38 */ void updateEffectorParam(JASDsp::TChannel*, u16*,
                                            JASOscillator::EffectParams const&);
    /* 8029AF78 */ void dspUpdateCallback(u32, JASDsp::TChannel*, void*);
    /* 8029B004 */ void initialUpdateDSPChannel(JASDsp::TChannel*);
    /* 8029B324 */ void updateDSPChannel(JASDsp::TChannel*);
    /* 8029B6A0 */ void updateAutoMixer(JASDsp::TChannel*, f32, f32, f32, f32);
    /* 8029B7D8 */ void updateMixer(f32, f32, f32, f32, u16*);
    /* 8029BBFC */ void free();
    /* 8029BC0C */ void initBankDisposeMsgQueue();
    /* 8029BC48 */ void receiveBankDisposeMsg();
    /* 8029BCC0 */ void checkBankDispose() const;
};

struct JASCalc {
    /* 8028F578 */ void pow2(f32);
};

//
// Forward References:
//

extern "C" void __ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv();
extern "C" void __dt__10JASChannelFv();
extern "C" void play__10JASChannelFv();
extern "C" void playForce__10JASChannelFv();
extern "C" void release__10JASChannelFUs();
extern "C" void setOscInit__10JASChannelFUlPCQ213JASOscillator4Data();
extern "C" void setMixConfig__10JASChannelFUlUs();
extern "C" void calcEffect__10JASChannelFPCQ210JASChannel9PanVector();
extern "C" void calcPan__10JASChannelFPCQ210JASChannel9PanVector();
extern "C" void effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams();
extern "C" void setKeySweepTarget__10JASChannelFlUl();
extern "C" void
updateEffectorParam__10JASChannelFPQ26JASDsp8TChannelPUsRCQ213JASOscillator12EffectParams();
extern "C" void dspUpdateCallback__10JASChannelFUlPQ26JASDsp8TChannelPv();
extern "C" void initialUpdateDSPChannel__10JASChannelFPQ26JASDsp8TChannel();
extern "C" void updateDSPChannel__10JASChannelFPQ26JASDsp8TChannel();
extern "C" void updateAutoMixer__10JASChannelFPQ26JASDsp8TChannelffff();
extern "C" void updateMixer__10JASChannelFffffPUs();
extern "C" void free__10JASChannelFv();
extern "C" void initBankDisposeMsgQueue__10JASChannelFv();
extern "C" void receiveBankDisposeMsg__10JASChannelFv();
extern "C" void checkBankDispose__10JASChannelCFv();
extern "C" extern u8 sBankDisposeList__10JASChannel[64];
extern "C" extern u8 lit_556[12 + 4 /* padding */];

//
// External References:
//

extern "C" void pow2__7JASCalcFf();
extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void func_802978DC();
extern "C" void __ct__6JASLfoFv();
extern "C" void getValue__6JASLfoCFv();
extern "C" void incCounter__6JASLfoFf();
extern "C" void resetCounter__6JASLfoFv();
extern "C" void __ct__13JASOscillatorFv();
extern "C" void initStart__13JASOscillatorFPCQ213JASOscillator4Data();
extern "C" void incCounter__13JASOscillatorFf();
extern "C" void getValue__13JASOscillatorCFv();
extern "C" void release__13JASOscillatorFv();
extern "C" void update__13JASOscillatorFv();
extern "C" void getDacRate__9JASDriverFv();
extern "C" void free__13JASDSPChannelFv();
extern "C" void start__13JASDSPChannelFv();
extern "C" void drop__13JASDSPChannelFv();
extern "C" void alloc__13JASDSPChannelFUcPFUlPQ26JASDsp8TChannelPv_lPv();
extern "C" void allocForce__13JASDSPChannelFUcPFUlPQ26JASDsp8TChannelPv_lPv();
extern "C" void setPriority__13JASDSPChannelFUc();
extern "C" void setWaveInfo__Q26JASDsp8TChannelFRC11JASWaveInfoUlUl();
extern "C" void setOscInfo__Q26JASDsp8TChannelFUl();
extern "C" void initAutoMixer__Q26JASDsp8TChannelFv();
extern "C" void setAutoMixer__Q26JASDsp8TChannelFUsUcUcUcUc();
extern "C" void setPitch__Q26JASDsp8TChannelFUs();
extern "C" void setMixerInitVolume__Q26JASDsp8TChannelFUcs();
extern "C" void setMixerVolume__Q26JASDsp8TChannelFUcs();
extern "C" void setPauseFlag__Q26JASDsp8TChannelFUc();
extern "C" void setBusConnect__Q26JASDsp8TChannelFUcUc();
extern "C" void getChannelLevel_dsp__9JASDriverFv();
extern "C" void getOutputMode__9JASDriverFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSInitMessageQueue();
extern "C" void OSReceiveMessage();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 data_80431B34[16 + 4 /* padding */];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 one__11JASWaveInfo[1 + 1 /* padding */];
extern "C" extern u8 struct_80451260[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 80455680-80455684 0004+00 s=6 e=0 z=0  None .sdata2    @544 */
SECTION_SDATA2 static f32 lit_544 = 1.0f;

/* 80455684-80455688 0004+00 s=7 e=0 z=0  None .sdata2    @545 */
SECTION_SDATA2 static u8 lit_545[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455688-80455690 0004+04 s=6 e=0 z=0  None .sdata2    @546 */
SECTION_SDATA2 static f32 lit_546[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 8029A800-8029A918 0118+00 s=0 e=3 z=0  None .text
 * __ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASChannel::JASChannel(void (*)(u32, JASChannel*, JASDsp::TChannel*, void*), void* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/__ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431B90-80431BB0 0020+00 s=2 e=0 z=0  None .bss       sBankDisposeMsgQ__10JASChannel */
static u8 sBankDisposeMsgQ__10JASChannel[32];

/* 80431BB0-80431BF0 0040+00 s=1 e=0 z=0  None .bss       sBankDisposeMsg__10JASChannel */
static u8 sBankDisposeMsg__10JASChannel[64];

/* 80431BF0-80431C30 0040+00 s=2 e=3 z=0  None .bss       sBankDisposeList__10JASChannel */
u8 sBankDisposeList__10JASChannel[64];

/* 80431C30-80431C40 000C+04 s=1 e=2 z=0  None .bss       @556 */
u8 lit_556[12 + 4 /* padding */];

/* 8029A918-8029A9F0 00D8+00 s=5 e=0 z=0  None .text      __dt__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASChannel::~JASChannel() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/__dt__10JASChannelFv.s"
}
#pragma pop

/* 8029A9F0-8029AA60 0070+00 s=0 e=2 z=0  None .text      play__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::play() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/play__10JASChannelFv.s"
}
#pragma pop

/* 8029AA60-8029AAD0 0070+00 s=0 e=1 z=0  None .text      playForce__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::playForce() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/playForce__10JASChannelFv.s"
}
#pragma pop

/* 8029AAD0-8029AB64 0094+00 s=0 e=4 z=0  None .text      release__10JASChannelFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::release(u16 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/release__10JASChannelFUs.s"
}
#pragma pop

/* 8029AB64-8029AB98 0034+00 s=0 e=4 z=0  None .text
 * setOscInit__10JASChannelFUlPCQ213JASOscillator4Data          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::setOscInit(u32 param_0, JASOscillator::Data const* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/setOscInit__10JASChannelFUlPCQ213JASOscillator4Data.s"
}
#pragma pop

/* 8029AB98-8029ABA8 0010+00 s=0 e=2 z=0  None .text      setMixConfig__10JASChannelFUlUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::setMixConfig(u32 param_0, u16 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/setMixConfig__10JASChannelFUlUs.s"
}
#pragma pop

/* 8029ABA8-8029ABC0 0018+00 s=1 e=0 z=0  None .text
 * calcEffect__10JASChannelFPCQ210JASChannel9PanVector          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::calcEffect(JASChannel::PanVector const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/calcEffect__10JASChannelFPCQ210JASChannel9PanVector.s"
}
#pragma pop

/* 8029ABC0-8029ABEC 002C+00 s=1 e=0 z=0  None .text
 * calcPan__10JASChannelFPCQ210JASChannel9PanVector             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::calcPan(JASChannel::PanVector const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/calcPan__10JASChannelFPCQ210JASChannel9PanVector.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C7848-803C7864 001C+00 s=1 e=0 z=0  None .data      @662 */
SECTION_DATA static void* lit_662[7] = {
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0x68),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0x58),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0x78),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0x94),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0xA4),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0xB4),
    (void*)(((char*)effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams) + 0xC4),
};

/* 80455690-80455698 0008+00 s=1 e=0 z=0  None .sdata2    @661 */
SECTION_SDATA2 static f64 lit_661 = 0.5;

/* 8029ABEC-8029ACD4 00E8+00 s=3 e=0 z=0  None .text
 * effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::effectOsc(u32 param_0, JASOscillator::EffectParams* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/effectOsc__10JASChannelFUlPQ213JASOscillator12EffectParams.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455698-804556A0 0008+00 s=3 e=0 z=0  None .sdata2    @685 */
SECTION_SDATA2 static f64 lit_685 = 4503601774854144.0 /* cast s32 to float */;

/* 8029ACD4-8029AD38 0064+00 s=0 e=1 z=0  None .text      setKeySweepTarget__10JASChannelFlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::setKeySweepTarget(s32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/setKeySweepTarget__10JASChannelFlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804556A0-804556A8 0004+04 s=1 e=0 z=0  None .sdata2    @711 */
SECTION_SDATA2 static f32 lit_711[1 + 1 /* padding */] = {
    127.0f,
    /* padding */
    0.0f,
};

/* 804556A8-804556B0 0008+00 s=4 e=0 z=0  None .sdata2    @714 */
SECTION_SDATA2 static f64 lit_714 = 4503599627370496.0 /* cast u32 to float */;

/* 8029AD38-8029AF78 0240+00 s=2 e=0 z=0  None .text
 * updateEffectorParam__10JASChannelFPQ26JASDsp8TChannelPUsRCQ213JASOscillator12EffectParams */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::updateEffectorParam(JASDsp::TChannel* param_0, u16* param_1,
                                         JASOscillator::EffectParams const& param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/func_8029AD38.s"
}
#pragma pop

/* 8029AF78-8029B004 008C+00 s=2 e=0 z=0  None .text
 * dspUpdateCallback__10JASChannelFUlPQ26JASDsp8TChannelPv      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::dspUpdateCallback(u32 param_0, JASDsp::TChannel* param_1, void* param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/dspUpdateCallback__10JASChannelFUlPQ26JASDsp8TChannelPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804556B0-804556B4 0004+00 s=2 e=0 z=0  None .sdata2    @775 */
SECTION_SDATA2 static f32 lit_775 = 12.0f;

/* 804556B4-804556B8 0004+00 s=2 e=0 z=0  None .sdata2    @776 */
SECTION_SDATA2 static f32 lit_776 = 4096.0f;

/* 8029B004-8029B324 0320+00 s=1 e=0 z=0  None .text
 * initialUpdateDSPChannel__10JASChannelFPQ26JASDsp8TChannel    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::initialUpdateDSPChannel(JASDsp::TChannel* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/initialUpdateDSPChannel__10JASChannelFPQ26JASDsp8TChannel.s"
}
#pragma pop

/* ############################################################################################## */
/* 804556B8-804556BC 0004+00 s=1 e=0 z=0  None .sdata2    @832 */
SECTION_SDATA2 static f32 lit_832 = 32028.5f;

/* 804556BC-804556C0 0004+00 s=1 e=0 z=0  None .sdata2    @833 */
SECTION_SDATA2 static f32 lit_833 = 48000.0f;

/* 8029B324-8029B6A0 037C+00 s=1 e=0 z=0  None .text
 * updateDSPChannel__10JASChannelFPQ26JASDsp8TChannel           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::updateDSPChannel(JASDsp::TChannel* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/updateDSPChannel__10JASChannelFPQ26JASDsp8TChannel.s"
}
#pragma pop

/* ############################################################################################## */
/* 804556C0-804556C4 0004+00 s=1 e=0 z=0  None .sdata2    @846 */
SECTION_SDATA2 static f32 lit_846 = 0.7070000171661377f;

/* 804556C4-804556C8 0004+00 s=1 e=0 z=0  None .sdata2    @847 */
SECTION_SDATA2 static f32 lit_847 = 127.5f;

/* 8029B6A0-8029B7D8 0138+00 s=1 e=0 z=0  None .text
 * updateAutoMixer__10JASChannelFPQ26JASDsp8TChannelffff        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::updateAutoMixer(JASDsp::TChannel* param_0, f32 param_1, f32 param_2,
                                     f32 param_3, f32 param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/updateAutoMixer__10JASChannelFPQ26JASDsp8TChannelffff.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C7864-803C7884 0020+00 s=1 e=0 z=0  None .data      @977 */
SECTION_DATA static void* lit_977[8] = {
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x210),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x1E4),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x1EC),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x1F4),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x210),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x1FC),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x204),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x20C),
};

/* 803C7884-803C78A8 0020+04 s=1 e=0 z=0  None .data      @974 */
SECTION_DATA static void* lit_974[8 + 1 /* padding */] = {
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x114),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0xE8),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0xF0),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0xF8),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x114),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x100),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x108),
    (void*)(((char*)updateMixer__10JASChannelFffffPUs) + 0x110),
    /* padding */
    NULL,
};

/* 804556C8-804556CC 0004+00 s=1 e=0 z=0  None .sdata2    @969 */
SECTION_SDATA2 static f32 lit_969 = -1303.7972412109375f;

/* 804556CC-804556D0 0004+00 s=1 e=0 z=0  None .sdata2    @970 */
SECTION_SDATA2 static f32 lit_970 = 1303.7972412109375f;

/* 804556D0-804556D4 0004+00 s=1 e=0 z=0  None .sdata2    @971 */
SECTION_SDATA2 static f32 lit_971 = 3.1415927410125732f;

/* 804556D4-804556D8 0004+00 s=1 e=0 z=0  None .sdata2    @972 */
SECTION_SDATA2 static f32 lit_972 = 0.326119989156723f;

/* 804556D8-804556E0 0004+04 s=1 e=0 z=0  None .sdata2    @973 */
SECTION_SDATA2 static f32 lit_973[1 + 1 /* padding */] = {
    0.34775999188423157f,
    /* padding */
    0.0f,
};

/* 8029B7D8-8029BBFC 0424+00 s=3 e=0 z=0  None .text      updateMixer__10JASChannelFffffPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::updateMixer(f32 param_0, f32 param_1, f32 param_2, f32 param_3, u16* param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/updateMixer__10JASChannelFffffPUs.s"
}
#pragma pop

/* 8029BBFC-8029BC0C 0010+00 s=0 e=3 z=0  None .text      free__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::free() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/free__10JASChannelFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451298-804512A0 0004+04 s=3 e=0 z=0  None .sbss      sBankDisposeListSize__10JASChannel */
static u8 sBankDisposeListSize__10JASChannel[4 + 4 /* padding */];

/* 8029BC0C-8029BC48 003C+00 s=0 e=1 z=0  None .text      initBankDisposeMsgQueue__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::initBankDisposeMsgQueue() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/initBankDisposeMsgQueue__10JASChannelFv.s"
}
#pragma pop

/* 8029BC48-8029BCC0 0078+00 s=0 e=1 z=0  None .text      receiveBankDisposeMsg__10JASChannelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::receiveBankDisposeMsg() {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/receiveBankDisposeMsg__10JASChannelFv.s"
}
#pragma pop

/* 8029BCC0-8029BD14 0054+00 s=2 e=0 z=0  None .text      checkBankDispose__10JASChannelCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASChannel::checkBankDispose() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASChannel/checkBankDispose__10JASChannelCFv.s"
}
#pragma pop
