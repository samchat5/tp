/**
 * @file d_a_obj_pillar.cpp
 * 
*/

#include "d/actor/d_a_obj_pillar.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__14daPillar_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" static void rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void setBaseMtx__10daPillar_cFv();
extern "C" void Create__10daPillar_cFv();
extern "C" void CreateHeap__10daPillar_cFv();
extern "C" void create1st__10daPillar_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void checkAttacked__10daPillar_cFv();
extern "C" void on_switch__10daPillar_cFv();
extern "C" void checkShake__10daPillar_cFv();
extern "C" void setShake_rcrash__10daPillar_cFv();
extern "C" void setShake_strong__10daPillar_cFv();
extern "C" void setShake_weak__10daPillar_cFv();
extern "C" void switch_proc_call__10daPillar_cFv();
extern "C" void actionSwOnWait__10daPillar_cFv();
extern "C" void actionSwOn__10daPillar_cFv();
extern "C" void actionEnd__10daPillar_cFv();
extern "C" void Execute__10daPillar_cFPPA3_A4_f();
extern "C" void Draw__10daPillar_cFv();
extern "C" void Delete__10daPillar_cFv();
extern "C" static void daPillar_create1st__FP10daPillar_c();
extern "C" static void daPillar_MoveBGDelete__FP10daPillar_c();
extern "C" static void daPillar_MoveBGExecute__FP10daPillar_c();
extern "C" static void daPillar_MoveBGDraw__FP10daPillar_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__14daPillar_HIO_cFv();
extern "C" void __sinit_d_a_obj_pillar_cpp();
extern "C" extern char const* const d_a_obj_pillar__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_rollPlayerCrash__FPC10fopAc_ac_cfUlffif();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CB09D4-80CB09DC 000000 0008+00 7/7 0/0 0/0 .rodata          l_bmd */
SECTION_RODATA static u8 const l_bmd[8] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
};
COMPILER_STRIP_GATE(0x80CB09D4, &l_bmd);

/* 80CB09DC-80CB09E4 000008 0008+00 1/1 0/0 0/0 .rodata          l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
};
COMPILER_STRIP_GATE(0x80CB09DC, &l_dzb);

/* 80CB09E4-80CB09EC 000010 0008+00 1/1 0/0 0/0 .rodata          l_shadowBmd */
SECTION_RODATA static u8 const l_shadowBmd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
};
COMPILER_STRIP_GATE(0x80CB09E4, &l_shadowBmd);

/* 80CB09EC-80CB09F4 000018 0008+00 1/1 0/0 0/0 .rodata          l_heap_size */
SECTION_RODATA static u8 const l_heap_size[8] = {
    0x00, 0x00, 0x18, 0x30, 0x00, 0x00, 0x0C, 0x00,
};
COMPILER_STRIP_GATE(0x80CB09EC, &l_heap_size);

/* 80CB09F4-80CB0A38 000020 0044+00 1/1 0/0 0/0 .rodata          l_cyl_src */
const static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x400000, 0x11}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x8}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        75.0f, // mRadius
        500.0f // mHeight
    } // mCyl
};

/* 80CB0A38-80CB0A68 000064 0030+00 2/4 0/0 0/0 .rodata          l_shake_data */
SECTION_RODATA static u8 const l_shake_data[48] = {
    0x05, 0x00, 0x03, 0x20, 0x00, 0x14, 0x1B, 0x58, 0x01, 0x90, 0x00, 0x41, 0xFF, 0x00, 0x02, 0x58,
    0x00, 0x14, 0x17, 0x70, 0x01, 0x2C, 0x00, 0x28, 0xFF, 0x00, 0x01, 0x90, 0x00, 0x14, 0x13, 0x88,
    0x00, 0xC8, 0x00, 0x1E, 0x05, 0x00, 0x03, 0x20, 0x00, 0x78, 0x1B, 0x58, 0x00, 0x1E, 0x00, 0x0F,
};
COMPILER_STRIP_GATE(0x80CB0A38, &l_shake_data);

/* 80CB0A68-80CB0A6C 000094 0004+00 0/6 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3664[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CB0A68, &lit_3664);
#pragma pop

/* 80CB0A6C-80CB0A70 000098 0004+00 0/1 0/0 0/0 .rodata          @3665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3665 = -7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CB0A6C, &lit_3665);
#pragma pop

/* 80CB0ACC-80CB0ACC 0000F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CB0ACC = "K_mbhasi0";
SECTION_DEAD static char const* const stringBase_80CB0AD6 = "K_mbhasi1";
#pragma pop

/* 80CB0AE8-80CB0AF4 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CB0AF4-80CB0B08 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CB0B08-80CB0B10 -00001 0008+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)&d_a_obj_pillar__stringBase0,
    (void*)(((char*)&d_a_obj_pillar__stringBase0) + 0xA),
};

/* 80CB0B10-80CB0B1C -00001 000C+00 0/1 0/0 0/0 .data            @4193 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4193[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionSwOnWait__10daPillar_cFv,
};
#pragma pop

/* 80CB0B1C-80CB0B28 -00001 000C+00 0/1 0/0 0/0 .data            @4194 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4194[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionSwOn__10daPillar_cFv,
};
#pragma pop

/* 80CB0B28-80CB0B34 -00001 000C+00 0/1 0/0 0/0 .data            @4195 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4195[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEnd__10daPillar_cFv,
};
#pragma pop

/* 80CB0B34-80CB0B58 00004C 0024+00 0/1 0/0 0/0 .data            l_func$4192 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CB0B58-80CB0B78 -00001 0020+00 1/0 0/0 0/0 .data            daPillar_METHODS */
static actor_method_class daPillar_METHODS = {
    (process_method_func)daPillar_create1st__FP10daPillar_c,
    (process_method_func)daPillar_MoveBGDelete__FP10daPillar_c,
    (process_method_func)daPillar_MoveBGExecute__FP10daPillar_c,
    0,
    (process_method_func)daPillar_MoveBGDraw__FP10daPillar_c,
};

/* 80CB0B78-80CB0BA8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Pillar */
extern actor_process_profile_definition g_profile_Obj_Pillar = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Pillar,        // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daPillar_c),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  432,                    // mPriority
  &daPillar_METHODS,      // sub_method
  0x00044100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CB0BA8-80CB0BB4 0000C0 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CB0BB4-80CB0BC0 0000CC 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CB0BC0-80CB0BCC 0000D8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CB0BCC-80CB0BD8 0000E4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CB0BD8-80CB0C00 0000F0 0028+00 2/2 0/0 0/0 .data            __vt__10daPillar_c */
SECTION_DATA extern void* __vt__10daPillar_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daPillar_cFv,
    (void*)Create__10daPillar_cFv,
    (void*)Execute__10daPillar_cFPPA3_A4_f,
    (void*)Draw__10daPillar_cFv,
    (void*)Delete__10daPillar_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CB0C00-80CB0C0C 000118 000C+00 2/2 0/0 0/0 .data            __vt__14daPillar_HIO_c */
SECTION_DATA extern void* __vt__14daPillar_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daPillar_HIO_cFv,
};

/* 80CB0C0C-80CB0C18 000124 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80CAF32C-80CAF3B0 0000EC 0084+00 1/1 0/0 0/0 .text            __ct__14daPillar_HIO_cFv */
daPillar_HIO_c::daPillar_HIO_c() {
    // NONMATCHING
}

/* 80CAF3B0-80CAF3F8 000170 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0A70-80CB0A74 00009C 0004+00 0/1 0/0 0/0 .rodata          @3681 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3681 = 8192.0f;
COMPILER_STRIP_GATE(0x80CB0A70, &lit_3681);
#pragma pop

/* 80CB0A74-80CB0A78 0000A0 0004+00 0/1 0/0 0/0 .rodata          @3682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3682 = 1300.0f;
COMPILER_STRIP_GATE(0x80CB0A74, &lit_3682);
#pragma pop

/* 80CB0A78-80CB0A7C 0000A4 0004+00 1/5 0/0 0/0 .rodata          @3683 */
SECTION_RODATA static f32 const lit_3683 = 1.0f;
COMPILER_STRIP_GATE(0x80CB0A78, &lit_3683);

/* 80CB0A7C-80CB0A84 0000A8 0004+04 0/1 0/0 0/0 .rodata          @3684 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3684[1 + 1 /* padding */] = {
    30.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80CB0A7C, &lit_3684);
#pragma pop

/* 80CAF3F8-80CAF4B4 0001B8 00BC+00 1/1 0/0 0/0 .text
 * rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
static void rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0A84-80CB0A8C 0000B0 0008+00 1/2 0/0 0/0 .rodata          @3716 */
SECTION_RODATA static u8 const lit_3716[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB0A84, &lit_3716);

/* 80CAF4B4-80CAF5EC 000274 0138+00 2/2 0/0 0/0 .text            setBaseMtx__10daPillar_cFv */
void daPillar_c::setBaseMtx() {
    // NONMATCHING
}

/* 80CAF5EC-80CAF7A8 0003AC 01BC+00 1/0 0/0 0/0 .text            Create__10daPillar_cFv */
void daPillar_c::Create() {
    // NONMATCHING
}

/* 80CAF7A8-80CAF8A4 000568 00FC+00 1/0 0/0 0/0 .text            CreateHeap__10daPillar_cFv */
void daPillar_c::CreateHeap() {
    // NONMATCHING
}

/* 80CAF8A4-80CAFA58 000664 01B4+00 1/1 0/0 0/0 .text            create1st__10daPillar_cFv */
void daPillar_c::create1st() {
    // NONMATCHING
}

/* 80CAFA58-80CAFAA0 000818 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80CAFAA0-80CAFAE8 000860 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80CAFAE8-80CAFB44 0008A8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CAFB44-80CAFC08 000904 00C4+00 2/2 0/0 0/0 .text            checkAttacked__10daPillar_cFv */
void daPillar_c::checkAttacked() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0A8C-80CB0A90 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4060 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4060 = 0x3BB40000;
COMPILER_STRIP_GATE(0x80CB0A8C, &lit_4060);
#pragma pop

/* 80CB0A90-80CB0A94 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4061 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4061 = 0x43B3F333;
COMPILER_STRIP_GATE(0x80CB0A90, &lit_4061);
#pragma pop

/* 80CB0A94-80CB0A9C 0000C0 0004+04 0/1 0/0 0/0 .rodata          @4062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4062[1 + 1 /* padding */] = {
    24.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80CB0A94, &lit_4062);
#pragma pop

/* 80CAFC08-80CAFD64 0009C8 015C+00 1/1 0/0 0/0 .text            on_switch__10daPillar_cFv */
void daPillar_c::on_switch() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0A9C-80CB0AA4 0000C8 0008+00 0/1 0/0 0/0 .rodata          @4116 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4116[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB0A9C, &lit_4116);
#pragma pop

/* 80CB0AA4-80CB0AAC 0000D0 0008+00 0/1 0/0 0/0 .rodata          @4117 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4117[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB0AA4, &lit_4117);
#pragma pop

/* 80CB0AAC-80CB0AB4 0000D8 0008+00 0/1 0/0 0/0 .rodata          @4118 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4118[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CB0AAC, &lit_4118);
#pragma pop

/* 80CB0AB4-80CB0AB8 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4119 = 150.0f;
COMPILER_STRIP_GATE(0x80CB0AB4, &lit_4119);
#pragma pop

/* 80CB0AB8-80CB0ABC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4120 = 220.0f;
COMPILER_STRIP_GATE(0x80CB0AB8, &lit_4120);
#pragma pop

/* 80CB0ACC-80CB0ACC 0000F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CB0AE0 = "D_MN05";
#pragma pop

/* 80CAFD64-80CAFF60 000B24 01FC+00 1/1 0/0 0/0 .text            checkShake__10daPillar_cFv */
void daPillar_c::checkShake() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0ABC-80CB0AC0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4178 = -1.0f;
COMPILER_STRIP_GATE(0x80CB0ABC, &lit_4178);
#pragma pop

/* 80CAFF60-80CB01E0 000D20 0280+00 1/1 0/0 0/0 .text            setShake_rcrash__10daPillar_cFv */
void daPillar_c::setShake_rcrash() {
    // NONMATCHING
}

/* 80CB01E0-80CB022C 000FA0 004C+00 1/1 0/0 0/0 .text            setShake_strong__10daPillar_cFv */
void daPillar_c::setShake_strong() {
    // NONMATCHING
}

/* 80CB022C-80CB0278 000FEC 004C+00 1/1 0/0 0/0 .text            setShake_weak__10daPillar_cFv */
void daPillar_c::setShake_weak() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CB0C20-80CB0C2C 000008 000C+00 1/1 0/0 0/0 .bss             @3657 */
static u8 lit_3657[12];

/* 80CB0C2C-80CB0C54 000014 0028+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 80CB0C54-80CB0C58 00003C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80CB0C54[4];

/* 80CB0278-80CB031C 001038 00A4+00 1/1 0/0 0/0 .text            switch_proc_call__10daPillar_cFv */
void daPillar_c::switch_proc_call() {
    // NONMATCHING
}

/* 80CB031C-80CB0378 0010DC 005C+00 1/0 0/0 0/0 .text            actionSwOnWait__10daPillar_cFv */
void daPillar_c::actionSwOnWait() {
    // NONMATCHING
}

/* 80CB0378-80CB03CC 001138 0054+00 2/1 0/0 0/0 .text            actionSwOn__10daPillar_cFv */
void daPillar_c::actionSwOn() {
    // NONMATCHING
}

/* 80CB03CC-80CB03D0 00118C 0004+00 1/0 0/0 0/0 .text            actionEnd__10daPillar_cFv */
void daPillar_c::actionEnd() {
    /* empty function */
}

/* ############################################################################################## */
/* 80CB0AC0-80CB0AC4 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4265 = 85.0f;
COMPILER_STRIP_GATE(0x80CB0AC0, &lit_4265);
#pragma pop

/* 80CB0AC4-80CB0AC8 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4266 = 200.0f;
COMPILER_STRIP_GATE(0x80CB0AC4, &lit_4266);
#pragma pop

/* 80CB0AC8-80CB0ACC 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4267 = -100.0f;
COMPILER_STRIP_GATE(0x80CB0AC8, &lit_4267);
#pragma pop

/* 80CB03D0-80CB0658 001190 0288+00 1/0 0/0 0/0 .text            Execute__10daPillar_cFPPA3_A4_f */
void daPillar_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80CB0658-80CB0740 001418 00E8+00 1/0 0/0 0/0 .text            Draw__10daPillar_cFv */
void daPillar_c::Draw() {
    // NONMATCHING
}

/* 80CB0740-80CB0780 001500 0040+00 1/0 0/0 0/0 .text            Delete__10daPillar_cFv */
void daPillar_c::Delete() {
    // NONMATCHING
}

/* 80CB0780-80CB0874 001540 00F4+00 1/0 0/0 0/0 .text            daPillar_create1st__FP10daPillar_c
 */
static void daPillar_create1st(daPillar_c* param_0) {
    // NONMATCHING
}

/* 80CB0874-80CB0894 001634 0020+00 1/0 0/0 0/0 .text daPillar_MoveBGDelete__FP10daPillar_c */
static void daPillar_MoveBGDelete(daPillar_c* param_0) {
    // NONMATCHING
}

/* 80CB0894-80CB08B4 001654 0020+00 1/0 0/0 0/0 .text daPillar_MoveBGExecute__FP10daPillar_c */
static void daPillar_MoveBGExecute(daPillar_c* param_0) {
    // NONMATCHING
}

/* 80CB08B4-80CB08E0 001674 002C+00 1/0 0/0 0/0 .text            daPillar_MoveBGDraw__FP10daPillar_c
 */
static void daPillar_MoveBGDraw(daPillar_c* param_0) {
    // NONMATCHING
}

/* 80CB08E0-80CB0928 0016A0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CB0928-80CB0984 0016E8 005C+00 2/1 0/0 0/0 .text            __dt__14daPillar_HIO_cFv */
daPillar_HIO_c::~daPillar_HIO_c() {
    // NONMATCHING
}

/* 80CB0984-80CB09C0 001744 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_pillar_cpp */
void __sinit_d_a_obj_pillar_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CB0984, __sinit_d_a_obj_pillar_cpp);
#pragma pop

/* 80CB0ACC-80CB0ACC 0000F8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */