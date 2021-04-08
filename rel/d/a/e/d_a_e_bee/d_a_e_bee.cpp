//
// Generated By: dol2asm
// Translation Unit: d_a_e_bee
//

#include "rel/d/a/e/d_a_e_bee/d_a_e_bee.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_bee_class {};

struct daE_Bee_HIO_c {
    /* 8068286C */ daE_Bee_HIO_c();
    /* 8068539C */ ~daE_Bee_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80682D78 */ ~cXyz();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct csXyz {};

struct dPa_control_c {
    /* 8004C218 */ void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
};

struct J3DModelData {};

struct J3DModel {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_SrcCyl {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800842C0 */ void ChkAtHit();
    /* 80084358 */ void GetAtHitObj();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 80685224 */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 8068526C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 806852B4 */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

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

struct bee_s {
    /* 806852FC */ ~bee_s();
    /* 80685368 */ bee_s();
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct JAISoundID {};

struct Z2SoundObjBeeGroup {
    /* 802C1D10 */ Z2SoundObjBeeGroup();
    /* 802C1D6C */ void playBeeGroupSound(JAISoundID, u8);
};

struct Z2SoundObjBase {
    /* 802BDF48 */ ~Z2SoundObjBase();
    /* 802BDFF8 */ void deleteObject();
};

struct JMath {
    static u8 sincosTable_[65536];
};

//
// Forward References:
//

extern "C" void __ct__13daE_Bee_HIO_cFv();
extern "C" static void daE_Bee_Draw__FP11e_bee_class();
extern "C" static void bee_mtxset__FP5bee_s();
extern "C" static void bee_ground_ang_set__FP5bee_s();
extern "C" void __dt__4cXyzFv();
extern "C" static void bee_fly_action__FP11e_bee_classP5bee_s();
extern "C" static void bee_nest_action__FP11e_bee_classP5bee_sSc();
extern "C" static void bee_fail__FP5bee_s();
extern "C" static void bee_start__FP11e_bee_classP5bee_s();
extern "C" static void bee_control__FP11e_bee_class();
extern "C" static void daE_Bee_Execute__FP11e_bee_class();
extern "C" static bool daE_Bee_IsDelete__FP11e_bee_class();
extern "C" static void daE_Bee_Delete__FP11e_bee_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_Bee_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__5bee_sFv();
extern "C" void __ct__5bee_sFv();
extern "C" void __dt__13daE_Bee_HIO_cFv();
extern "C" void __sinit_d_a_e_bee_cpp();
extern "C" extern char const* const d_a_e_bee__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitObj__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_pl_cut_bit_get__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __ct__18Z2SoundObjBeeGroupFv();
extern "C" void playBeeGroupSound__18Z2SoundObjBeeGroupF10JAISoundIDUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80685434-80685438 000000 0004+00 8/8 0/0 0/0 .rodata          @3770 */
SECTION_RODATA static f32 const lit_3770 = 1.0f;
COMPILER_STRIP_GATE(80685434, &lit_3770);

/* 8068552C-80685570 000000 0044+00 1/1 0/0 0/0 .data            cc_cyl_src$4798 */
SECTION_DATA static u8 cc_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x41, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00,
};

/* 80685570-806855B0 000044 0040+00 1/1 0/0 0/0 .data            at_sph_src$4799 */
SECTION_DATA static u8 at_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
};

/* 806855B0-806855D0 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_Bee_Method */
SECTION_DATA static void* l_daE_Bee_Method[8] = {
    (void*)daE_Bee_Create__FP10fopAc_ac_c,
    (void*)daE_Bee_Delete__FP11e_bee_class,
    (void*)daE_Bee_Execute__FP11e_bee_class,
    (void*)daE_Bee_IsDelete__FP11e_bee_class,
    (void*)daE_Bee_Draw__FP11e_bee_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806855D0-80685600 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_BEE */
SECTION_DATA extern void* g_profile_E_BEE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01ED0000, (void*)&g_fpcLf_Method,
    (void*)0x00002588, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00B70000, (void*)&l_daE_Bee_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80685600-8068560C 0000D4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8068560C-80685618 0000E0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80685618-80685624 0000EC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80685624-80685630 0000F8 000C+00 2/2 0/0 0/0 .data            __vt__13daE_Bee_HIO_c */
SECTION_DATA extern void* __vt__13daE_Bee_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daE_Bee_HIO_cFv,
};

/* 8068286C-8068289C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__13daE_Bee_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_Bee_HIO_c::daE_Bee_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__ct__13daE_Bee_HIO_cFv.s"
}
#pragma pop

/* 8068289C-806829A8 00011C 010C+00 1/0 0/0 0/0 .text            daE_Bee_Draw__FP11e_bee_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_Bee_Draw(e_bee_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/daE_Bee_Draw__FP11e_bee_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80685638-8068563C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8068563C-80685640 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80685640-80685644 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80685644-80685648 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80685648-8068564C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8068564C-80685650 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80685650-80685654 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80685654-80685658 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80685658-8068565C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8068565C-80685660 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80685660-80685664 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80685664-80685668 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80685668-8068566C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8068566C-80685670 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80685670-80685674 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80685674-80685678 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 80685674 0001+00 data_80685674 @1009 */
/* 80685675 0003+00 data_80685675 None */
static u8 struct_80685674[4];

/* 80685678-80685684 000048 000C+00 1/1 0/0 0/0 .bss             @3765 */
static u8 lit_3765[12];

/* 80685684-80685694 000054 0010+00 6/6 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 806829A8-80682A70 000228 00C8+00 3/3 0/0 0/0 .text            bee_mtxset__FP5bee_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_mtxset(bee_s* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_mtxset__FP5bee_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 80685438-8068543C 000004 0004+00 0/4 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 30.0f;
COMPILER_STRIP_GATE(80685438, &lit_3929);
#pragma pop

/* 8068543C-80685440 000008 0004+00 0/4 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = 5.0f;
COMPILER_STRIP_GATE(8068543C, &lit_3930);
#pragma pop

/* 80685440-80685444 00000C 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3931 = -30.0f;
COMPILER_STRIP_GATE(80685440, &lit_3931);
#pragma pop

/* 80685444-80685448 000010 0004+00 0/6 0/0 0/0 .rodata          @3932 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3932[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80685444, &lit_3932);
#pragma pop

/* 80685448-8068544C 000014 0004+00 0/1 0/0 0/0 .rodata          @3933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3933 = -10.0f;
COMPILER_STRIP_GATE(80685448, &lit_3933);
#pragma pop

/* 80682A70-80682D78 0002F0 0308+00 1/1 0/0 0/0 .text            bee_ground_ang_set__FP5bee_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_ground_ang_set(bee_s* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_ground_ang_set__FP5bee_s.s"
}
#pragma pop

/* 80682D78-80682DB4 0005F8 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8068544C-80685450 000018 0004+00 0/4 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 15.0f;
COMPILER_STRIP_GATE(8068544C, &lit_4190);
#pragma pop

/* 80685450-80685454 00001C 0004+00 0/4 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 100.0f;
COMPILER_STRIP_GATE(80685450, &lit_4191);
#pragma pop

/* 80685454-80685458 000020 0004+00 0/2 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 50.0f;
COMPILER_STRIP_GATE(80685454, &lit_4192);
#pragma pop

/* 80685458-8068545C 000024 0004+00 0/2 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 17.0f;
COMPILER_STRIP_GATE(80685458, &lit_4193);
#pragma pop

/* 8068545C-80685460 000028 0004+00 0/1 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = 125.0f;
COMPILER_STRIP_GATE(8068545C, &lit_4194);
#pragma pop

/* 80685460-80685464 00002C 0004+00 0/2 0/0 0/0 .rodata          @4195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4195 = 150.0f;
COMPILER_STRIP_GATE(80685460, &lit_4195);
#pragma pop

/* 80685464-8068546C 000030 0008+00 0/3 0/0 0/0 .rodata          @4196 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4196[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80685464, &lit_4196);
#pragma pop

/* 8068546C-80685474 000038 0008+00 0/3 0/0 0/0 .rodata          @4197 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4197[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8068546C, &lit_4197);
#pragma pop

/* 80685474-8068547C 000040 0008+00 0/3 0/0 0/0 .rodata          @4198 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4198[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80685474, &lit_4198);
#pragma pop

/* 8068547C-80685480 000048 0004+00 0/1 0/0 0/0 .rodata          @4199 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4199 = 40.0f;
COMPILER_STRIP_GATE(8068547C, &lit_4199);
#pragma pop

/* 80685480-80685484 00004C 0004+00 0/2 0/0 0/0 .rodata          @4200 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4200 = 300.0f;
COMPILER_STRIP_GATE(80685480, &lit_4200);
#pragma pop

/* 80685484-80685488 000050 0004+00 0/1 0/0 0/0 .rodata          @4201 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4201 = 10000.0f;
COMPILER_STRIP_GATE(80685484, &lit_4201);
#pragma pop

/* 80685488-8068548C 000054 0004+00 0/2 0/0 0/0 .rodata          @4202 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4202 = 55.0f;
COMPILER_STRIP_GATE(80685488, &lit_4202);
#pragma pop

/* 8068548C-80685490 000058 0004+00 0/1 0/0 0/0 .rodata          @4203 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4203 = 500.0f;
COMPILER_STRIP_GATE(8068548C, &lit_4203);
#pragma pop

/* 80685490-80685494 00005C 0004+00 0/1 0/0 0/0 .rodata          @4204 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4204 = 0.5f;
COMPILER_STRIP_GATE(80685490, &lit_4204);
#pragma pop

/* 80685494-80685498 000060 0004+00 0/1 0/0 0/0 .rodata          @4205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4205 = 2000.0f;
COMPILER_STRIP_GATE(80685494, &lit_4205);
#pragma pop

/* 80685498-8068549C 000064 0004+00 0/1 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4206 = 1500.0f;
COMPILER_STRIP_GATE(80685498, &lit_4206);
#pragma pop

/* 8068549C-806854A0 000068 0004+00 0/3 0/0 0/0 .rodata          @4207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4207 = 200.0f;
COMPILER_STRIP_GATE(8068549C, &lit_4207);
#pragma pop

/* 80685694-80685698 000064 0004+00 1/2 0/0 0/0 .bss             None */
static u8 data_80685694[4];

/* 80682DB4-806835FC 000634 0848+00 1/1 0/0 0/0 .text bee_fly_action__FP11e_bee_classP5bee_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_fly_action(e_bee_class* param_0, bee_s* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_fly_action__FP11e_bee_classP5bee_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 806854A0-806854A4 00006C 0004+00 0/1 0/0 0/0 .rodata          @4353 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4353 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(806854A0, &lit_4353);
#pragma pop

/* 806854A4-806854A8 000070 0004+00 0/2 0/0 0/0 .rodata          @4354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4354 = 10.0f;
COMPILER_STRIP_GATE(806854A4, &lit_4354);
#pragma pop

/* 806854A8-806854AC 000074 0004+00 0/1 0/0 0/0 .rodata          @4355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4355 = 2.0f;
COMPILER_STRIP_GATE(806854A8, &lit_4355);
#pragma pop

/* 806854AC-806854B0 000078 0004+00 0/3 0/0 0/0 .rodata          @4356 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4356 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(806854AC, &lit_4356);
#pragma pop

/* 806854B0-806854B4 00007C 0004+00 0/1 0/0 0/0 .rodata          @4357 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4357 = 32768.0f;
COMPILER_STRIP_GATE(806854B0, &lit_4357);
#pragma pop

/* 806854B4-806854B8 000080 0004+00 0/1 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = -51.0f;
COMPILER_STRIP_GATE(806854B4, &lit_4358);
#pragma pop

/* 806854B8-806854BC 000084 0004+00 0/1 0/0 0/0 .rodata          @4359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4359 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(806854B8, &lit_4359);
#pragma pop

/* 806854BC-806854C0 000088 0004+00 0/1 0/0 0/0 .rodata          @4360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4360 = 400.0f;
COMPILER_STRIP_GATE(806854BC, &lit_4360);
#pragma pop

/* 806854C0-806854C4 00008C 0004+00 0/2 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = 20.0f;
COMPILER_STRIP_GATE(806854C0, &lit_4361);
#pragma pop

/* 806854C4-806854C8 000090 0004+00 0/3 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4362 = 65536.0f;
COMPILER_STRIP_GATE(806854C4, &lit_4362);
#pragma pop

/* 806835FC-80683DDC 000E7C 07E0+00 1/1 0/0 0/0 .text bee_nest_action__FP11e_bee_classP5bee_sSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_nest_action(e_bee_class* param_0, bee_s* param_1, s8 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_nest_action__FP11e_bee_classP5bee_sSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 806854C8-806854CC 000094 0004+00 0/1 0/0 0/0 .rodata          @4395 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4395 = 3.0f;
COMPILER_STRIP_GATE(806854C8, &lit_4395);
#pragma pop

/* 806854CC-806854D0 000098 0004+00 0/1 0/0 0/0 .rodata          @4396 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4396 = 1000.0f;
COMPILER_STRIP_GATE(806854CC, &lit_4396);
#pragma pop

/* 806854D0-806854D4 00009C 0004+00 0/1 0/0 0/0 .rodata          @4397 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4397 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(806854D0, &lit_4397);
#pragma pop

/* 806854D4-806854D8 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4398 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4398 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(806854D4, &lit_4398);
#pragma pop

/* 806854D8-806854DC 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4399 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4399 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(806854D8, &lit_4399);
#pragma pop

/* 80683DDC-80683FF4 00165C 0218+00 1/1 0/0 0/0 .text            bee_fail__FP5bee_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_fail(bee_s* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_fail__FP5bee_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 806854DC-806854E0 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4448 = 4000.0f;
COMPILER_STRIP_GATE(806854DC, &lit_4448);
#pragma pop

/* 80683FF4-80684248 001874 0254+00 1/1 0/0 0/0 .text            bee_start__FP11e_bee_classP5bee_s
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_start(e_bee_class* param_0, bee_s* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_start__FP11e_bee_classP5bee_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 806854E0-806854E4 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4676 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4676 = -20000.0f;
COMPILER_STRIP_GATE(806854E0, &lit_4676);
#pragma pop

/* 806854E4-806854E8 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4677 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4677 = 30000.0f;
COMPILER_STRIP_GATE(806854E4, &lit_4677);
#pragma pop

/* 806854E8-806854EC 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4678 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4678 = -15000.0f;
COMPILER_STRIP_GATE(806854E8, &lit_4678);
#pragma pop

/* 806854EC-806854F0 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4679 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4679 = 120.0f;
COMPILER_STRIP_GATE(806854EC, &lit_4679);
#pragma pop

/* 806854F0-806854F4 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4680 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4680 = 2500.0f;
COMPILER_STRIP_GATE(806854F0, &lit_4680);
#pragma pop

/* 806854F4-806854F8 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4681 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4681 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(806854F4, &lit_4681);
#pragma pop

/* 80685698-806856A8 000068 000C+04 0/1 0/0 0/0 .bss             @4455 */
#pragma push
#pragma force_active on
static u8 lit_4455[12 + 4 /* padding */];
#pragma pop

/* 806856A8-806856B4 000078 000C+00 0/1 0/0 0/0 .bss             non$4454 */
#pragma push
#pragma force_active on
static u8 non[12];
#pragma pop

/* 80684248-80684A94 001AC8 084C+00 1/1 0/0 0/0 .text            bee_control__FP11e_bee_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void bee_control(e_bee_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/bee_control__FP11e_bee_class.s"
}
#pragma pop

/* 80684A94-80684B5C 002314 00C8+00 2/1 0/0 0/0 .text            daE_Bee_Execute__FP11e_bee_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_Bee_Execute(e_bee_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/daE_Bee_Execute__FP11e_bee_class.s"
}
#pragma pop

/* 80684B5C-80684B64 0023DC 0008+00 1/0 0/0 0/0 .text            daE_Bee_IsDelete__FP11e_bee_class
 */
static bool daE_Bee_IsDelete(e_bee_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 806854F8-80685508 0000C4 0010+00 1/1 0/0 0/0 .rodata          l_bmdidx$4715 */
SECTION_RODATA static u8 const l_bmdidx_4715[16] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(806854F8, &l_bmdidx_4715);

/* 80684B64-80684C70 0023E4 010C+00 1/0 0/0 0/0 .text            daE_Bee_Delete__FP11e_bee_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_Bee_Delete(e_bee_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/daE_Bee_Delete__FP11e_bee_class.s"
}
#pragma pop

/* 80684C70-80684E24 0024F0 01B4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80685508-80685518 0000D4 0010+00 0/1 0/0 0/0 .rodata          l_bmdidx$4800 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_bmdidx_4800[16] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06,
};
COMPILER_STRIP_GATE(80685508, &l_bmdidx_4800);
#pragma pop

/* 80685518-8068551C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4910 = -80.0f;
COMPILER_STRIP_GATE(80685518, &lit_4910);
#pragma pop

/* 8068551C-80685524 0000E8 0008+00 0/1 0/0 0/0 .rodata          @4912 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4912[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8068551C, &lit_4912);
#pragma pop

/* 80684E24-80685224 0026A4 0400+00 1/0 0/0 0/0 .text            daE_Bee_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daE_Bee_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/daE_Bee_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80685224-8068526C 002AA4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8068526C-806852B4 002AEC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 806852B4-806852FC 002B34 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 806852FC-80685368 002B7C 006C+00 1/1 0/0 0/0 .text            __dt__5bee_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bee_s::~bee_s() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__5bee_sFv.s"
}
#pragma pop

/* 80685368-8068539C 002BE8 0034+00 1/1 0/0 0/0 .text            __ct__5bee_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bee_s::bee_s() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__ct__5bee_sFv.s"
}
#pragma pop

/* 8068539C-806853E4 002C1C 0048+00 2/1 0/0 0/0 .text            __dt__13daE_Bee_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_Bee_HIO_c::~daE_Bee_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__dt__13daE_Bee_HIO_cFv.s"
}
#pragma pop

/* 806853E4-80685420 002C64 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_bee_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_e_bee_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bee/d_a_e_bee/__sinit_d_a_e_bee_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_806853E4 = (void*)__sinit_d_a_e_bee_cpp;
#pragma pop

/* ############################################################################################## */
/* 806856B4-806856B8 000084 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_806856B4[4];
#pragma pop

/* 806856B8-806856BC 000088 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_806856B8[4];
#pragma pop

/* 806856BC-806856C0 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_806856BC[4];
#pragma pop

/* 806856C0-806856C4 000090 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_806856C0[4];
#pragma pop

/* 806856C4-806856C8 000094 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806856C4[4];
#pragma pop

/* 806856C8-806856CC 000098 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806856C8[4];
#pragma pop

/* 806856CC-806856D0 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_806856CC[4];
#pragma pop

/* 806856D0-806856D4 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_806856D0[4];
#pragma pop

/* 806856D4-806856D8 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_806856D4[4];
#pragma pop

/* 806856D8-806856DC 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_806856D8[4];
#pragma pop

/* 806856DC-806856E0 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_806856DC[4];
#pragma pop

/* 806856E0-806856E4 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_806856E0[4];
#pragma pop

/* 806856E4-806856E8 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_806856E4[4];
#pragma pop

/* 806856E8-806856EC 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_806856E8[4];
#pragma pop

/* 806856EC-806856F0 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_806856EC[4];
#pragma pop

/* 806856F0-806856F4 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_806856F0[4];
#pragma pop

/* 806856F4-806856F8 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_806856F4[4];
#pragma pop

/* 806856F8-806856FC 0000C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_806856F8[4];
#pragma pop

/* 806856FC-80685700 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_806856FC[4];
#pragma pop

/* 80685700-80685704 0000D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80685700[4];
#pragma pop

/* 80685704-80685708 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80685704[4];
#pragma pop

/* 80685708-8068570C 0000D8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80685708[4];
#pragma pop

/* 8068570C-80685710 0000DC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8068570C[4];
#pragma pop

/* 80685710-80685714 0000E0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80685710[4];
#pragma pop

/* 80685714-80685718 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80685714[4];
#pragma pop

/* 80685524-8068552A 0000F0 0006+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80685524 = "E_bee";
#pragma pop
