//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_audio
//

#include "m_Do/m_Do_audio.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {
    /* 802CE500 */ void free(void*, JKRHeap*);
    /* 802CE7B0 */ void changeGroupID(u8);
};

struct mDoDvdThd_toMainRam_c {
    /* 80016394 */ void create(char const*, u8, JKRHeap*);
};

struct JKRArchive {
    struct EMountMode {};
};

struct mDoDvdThd_mountXArchive_c {
    /* 800161E0 */ void create(char const*, u8, JKRArchive::EMountMode, JKRHeap*);
};

struct mDoAud_zelAudio_c {
    /* 80006FB4 */ void reset();
    /* 80007368 */ ~mDoAud_zelAudio_c();
};

struct Z2StatusMgr {
    /* 802B6758 */ void setEventBit(void*);
};

struct Z2SceneMgr {
    /* 802B697C */ void setFadeOutStart(u8);
    /* 802B6A18 */ void setFadeInStart(u8);
    /* 802B6AF8 */ void setSceneName(char*, s32, s32);
    /* 802B9D40 */ void load1stDynamicWave();
};

struct Z2MultiSeObj {
    /* 80007888 */ ~Z2MultiSeObj();
};

struct Z2MultiSeMgr {
    /* 802AEB34 */ ~Z2MultiSeMgr();
};

struct JAISoundHandle {
    /* 80007838 */ ~JAISoundHandle();
    /* 802A2184 */ void releaseSound();
};

struct JAISoundID {};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JKRSolidHeap {
    /* 802D0BF4 */ void adjustSize();
};

struct Z2AudioMgr {
    /* 800073C8 */ ~Z2AudioMgr();
    /* 802CD248 */ Z2AudioMgr();
    /* 802CD34C */ void init(JKRSolidHeap*, u32, void*, JKRArchive*);
    /* 802CD888 */ void setOutputMode(u32);
    /* 802CD904 */ void gframeProcess();
    /* 802CD974 */ void resetProcess(u32, bool);
    /* 802CD9CC */ void resetRecover();
    /* 802CDA6C */ void hasReset() const;
    /* 802CDB1C */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*);
};

struct Z2Audience {
    /* 802BD1FC */ ~Z2Audience();
};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
};

struct JASAudioReseter {
    /* 8029D0FC */ ~JASAudioReseter();
};

struct JAIStreamDataMgr {
    /* 802A3AD8 */ ~JAIStreamDataMgr();
};

struct JAISoundStarter {
    /* 802A2F88 */ ~JAISoundStarter();
};

struct JAISoundInfo {
    /* 802A2D50 */ ~JAISoundInfo();
};

struct JAISeqDataUser {
    /* 802A1774 */ ~JAISeqDataUser();
};

struct JAISeCategoryMgr {
    /* 800078DC */ ~JAISeCategoryMgr();
};

//
// Forward References:
//

extern "C" void reset__17mDoAud_zelAudio_cFv();
extern "C" static void mDoAud_Create__Fv();
extern "C" void mDoAud_Execute__Fv();
extern "C" void mDoAud_setSceneName__FPCcll();
extern "C" void mDoAud_load1stDynamicWave__Fv();
extern "C" void mDoAud_setFadeOutStart__FUc();
extern "C" void mDoAud_setFadeInStart__FUc();
extern "C" void mDoAud_resetProcess__Fv();
extern "C" void mDoAud_resetRecover__Fv();
extern "C" void __sinit_m_Do_audio_cpp();
extern "C" void __dt__17mDoAud_zelAudio_cFv();
extern "C" void __dt__10Z2AudioMgrFv();
extern "C" void __dt__14JAISoundHandleFv();
extern "C" void __dt__12Z2MultiSeObjFv();
extern "C" void __dt__16JAISeCategoryMgrFv();
extern "C" extern char const* const m_Do_m_Do_audio__stringBase0;

//
// External References:
//

extern "C" void OSReport_Error();
extern "C" void create__25mDoDvdThd_mountXArchive_cFPCcUcQ210JKRArchive10EMountModeP7JKRHeap();
extern "C" void create__21mDoDvdThd_toMainRam_cFPCcUcP7JKRHeap();
extern "C" void __dt__15JASAudioReseterFv();
extern "C" void __dt__14JAISeqDataUserFv();
extern "C" void releaseSound__14JAISoundHandleFv();
extern "C" void __dt__12JAISoundInfoFv();
extern "C" void __dt__15JAISoundStarterFv();
extern "C" void __dt__16JAIStreamDataMgrFv();
extern "C" void __dt__12Z2MultiSeMgrFv();
extern "C" void setEventBit__11Z2StatusMgrFPv();
extern "C" void setFadeOutStart__10Z2SceneMgrFUc();
extern "C" void setFadeInStart__10Z2SceneMgrFUc();
extern "C" void setSceneName__10Z2SceneMgrFPcll();
extern "C" void load1stDynamicWave__10Z2SceneMgrFv();
extern "C" void __dt__10Z2AudienceFv();
extern "C" void __ct__10Z2AudioMgrFv();
extern "C" void init__10Z2AudioMgrFP12JKRSolidHeapUlPvP10JKRArchive();
extern "C" void setOutputMode__10Z2AudioMgrFUl();
extern "C" void gframeProcess__10Z2AudioMgrFv();
extern "C" void resetProcess__10Z2AudioMgrFUlb();
extern "C" void resetRecover__10Z2AudioMgrFv();
extern "C" void hasReset__10Z2AudioMgrCFv();
extern "C" void func_802CDB1C();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void changeGroupID__7JKRHeapFUc();
extern "C" void __dl__FPv();
extern "C" void adjustSize__12JKRSolidHeapFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void OSGetSoundMode();
extern "C" void __register_global_object();
extern "C" void __destroy_arr();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8JAISeMgr[5];
extern "C" extern void* __vt__16JAISeCategoryMgr[5];
extern "C" extern void* __vt__9JAISeqMgr[5 + 1 /* padding */];
extern "C" extern void* __vt__10Z2SoundMgr[3 + 1 /* padding */];
extern "C" extern void* __vt__14Z2SoundStarter[5 + 1 /* padding */];
extern "C" extern void* __vt__11Z2SoundInfo[20];
extern "C" extern void* __vt__15Z2SpeechStarter[5];
extern "C" extern void* __vt__10Z2AudioMgr[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 data_80450B40[4];
extern "C" extern u8 data_80450B48[4];
extern "C" extern u8 data_80450B4C[4];
extern "C" extern u8 data_80450B50[4];
extern "C" extern u8 data_80450B60[4];
extern "C" extern u8 data_80450B64[4];
extern "C" extern u8 data_80450B68[4];
extern "C" extern u8 data_80450B6C[4];
extern "C" extern u8 data_80450B70[4];
extern "C" extern u8 data_80450B74[4];
extern "C" extern u8 data_80450B7C[4];
extern "C" extern u8 data_80450B80[4];
extern "C" extern u8 data_80450B84[4];
extern "C" extern u8 data_80450B88[4];
extern "C" extern u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" extern u8 struct_80450C80[8];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450BB8-80450BBC -00001 0004+00 5/5 6/6 0/0 .sbss            None */
/* 80450BB8 0001+00 data_80450BB8 None */
/* 80450BB9 0001+00 data_80450BB9 None */
/* 80450BBA 0002+00 data_80450BBA None */
extern u8 struct_80450BB8[4];
u8 struct_80450BB8[4];

/* 80006FB4-80006FC0 0018F4 000C+00 1/1 0/0 0/0 .text            reset__17mDoAud_zelAudio_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_zelAudio_c::reset() {
    nofralloc
#include "asm/m_Do/m_Do_audio/reset__17mDoAud_zelAudio_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DBF40-803DBF4C 008C60 000C+00 1/1 0/1 0/0 .bss             @3620 */
static u8 lit_3620[12];

/* 803DBF4C-803DD2D8 008C6C 138C+00 3/3 0/0 0/0 .bss             g_mDoAud_zelAudio */
static u8 g_mDoAud_zelAudio[5004];

/* 80450BBC-80450BC0 0000BC 0004+00 1/1 1/1 0/0 .sbss            g_mDoAud_audioHeap */
extern u8 g_mDoAud_audioHeap[4];
u8 g_mDoAud_audioHeap[4];

/* 80450BC0-80450BC4 0000C0 0004+00 1/1 0/0 0/0 .sbss            l_affCommand */
static u8 l_affCommand[4];

/* 80450BC4-80450BC8 0000C4 0004+00 1/1 0/0 0/0 .sbss            l_arcCommand */
static u8 l_arcCommand[4];

/* 80006FC0-80007164 001900 01A4+00 1/1 0/0 0/0 .text            mDoAud_Create__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void mDoAud_Create() {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_Create__Fv.s"
}
#pragma pop

/* 80007164-800071BC 001AA4 0058+00 0/0 1/1 0/0 .text            mDoAud_Execute__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_Execute() {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_Execute__Fv.s"
}
#pragma pop

/* 800071BC-800071F8 001AFC 003C+00 0/0 3/3 0/0 .text            mDoAud_setSceneName__FPCcll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_setSceneName(char const* param_0, s32 param_1, s32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_setSceneName__FPCcll.s"
}
#pragma pop

/* 800071F8-80007224 001B38 002C+00 0/0 1/1 0/0 .text            mDoAud_load1stDynamicWave__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_load1stDynamicWave() {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_load1stDynamicWave__Fv.s"
}
#pragma pop

/* 80007224-80007254 001B64 0030+00 0/0 2/2 0/0 .text            mDoAud_setFadeOutStart__FUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_setFadeOutStart(u8 param_0) {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_setFadeOutStart__FUc.s"
}
#pragma pop

/* 80007254-80007284 001B94 0030+00 0/0 2/2 1/1 .text            mDoAud_setFadeInStart__FUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_setFadeInStart(u8 param_0) {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_setFadeInStart__FUc.s"
}
#pragma pop

/* 80007284-800072C4 001BC4 0040+00 0/0 1/1 0/0 .text            mDoAud_resetProcess__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_resetProcess() {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_resetProcess__Fv.s"
}
#pragma pop

/* 800072C4-80007318 001C04 0054+00 0/0 2/2 0/0 .text            mDoAud_resetRecover__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoAud_resetRecover() {
    nofralloc
#include "asm/m_Do/m_Do_audio/mDoAud_resetRecover__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2F40-803A2F4C 000060 000C+00 2/2 0/0 0/0 .data            __vt__17mDoAud_zelAudio_c */
SECTION_DATA extern void* __vt__17mDoAud_zelAudio_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_802CDB1C,
};

/* 80007318-80007368 001C58 0050+00 0/0 1/0 0/0 .text            __sinit_m_Do_audio_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_m_Do_audio_cpp() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__sinit_m_Do_audio_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80007318 = (void*)__sinit_m_Do_audio_cpp;
#pragma pop

/* 80007368-800073C8 001CA8 0060+00 1/1 0/0 0/0 .text            __dt__17mDoAud_zelAudio_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoAud_zelAudio_c::~mDoAud_zelAudio_c() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__dt__17mDoAud_zelAudio_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2F4C-803A2F60 00006C 0010+04 1/1 2/2 0/0 .data            __vt__12JAUSoundInfo */
SECTION_DATA extern void* __vt__12JAUSoundInfo[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    /* padding */
    NULL,
};

/* 800073C8-80007838 001D08 0470+00 1/1 0/0 0/0 .text            __dt__10Z2AudioMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2AudioMgr::~Z2AudioMgr() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__dt__10Z2AudioMgrFv.s"
}
#pragma pop

/* 80007838-80007888 002178 0050+00 1/1 1/1 0/0 .text            __dt__14JAISoundHandleFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAISoundHandle::~JAISoundHandle() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__dt__14JAISoundHandleFv.s"
}
#pragma pop

/* 80007888-800078DC 0021C8 0054+00 1/1 1/1 0/0 .text            __dt__12Z2MultiSeObjFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2MultiSeObj::~Z2MultiSeObj() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__dt__12Z2MultiSeObjFv.s"
}
#pragma pop

/* 800078DC-80007954 00221C 0078+00 1/1 3/2 0/0 .text            __dt__16JAISeCategoryMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAISeCategoryMgr::~JAISeCategoryMgr() {
    nofralloc
#include "asm/m_Do/m_Do_audio/__dt__16JAISeCategoryMgrFv.s"
}
#pragma pop

/* 80373D68-80373DD0 0003C8 0065+03 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80373D68 = "/Audiores/Z2Sound.baa";
SECTION_DEAD static char const* const stringBase_80373D7E = "/Audiores/Seqs/Z2SoundSeqs.arc";
SECTION_DEAD static char const* const stringBase_80373D9D =
    "ヒープ確保失敗につきオーディオ初期化できません\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80373DCD = "\0\0";
#pragma pop
