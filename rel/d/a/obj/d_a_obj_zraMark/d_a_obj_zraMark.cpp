//
// Generated By: dol2asm
// Translation Unit: d_a_obj_zraMark
//

#include "rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct csXyz {
    /* 8026745C */ void operator+=(csXyz&);
};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CED4 */ void XYZrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjZraMark_c {
    /* 80D42678 */ void Create();
    /* 80D4287C */ void CreateHeap();
    /* 80D42A7C */ void Execute();
    /* 80D42B0C */ void Draw();
    /* 80D42C98 */ void Delete();
    /* 80D42CE0 */ void getType();
    /* 80D42D2C */ void setBaseMtx();
    /* 80D42EE0 */ void col_init();
    /* 80D42F5C */ void col_set();
    /* 80D432C8 */ void schHoz();
    /* 80D43314 */ void entryPointer(fopAc_ac_c*);
    /* 80D43370 */ void informBlast();
};

struct daNpcF_ActorMngr_c {
    /* 801506B0 */ void initialize();
    /* 801506BC */ void entry(fopAc_ac_c*);
    /* 801506EC */ void getActorP();
    /* 80D43C6C */ ~daNpcF_ActorMngr_c();
    /* 80D43CB4 */ daNpcF_ActorMngr_c();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 8008457C */ void GetTgHitObjSe();
    /* 800845B0 */ void getHitSeID(u8, int);
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80D43CF0 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D43D38 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct _ZraMark_Hahen_c {
    /* 80D4347C */ void create(cXyz const&, s8, s8, s8, s8);
    /* 80D434F8 */ void loadModel();
    /* 80D4357C */ void init(cXyz const&, s8, s8, s8);
    /* 80D43808 */ void calcSpeed();
    /* 80D43864 */ void setMtx();
    /* 80D438C8 */ void draw();
    /* 80D43B48 */ ~_ZraMark_Hahen_c();
    /* 80D43BB4 */ _ZraMark_Hahen_c();
};

struct _ZraMark_Hahen_Mng_c {
    /* 80D43968 */ void create(cXyz const&, s8, s8, s8, s8);
    /* 80D439F8 */ void calc();
    /* 80D43A74 */ void draw();
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDF48 */ ~Z2SoundObjBase();
    /* 802BDFF8 */ void deleteObject();
    /* 802BE4A4 */ void startCollisionSE(u32, u32, Z2SoundObjBase*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DLightObj {
    /* 80D43C34 */ J3DLightObj();
};

struct J3DLightInfo {
    /* 803256C4 */ void operator=(J3DLightInfo const&);
};

//
// Forward References:
//

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void Create__14daObjZraMark_cFv();
extern "C" void CreateHeap__14daObjZraMark_cFv();
extern "C" void Execute__14daObjZraMark_cFv();
extern "C" void Draw__14daObjZraMark_cFv();
extern "C" void Delete__14daObjZraMark_cFv();
extern "C" void getType__14daObjZraMark_cFv();
extern "C" void setBaseMtx__14daObjZraMark_cFv();
extern "C" void col_init__14daObjZraMark_cFv();
extern "C" void col_set__14daObjZraMark_cFv();
extern "C" void schHoz__14daObjZraMark_cFv();
extern "C" void entryPointer__14daObjZraMark_cFP10fopAc_ac_c();
extern "C" void informBlast__14daObjZraMark_cFv();
extern "C" static void daObjZraMark_Execute__FP14daObjZraMark_c();
extern "C" static void daObjZraMark_Draw__FP14daObjZraMark_c();
extern "C" static bool daObjZraMark_IsDelete__FP14daObjZraMark_c();
extern "C" static void daObjZraMark_Delete__FP14daObjZraMark_c();
extern "C" static void daObjZraMark_create__FP10fopAc_ac_c();
extern "C" void create__16_ZraMark_Hahen_cFRC4cXyzScScScSc();
extern "C" void loadModel__16_ZraMark_Hahen_cFv();
extern "C" void init__16_ZraMark_Hahen_cFRC4cXyzScScSc();
extern "C" void calcSpeed__16_ZraMark_Hahen_cFv();
extern "C" void setMtx__16_ZraMark_Hahen_cFv();
extern "C" void draw__16_ZraMark_Hahen_cFv();
extern "C" void create__20_ZraMark_Hahen_Mng_cFRC4cXyzScScScSc();
extern "C" void calc__20_ZraMark_Hahen_Mng_cFv();
extern "C" void draw__20_ZraMark_Hahen_Mng_cFv();
extern "C" void func_80D43ACC(int, int);
extern "C" void __dt__16_ZraMark_Hahen_cFv();
extern "C" void __ct__16_ZraMark_Hahen_cFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__18daNpcF_ActorMngr_cFv();
extern "C" void __ct__18daNpcF_ActorMngr_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" extern char const* const d_a_obj_zraMark__stringBase0;

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void XYZrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void initialize__18daNpcF_ActorMngr_cFv();
extern "C" void entry__18daNpcF_ActorMngr_cFP10fopAc_ac_c();
extern "C" void getActorP__18daNpcF_ActorMngr_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_rndF__Ff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D42658-80D42678 000078 0020+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43D88-80D43D9C 000000 0014+00 4/4 0/0 0/0 .rodata          l_DATA */
SECTION_RODATA static u8 const l_DATA[20] = {
    0x41, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x3F, 0x99,
    0x99, 0x9A, 0x42, 0x34, 0x00, 0x00, 0x44, 0x4D, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D43D88, &l_DATA);

/* 80D43D9C-80D43DE0 000014 0044+00 1/1 0/0 0/0 .rodata          l_sph_src */
SECTION_RODATA static u8 const l_sph_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D43D9C, &l_sph_src);

/* 80D43DE0-80D43DF0 000058 0010+00 0/1 0/0 0/0 .rodata          l_arcIdx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_arcIdx[16] = {
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(80D43DE0, &l_arcIdx);
#pragma pop

/* 80D43DF0-80D43DF4 000068 0004+00 0/2 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = 3.0f;
COMPILER_STRIP_GATE(80D43DF0, &lit_3949);
#pragma pop

/* 80D43DF4-80D43DF8 00006C 0004+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = -60.0f;
COMPILER_STRIP_GATE(80D43DF4, &lit_3950);
#pragma pop

/* 80D43DF8-80D43DFC 000070 0004+00 0/1 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = -500.0f;
COMPILER_STRIP_GATE(80D43DF8, &lit_3951);
#pragma pop

/* 80D43DFC-80D43E00 000074 0004+00 0/1 0/0 0/0 .rodata          @3952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3952 = 60.0f;
COMPILER_STRIP_GATE(80D43DFC, &lit_3952);
#pragma pop

/* 80D43E00-80D43E04 000078 0004+00 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 500.0f;
COMPILER_STRIP_GATE(80D43E00, &lit_3953);
#pragma pop

/* 80D43FA0-80D43FA4 000000 0004+00 1/1 0/0 0/0 .data            None */
SECTION_DATA static u8 data_80D43FA0[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D43FA4-80D43FA8 -00001 0004+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_zraMark__stringBase0;

/* 80D43FA8-80D43FC8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjZraMark_Method */
SECTION_DATA static void* l_daObjZraMark_Method[8] = {
    (void*)daObjZraMark_create__FP10fopAc_ac_c,
    (void*)daObjZraMark_Delete__FP14daObjZraMark_c,
    (void*)daObjZraMark_Execute__FP14daObjZraMark_c,
    (void*)daObjZraMark_IsDelete__FP14daObjZraMark_c,
    (void*)daObjZraMark_Draw__FP14daObjZraMark_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D43FC8-80D43FF8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_ZRA_MARK */
SECTION_DATA extern void* g_profile_ZRA_MARK[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02850000, (void*)&g_fpcLf_Method,
    (void*)0x00003E40, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01880000, (void*)&l_daObjZraMark_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80D43FF8-80D44004 000058 000C+00 2/2 0/0 0/0 .data            __vt__18daNpcF_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcF_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcF_ActorMngr_cFv,
};

/* 80D44004-80D44010 000064 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D44010-80D4401C 000070 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D42678-80D4287C 000098 0204+00 1/1 0/0 0/0 .text            Create__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/Create__14daObjZraMark_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43E04-80D43E08 00007C 0004+00 0/2 0/0 0/0 .rodata          @4122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4122 = 0.5f;
COMPILER_STRIP_GATE(80D43E04, &lit_4122);
#pragma pop

/* 80D43E08-80D43E0C 000080 0004+00 0/1 0/0 0/0 .rodata          @4123 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4123 = 0x3D800000;
COMPILER_STRIP_GATE(80D43E08, &lit_4123);
#pragma pop

/* 80D43E0C-80D43E10 000084 0004+00 0/2 0/0 0/0 .rodata          @4124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4124 = 20.0f;
COMPILER_STRIP_GATE(80D43E0C, &lit_4124);
#pragma pop

/* 80D4287C-80D42A7C 00029C 0200+00 1/1 0/0 0/0 .text            CreateHeap__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/CreateHeap__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D42A7C-80D42B0C 00049C 0090+00 1/1 0/0 0/0 .text            Execute__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/Execute__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D42B0C-80D42C98 00052C 018C+00 1/1 0/0 0/0 .text            Draw__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/Draw__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D42C98-80D42CE0 0006B8 0048+00 1/1 0/0 0/0 .text            Delete__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/Delete__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D42CE0-80D42D2C 000700 004C+00 1/1 0/0 0/0 .text            getType__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::getType() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/getType__14daObjZraMark_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43E10-80D43E40 000088 0030+00 0/1 0/0 0/0 .rodata          l_coOffset$4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_coOffset[48] = {
    0x41, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D43E10, &l_coOffset);
#pragma pop

/* 80D43E40-80D43E44 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4296 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4296 = 40.0f;
COMPILER_STRIP_GATE(80D43E40, &lit_4296);
#pragma pop

/* 80D42D2C-80D42EE0 00074C 01B4+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/setBaseMtx__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D42EE0-80D42F5C 000900 007C+00 1/1 0/0 0/0 .text            col_init__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::col_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/col_init__14daObjZraMark_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43E44-80D43E48 0000BC 0004+00 1/1 0/0 0/0 .rodata          @4400 */
SECTION_RODATA static f32 const lit_4400 = 1.0f;
COMPILER_STRIP_GATE(80D43E44, &lit_4400);

/* 80D43E48-80D43E4C 0000C0 0004+00 1/1 0/0 0/0 .rodata          @4401 */
SECTION_RODATA static f32 const lit_4401 = -1.0f;
COMPILER_STRIP_GATE(80D43E48, &lit_4401);

/* 80D42F5C-80D432C8 00097C 036C+00 1/1 0/0 0/0 .text            col_set__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::col_set() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/col_set__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D432C8-80D43314 000CE8 004C+00 1/1 0/0 0/0 .text            schHoz__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::schHoz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/schHoz__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D43314-80D43370 000D34 005C+00 0/0 0/0 1/1 .text entryPointer__14daObjZraMark_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::entryPointer(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/entryPointer__14daObjZraMark_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80D43370-80D433F4 000D90 0084+00 1/1 0/0 0/0 .text            informBlast__14daObjZraMark_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZraMark_c::informBlast() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/informBlast__14daObjZraMark_cFv.s"
}
#pragma pop

/* 80D433F4-80D43414 000E14 0020+00 1/0 0/0 0/0 .text daObjZraMark_Execute__FP14daObjZraMark_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZraMark_Execute(daObjZraMark_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/daObjZraMark_Execute__FP14daObjZraMark_c.s"
}
#pragma pop

/* 80D43414-80D43434 000E34 0020+00 1/0 0/0 0/0 .text daObjZraMark_Draw__FP14daObjZraMark_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZraMark_Draw(daObjZraMark_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/daObjZraMark_Draw__FP14daObjZraMark_c.s"
}
#pragma pop

/* 80D43434-80D4343C 000E54 0008+00 1/0 0/0 0/0 .text daObjZraMark_IsDelete__FP14daObjZraMark_c */
static bool daObjZraMark_IsDelete(daObjZraMark_c* param_0) {
    return true;
}

/* 80D4343C-80D4345C 000E5C 0020+00 1/0 0/0 0/0 .text daObjZraMark_Delete__FP14daObjZraMark_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZraMark_Delete(daObjZraMark_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/daObjZraMark_Delete__FP14daObjZraMark_c.s"
}
#pragma pop

/* 80D4345C-80D4347C 000E7C 0020+00 1/0 0/0 0/0 .text            daObjZraMark_create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZraMark_create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/daObjZraMark_create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D4347C-80D434F8 000E9C 007C+00 1/1 0/0 0/0 .text create__16_ZraMark_Hahen_cFRC4cXyzScScScSc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::create(cXyz const& param_0, s8 param_1, s8 param_2, s8 param_3,
                                  s8 param_4) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/create__16_ZraMark_Hahen_cFRC4cXyzScScScSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43E4C-80D43E54 0000C4 0008+00 1/1 0/0 0/0 .rodata          sHahenBmdType$4487 */
SECTION_RODATA static u8 const sHahenBmdType[8] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
};
COMPILER_STRIP_GATE(80D43E4C, &sHahenBmdType);

/* 80D434F8-80D4357C 000F18 0084+00 1/1 0/0 0/0 .text            loadModel__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::loadModel() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/loadModel__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43E54-80D43E8C 0000CC 0038+00 0/1 0/0 0/0 .rodata          sScale$4499 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const sScale[56] = {
    0x40, 0x40, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00, 0x40, 0x80,
    0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33, 0x3F, 0x00,
    0x00, 0x00, 0x3F, 0x99, 0x99, 0x9A, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD,
};
COMPILER_STRIP_GATE(80D43E54, &sScale);
#pragma pop

/* 80D43E8C-80D43F6C 000104 00E0+00 0/1 0/0 0/0 .rodata          sRoot$4500 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const sRoot[224] = {
    0x42, 0x9D, 0x99, 0x9A, 0x42, 0x5B, 0x99, 0x9A, 0x42, 0xCB, 0xCC, 0xCD, 0x42, 0x79, 0x99, 0x9A,
    0x42, 0xF4, 0x66, 0x66, 0x41, 0x97, 0x33, 0x33, 0x42, 0xF8, 0x66, 0x66, 0x42, 0x7E, 0x00, 0x00,
    0x42, 0xA7, 0x33, 0x33, 0x42, 0x71, 0x33, 0x33, 0x42, 0xED, 0x33, 0x33, 0x42, 0x58, 0x66, 0x66,
    0x42, 0x93, 0xCC, 0xCD, 0x41, 0xB0, 0x00, 0x00, 0x42, 0xDF, 0x00, 0x00, 0x42, 0x28, 0x00, 0x00,
    0x42, 0xDC, 0x66, 0x66, 0x41, 0xAC, 0xCC, 0xCD, 0x42, 0xFE, 0x33, 0x33, 0x41, 0x94, 0xCC, 0xCD,
    0x42, 0xC6, 0x99, 0x9A, 0x42, 0x82, 0x00, 0x00, 0x42, 0x97, 0x99, 0x9A, 0x42, 0x1F, 0x33, 0x33,
    0x42, 0xD4, 0x33, 0x33, 0x42, 0x3B, 0x99, 0x9A, 0x42, 0x8F, 0x66, 0x66, 0x42, 0x0A, 0xCC, 0xCD,
    0x42, 0xA5, 0x33, 0x33, 0x41, 0x90, 0xCC, 0xCD, 0x43, 0x04, 0x99, 0x9A, 0x42, 0x43, 0x33, 0x33,
    0x42, 0xEE, 0x66, 0x66, 0x42, 0x2C, 0x00, 0x00, 0x42, 0x62, 0xCC, 0xCD, 0x42, 0x84, 0x33, 0x33,
    0x42, 0xB2, 0x00, 0x00, 0x42, 0x65, 0x33, 0x33, 0x42, 0xB7, 0x99, 0x9A, 0x42, 0x24, 0x00, 0x00,
    0x42, 0x9C, 0x99, 0x9A, 0x41, 0xF8, 0x00, 0x00, 0x42, 0xC4, 0xCC, 0xCD, 0x41, 0xBC, 0xCC, 0xCD,
    0x42, 0xFA, 0x00, 0x00, 0x41, 0xA1, 0x99, 0x9A, 0x42, 0x7A, 0x00, 0x00, 0x42, 0x5A, 0xCC, 0xCD,
    0x42, 0xEE, 0x66, 0x66, 0x42, 0x3D, 0x33, 0x33, 0x42, 0x9F, 0xCC, 0xCD, 0x42, 0x57, 0x33, 0x33,
    0x42, 0x76, 0xCC, 0xCD, 0x42, 0x68, 0x66, 0x66, 0x42, 0x66, 0x66, 0x66, 0x41, 0xE8, 0xCC, 0xCD,
};
COMPILER_STRIP_GATE(80D43E8C, &sRoot);
#pragma pop

/* 80D43F6C-80D43F70 0001E4 0004+00 0/1 0/0 0/0 .rodata          @4542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4542 = 2.0f;
COMPILER_STRIP_GATE(80D43F6C, &lit_4542);
#pragma pop

/* 80D43F70-80D43F74 0001E8 0004+00 0/1 0/0 0/0 .rodata          @4543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4543 = 2.5f;
COMPILER_STRIP_GATE(80D43F70, &lit_4543);
#pragma pop

/* 80D43F74-80D43F78 0001EC 0004+00 0/1 0/0 0/0 .rodata          @4544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4544 = 1.5f;
COMPILER_STRIP_GATE(80D43F74, &lit_4544);
#pragma pop

/* 80D43F78-80D43F7C 0001F0 0004+00 0/1 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4545[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80D43F78, &lit_4545);
#pragma pop

/* 80D43F7C-80D43F80 0001F4 0004+00 0/1 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 10.0f;
COMPILER_STRIP_GATE(80D43F7C, &lit_4546);
#pragma pop

/* 80D43F80-80D43F84 0001F8 0004+00 0/1 0/0 0/0 .rodata          @4547 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4547 = 35.0f;
COMPILER_STRIP_GATE(80D43F80, &lit_4547);
#pragma pop

/* 80D43F84-80D43F88 0001FC 0004+00 0/1 0/0 0/0 .rodata          @4548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4548 = 30.0f;
COMPILER_STRIP_GATE(80D43F84, &lit_4548);
#pragma pop

/* 80D43F88-80D43F8C 000200 0004+00 0/1 0/0 0/0 .rodata          @4549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4549 = 15.0f;
COMPILER_STRIP_GATE(80D43F88, &lit_4549);
#pragma pop

/* 80D44020-80D44024 000000 0004+00 1/1 0/0 0/0 .bss             roottype$4501 */
static u8 roottype[4];

/* 80D44024-80D44028 000004 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D44024[4];

/* 80D4357C-80D43808 000F9C 028C+00 1/1 0/0 0/0 .text init__16_ZraMark_Hahen_cFRC4cXyzScScSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::init(cXyz const& param_0, s8 param_1, s8 param_2, s8 param_3) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/init__16_ZraMark_Hahen_cFRC4cXyzScScSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43F8C-80D43F90 000204 0004+00 1/1 0/0 0/0 .rodata          @4571 */
SECTION_RODATA static f32 const lit_4571 = 9.0f;
COMPILER_STRIP_GATE(80D43F8C, &lit_4571);

/* 80D43808-80D43864 001228 005C+00 1/1 0/0 0/0 .text            calcSpeed__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::calcSpeed() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/calcSpeed__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* 80D43864-80D438C8 001284 0064+00 2/2 0/0 0/0 .text            setMtx__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/setMtx__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* 80D438C8-80D43968 0012E8 00A0+00 1/1 0/0 0/0 .text            draw__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/draw__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* 80D43968-80D439F8 001388 0090+00 1/1 0/0 0/0 .text
 * create__20_ZraMark_Hahen_Mng_cFRC4cXyzScScScSc               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_Mng_c::create(cXyz const& param_0, s8 param_1, s8 param_2, s8 param_3,
                                      s8 param_4) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/create__20_ZraMark_Hahen_Mng_cFRC4cXyzScScScSc.s"
}
#pragma pop

/* 80D439F8-80D43A74 001418 007C+00 1/1 0/0 0/0 .text            calc__20_ZraMark_Hahen_Mng_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_Mng_c::calc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/calc__20_ZraMark_Hahen_Mng_cFv.s"
}
#pragma pop

/* 80D43A74-80D43ACC 001494 0058+00 1/1 0/0 0/0 .text            draw__20_ZraMark_Hahen_Mng_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void _ZraMark_Hahen_Mng_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/draw__20_ZraMark_Hahen_Mng_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D43F90-80D43F98 000208 0008+00 1/1 0/0 0/0 .rodata          @4658 */
SECTION_RODATA static u8 const lit_4658[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80D43F90, &lit_4658);

/* 80D43ACC-80D43B48 0014EC 007C+00 1/1 0/0 0/0 .text            cLib_getRndValue<i>__Fii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80D43ACC(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/func_80D43ACC.s"
}
#pragma pop

/* 80D43B48-80D43BB4 001568 006C+00 1/1 0/0 0/0 .text            __dt__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm _ZraMark_Hahen_c::~_ZraMark_Hahen_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__dt__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* 80D43BB4-80D43C34 0015D4 0080+00 1/1 0/0 0/0 .text            __ct__16_ZraMark_Hahen_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm _ZraMark_Hahen_c::_ZraMark_Hahen_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__ct__16_ZraMark_Hahen_cFv.s"
}
#pragma pop

/* 80D43C34-80D43C6C 001654 0038+00 1/1 0/0 0/0 .text            __ct__11J3DLightObjFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DLightObj::J3DLightObj() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__ct__11J3DLightObjFv.s"
}
#pragma pop

/* 80D43C6C-80D43CB4 00168C 0048+00 2/1 0/0 0/0 .text            __dt__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__dt__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80D43CB4-80D43CF0 0016D4 003C+00 1/1 0/0 0/0 .text            __ct__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_ActorMngr_c::daNpcF_ActorMngr_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__ct__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 80D43CF0-80D43D38 001710 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D43D38-80D43D80 001758 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zraMark/d_a_obj_zraMark/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D43F98-80D43F9D 000210 0005+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D43F98 = "buoy";
#pragma pop
