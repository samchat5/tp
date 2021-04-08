//
// Generated By: dol2asm
// Translation Unit: d_a_obj_katatsumuri
//

#include "rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DAnmTransform {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {};

struct daPy_boomerangMove_c {
    /* 8015E5B0 */ void initOffset(cXyz const*);
    /* 8015E654 */ void posMove(cXyz*, s16*, fopAc_ac_c*, s16);
    /* 8015E87C */ void bgCheckAfterOffset(cXyz const*);
};

struct daObj_KatHIO_c {
    /* 80C3996C */ daObj_KatHIO_c();
    /* 80C3C5CC */ ~daObj_KatHIO_c();
};

struct J3DJoint {};

struct J3DModel {};

struct daObjKAT_c {
    /* 80C39994 */ void InitCcSph();
    /* 80C39A00 */ void SetCcSph();
    /* 80C39A58 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 80C39B98 */ void CreateHeap();
    /* 80C39F0C */ void WallWalk();
    /* 80C3A4D8 */ void MoveAction();
    /* 80C3A628 */ void Action();
    /* 80C3A680 */ void Insect_Release();
    /* 80C3A698 */ void checkGround();
    /* 80C3A8C8 */ void F_MoveAction();
    /* 80C3A95C */ void FallAction();
    /* 80C3A990 */ void ParticleSet();
    /* 80C3AAB4 */ void BoomChk();
    /* 80C3ADC8 */ void ObjHit();
    /* 80C3AEC8 */ void Execute();
    /* 80C3B754 */ void Z_BufferChk();
    /* 80C3B8D0 */ void Delete();
    /* 80C3B938 */ void setBaseMtx();
    /* 80C3BAAC */ void CreateChk();
    /* 80C3BC58 */ void create();
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dMenu_Insect_c {
    /* 801D9F3C */ void isCatchNotGiveInsect(u8);
};

struct dInsect_c {
    /* 8015E010 */ dInsect_c();
    /* 8015E078 */ void Insect_GetDemoMain();
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dDlst_peekZ_c {
    /* 80056018 */ void newData(s16, s16, u32*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C3C554 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80C3C4C4 */ ~cM3dGSph();
};

struct cM3dGPla {
    /* 80C3A490 */ ~cM3dGPla();
};

struct cM3dGAab {
    /* 80C3C50C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_PolyInfo {};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct _GXTexObj {};

struct J3DSys {
    static u8 mCurrentMtx[48];
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C39E80 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__14daObj_KatHIO_cFv();
extern "C" void InitCcSph__10daObjKAT_cFv();
extern "C" void SetCcSph__10daObjKAT_cFv();
extern "C" void ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel();
extern "C" static void JointCallBack__FP8J3DJointi();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void CreateHeap__10daObjKAT_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjKAT_Create__FP10fopAc_ac_c();
extern "C" static void daObjKAT_Delete__FP10daObjKAT_c();
extern "C" void WallWalk__10daObjKAT_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void MoveAction__10daObjKAT_cFv();
extern "C" void Action__10daObjKAT_cFv();
extern "C" void Insect_Release__10daObjKAT_cFv();
extern "C" void checkGround__10daObjKAT_cFv();
extern "C" void F_MoveAction__10daObjKAT_cFv();
extern "C" void FallAction__10daObjKAT_cFv();
extern "C" void ParticleSet__10daObjKAT_cFv();
extern "C" void BoomChk__10daObjKAT_cFv();
extern "C" void ObjHit__10daObjKAT_cFv();
extern "C" void Execute__10daObjKAT_cFv();
extern "C" void Z_BufferChk__10daObjKAT_cFv();
extern "C" void Delete__10daObjKAT_cFv();
extern "C" void setBaseMtx__10daObjKAT_cFv();
extern "C" static void daObjKAT_Draw__FP10daObjKAT_c();
extern "C" static void daObjKAT_Execute__FP10daObjKAT_c();
extern "C" void CreateChk__10daObjKAT_cFv();
extern "C" void create__10daObjKAT_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static bool daObjKAT_IsDelete__FP10daObjKAT_c();
extern "C" void __dt__14daObj_KatHIO_cFv();
extern "C" void __sinit_d_a_obj_katatsumuri_cpp();
extern "C" static void func_80C3C650();
extern "C" static void func_80C3C658();
extern "C" extern char const* const d_a_obj_katatsumuri__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void mDoLib_pos2camera__FP3VecP3Vec();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void newData__13dDlst_peekZ_cFssPUl();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void __ct__9dInsect_cFv();
extern "C" void Insect_GetDemoMain__9dInsect_cFv();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C3C674-80C3C678 000000 0004+00 10/10 0/0 0/0 .rodata          @3775 */
SECTION_RODATA static f32 const lit_3775 = 1.0f;
COMPILER_STRIP_GATE(80C3C674, &lit_3775);

/* 80C3C770-80C3C790 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjKAT_Method */
SECTION_DATA static void* l_daObjKAT_Method[8] = {
    (void*)daObjKAT_Create__FP10fopAc_ac_c,
    (void*)daObjKAT_Delete__FP10daObjKAT_c,
    (void*)daObjKAT_Execute__FP10daObjKAT_c,
    (void*)daObjKAT_IsDelete__FP10daObjKAT_c,
    (void*)daObjKAT_Draw__FP10daObjKAT_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C3C790-80C3C7C0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Kat */
SECTION_DATA extern void* g_profile_Obj_Kat[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x014B0000, (void*)&g_fpcLf_Method,
    (void*)0x00000A74, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01E80000, (void*)&l_daObjKAT_Method,
    (void*)0x000C0100, (void*)0x030E0000,
};

/* 80C3C7C0-80C3C7CC 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C3C7CC-80C3C7D8 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C3C7D8-80C3C7FC 000068 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C3C658,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C3C650,
};

/* 80C3C7FC-80C3C808 00008C 000C+00 1/1 0/0 0/0 .data            __vt__10daObjKAT_c */
SECTION_DATA extern void* __vt__10daObjKAT_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)Insect_Release__10daObjKAT_cFv,
};

/* 80C3C808-80C3C814 000098 000C+00 6/6 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C3C814-80C3C820 0000A4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C3C820-80C3C82C 0000B0 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_KatHIO_c */
SECTION_DATA extern void* __vt__14daObj_KatHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_KatHIO_cFv,
};

/* 80C3996C-80C39994 0000EC 0028+00 1/1 0/0 0/0 .text            __ct__14daObj_KatHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_KatHIO_c::daObj_KatHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__ct__14daObj_KatHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C678-80C3C67C 000004 0002+02 1/2 0/0 0/0 .rodata          l_kat_itemno */
SECTION_RODATA static u16 const l_kat_itemno[1 + 1 /* padding */] = {
    0xD0D1,
    /* padding */
    0x0000,
};
COMPILER_STRIP_GATE(80C3C678, &l_kat_itemno);

/* 80C3C67C-80C3C6BC 000008 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3779 */
SECTION_RODATA static u8 const ccSphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x40, 0x02, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C67C, &ccSphSrc);

/* 80C39994-80C39A00 000114 006C+00 1/1 0/0 0/0 .text            InitCcSph__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::InitCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/InitCcSph__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C6BC-80C3C6C0 000048 0004+00 1/3 0/0 0/0 .rodata          @3788 */
SECTION_RODATA static f32 const lit_3788 = 20.0f;
COMPILER_STRIP_GATE(80C3C6BC, &lit_3788);

/* 80C39A00-80C39A58 000180 0058+00 1/1 0/0 0/0 .text            SetCcSph__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::SetCcSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/SetCcSph__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C6C0-80C3C6C4 00004C 0004+00 1/1 0/0 0/0 .rodata          @3812 */
SECTION_RODATA static f32 const lit_3812 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(80C3C6C0, &lit_3812);

/* 80C3C6C4-80C3C6CC 000050 0008+00 1/2 0/0 0/0 .rodata          @3814 */
SECTION_RODATA static u8 const lit_3814[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C6C4, &lit_3814);

/* 80C39A58-80C39B2C 0001D8 00D4+00 1/1 0/0 0/0 .text ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/ctrlJoint__10daObjKAT_cFP8J3DJointP8J3DModel.s"
}
#pragma pop

/* 80C39B2C-80C39B78 0002AC 004C+00 1/1 0/0 0/0 .text            JointCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void JointCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/JointCallBack__FP8J3DJointi.s"
}
#pragma pop

/* 80C39B78-80C39B98 0002F8 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C39B98-80C39E80 000318 02E8+00 1/1 0/0 0/0 .text            CreateHeap__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/CreateHeap__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C39E80-80C39EC8 000600 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C39EC8-80C39EE8 000648 0020+00 1/0 0/0 0/0 .text            daObjKAT_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKAT_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/daObjKAT_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C39EE8-80C39F0C 000668 0024+00 1/0 0/0 0/0 .text            daObjKAT_Delete__FP10daObjKAT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKAT_Delete(daObjKAT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/daObjKAT_Delete__FP10daObjKAT_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C6CC-80C3C6D0 000058 0004+00 2/9 0/0 0/0 .rodata          @3959 */
SECTION_RODATA static u8 const lit_3959[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C3C6CC, &lit_3959);

/* 80C3C6D0-80C3C6D4 00005C 0004+00 0/0 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3960 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(80C3C6D0, &lit_3960);
#pragma pop

/* 80C3C6D4-80C3C6D8 000060 0004+00 0/1 0/0 0/0 .rodata          @3961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3961 = 10.0f;
COMPILER_STRIP_GATE(80C3C6D4, &lit_3961);
#pragma pop

/* 80C3C6D8-80C3C6DC 000064 0004+00 0/0 0/0 0/0 .rodata          @3962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3962 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(80C3C6D8, &lit_3962);
#pragma pop

/* 80C3C6DC-80C3C6E0 000068 0004+00 0/1 0/0 0/0 .rodata          @4100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4100 = 2.0f;
COMPILER_STRIP_GATE(80C3C6DC, &lit_4100);
#pragma pop

/* 80C3C6E0-80C3C6E4 00006C 0004+00 0/2 0/0 0/0 .rodata          @4101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4101 = -50.0f;
COMPILER_STRIP_GATE(80C3C6E0, &lit_4101);
#pragma pop

/* 80C3C6E4-80C3C6E8 000070 0004+00 0/4 0/0 0/0 .rodata          @4102 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4102 = 50.0f;
COMPILER_STRIP_GATE(80C3C6E4, &lit_4102);
#pragma pop

/* 80C3C6E8-80C3C6EC 000074 0004+00 0/1 0/0 0/0 .rodata          @4103 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4103 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(80C3C6E8, &lit_4103);
#pragma pop

/* 80C3C6EC-80C3C6F4 000078 0008+00 0/5 0/0 0/0 .rodata          @4104 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4104[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C6EC, &lit_4104);
#pragma pop

/* 80C3C6F4-80C3C6FC 000080 0008+00 0/5 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4105[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C6F4, &lit_4105);
#pragma pop

/* 80C3C6FC-80C3C704 000088 0008+00 0/5 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4106[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C6FC, &lit_4106);
#pragma pop

/* 80C39F0C-80C3A490 00068C 0584+00 1/1 0/0 0/0 .text            WallWalk__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::WallWalk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/WallWalk__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3A490-80C3A4D8 000C10 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C704-80C3C708 000090 0004+00 0/1 0/0 0/0 .rodata          @4139 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4139 = 1500.0f;
COMPILER_STRIP_GATE(80C3C704, &lit_4139);
#pragma pop

/* 80C3C708-80C3C70C 000094 0004+00 0/1 0/0 0/0 .rodata          @4140 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4140 = 1050.0f;
COMPILER_STRIP_GATE(80C3C708, &lit_4140);
#pragma pop

/* 80C3C70C-80C3C710 000098 0004+00 0/1 0/0 0/0 .rodata          @4141 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4141 = 400.0f;
COMPILER_STRIP_GATE(80C3C70C, &lit_4141);
#pragma pop

/* 80C3C710-80C3C714 00009C 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4142 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(80C3C710, &lit_4142);
#pragma pop

/* 80C3A4D8-80C3A628 000C58 0150+00 2/2 0/0 0/0 .text            MoveAction__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::MoveAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/MoveAction__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3A628-80C3A680 000DA8 0058+00 1/1 0/0 0/0 .text            Action__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::Action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/Action__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3A680-80C3A698 000E00 0018+00 1/0 0/0 0/0 .text            Insect_Release__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::Insect_Release() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/Insect_Release__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3A698-80C3A8C8 000E18 0230+00 1/1 0/0 0/0 .text            checkGround__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::checkGround() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/checkGround__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C714-80C3C71C 0000A0 0004+04 1/1 0/0 0/0 .rodata          @4223 */
SECTION_RODATA static f32 const lit_4223[1 + 1 /* padding */] = {
    -2.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(80C3C714, &lit_4223);

/* 80C3A8C8-80C3A95C 001048 0094+00 1/1 0/0 0/0 .text            F_MoveAction__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::F_MoveAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/F_MoveAction__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3A95C-80C3A990 0010DC 0034+00 1/1 0/0 0/0 .text            FallAction__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::FallAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/FallAction__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C71C-80C3C724 0000A8 0008+00 1/2 0/0 0/0 .rodata          @4258 */
SECTION_RODATA static u8 const lit_4258[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C3C71C, &lit_4258);

/* 80C3A990-80C3AAB4 001110 0124+00 1/1 0/0 0/0 .text            ParticleSet__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::ParticleSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/ParticleSet__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C724-80C3C728 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4288 = 100.0f;
COMPILER_STRIP_GATE(80C3C724, &lit_4288);
#pragma pop

/* 80C3C728-80C3C72C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = 0.5f;
COMPILER_STRIP_GATE(80C3C728, &lit_4361);
#pragma pop

/* 80C3C72C-80C3C730 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4362 = 150.0f;
COMPILER_STRIP_GATE(80C3C72C, &lit_4362);
#pragma pop

/* 80C3AAB4-80C3ADC8 001234 0314+00 1/1 0/0 0/0 .text            BoomChk__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::BoomChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/BoomChk__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3ADC8-80C3AEC8 001548 0100+00 1/1 0/0 0/0 .text            ObjHit__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::ObjHit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/ObjHit__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C730-80C3C734 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4583 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4583 = 10000.0f;
COMPILER_STRIP_GATE(80C3C730, &lit_4583);
#pragma pop

/* 80C3C734-80C3C738 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4584 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4584 = 200.0f;
COMPILER_STRIP_GATE(80C3C734, &lit_4584);
#pragma pop

/* 80C3C738-80C3C73C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4585 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4585 = 4000.0f;
COMPILER_STRIP_GATE(80C3C738, &lit_4585);
#pragma pop

/* 80C3C73C-80C3C740 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4586 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4586 = 160000.0f;
COMPILER_STRIP_GATE(80C3C73C, &lit_4586);
#pragma pop

/* 80C3AEC8-80C3B754 001648 088C+00 1/1 0/0 0/0 .text            Execute__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/Execute__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C740-80C3C744 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4625 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4625 = 608.0f;
COMPILER_STRIP_GATE(80C3C740, &lit_4625);
#pragma pop

/* 80C3C744-80C3C748 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4626 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4626 = 448.0f;
COMPILER_STRIP_GATE(80C3C744, &lit_4626);
#pragma pop

/* 80C3C748-80C3C74C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4627 = 16777215.0f;
COMPILER_STRIP_GATE(80C3C748, &lit_4627);
#pragma pop

/* 80C3B754-80C3B8D0 001ED4 017C+00 1/1 0/0 0/0 .text            Z_BufferChk__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::Z_BufferChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/Z_BufferChk__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C838-80C3C83C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80C3C838[4];

/* 80C3B8D0-80C3B938 002050 0068+00 1/1 0/0 0/0 .text            Delete__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/Delete__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3B938-80C3B9A0 0020B8 0068+00 1/1 0/0 0/0 .text            setBaseMtx__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/setBaseMtx__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C74C-80C3C750 0000D8 0004+00 1/1 0/0 0/0 .rodata          @4695 */
SECTION_RODATA static f32 const lit_4695 = 15.0f;
COMPILER_STRIP_GATE(80C3C74C, &lit_4695);

/* 80C3C750-80C3C754 0000DC 0004+00 1/1 0/0 0/0 .rodata          @4696 */
SECTION_RODATA static f32 const lit_4696 = -3.0f / 5.0f;
COMPILER_STRIP_GATE(80C3C750, &lit_4696);

/* 80C3B9A0-80C3BA8C 002120 00EC+00 1/0 0/0 0/0 .text            daObjKAT_Draw__FP10daObjKAT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKAT_Draw(daObjKAT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/daObjKAT_Draw__FP10daObjKAT_c.s"
}
#pragma pop

/* 80C3BA8C-80C3BAAC 00220C 0020+00 2/1 0/0 0/0 .text            daObjKAT_Execute__FP10daObjKAT_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjKAT_Execute(daObjKAT_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/daObjKAT_Execute__FP10daObjKAT_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C754-80C3C758 0000E0 0004+00 1/2 0/0 0/0 .rodata          l_musiya_num */
SECTION_RODATA static u32 const l_musiya_num = 0x01A101A2;
COMPILER_STRIP_GATE(80C3C754, &l_musiya_num);

/* 80C3BAAC-80C3BC58 00222C 01AC+00 1/1 0/0 0/0 .text            CreateChk__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::CreateChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/CreateChk__10daObjKAT_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3C758-80C3C75C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5000 = 500.0f;
COMPILER_STRIP_GATE(80C3C758, &lit_5000);
#pragma pop

/* 80C3C75C-80C3C760 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5001 = -200.0f;
COMPILER_STRIP_GATE(80C3C75C, &lit_5001);
#pragma pop

/* 80C3C760-80C3C764 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5002 = -1000.0f;
COMPILER_STRIP_GATE(80C3C760, &lit_5002);
#pragma pop

/* 80C3C83C-80C3C848 00000C 000C+00 1/1 0/0 0/0 .bss             @3770 */
static u8 lit_3770[12];

/* 80C3C848-80C3C858 000018 0010+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80C3BC58-80C3C4C4 0023D8 086C+00 1/1 0/0 0/0 .text            create__10daObjKAT_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKAT_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/create__10daObjKAT_cFv.s"
}
#pragma pop

/* 80C3C4C4-80C3C50C 002C44 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C3C50C-80C3C554 002C8C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C3C554-80C3C5C4 002CD4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C3C5C4-80C3C5CC 002D44 0008+00 1/0 0/0 0/0 .text            daObjKAT_IsDelete__FP10daObjKAT_c
 */
static bool daObjKAT_IsDelete(daObjKAT_c* param_0) {
    return true;
}

/* 80C3C5CC-80C3C614 002D4C 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_KatHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_KatHIO_c::~daObj_KatHIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__dt__14daObj_KatHIO_cFv.s"
}
#pragma pop

/* 80C3C614-80C3C650 002D94 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_katatsumuri_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_katatsumuri_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/__sinit_d_a_obj_katatsumuri_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C3C614 = (void*)__sinit_d_a_obj_katatsumuri_cpp;
#pragma pop

/* 80C3C650-80C3C658 002DD0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C3C650() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/func_80C3C650.s"
}
#pragma pop

/* 80C3C658-80C3C660 002DD8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80C3C658() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_katatsumuri/d_a_obj_katatsumuri/func_80C3C658.s"
}
#pragma pop

/* 80C3C764-80C3C770 0000F0 000C+00 4/4 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C3C764 = "Kat";
SECTION_DEAD static char const* const stringBase_80C3C768 = "R_SP160";
#pragma pop
