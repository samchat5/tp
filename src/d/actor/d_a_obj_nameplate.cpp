/**
 * @file d_a_obj_nameplate.cpp
 * 
*/

#include "d/actor/d_a_obj_nameplate.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void create_init__16daObjNameplate_cFv();
extern "C" void initBaseMtx__16daObjNameplate_cFv();
extern "C" void setBaseMtx__16daObjNameplate_cFv();
extern "C" void initCcSphere__16daObjNameplate_cFv();
extern "C" void setCcSphere__16daObjNameplate_cFv();
extern "C" void calcAngle__16daObjNameplate_cFv();
extern "C" void calcSpring__16daObjNameplate_cFv();
extern "C" void checkHitAngle__16daObjNameplate_cFv();
extern "C" void messageProc__16daObjNameplate_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjNameplate_Draw__FP16daObjNameplate_c();
extern "C" static void daObjNameplate_Execute__FP16daObjNameplate_c();
extern "C" static bool daObjNameplate_IsDelete__FP16daObjNameplate_c();
extern "C" static void daObjNameplate_Delete__FP16daObjNameplate_c();
extern "C" static void daObjNameplate_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" u8 const M_attr__16daObjNameplate_c[32];
extern "C" extern char const* const d_a_obj_nameplate__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void HitSeStart__5daObjFPC4cXyziPC12dCcD_GObjInfUl();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* ############################################################################################## */
/* 80594E74-80594E94 000000 0020+00 5/5 0/0 0/0 .rodata          M_attr__16daObjNameplate_c */
SECTION_RODATA u8 const daObjNameplate_c::M_attr[32] = {
    0x42, 0x48, 0x00, 0x00, 0x45, 0x1C, 0x40, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00,
    0xBC, 0xA3, 0xD7, 0x0A, 0x3F, 0x73, 0x33, 0x33, 0x00, 0xAA, 0x07, 0xD0, 0x00, 0x0A, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80594E74, &daObjNameplate_c::M_attr);

/* 80594E94-80594E98 000020 0004+00 0/1 0/0 0/0 .rodata          @3659 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3659 = -75.0f;
COMPILER_STRIP_GATE(0x80594E94, &lit_3659);
#pragma pop

/* 80594E98-80594E9C 000024 0004+00 0/1 0/0 0/0 .rodata          @3660 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3660 = -180.0f;
COMPILER_STRIP_GATE(0x80594E98, &lit_3660);
#pragma pop

/* 80594E9C-80594EA0 000028 0004+00 0/1 0/0 0/0 .rodata          @3661 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3661 = -25.0f;
COMPILER_STRIP_GATE(0x80594E9C, &lit_3661);
#pragma pop

/* 80594EA0-80594EA4 00002C 0004+00 0/1 0/0 0/0 .rodata          @3662 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3662 = 75.0f;
COMPILER_STRIP_GATE(0x80594EA0, &lit_3662);
#pragma pop

/* 80594EA4-80594EA8 000030 0004+00 0/1 0/0 0/0 .rodata          @3663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3663 = 20.0f;
COMPILER_STRIP_GATE(0x80594EA4, &lit_3663);
#pragma pop

/* 80594EA8-80594EAC 000034 0004+00 0/1 0/0 0/0 .rodata          @3664 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3664 = 25.0f;
COMPILER_STRIP_GATE(0x80594EA8, &lit_3664);
#pragma pop

/* 80594EAC-80594EB0 000038 0004+00 0/1 0/0 0/0 .rodata          @3665 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3665 = -105.0f;
COMPILER_STRIP_GATE(0x80594EAC, &lit_3665);
#pragma pop

/* 80594EB0-80594EB4 00003C 0004+00 0/1 0/0 0/0 .rodata          @3666 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3666 = 120.0f;
COMPILER_STRIP_GATE(0x80594EB0, &lit_3666);
#pragma pop

/* 80594098-8059415C 000078 00C4+00 1/1 0/0 0/0 .text            create_init__16daObjNameplate_cFv
 */
void daObjNameplate_c::create_init() {
    // NONMATCHING
}

/* 8059415C-8059417C 00013C 0020+00 1/1 0/0 0/0 .text            initBaseMtx__16daObjNameplate_cFv
 */
void daObjNameplate_c::initBaseMtx() {
    // NONMATCHING
}

/* 8059417C-80594248 00015C 00CC+00 2/2 0/0 0/0 .text            setBaseMtx__16daObjNameplate_cFv */
void daObjNameplate_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80594EB4-80594EF4 000040 0040+00 1/1 0/0 0/0 .rodata          ccSphSrc$3700 */
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x1607a, 0x11}, 0x99}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x1}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, -115.0f, 0.0f}, 50.0f} // mSph
    } // mSphAttr
};

/* 80594248-805942B8 000228 0070+00 1/1 0/0 0/0 .text            initCcSphere__16daObjNameplate_cFv
 */
void daObjNameplate_c::initCcSphere() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80594EF4-80594EF8 000080 0004+00 2/3 0/0 0/0 .rodata          @3718 */
SECTION_RODATA static u8 const lit_3718[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80594EF4, &lit_3718);

/* 80594EF8-80594EFC 000084 0004+00 1/1 0/0 0/0 .rodata          @3719 */
SECTION_RODATA static f32 const lit_3719 = -115.0f;
COMPILER_STRIP_GATE(0x80594EF8, &lit_3719);

/* 805942B8-8059434C 000298 0094+00 1/1 0/0 0/0 .text            setCcSphere__16daObjNameplate_cFv
 */
void daObjNameplate_c::setCcSphere() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80594EFC-80594F04 000088 0004+04 0/1 0/0 0/0 .rodata          @3769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3769[1 + 1 /* padding */] = {
    200.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80594EFC, &lit_3769);
#pragma pop

/* 8059434C-805945CC 00032C 0280+00 1/1 0/0 0/0 .text            calcAngle__16daObjNameplate_cFv */
void daObjNameplate_c::calcAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80594F04-80594F0C 000090 0008+00 1/1 0/0 0/0 .rodata          @3791 */
SECTION_RODATA static u8 const lit_3791[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80594F04, &lit_3791);

/* 805945CC-80594754 0005AC 0188+00 1/1 0/0 0/0 .text            calcSpring__16daObjNameplate_cFv */
void daObjNameplate_c::calcSpring() {
    // NONMATCHING
}

/* 80594754-805947F8 000734 00A4+00 1/1 0/0 0/0 .text            checkHitAngle__16daObjNameplate_cFv
 */
void daObjNameplate_c::checkHitAngle() {
    // NONMATCHING
}

/* 805947F8-80594950 0007D8 0158+00 1/1 0/0 0/0 .text            messageProc__16daObjNameplate_cFv
 */
void daObjNameplate_c::messageProc() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80594F0C-80594F0C 000098 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80594F0C = "J_Hyosatu";
SECTION_DEAD static char const* const stringBase_80594F16 = "J_Hyousatu.bmd";
#pragma pop

/* 80594F28-80594F2C -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_nameplate__stringBase0;

/* 80594950-805949C8 000930 0078+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static void createSolidHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805949C8-80594A6C 0009A8 00A4+00 1/0 0/0 0/0 .text daObjNameplate_Draw__FP16daObjNameplate_c */
static void daObjNameplate_Draw(daObjNameplate_c* param_0) {
    // NONMATCHING
}

/* 80594A6C-80594AB4 000A4C 0048+00 1/0 0/0 0/0 .text daObjNameplate_Execute__FP16daObjNameplate_c
 */
static void daObjNameplate_Execute(daObjNameplate_c* param_0) {
    // NONMATCHING
}

/* 80594AB4-80594ABC 000A94 0008+00 1/0 0/0 0/0 .text
 * daObjNameplate_IsDelete__FP16daObjNameplate_c                */
static bool daObjNameplate_IsDelete(daObjNameplate_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80594F2C-80594F4C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjNameplate_Method */
static actor_method_class l_daObjNameplate_Method = {
    (process_method_func)daObjNameplate_Create__FP10fopAc_ac_c,
    (process_method_func)daObjNameplate_Delete__FP16daObjNameplate_c,
    (process_method_func)daObjNameplate_Execute__FP16daObjNameplate_c,
    (process_method_func)daObjNameplate_IsDelete__FP16daObjNameplate_c,
    (process_method_func)daObjNameplate_Draw__FP16daObjNameplate_c,
};

/* 80594F4C-80594F7C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_NamePlate */
extern actor_process_profile_definition g_profile_Obj_NamePlate = {
  fpcLy_CURRENT_e,          // mLayerID
  7,                        // mListID
  fpcPi_CURRENT_e,          // mListPrio
  PROC_Obj_NamePlate,       // mProcName
  &g_fpcLf_Method.base,    // sub_method
  sizeof(daObjNameplate_c), // mSize
  0,                        // mSizeOther
  0,                        // mParameters
  &g_fopAc_Method.base,     // sub_method
  32,                       // mPriority
  &l_daObjNameplate_Method, // sub_method
  0x00040180,               // mStatus
  fopAc_ACTOR_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e,   // cullType
};

/* 80594F7C-80594F88 000054 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80594F88-80594F94 000060 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80594F94-80594FA0 00006C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80594FA0-80594FAC 000078 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80594ABC-80594BF8 000A9C 013C+00 1/0 0/0 0/0 .text daObjNameplate_Delete__FP16daObjNameplate_c
 */
static void daObjNameplate_Delete(daObjNameplate_c* param_0) {
    // NONMATCHING
}

/* 80594BF8-80594D38 000BD8 0140+00 1/0 0/0 0/0 .text daObjNameplate_Create__FP10fopAc_ac_c */
static void daObjNameplate_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80594D38-80594D80 000D18 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80594D80-80594DC8 000D60 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80594DC8-80594E24 000DA8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80594E24-80594E6C 000E04 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80594F0C-80594F0C 000098 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
