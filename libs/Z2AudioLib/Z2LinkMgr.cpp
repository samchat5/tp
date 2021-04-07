//
// Generated By: dol2asm
// Translation Unit: Z2LinkMgr
//

#include "Z2AudioLib/Z2LinkMgr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JAISoundHandle {};

struct JAISoundID {};

struct Z2SoundStarter {
    /* 802AAB94 */ Z2SoundStarter(bool);
    /* 802AAC3C */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*, u32,
                                   f32, f32, f32, f32, f32, u32);
    /* 802AABF4 */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*);
    /* 802AAEDC */ void setPortData(JAISoundHandle*, u32, u16, s8);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjMgr {
    /* 802BFFEC */ void setGhostEnemyState(u8);
};

struct Vec {};

struct Z2SoundObjCoach {
    /* 802C54B8 */ Z2SoundObjCoach();
    /* 802C54FC */ void init(Vec*, u8);
    /* 802C551C */ void startWheelSound(f32);
    /* 802C56C0 */ void startFireSound(u16);
    /* 802C57C0 */ void startSound(JAISoundID, u32, s8);
};

struct Z2SoundHandlePool {};

struct Z2SoundObjBase {
    /* 802BDEF0 */ Z2SoundObjBase();
    /* 802BDF48 */ ~Z2SoundObjBase();
    /* 802BDFB0 */ void init(Vec*, u8);
    /* 802BDFF8 */ void deleteObject();
    /* 802BE038 */ void framework(u32, s8);
    /* 802BE070 */ void dispose();
    /* 802BE104 */ void stopOK(Z2SoundHandlePool&);
    /* 802BE144 */ void startSound(JAISoundID, u32, s8);
    /* 802BE2D4 */ void startLevelSound(JAISoundID, u32, s8);
    /* 802BE4A4 */ void startCollisionSE(u32, u32, Z2SoundObjBase*);
};

struct Z2SoundHandles {
    /* 802AB254 */ void getHandleSoundID(JAISoundID);
    /* 802AB4A0 */ void stopAllSounds(u32);
    /* 802AB504 */ void isActive() const;
};

struct Z2SeqMgr {
    /* 802B4844 */ void setBattleSeqState(u8);
    /* 802B4AFC */ void setBattleLastHit(u8);
};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2CreatureRide {
    /* 802C4FFC */ Z2CreatureRide();
    /* 802C5114 */ ~Z2CreatureRide();
    /* 802C51EC */ void deleteObject();
    /* 802C520C */ void init(Vec*, Vec*, u8, u8);
    /* 802C522C */ void setLinkRiding(bool);
};

struct Z2RideSoundStarter {
    /* 802C5078 */ ~Z2RideSoundStarter();
    /* 802C5234 */ Z2RideSoundStarter(Z2CreatureRide*);
    /* 802C5284 */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*, u32,
                                   f32, f32, f32, f32, f32, u32);
};

struct Z2LinkSoundStarter {
    /* 802C3464 */ ~Z2LinkSoundStarter();
    /* 802C48E8 */ Z2LinkSoundStarter();
    /* 802C4928 */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*, u32,
                                   f32, f32, f32, f32, f32, u32);
};

struct Z2FxLineMgr {
    /* 802BAE1C */ void setFxForceOff(bool);
};

struct Z2CreatureLink {
    /* 802C321C */ void setLinkGroupInfo(u8);
    /* 802C3220 */ void setLinkHp(s32, s32);
    /* 802C3228 */ void setLinkSwordType(s32, s32);
    /* 802C328C */ void setLinkShieldType(s32, s32);
    /* 802C32F0 */ void setLinkBootsType(s32);
    /* 802C333C */ Z2CreatureLink();
    /* 802C3500 */ ~Z2CreatureLink();
    /* 802C35F8 */ void deleteObject();
    /* 802C3638 */ void init(Vec*, Vec*, Vec*);
    /* 802C3710 */ void initKantera(Vec*);
    /* 802C374C */ void deleteKantera();
    /* 802C3778 */ void setKanteraState(u8);
    /* 802C3780 */ void framework(u32, s8);
    /* 802C3A64 */ void setSinkDepth(s8);
    /* 802C3A6C */ void setRiding(bool);
    /* 802C3AEC */ void setMagnetized(bool);
    /* 802C3AFC */ void setWolfEyeOpen(bool);
    /* 802C3BD4 */ void startLinkSound(JAISoundID, u32, s8);
    /* 802C3E68 */ void startLinkSoundLevel(JAISoundID, u32, s8);
    /* 802C4320 */ void startLinkVoice(JAISoundID, s8);
    /* 802C45B0 */ void startLinkVoiceLevel(JAISoundID, s8);
    /* 802C46F0 */ void startLinkSwordSound(JAISoundID, u32, s8);
    /* 802C4784 */ void startCollisionSE(u32, u32);
    /* 802C4814 */ void startHitItemSE(u32, u32, Z2SoundObjBase*, f32);
    /* 802C48D8 */ void setResumeAttack(bool);
};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0420 */ ~Z2Creature();
    /* 802C04E8 */ void deleteObject();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
    /* 802C05B0 */ void init(Vec*, Vec*, Vec*, u8, u8, u8);
    /* 802C0618 */ void setSoundStarter(Z2SoundStarter*);
    /* 802C064C */ void framework(u32, s8);
    /* 802C0720 */ void startCreatureSound(JAISoundID, u32, s8);
    /* 802C087C */ void startCreatureSoundLevel(JAISoundID, u32, s8);
    /* 802C0A4C */ void startCreatureVoice(JAISoundID, s8);
    /* 802C0AF8 */ void startCreatureVoiceLevel(JAISoundID, s8);
    /* 802C0B70 */ void startCreatureExtraSound(JAISoundID, u32, s8);
    /* 802C0BAC */ void startCreatureExtraSoundLevel(JAISoundID, u32, s8);
    /* 802C0BE8 */ void startCollisionSE(u32, u32);
};

struct Z2Calc {
    struct CurveSign {};

    /* 802A968C */ void linearTransform(f32, f32, f32, f32, f32, bool);
    /* 802A96F4 */ void getParamByExp(f32, f32, f32, f32, f32, f32, Z2Calc::CurveSign);
};

struct Z2Audience {
    /* 802BD90C */ void setTargetVolume(f32, int);
};

struct JAISoundStarter {
    /* 802A2F88 */ ~JAISoundStarter();
};

struct JAISoundParamsMove {
    /* 802A2DB4 */ void moveVolume(f32, u32);
    /* 802A2E0C */ void movePitch(f32, u32);
};

struct JAISound {
    /* 802A24DC */ void stop(u32);
};

//
// Forward References:
//

extern "C" void setLinkGroupInfo__14Z2CreatureLinkFUc();
extern "C" void setLinkHp__14Z2CreatureLinkFll();
extern "C" void setLinkSwordType__14Z2CreatureLinkFll();
extern "C" void setLinkShieldType__14Z2CreatureLinkFll();
extern "C" void setLinkBootsType__14Z2CreatureLinkFl();
extern "C" void __ct__14Z2CreatureLinkFv();
extern "C" void __dt__18Z2LinkSoundStarterFv();
extern "C" void __dt__14Z2CreatureLinkFv();
extern "C" void deleteObject__14Z2CreatureLinkFv();
extern "C" void init__14Z2CreatureLinkFP3VecP3VecP3Vec();
extern "C" void initKantera__14Z2CreatureLinkFP3Vec();
extern "C" void deleteKantera__14Z2CreatureLinkFv();
extern "C" void setKanteraState__14Z2CreatureLinkFUc();
extern "C" void framework__14Z2CreatureLinkFUlSc();
extern "C" void setSinkDepth__14Z2CreatureLinkFSc();
extern "C" void setRiding__14Z2CreatureLinkFb();
extern "C" void setMagnetized__14Z2CreatureLinkFb();
extern "C" void setWolfEyeOpen__14Z2CreatureLinkFb();
extern "C" void startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc();
extern "C" void startLinkSoundLevel__14Z2CreatureLinkF10JAISoundIDUlSc();
extern "C" void startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc();
extern "C" void startLinkVoiceLevel__14Z2CreatureLinkF10JAISoundIDSc();
extern "C" void startLinkSwordSound__14Z2CreatureLinkF10JAISoundIDUlSc();
extern "C" void startCollisionSE__14Z2CreatureLinkFUlUl();
extern "C" void startHitItemSE__14Z2CreatureLinkFUlUlP14Z2SoundObjBasef();
extern "C" void setResumeAttack__14Z2CreatureLinkFb();
extern "C" void __ct__18Z2LinkSoundStarterFv();
extern "C" void func_802C4928();
extern "C" void __ct__14Z2CreatureRideFv();
extern "C" void __dt__18Z2RideSoundStarterFv();
extern "C" void __dt__14Z2CreatureRideFv();
extern "C" void deleteObject__14Z2CreatureRideFv();
extern "C" void init__14Z2CreatureRideFP3VecP3VecUcUc();
extern "C" void setLinkRiding__14Z2CreatureRideFb();
extern "C" void __ct__18Z2RideSoundStarterFP14Z2CreatureRide();
extern "C" void func_802C5284();
extern "C" void __ct__15Z2SoundObjCoachFv();
extern "C" void init__15Z2SoundObjCoachFP3VecUc();
extern "C" void startWheelSound__15Z2SoundObjCoachFf();
extern "C" void startFireSound__15Z2SoundObjCoachFUs();
extern "C" void startSound__15Z2SoundObjCoachF10JAISoundIDUlSc();
extern "C" static void func_802C588C();
extern "C" static void func_802C5894();

//
// External References:
//

extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void stop__8JAISoundFUl();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void movePitch__18JAISoundParamsMoveFfUl();
extern "C" void __dt__15JAISoundStarterFv();
extern "C" void linearTransform__6Z2CalcFfffffb();
extern "C" void getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign();
extern "C" void __ct__14Z2SoundStarterFb();
extern "C" void func_802AABF4();
extern "C" void func_802AAC3C();
extern "C" void setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc();
extern "C" void getHandleSoundID__14Z2SoundHandlesF10JAISoundID();
extern "C" void stopAllSounds__14Z2SoundHandlesFUl();
extern "C" void isActive__14Z2SoundHandlesCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void setBattleSeqState__8Z2SeqMgrFUc();
extern "C" void setBattleLastHit__8Z2SeqMgrFUc();
extern "C" void setFxForceOff__11Z2FxLineMgrFb();
extern "C" void setTargetVolume__10Z2AudienceFfi();
extern "C" void __ct__14Z2SoundObjBaseFv();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void init__14Z2SoundObjBaseFP3VecUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void framework__14Z2SoundObjBaseFUlSc();
extern "C" void dispose__14Z2SoundObjBaseFv();
extern "C" void stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool();
extern "C" void startSound__14Z2SoundObjBaseF10JAISoundIDUlSc();
extern "C" void startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void setGhostEnemyState__13Z2SoundObjMgrFUc();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void deleteObject__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void init__10Z2CreatureFP3VecP3VecP3VecUcUcUc();
extern "C" void setSoundStarter__10Z2CreatureFP14Z2SoundStarter();
extern "C" void framework__10Z2CreatureFUlSc();
extern "C" void startCreatureSound__10Z2CreatureF10JAISoundIDUlSc();
extern "C" void startCreatureSoundLevel__10Z2CreatureF10JAISoundIDUlSc();
extern "C" void startCreatureVoice__10Z2CreatureF10JAISoundIDSc();
extern "C" void startCreatureVoiceLevel__10Z2CreatureF10JAISoundIDSc();
extern "C" void startCreatureExtraSound__10Z2CreatureF10JAISoundIDUlSc();
extern "C" void startCreatureExtraSoundLevel__10Z2CreatureF10JAISoundIDUlSc();
extern "C" void startCollisionSE__10Z2CreatureFUlUl();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__14Z2SoundStarter[5 + 1 /* padding */];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80450B40[4];
extern "C" extern u8 data_80450B44[4];
extern "C" extern u8 data_80450B48[4];
extern "C" extern u8 data_80450B74[4];
extern "C" extern u8 data_80450B7C[4];
extern "C" extern u8 data_80450B80[4];
extern "C" extern u8 data_80450B84[4];
extern "C" extern u8 data_80450B88[4];

//
// Declarations:
//

/* 802C321C-802C3220 2BDB5C 0004+00 0/0 1/1 0/0 .text setLinkGroupInfo__14Z2CreatureLinkFUc */
void Z2CreatureLink::setLinkGroupInfo(u8 param_0) {
    /* empty function */
}

/* 802C3220-802C3228 2BDB60 0008+00 0/0 1/1 0/0 .text            setLinkHp__14Z2CreatureLinkFll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setLinkHp(s32 param_0, s32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setLinkHp__14Z2CreatureLinkFll.s"
}
#pragma pop

/* 802C3228-802C328C 2BDB68 0064+00 0/0 1/1 0/0 .text setLinkSwordType__14Z2CreatureLinkFll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setLinkSwordType(s32 param_0, s32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setLinkSwordType__14Z2CreatureLinkFll.s"
}
#pragma pop

/* 802C328C-802C32F0 2BDBCC 0064+00 0/0 1/1 0/0 .text setLinkShieldType__14Z2CreatureLinkFll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setLinkShieldType(s32 param_0, s32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setLinkShieldType__14Z2CreatureLinkFll.s"
}
#pragma pop

/* 802C32F0-802C333C 2BDC30 004C+00 0/0 1/1 0/0 .text setLinkBootsType__14Z2CreatureLinkFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setLinkBootsType(s32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setLinkBootsType__14Z2CreatureLinkFl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CB8F0-803CB910 028A10 0020+00 1/1 0/0 1/1 .data            __vt__15Z2SoundObjCoach */
SECTION_DATA extern void* __vt__15Z2SoundObjCoach[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)framework__14Z2SoundObjBaseFUlSc,
    (void*)dispose__14Z2SoundObjBaseFv,
    (void*)stopOK__14Z2SoundObjBaseFR17Z2SoundHandlePool,
    (void*)init__15Z2SoundObjCoachFP3VecUc,
    (void*)startSound__15Z2SoundObjCoachF10JAISoundIDUlSc,
    (void*)startLevelSound__14Z2SoundObjBaseF10JAISoundIDUlSc,
};

/* 803CB910-803CB924 028A30 0014+00 3/3 0/0 0/0 .data            __vt__18Z2RideSoundStarter */
SECTION_DATA extern void* __vt__18Z2RideSoundStarter[5] = {
    (void*)NULL /* RTTI */, (void*)NULL,          (void*)__dt__18Z2RideSoundStarterFv,
    (void*)func_802AABF4,   (void*)func_802C5284,
};

/* 803CB924-803CB96C 028A44 0048+00 2/2 0/0 0/0 .data            __vt__14Z2CreatureRide */
SECTION_DATA extern void* __vt__14Z2CreatureRide[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)deleteObject__14Z2CreatureRideFv,
    (void*)setSoundStarter__10Z2CreatureFP14Z2SoundStarter,
    (void*)framework__10Z2CreatureFUlSc,
    (void*)startCreatureSound__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureSoundLevel__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureVoice__10Z2CreatureF10JAISoundIDSc,
    (void*)startCreatureVoiceLevel__10Z2CreatureF10JAISoundIDSc,
    (void*)startCreatureExtraSound__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureExtraSoundLevel__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCollisionSE__10Z2CreatureFUlUl,
    (void*)NULL,
    (void*)NULL,
    (void*)func_802C5894,
    (void*)func_802AABF4,
    (void*)func_802C5284,
    (void*)__dt__14Z2CreatureRideFv,
};

/* 803CB96C-803CB980 028A8C 0014+00 3/3 0/0 0/0 .data            __vt__18Z2LinkSoundStarter */
SECTION_DATA extern void* __vt__18Z2LinkSoundStarter[5] = {
    (void*)NULL /* RTTI */, (void*)NULL,          (void*)__dt__18Z2LinkSoundStarterFv,
    (void*)func_802AABF4,   (void*)func_802C4928,
};

/* 803CB980-803CB9C8 028AA0 0048+00 2/2 0/0 0/0 .data            __vt__14Z2CreatureLink */
SECTION_DATA extern void* __vt__14Z2CreatureLink[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)deleteObject__14Z2CreatureLinkFv,
    (void*)setSoundStarter__10Z2CreatureFP14Z2SoundStarter,
    (void*)framework__14Z2CreatureLinkFUlSc,
    (void*)startCreatureSound__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureSoundLevel__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureVoice__10Z2CreatureF10JAISoundIDSc,
    (void*)startCreatureVoiceLevel__10Z2CreatureF10JAISoundIDSc,
    (void*)startCreatureExtraSound__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCreatureExtraSoundLevel__10Z2CreatureF10JAISoundIDUlSc,
    (void*)startCollisionSE__14Z2CreatureLinkFUlUl,
    (void*)NULL,
    (void*)NULL,
    (void*)func_802C588C,
    (void*)func_802AABF4,
    (void*)func_802C4928,
    (void*)__dt__14Z2CreatureLinkFv,
};

/* 80451360-80451368 000860 0004+04 3/3 15/15 0/0 .sbss            mLinkPtr__14Z2CreatureLink */
extern u8 mLinkPtr__14Z2CreatureLink[4 + 4 /* padding */];
u8 mLinkPtr__14Z2CreatureLink[4 + 4 /* padding */];

/* 802C333C-802C3464 2BDC7C 0128+00 0/0 1/1 0/0 .text            __ct__14Z2CreatureLinkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2CreatureLink::Z2CreatureLink() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__ct__14Z2CreatureLinkFv.s"
}
#pragma pop

/* 802C3464-802C3500 2BDDA4 009C+00 1/0 0/0 0/0 .text            __dt__18Z2LinkSoundStarterFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2LinkSoundStarter::~Z2LinkSoundStarter() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__dt__18Z2LinkSoundStarterFv.s"
}
#pragma pop

/* 802C3500-802C35F8 2BDE40 00F8+00 2/1 1/1 0/0 .text            __dt__14Z2CreatureLinkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2CreatureLink::~Z2CreatureLink() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__dt__14Z2CreatureLinkFv.s"
}
#pragma pop

/* 802C35F8-802C3638 2BDF38 0040+00 1/0 0/0 0/0 .text            deleteObject__14Z2CreatureLinkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::deleteObject() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/deleteObject__14Z2CreatureLinkFv.s"
}
#pragma pop

/* 802C3638-802C3710 2BDF78 00D8+00 0/0 1/1 0/0 .text init__14Z2CreatureLinkFP3VecP3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::init(Vec* param_0, Vec* param_1, Vec* param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/init__14Z2CreatureLinkFP3VecP3VecP3Vec.s"
}
#pragma pop

/* 802C3710-802C374C 2BE050 003C+00 0/0 1/1 0/0 .text            initKantera__14Z2CreatureLinkFP3Vec
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::initKantera(Vec* param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/initKantera__14Z2CreatureLinkFP3Vec.s"
}
#pragma pop

/* 802C374C-802C3778 2BE08C 002C+00 1/1 1/1 0/0 .text            deleteKantera__14Z2CreatureLinkFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::deleteKantera() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/deleteKantera__14Z2CreatureLinkFv.s"
}
#pragma pop

/* 802C3778-802C3780 2BE0B8 0008+00 0/0 5/5 0/0 .text setKanteraState__14Z2CreatureLinkFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setKanteraState(u8 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setKanteraState__14Z2CreatureLinkFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455C98-80455C9C 004298 0004+00 9/9 0/0 0/0 .sdata2          @3721 */
SECTION_SDATA2 static f32 lit_3721 = 1.0f;

/* 80455C9C-80455CA0 00429C 0004+00 2/2 0/0 0/0 .sdata2          @3722 */
SECTION_SDATA2 static f32 lit_3722 = -1.0f;

/* 80455CA0-80455CA8 0042A0 0004+04 11/11 0/0 0/0 .sdata2          @3723 */
SECTION_SDATA2 static f32 lit_3723[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80455CA8-80455CB0 0042A8 0008+00 1/1 0/0 0/0 .sdata2          @3724 */
SECTION_SDATA2 static f64 lit_3724 = 0.5;

/* 80455CB0-80455CB8 0042B0 0008+00 1/1 0/0 0/0 .sdata2          @3725 */
SECTION_SDATA2 static f64 lit_3725 = 3.0;

/* 80455CB8-80455CC0 0042B8 0008+00 1/1 0/0 0/0 .sdata2          @3726 */
SECTION_SDATA2 static u8 lit_3726[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 802C3780-802C3A64 2BE0C0 02E4+00 1/0 0/0 0/0 .text            framework__14Z2CreatureLinkFUlSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::framework(u32 param_0, s8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/framework__14Z2CreatureLinkFUlSc.s"
}
#pragma pop

/* 802C3A64-802C3A6C 2BE3A4 0008+00 0/0 1/1 0/0 .text            setSinkDepth__14Z2CreatureLinkFSc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setSinkDepth(s8 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setSinkDepth__14Z2CreatureLinkFSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455CC0-80455CC4 0042C0 0004+00 1/1 0/0 0/0 .sdata2          @3743 */
SECTION_SDATA2 static f32 lit_3743 = 7.0f / 20.0f;

/* 802C3A6C-802C3AEC 2BE3AC 0080+00 0/0 4/4 0/0 .text            setRiding__14Z2CreatureLinkFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setRiding(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setRiding__14Z2CreatureLinkFb.s"
}
#pragma pop

/* 802C3AEC-802C3AFC 2BE42C 0010+00 0/0 5/5 0/0 .text            setMagnetized__14Z2CreatureLinkFb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setMagnetized(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setMagnetized__14Z2CreatureLinkFb.s"
}
#pragma pop

/* 802C3AFC-802C3BD4 2BE43C 00D8+00 0/0 2/2 0/0 .text            setWolfEyeOpen__14Z2CreatureLinkFb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setWolfEyeOpen(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setWolfEyeOpen__14Z2CreatureLinkFb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455CC4-80455CC8 0042C4 0004+00 1/1 0/0 0/0 .sdata2          @3834 */
SECTION_SDATA2 static f32 lit_3834 = 32.0f;

/* 80455CC8-80455CCC 0042C8 0004+00 4/4 0/0 0/0 .sdata2          @3835 */
SECTION_SDATA2 static f32 lit_3835 = 127.0f;

/* 80455CCC-80455CD0 0042CC 0004+00 2/2 0/0 0/0 .sdata2          @3836 */
SECTION_SDATA2 static f32 lit_3836 = 2.0f / 5.0f;

/* 80455CD0-80455CD4 0042D0 0004+00 4/4 0/0 0/0 .sdata2          @3837 */
SECTION_SDATA2 static f32 lit_3837 = 7.0f / 10.0f;

/* 80455CD4-80455CD8 0042D4 0004+00 3/3 0/0 0/0 .sdata2          @3838 */
SECTION_SDATA2 static f32 lit_3838 = 23.0f;

/* 80455CD8-80455CE0 0042D8 0004+04 4/4 0/0 0/0 .sdata2          @3839 */
SECTION_SDATA2 static f32 lit_3839[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80455CE0-80455CE8 0042E0 0008+00 3/3 0/0 0/0 .sdata2          @3842 */
SECTION_SDATA2 static f64 lit_3842 = 4503601774854144.0 /* cast s32 to float */;

/* 802C3BD4-802C3E68 2BE514 0294+00 3/3 3/3 0/0 .text
 * startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startLinkSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455CE8-80455CEC 0042E8 0004+00 1/1 0/0 0/0 .sdata2          @3941 */
SECTION_SDATA2 static f32 lit_3941 = 30.0f;

/* 80455CEC-80455CF0 0042EC 0004+00 3/3 0/0 0/0 .sdata2          @3942 */
SECTION_SDATA2 static f32 lit_3942 = 3.0f / 10.0f;

/* 80455CF0-80455CF4 0042F0 0004+00 4/4 0/0 0/0 .sdata2          @3943 */
SECTION_SDATA2 static f32 lit_3943 = 4.0f / 5.0f;

/* 80455CF4-80455CF8 0042F4 0004+00 1/1 0/0 0/0 .sdata2          @3944 */
SECTION_SDATA2 static f32 lit_3944 = 180.0f;

/* 80455CF8-80455CFC 0042F8 0004+00 1/1 0/0 0/0 .sdata2          @3945 */
SECTION_SDATA2 static f32 lit_3945 = 120.0f;

/* 80455CFC-80455D00 0042FC 0004+00 4/4 0/0 0/0 .sdata2          @3946 */
SECTION_SDATA2 static f32 lit_3946 = 3.0f / 5.0f;

/* 80455D00-80455D04 004300 0004+00 1/1 0/0 0/0 .sdata2          @3947 */
SECTION_SDATA2 static f32 lit_3947 = 80.0f;

/* 80455D04-80455D08 004304 0004+00 1/1 0/0 0/0 .sdata2          @3948 */
SECTION_SDATA2 static f32 lit_3948 = 6.0f / 5.0f;

/* 80455D08-80455D0C 004308 0004+00 2/2 0/0 0/0 .sdata2          @3949 */
SECTION_SDATA2 static f32 lit_3949 = 0.25f;

/* 80455D0C-80455D10 00430C 0004+00 1/1 0/0 0/0 .sdata2          @3950 */
SECTION_SDATA2 static f32 lit_3950 = 11.0f / 10.0f;

/* 80455D10-80455D18 004310 0008+00 2/2 0/0 0/0 .sdata2          @3954 */
SECTION_SDATA2 static f64 lit_3954 = 4503599627370496.0 /* cast u32 to float */;

/* 802C3E68-802C4320 2BE7A8 04B8+00 1/1 3/3 0/0 .text
 * startLinkSoundLevel__14Z2CreatureLinkF10JAISoundIDUlSc       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startLinkSoundLevel(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startLinkSoundLevel__14Z2CreatureLinkF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802C4320-802C45B0 2BEC60 0290+00 1/1 1/1 0/0 .text
 * startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startLinkVoice(JAISoundID param_0, s8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc.s"
}
#pragma pop

/* 802C45B0-802C46F0 2BEEF0 0140+00 0/0 1/1 0/0 .text
 * startLinkVoiceLevel__14Z2CreatureLinkF10JAISoundIDSc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startLinkVoiceLevel(JAISoundID param_0, s8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startLinkVoiceLevel__14Z2CreatureLinkF10JAISoundIDSc.s"
}
#pragma pop

/* 802C46F0-802C4784 2BF030 0094+00 0/0 2/2 0/0 .text
 * startLinkSwordSound__14Z2CreatureLinkF10JAISoundIDUlSc       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startLinkSwordSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startLinkSwordSound__14Z2CreatureLinkF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802C4784-802C4814 2BF0C4 0090+00 1/0 0/0 0/0 .text startCollisionSE__14Z2CreatureLinkFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startCollisionSE(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startCollisionSE__14Z2CreatureLinkFUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455D18-80455D1C 004318 0004+00 1/1 0/0 0/0 .sdata2          @4178 */
SECTION_SDATA2 static f32 lit_4178 = 100.0f;

/* 802C4814-802C48D8 2BF154 00C4+00 0/0 4/4 2/2 .text
 * startHitItemSE__14Z2CreatureLinkFUlUlP14Z2SoundObjBasef      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::startHitItemSE(u32 param_0, u32 param_1, Z2SoundObjBase* param_2,
                                        f32 param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startHitItemSE__14Z2CreatureLinkFUlUlP14Z2SoundObjBasef.s"
}
#pragma pop

/* 802C48D8-802C48E8 2BF218 0010+00 0/0 1/1 0/0 .text            setResumeAttack__14Z2CreatureLinkFb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureLink::setResumeAttack(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setResumeAttack__14Z2CreatureLinkFb.s"
}
#pragma pop

/* 802C48E8-802C4928 2BF228 0040+00 1/1 0/0 0/0 .text            __ct__18Z2LinkSoundStarterFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2LinkSoundStarter::Z2LinkSoundStarter() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__ct__18Z2LinkSoundStarterFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455D1C-80455D20 00431C 0004+00 2/2 0/0 0/0 .sdata2          @4399 */
SECTION_SDATA2 static f32 lit_4399 = 9.0f / 10.0f;

/* 802C4928-802C4FFC 2BF268 06D4+00 2/0 0/0 0/0 .text
 * startSound__18Z2LinkSoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f>UlfffffUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2LinkSoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                        JGeometry::TVec3<f32> const* param_2, u32 param_3,
                                        f32 param_4, f32 param_5, f32 param_6, f32 param_7,
                                        f32 param_8, u32 param_9) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/func_802C4928.s"
}
#pragma pop

/* 802C4FFC-802C5078 2BF93C 007C+00 0/0 0/0 3/3 .text            __ct__14Z2CreatureRideFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2CreatureRide::Z2CreatureRide() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__ct__14Z2CreatureRideFv.s"
}
#pragma pop

/* 802C5078-802C5114 2BF9B8 009C+00 1/0 0/0 0/0 .text            __dt__18Z2RideSoundStarterFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2RideSoundStarter::~Z2RideSoundStarter() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__dt__18Z2RideSoundStarterFv.s"
}
#pragma pop

/* 802C5114-802C51EC 2BFA54 00D8+00 2/1 0/0 2/2 .text            __dt__14Z2CreatureRideFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2CreatureRide::~Z2CreatureRide() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__dt__14Z2CreatureRideFv.s"
}
#pragma pop

/* 802C51EC-802C520C 2BFB2C 0020+00 1/0 0/0 0/0 .text            deleteObject__14Z2CreatureRideFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureRide::deleteObject() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/deleteObject__14Z2CreatureRideFv.s"
}
#pragma pop

/* 802C520C-802C522C 2BFB4C 0020+00 0/0 0/0 3/3 .text init__14Z2CreatureRideFP3VecP3VecUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureRide::init(Vec* param_0, Vec* param_1, u8 param_2, u8 param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/init__14Z2CreatureRideFP3VecP3VecUcUc.s"
}
#pragma pop

/* 802C522C-802C5234 2BFB6C 0008+00 0/0 2/2 1/1 .text            setLinkRiding__14Z2CreatureRideFb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2CreatureRide::setLinkRiding(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/setLinkRiding__14Z2CreatureRideFb.s"
}
#pragma pop

/* 802C5234-802C5284 2BFB74 0050+00 1/1 0/0 0/0 .text __ct__18Z2RideSoundStarterFP14Z2CreatureRide
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2RideSoundStarter::Z2RideSoundStarter(Z2CreatureRide* param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__ct__18Z2RideSoundStarterFP14Z2CreatureRide.s"
}
#pragma pop

/* 802C5284-802C54B8 2BFBC4 0234+00 2/0 0/0 0/0 .text
 * startSound__18Z2RideSoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f>UlfffffUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2RideSoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                        JGeometry::TVec3<f32> const* param_2, u32 param_3,
                                        f32 param_4, f32 param_5, f32 param_6, f32 param_7,
                                        f32 param_8, u32 param_9) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/func_802C5284.s"
}
#pragma pop

/* 802C54B8-802C54FC 2BFDF8 0044+00 0/0 0/0 1/1 .text            __ct__15Z2SoundObjCoachFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundObjCoach::Z2SoundObjCoach() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/__ct__15Z2SoundObjCoachFv.s"
}
#pragma pop

/* 802C54FC-802C551C 2BFE3C 0020+00 1/0 0/0 0/0 .text            init__15Z2SoundObjCoachFP3VecUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjCoach::init(Vec* param_0, u8 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/init__15Z2SoundObjCoachFP3VecUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455D20-80455D24 004320 0004+00 1/1 0/0 0/0 .sdata2          @4621 */
SECTION_SDATA2 static f32 lit_4621 = 2.0f;

/* 80455D24-80455D28 004324 0004+00 1/1 0/0 0/0 .sdata2          @4622 */
SECTION_SDATA2 static f32 lit_4622 = 35.0f;

/* 80455D28-80455D2C 004328 0004+00 1/1 0/0 0/0 .sdata2          @4623 */
SECTION_SDATA2 static f32 lit_4623 = 22.0f / 25.0f;

/* 80455D2C-80455D30 00432C 0004+00 3/3 0/0 0/0 .sdata2          @4624 */
SECTION_SDATA2 static f32 lit_4624 = 1.25f;

/* 80455D30-80455D34 004330 0004+00 2/2 0/0 0/0 .sdata2          @4625 */
SECTION_SDATA2 static f32 lit_4625 = 50.0f;

/* 802C551C-802C56C0 2BFE5C 01A4+00 0/0 0/0 1/1 .text startWheelSound__15Z2SoundObjCoachFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjCoach::startWheelSound(f32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startWheelSound__15Z2SoundObjCoachFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455D34-80455D38 004334 0004+00 1/1 0/0 0/0 .sdata2          @4645 */
SECTION_SDATA2 static f32 lit_4645 = 1500.0f;

/* 80455D38-80455D3C 004338 0004+00 2/2 0/0 0/0 .sdata2          @4646 */
SECTION_SDATA2 static f32 lit_4646 = 1.0f / 5.0f;

/* 80455D3C-80455D40 00433C 0004+00 2/2 0/0 0/0 .sdata2          @4647 */
SECTION_SDATA2 static f32 lit_4647 = 17.0f / 20.0f;

/* 802C56C0-802C57C0 2C0000 0100+00 0/0 0/0 1/1 .text startFireSound__15Z2SoundObjCoachFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjCoach::startFireSound(u16 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startFireSound__15Z2SoundObjCoachFUs.s"
}
#pragma pop

/* 802C57C0-802C588C 2C0100 00CC+00 1/0 0/0 0/0 .text
 * startSound__15Z2SoundObjCoachF10JAISoundIDUlSc               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundObjCoach::startSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/startSound__15Z2SoundObjCoachF10JAISoundIDUlSc.s"
}
#pragma pop

/* 802C588C-802C5894 2C01CC 0008+00 1/0 0/0 0/0 .text            @144@__dt__14Z2CreatureLinkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802C588C() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/func_802C588C.s"
}
#pragma pop

/* 802C5894-802C589C 2C01D4 0008+00 1/0 0/0 0/0 .text            @144@__dt__14Z2CreatureRideFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802C5894() {
    nofralloc
#include "asm/Z2AudioLib/Z2LinkMgr/func_802C5894.s"
}
#pragma pop
