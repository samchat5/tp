//
// Generated By: dol2asm
// Translation Unit: JAIStream
//

#include "JSystem/JAudio2/JAIStream.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JASSoundParams {};

template <typename A0>
struct JASMemPool {};
/* JASMemPool<JAISoundChild> */
struct JASMemPool__template1 {
    /* 802A1268 */ void func_802A1268();
};

struct JASGenericMemPool {
    /* 80290848 */ JASGenericMemPool();
    /* 80290948 */ void alloc(u32);
    /* 80290994 */ void free(void*, u32);
};

struct JASAramStream {
    /* 802963A8 */ JASAramStream();
    /* 8029649C */ void init(u32, u32, void (*)(u32, JASAramStream*, void*), void*);
    /* 8029655C */ void prepare(s32, int);
    /* 80296618 */ void start();
    /* 8029664C */ void stop(u16);
    /* 80296684 */ void pause(bool);
    /* 802966CC */ void cancel();
};

struct JAIStreamMgr {};

struct JAISoundActivity {};

struct JAISoundID {};

template <typename A0>
struct JAISoundStrategyMgr {};
/* JAISoundStrategyMgr<JAIStream> */
struct JAISoundStrategyMgr__template2 {};

struct JAIAudience {};

struct JAIStream {
    /* 802A3104 */ JAIStream(JAIStreamMgr*, JAISoundStrategyMgr<JAIStream>*);
    /* 802A319C */ void JAIStreamMgr_startID_(JAISoundID, s32, JGeometry::TVec3<f32> const*,
                                              JAIAudience*, int);
    /* 802A3230 */ void prepare_prepareStream_();
    /* 802A33F4 */ void prepare_();
    /* 802A3498 */ void prepare_startStream_();
    /* 802A34E4 */ void JAIStreamMgr_mixOut_(JASSoundParams const&, JAISoundActivity);
    /* 802A3720 */ void die_JAIStream_();
    /* 802A37FC */ void JAISound_tryDie_();
    /* 802A388C */ void JAIStreamMgr_calc_();
    /* 802A3948 */ s32 getNumChild() const;
    /* 802A3950 */ void getChild(int);
    /* 802A3A24 */ void releaseChild(int);
    /* 802A3ABC */ bool getTrack();
    /* 802A3AC4 */ bool getChildTrack(int);
    /* 802A3ACC */ void asStream();
    /* 802A3AD0 */ bool getTempoMgr();
};

struct JAISoundParams {
    /* 802A2280 */ void mixOutAll(JASSoundParams const&, JASSoundParams*, f32);
};

struct JAISoundChild {
    /* 802A2AB0 */ void init();
    /* 802A2B7C */ void calc();
};

struct JAISound {
    /* 802A22F8 */ JAISound();
    /* 802A2328 */ void start_JAISound_(JAISoundID, JGeometry::TVec3<f32> const*, JAIAudience*);
    /* 802A25D8 */ bool asSe();
    /* 802A25E0 */ bool asSeq();
    /* 802A25F0 */ void die_JAISound_();
    /* 802A266C */ void increasePrepareCount_JAISound_();
    /* 802A26B8 */ void calc_JAISound_();
};

//
// Forward References:
//

extern "C" static void JAIStream_JASAramStreamCallback___FUlP13JASAramStreamPv();
extern "C" void func_802A3104();
extern "C" void func_802A319C();
extern "C" void prepare_prepareStream___9JAIStreamFv();
extern "C" void prepare___9JAIStreamFv();
extern "C" void prepare_startStream___9JAIStreamFv();
extern "C" void JAIStreamMgr_mixOut___9JAIStreamFRC14JASSoundParams16JAISoundActivity();
extern "C" void die_JAIStream___9JAIStreamFv();
extern "C" void JAISound_tryDie___9JAIStreamFv();
extern "C" void JAIStreamMgr_calc___9JAIStreamFv();
extern "C" s32 getNumChild__9JAIStreamCFv();
extern "C" void getChild__9JAIStreamFi();
extern "C" void releaseChild__9JAIStreamFi();
extern "C" bool getTrack__9JAIStreamFv();
extern "C" bool getChildTrack__9JAIStreamFi();
extern "C" void asStream__9JAIStreamFv();
extern "C" bool getTempoMgr__9JAIStreamFv();

//
// External References:
//

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void __ct__13JASAramStreamFv();
extern "C" void init__13JASAramStreamFUlUlPFUlP13JASAramStreamPv_vPv();
extern "C" void prepare__13JASAramStreamFli();
extern "C" void start__13JASAramStreamFv();
extern "C" void stop__13JASAramStreamFUs();
extern "C" void pause__13JASAramStreamFb();
extern "C" void cancel__13JASAramStreamFv();
extern "C" void func_802A1268();
extern "C" void mixOutAll__14JAISoundParamsFRC14JASSoundParamsP14JASSoundParamsf();
extern "C" void __ct__8JAISoundFv();
extern "C" void func_802A2328();
extern "C" bool asSe__8JAISoundFv();
extern "C" bool asSeq__8JAISoundFv();
extern "C" void die_JAISound___8JAISoundFv();
extern "C" void increasePrepareCount_JAISound___8JAISoundFv();
extern "C" void calc_JAISound___8JAISoundFv();
extern "C" void init__13JAISoundChildFv();
extern "C" void calc__13JAISoundChildFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __register_global_object();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u8 data_804340B0[16];
extern "C" extern u8 data_80451318[8];

//
// Declarations:
//

/* 802A30D4-802A3104 29DA14 0030+00 1/1 0/0 0/0 .text
 * JAIStream_JASAramStreamCallback___FUlP13JASAramStreamPv      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void JAIStream_JASAramStreamCallback_(u32 param_0, JASAramStream* param_1,
                                                 void* param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/JAIStream_JASAramStreamCallback___FUlP13JASAramStreamPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C99D8-803C9A08 026AF8 0030+00 1/1 1/1 0/0 .data            __vt__9JAIStream */
SECTION_DATA extern void* __vt__9JAIStream[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getNumChild__9JAIStreamCFv,
    (void*)getChild__9JAIStreamFi,
    (void*)releaseChild__9JAIStreamFi,
    (void*)asSe__8JAISoundFv,
    (void*)asSeq__8JAISoundFv,
    (void*)asStream__9JAIStreamFv,
    (void*)getTrack__9JAIStreamFv,
    (void*)getChildTrack__9JAIStreamFi,
    (void*)getTempoMgr__9JAIStreamFv,
    (void*)JAISound_tryDie___9JAIStreamFv,
};

/* 802A3104-802A319C 29DA44 0098+00 0/0 1/1 0/0 .text
 * __ct__9JAIStreamFP12JAIStreamMgrP31JAISoundStrategyMgr<9JAIStream> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAIStream::JAIStream(JAIStreamMgr* param_0, JAISoundStrategyMgr<JAIStream>* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/func_802A3104.s"
}
#pragma pop

/* 802A319C-802A3230 29DADC 0094+00 0/0 1/1 0/0 .text
 * JAIStreamMgr_startID___9JAIStreamF10JAISoundIDlPCQ29JGeometry8TVec3<f>P11JAIAudiencei */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::JAIStreamMgr_startID_(JAISoundID param_0, s32 param_1,
                                          JGeometry::TVec3<f32> const* param_2,
                                          JAIAudience* param_3, int param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/func_802A319C.s"
}
#pragma pop

/* 802A3230-802A33F4 29DB70 01C4+00 1/1 0/0 0/0 .text prepare_prepareStream___9JAIStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::prepare_prepareStream_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/prepare_prepareStream___9JAIStreamFv.s"
}
#pragma pop

/* 802A33F4-802A3498 29DD34 00A4+00 1/1 0/0 0/0 .text            prepare___9JAIStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::prepare_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/prepare___9JAIStreamFv.s"
}
#pragma pop

/* 802A3498-802A34E4 29DDD8 004C+00 1/1 0/0 0/0 .text            prepare_startStream___9JAIStreamFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::prepare_startStream_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/prepare_startStream___9JAIStreamFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804557F0-804557F4 003DF0 0004+00 2/2 0/0 0/0 .sdata2          @864 */
SECTION_SDATA2 static f32 lit_864 = 1.0f;

/* 804557F4-804557F8 003DF4 0004+00 2/2 0/0 0/0 .sdata2          @865 */
SECTION_SDATA2 static u8 lit_865[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804557F8-80455800 003DF8 0004+04 2/2 0/0 0/0 .sdata2          @866 */
SECTION_SDATA2 static f32 lit_866[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802A34E4-802A3720 29DE24 023C+00 0/0 1/1 0/0 .text
 * JAIStreamMgr_mixOut___9JAIStreamFRC14JASSoundParams16JAISoundActivity */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::JAIStreamMgr_mixOut_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/JAIStreamMgr_mixOut___9JAIStreamFRC14JASSoundParams16JAISoundActivity.s"
}
#pragma pop

/* ############################################################################################## */
/* 804340E0-804340F0 060E00 000C+04 3/3 0/0 0/0 .bss             @881 */
static u8 lit_881[12 + 4 /* padding */];

/* 802A3720-802A37FC 29E060 00DC+00 1/1 0/0 0/0 .text            die_JAIStream___9JAIStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::die_JAIStream_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/die_JAIStream___9JAIStreamFv.s"
}
#pragma pop

/* 802A37FC-802A388C 29E13C 0090+00 1/0 0/0 0/0 .text            JAISound_tryDie___9JAIStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::JAISound_tryDie_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/JAISound_tryDie___9JAIStreamFv.s"
}
#pragma pop

/* 802A388C-802A3948 29E1CC 00BC+00 0/0 1/1 0/0 .text            JAIStreamMgr_calc___9JAIStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::JAIStreamMgr_calc_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/JAIStreamMgr_calc___9JAIStreamFv.s"
}
#pragma pop

/* 802A3948-802A3950 29E288 0008+00 1/0 0/0 0/0 .text            getNumChild__9JAIStreamCFv */
s32 JAIStream::getNumChild() const {
    return 6;
}

/* 802A3950-802A3A24 29E290 00D4+00 1/0 0/0 0/0 .text            getChild__9JAIStreamFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::getChild(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/getChild__9JAIStreamFi.s"
}
#pragma pop

/* 802A3A24-802A3ABC 29E364 0098+00 1/0 0/0 0/0 .text            releaseChild__9JAIStreamFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAIStream::releaseChild(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAIStream/releaseChild__9JAIStreamFi.s"
}
#pragma pop

/* 802A3ABC-802A3AC4 29E3FC 0008+00 1/0 0/0 0/0 .text            getTrack__9JAIStreamFv */
bool JAIStream::getTrack() {
    return false;
}

/* 802A3AC4-802A3ACC 29E404 0008+00 1/0 0/0 0/0 .text            getChildTrack__9JAIStreamFi */
bool JAIStream::getChildTrack(int param_0) {
    return false;
}

/* 802A3ACC-802A3AD0 29E40C 0004+00 1/0 0/0 0/0 .text            asStream__9JAIStreamFv */
void JAIStream::asStream() {
    /* empty function */
}

/* 802A3AD0-802A3AD8 29E410 0008+00 1/0 0/0 0/0 .text            getTempoMgr__9JAIStreamFv */
bool JAIStream::getTempoMgr() {
    return false;
}
