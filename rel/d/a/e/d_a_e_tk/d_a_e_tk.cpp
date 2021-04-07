//
// Generated By: dol2asm
// Translation Unit: d_a_e_tk
//

#include "rel/d/a/e/d_a_e_tk/d_a_e_tk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoExt_McaMorfCallBack2_c {};

struct J3DAnmTransform {};

struct Z2Creature {};

struct J3DModelData {};

struct mDoExt_McaMorfCallBack1_c {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_tk_class {};

struct daE_TK_HIO_c {
    /* 807B81EC */ daE_TK_HIO_c();
    /* 807BA1C4 */ ~daE_TK_HIO_c();
};

struct dKy_tevstr_c {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

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

struct csXyz {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk_Spl {
    /* 800777B0 */ dBgS_ObjGndChk_Spl();
    /* 80077848 */ ~dBgS_ObjGndChk_Spl();
};

struct dBgS_ObjAcch {
    /* 807BA154 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
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
    /* 807BA0C4 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 807BA10C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
    /* 802C1B7C */ void setLinkSearch(bool);
    /* 802C1B90 */ void setEnemyName(char const*);
};

struct J3DFrameCtrl {
    /* 8032842C */ void checkPass(f32);
};

//
// Forward References:
//

extern "C" void __ct__12daE_TK_HIO_cFv();
extern "C" static void anm_init__FP10e_tk_classifUcf();
extern "C" static void daE_TK_Draw__FP10e_tk_class();
extern "C" static void other_bg_check__FP10e_tk_classP10fopAc_ac_c();
extern "C" static void pl_y_check__FP10e_tk_class();
extern "C" static void pl_check__FP10e_tk_classfs();
extern "C" static void damage_check__FP10e_tk_class();
extern "C" static void way_bg_check__FP10e_tk_classf();
extern "C" static void e_tk_wait_0__FP10e_tk_class();
extern "C" static void e_tk_find__FP10e_tk_class();
extern "C" static void e_tk_attack__FP10e_tk_class();
extern "C" static void e_tk_pathswim__FP10e_tk_class();
extern "C" static void e_tk_s_damage__FP10e_tk_class();
extern "C" static void e_tk_damage__FP10e_tk_class();
extern "C" static void action__FP10e_tk_class();
extern "C" static void daE_TK_Execute__FP10e_tk_class();
extern "C" static bool daE_TK_IsDelete__FP10e_tk_class();
extern "C" static void daE_TK_Delete__FP10e_tk_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_TK_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12daE_TK_HIO_cFv();
extern "C" void __sinit_d_a_e_tk_cpp();
extern "C" static void func_807BA248();
extern "C" static void func_807BA250();
extern "C" extern char const* const d_a_e_tk__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 807BA26C-807BA270 000000 0004+00 11/11 0/0 0/0 .rodata          @3762 */
SECTION_RODATA static f32 const lit_3762 = 19.0f / 10.0f;
COMPILER_STRIP_GATE(807BA26C, &lit_3762);

/* 807BA270-807BA274 000004 0004+00 0/1 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3763 = 1400.0f;
COMPILER_STRIP_GATE(807BA270, &lit_3763);
#pragma pop

/* 807BA274-807BA278 000008 0004+00 0/1 0/0 0/0 .rodata          @3764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3764 = 500.0f;
COMPILER_STRIP_GATE(807BA274, &lit_3764);
#pragma pop

/* 807BA278-807BA27C 00000C 0004+00 0/2 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3765 = 10.0f;
COMPILER_STRIP_GATE(807BA278, &lit_3765);
#pragma pop

/* 807BA27C-807BA280 000010 0004+00 0/1 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3766 = 25.0f;
COMPILER_STRIP_GATE(807BA27C, &lit_3766);
#pragma pop

/* 807BA2F8-807BA32C -00001 0034+00 1/1 0/0 0/0 .data            @4023 */
SECTION_DATA static void* lit_4023[13] = {
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x5C),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x7C),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0xEC),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x134),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x154),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x344),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x344),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x344),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x344),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x344),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x1D8),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x1F8),
    (void*)(((char*)e_tk_find__FP10e_tk_class) + 0x260),
};

/* 807BA32C-807BA358 -00001 002C+00 1/1 0/0 0/0 .data            @4185 */
SECTION_DATA static void* lit_4185[11] = {
    (void*)(((char*)action__FP10e_tk_class) + 0x74),
    (void*)(((char*)action__FP10e_tk_class) + 0x80),
    (void*)(((char*)action__FP10e_tk_class) + 0x90),
    (void*)(((char*)action__FP10e_tk_class) + 0xC0),
    (void*)(((char*)action__FP10e_tk_class) + 0xC0),
    (void*)(((char*)action__FP10e_tk_class) + 0xA0),
    (void*)(((char*)action__FP10e_tk_class) + 0xC0),
    (void*)(((char*)action__FP10e_tk_class) + 0xC0),
    (void*)(((char*)action__FP10e_tk_class) + 0xC0),
    (void*)(((char*)action__FP10e_tk_class) + 0xAC),
    (void*)(((char*)action__FP10e_tk_class) + 0xB8),
};

/* 807BA358-807BA398 000060 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4408 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807BA398-807BA3B8 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_TK_Method */
SECTION_DATA static void* l_daE_TK_Method[8] = {
    (void*)daE_TK_Create__FP10fopAc_ac_c,
    (void*)daE_TK_Delete__FP10e_tk_class,
    (void*)daE_TK_Execute__FP10e_tk_class,
    (void*)daE_TK_IsDelete__FP10e_tk_class,
    (void*)daE_TK_Draw__FP10e_tk_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807BA3B8-807BA3E8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_TK */
SECTION_DATA extern void* g_profile_E_TK[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01D00000, (void*)&g_fpcLf_Method,
    (void*)0x00000A64, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00950000, (void*)&l_daE_TK_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 807BA3E8-807BA3F4 0000F0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807BA3F4-807BA400 0000FC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 807BA400-807BA424 000108 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807BA250,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807BA248,
};

/* 807BA424-807BA430 00012C 000C+00 2/2 0/0 0/0 .data            __vt__12daE_TK_HIO_c */
SECTION_DATA extern void* __vt__12daE_TK_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_TK_HIO_cFv,
};

/* 807B81EC-807B8234 0000EC 0048+00 1/1 0/0 0/0 .text            __ct__12daE_TK_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_TK_HIO_c::daE_TK_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__ct__12daE_TK_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA280-807BA284 000014 0004+00 1/8 0/0 0/0 .rodata          @3780 */
SECTION_RODATA static u8 const lit_3780[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(807BA280, &lit_3780);

/* 807BA284-807BA288 000018 0004+00 1/1 0/0 0/0 .rodata          @3781 */
SECTION_RODATA static f32 const lit_3781 = -1.0f;
COMPILER_STRIP_GATE(807BA284, &lit_3781);

/* 807B8234-807B82E0 000134 00AC+00 6/6 0/0 0/0 .text            anm_init__FP10e_tk_classifUcf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void anm_init(e_tk_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/anm_init__FP10e_tk_classifUcf.s"
}
#pragma pop

/* 807B82E0-807B8350 0001E0 0070+00 1/0 0/0 0/0 .text            daE_TK_Draw__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_TK_Draw(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/daE_TK_Draw__FP10e_tk_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA288-807BA28C 00001C 0004+00 1/3 0/0 0/0 .rodata          @3820 */
SECTION_RODATA static f32 const lit_3820 = 100.0f;
COMPILER_STRIP_GATE(807BA288, &lit_3820);

/* 807B8350-807B8428 000250 00D8+00 1/1 0/0 0/0 .text other_bg_check__FP10e_tk_classP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void other_bg_check(e_tk_class* param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/other_bg_check__FP10e_tk_classP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA28C-807BA290 000020 0004+00 1/1 0/0 0/0 .rodata          @3830 */
SECTION_RODATA static f32 const lit_3830 = 130.0f;
COMPILER_STRIP_GATE(807BA28C, &lit_3830);

/* 807B8428-807B8460 000328 0038+00 3/3 0/0 0/0 .text            pl_y_check__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void pl_y_check(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/pl_y_check__FP10e_tk_class.s"
}
#pragma pop

/* 807B8460-807B84DC 000360 007C+00 4/4 0/0 0/0 .text            pl_check__FP10e_tk_classfs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void pl_check(e_tk_class* param_0, f32 param_1, s16 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/pl_check__FP10e_tk_classfs.s"
}
#pragma pop

/* 807B84DC-807B85DC 0003DC 0100+00 1/1 0/0 0/0 .text            damage_check__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void damage_check(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/damage_check__FP10e_tk_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA290-807BA294 000024 0004+00 0/3 0/0 0/0 .rodata          @3897 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3897 = 50.0f;
COMPILER_STRIP_GATE(807BA290, &lit_3897);
#pragma pop

/* 807BA294-807BA298 000028 0004+00 0/2 0/0 0/0 .rodata          @3898 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3898 = -50.0f;
COMPILER_STRIP_GATE(807BA294, &lit_3898);
#pragma pop

/* 807B85DC-807B86EC 0004DC 0110+00 1/1 0/0 0/0 .text            way_bg_check__FP10e_tk_classf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void way_bg_check(e_tk_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/way_bg_check__FP10e_tk_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA298-807BA29C 00002C 0004+00 0/3 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 5.0f;
COMPILER_STRIP_GATE(807BA298, &lit_3937);
#pragma pop

/* 807BA29C-807BA2A0 000030 0004+00 1/8 0/0 0/0 .rodata          @3938 */
SECTION_RODATA static f32 const lit_3938 = 1.0f;
COMPILER_STRIP_GATE(807BA29C, &lit_3938);

/* 807BA2A0-807BA2A4 000034 0004+00 0/1 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 8000.0f;
COMPILER_STRIP_GATE(807BA2A0, &lit_3939);
#pragma pop

/* 807BA2A4-807BA2A8 000038 0004+00 0/3 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 30.0f;
COMPILER_STRIP_GATE(807BA2A4, &lit_3940);
#pragma pop

/* 807BA2A8-807BA2AC 00003C 0004+00 0/2 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 200.0f;
COMPILER_STRIP_GATE(807BA2A8, &lit_3941);
#pragma pop

/* 807BA2AC-807BA2B0 000040 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 2000.0f;
COMPILER_STRIP_GATE(807BA2AC, &lit_3942);
#pragma pop

/* 807BA438-807BA43C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_807BA438[4];

/* 807BA43C-807BA448 00000C 000C+00 1/1 0/0 0/0 .bss             @3757 */
static u8 lit_3757[12];

/* 807BA448-807BA464 000018 001C+00 7/7 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 807B86EC-807B8980 0005EC 0294+00 1/1 0/0 0/0 .text            e_tk_wait_0__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_wait_0(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_wait_0__FP10e_tk_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA2B0-807BA2B4 000044 0004+00 0/3 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4017 = 3.0f;
COMPILER_STRIP_GATE(807BA2B0, &lit_4017);
#pragma pop

/* 807B8980-807B8D78 000880 03F8+00 2/1 0/0 0/0 .text            e_tk_find__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_find(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_find__FP10e_tk_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA2B4-807BA2B8 000048 0004+00 0/0 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4018 = 4.0f;
COMPILER_STRIP_GATE(807BA2B4, &lit_4018);
#pragma pop

/* 807BA2B8-807BA2BC 00004C 0004+00 0/3 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4019 = 2.0f;
COMPILER_STRIP_GATE(807BA2B8, &lit_4019);
#pragma pop

/* 807BA2BC-807BA2C0 000050 0004+00 0/0 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4020 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(807BA2BC, &lit_4020);
#pragma pop

/* 807BA2C0-807BA2C4 000054 0004+00 0/0 0/0 0/0 .rodata          @4021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4021 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(807BA2C0, &lit_4021);
#pragma pop

/* 807BA2C4-807BA2C8 000058 0004+00 0/2 0/0 0/0 .rodata          @4022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4022 = 20.0f;
COMPILER_STRIP_GATE(807BA2C4, &lit_4022);
#pragma pop

/* 807BA2C8-807BA2CC 00005C 0004+00 0/3 0/0 0/0 .rodata          @4066 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4066 = 60.0f;
COMPILER_STRIP_GATE(807BA2C8, &lit_4066);
#pragma pop

/* 807B8D78-807B8F68 000C78 01F0+00 1/1 0/0 0/0 .text            e_tk_attack__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_attack(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_attack__FP10e_tk_class.s"
}
#pragma pop

/* 807B8F68-807B92C4 000E68 035C+00 1/1 0/0 0/0 .text            e_tk_pathswim__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_pathswim(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_pathswim__FP10e_tk_class.s"
}
#pragma pop

/* 807B92C4-807B9354 0011C4 0090+00 1/1 0/0 0/0 .text            e_tk_s_damage__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_s_damage(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_s_damage__FP10e_tk_class.s"
}
#pragma pop

/* 807B9354-807B941C 001254 00C8+00 1/1 0/0 0/0 .text            e_tk_damage__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void e_tk_damage(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/e_tk_damage__FP10e_tk_class.s"
}
#pragma pop

/* 807B941C-807B9554 00131C 0138+00 2/1 0/0 0/0 .text            action__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/action__FP10e_tk_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA2CC-807BA2D0 000060 0004+00 0/1 0/0 0/0 .rodata          @4183 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4183 = 23.0f / 10.0f;
COMPILER_STRIP_GATE(807BA2CC, &lit_4183);
#pragma pop

/* 807BA2D0-807BA2D4 000064 0004+00 0/0 0/0 0/0 .rodata          @4184 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4184 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(807BA2D0, &lit_4184);
#pragma pop

/* 807BA2D4-807BA2D8 000068 0004+00 0/1 0/0 0/0 .rodata          @4354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4354 = 6.0f;
COMPILER_STRIP_GATE(807BA2D4, &lit_4354);
#pragma pop

/* 807BA2D8-807BA2DC 00006C 0004+00 0/1 0/0 0/0 .rodata          @4355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4355 = 12.0f;
COMPILER_STRIP_GATE(807BA2D8, &lit_4355);
#pragma pop

/* 807BA2DC-807BA2E0 000070 0004+00 0/1 0/0 0/0 .rodata          @4356 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4356 = 18.0f;
COMPILER_STRIP_GATE(807BA2DC, &lit_4356);
#pragma pop

/* 807BA2E0-807BA2E4 000074 0004+00 0/1 0/0 0/0 .rodata          @4357 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4357 = 24.0f;
COMPILER_STRIP_GATE(807BA2E0, &lit_4357);
#pragma pop

/* 807BA2E4-807BA2E8 000078 0004+00 0/1 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = 27.0f;
COMPILER_STRIP_GATE(807BA2E4, &lit_4358);
#pragma pop

/* 807BA2E8-807BA2EC 00007C 0004+00 0/1 0/0 0/0 .rodata          @4359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4359 = 35.0f;
COMPILER_STRIP_GATE(807BA2E8, &lit_4359);
#pragma pop

/* 807B9554-807B9C50 001454 06FC+00 2/1 0/0 0/0 .text            daE_TK_Execute__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_TK_Execute(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/daE_TK_Execute__FP10e_tk_class.s"
}
#pragma pop

/* 807B9C50-807B9C58 001B50 0008+00 1/0 0/0 0/0 .text            daE_TK_IsDelete__FP10e_tk_class */
static bool daE_TK_IsDelete(e_tk_class* param_0) {
    return true;
}

/* 807B9C58-807B9CC0 001B58 0068+00 1/0 0/0 0/0 .text            daE_TK_Delete__FP10e_tk_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_TK_Delete(e_tk_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/daE_TK_Delete__FP10e_tk_class.s"
}
#pragma pop

/* 807B9CC0-807B9DB8 001BC0 00F8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BA2EC-807BA2F0 000080 0004+00 0/1 0/0 0/0 .rodata          @4487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4487 = -100.0f;
COMPILER_STRIP_GATE(807BA2EC, &lit_4487);
#pragma pop

/* 807B9DB8-807BA0C4 001CB8 030C+00 1/0 0/0 0/0 .text            daE_TK_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_TK_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/daE_TK_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807BA0C4-807BA10C 001FC4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 807BA10C-807BA154 00200C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 807BA154-807BA1C4 002054 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 807BA1C4-807BA20C 0020C4 0048+00 2/1 0/0 0/0 .text            __dt__12daE_TK_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_TK_HIO_c::~daE_TK_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__dt__12daE_TK_HIO_cFv.s"
}
#pragma pop

/* 807BA20C-807BA248 00210C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_tk_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_tk_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/__sinit_d_a_e_tk_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_807BA20C = (void*)__sinit_d_a_e_tk_cpp;
#pragma pop

/* 807BA248-807BA250 002148 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_807BA248() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/func_807BA248.s"
}
#pragma pop

/* 807BA250-807BA258 002150 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_807BA250() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk/d_a_e_tk/func_807BA250.s"
}
#pragma pop

/* 807BA2F0-807BA2F5 000084 0005+00 4/4 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_807BA2F0 = "E_tk";
#pragma pop
