//
// Generated By: dol2asm
// Translation Unit: d_a_kytag13
//

#include "rel/d/a/kytag/d_a_kytag13/d_a_kytag13.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag13_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk_All {
    /* 800778E8 */ ~dBgS_ObjGndChk_All();
};

struct dBgS_ObjGndChk {
    /* 80860148 */ ~dBgS_ObjGndChk();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cXyz {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct DOUBLE_POS {};

//
// Forward References:
//

extern "C" static bool daKytag13_Draw__FP13kytag13_class();
extern "C" static void vectle_calc__FP10DOUBLE_POSP4cXyz();
extern "C" static void daKytag13_Execute_standard__FP13kytag13_class();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" static void daKytag13_Execute__FP13kytag13_class();
extern "C" static bool daKytag13_IsDelete__FP13kytag13_class();
extern "C" static bool daKytag13_Delete__FP13kytag13_class();
extern "C" static void daKytag13_Create__FP10fopAc_ac_c();
extern "C" static void func_80860450();
extern "C" static void func_80860458();
extern "C" static void func_80860460();
extern "C" extern char const* const d_a_kytag13__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dKyw_get_wind_vec__Fv();
extern "C" void dKyw_get_wind_pow__Fv();
extern "C" void dKyw_get_wind_vecpow__Fv();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __dt__18dBgS_ObjGndChk_AllFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void cM3d_VectorProduct2d__Fffffff();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_21();
extern "C" void _restgpr_21();
extern "C" void strcmp();
extern "C" void sqrt();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__18dBgS_ObjGndChk_All[12];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* 8085F1F8-8085F200 000078 0008+00 1/0 0/0 0/0 .text            daKytag13_Draw__FP13kytag13_class
 */
static bool daKytag13_Draw(kytag13_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80860470-80860478 000000 0008+00 2/2 0/0 0/0 .rodata          @3783 */
SECTION_RODATA static u8 const lit_3783[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80860470, &lit_3783);

/* 80860478-8086047C 000008 0004+00 1/2 0/0 0/0 .rodata          @3784 */
SECTION_RODATA static u8 const lit_3784[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80860478, &lit_3784);

/* 8085F200-8085F2B0 000080 00B0+00 1/1 0/0 0/0 .text            vectle_calc__FP10DOUBLE_POSP4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void vectle_calc(DOUBLE_POS* param_0, cXyz* param_1) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/vectle_calc__FP10DOUBLE_POSP4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8086047C-80860480 00000C 0004+00 0/1 0/0 0/0 .rodata          @4177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4177 = 100.0f;
COMPILER_STRIP_GATE(8086047C, &lit_4177);
#pragma pop

/* 80860480-80860484 000010 0004+00 0/1 0/0 0/0 .rodata          @4178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4178 = 5.0f;
COMPILER_STRIP_GATE(80860480, &lit_4178);
#pragma pop

/* 80860484-80860488 000014 0004+00 0/1 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 1000.0f;
COMPILER_STRIP_GATE(80860484, &lit_4179);
#pragma pop

/* 80860488-8086048C 000018 0004+00 0/1 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(80860488, &lit_4180);
#pragma pop

/* 8086048C-80860490 00001C 0004+00 0/1 0/0 0/0 .rodata          @4181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4181 = 1.0f;
COMPILER_STRIP_GATE(8086048C, &lit_4181);
#pragma pop

/* 80860490-80860494 000020 0004+00 0/1 0/0 0/0 .rodata          @4182 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4182 = -0.0f;
COMPILER_STRIP_GATE(80860490, &lit_4182);
#pragma pop

/* 80860494-80860498 000024 0004+00 0/1 0/0 0/0 .rodata          @4183 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4183 = -3.0f / 10.0f;
COMPILER_STRIP_GATE(80860494, &lit_4183);
#pragma pop

/* 80860498-8086049C 000028 0004+00 0/1 0/0 0/0 .rodata          @4184 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4184 = -2.0f / 5.0f;
COMPILER_STRIP_GATE(80860498, &lit_4184);
#pragma pop

/* 8086049C-808604A0 00002C 0004+00 0/1 0/0 0/0 .rodata          @4185 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4185 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(8086049C, &lit_4185);
#pragma pop

/* 808604A0-808604A4 000030 0004+00 0/1 0/0 0/0 .rodata          @4186 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4186 = 4.0f;
COMPILER_STRIP_GATE(808604A0, &lit_4186);
#pragma pop

/* 808604A4-808604A8 000034 0004+00 0/1 0/0 0/0 .rodata          @4187 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4187 = 6.0f;
COMPILER_STRIP_GATE(808604A4, &lit_4187);
#pragma pop

/* 808604A8-808604AC 000038 0004+00 0/1 0/0 0/0 .rodata          @4188 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4188 = 500.0f;
COMPILER_STRIP_GATE(808604A8, &lit_4188);
#pragma pop

/* 808604AC-808604B0 00003C 0004+00 0/1 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 65536.0f;
COMPILER_STRIP_GATE(808604AC, &lit_4189);
#pragma pop

/* 808604B0-808604B4 000040 0004+00 0/1 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 1680.0f;
COMPILER_STRIP_GATE(808604B0, &lit_4190);
#pragma pop

/* 808604B4-808604B8 000044 0004+00 0/1 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 200.0f;
COMPILER_STRIP_GATE(808604B4, &lit_4191);
#pragma pop

/* 808604B8-808604BC 000048 0004+00 0/1 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 1630.0f;
COMPILER_STRIP_GATE(808604B8, &lit_4192);
#pragma pop

/* 808604BC-808604C0 00004C 0004+00 0/1 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 4280.0f;
COMPILER_STRIP_GATE(808604BC, &lit_4193);
#pragma pop

/* 808604C0-808604C4 000050 0004+00 0/1 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = -1680.0f;
COMPILER_STRIP_GATE(808604C0, &lit_4194);
#pragma pop

/* 808604C4-808604C8 000054 0004+00 0/1 0/0 0/0 .rodata          @4195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4195 = 5000.0f;
COMPILER_STRIP_GATE(808604C4, &lit_4195);
#pragma pop

/* 808604C8-808604CC 000058 0004+00 0/1 0/0 0/0 .rodata          @4196 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4196 = 750.0f;
COMPILER_STRIP_GATE(808604C8, &lit_4196);
#pragma pop

/* 808604CC-808604D0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4197 = 7110.0f;
COMPILER_STRIP_GATE(808604CC, &lit_4197);
#pragma pop

/* 808604D0-808604D4 000060 0004+00 0/1 0/0 0/0 .rodata          @4198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4198 = -22.0f;
COMPILER_STRIP_GATE(808604D0, &lit_4198);
#pragma pop

/* 808604D4-808604D8 000064 0004+00 0/1 0/0 0/0 .rodata          @4199 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4199 = 950.0f;
COMPILER_STRIP_GATE(808604D4, &lit_4199);
#pragma pop

/* 808604D8-808604E0 000068 0004+04 0/1 0/0 0/0 .rodata          @4200 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4200[1 + 1 /* padding */] = {
    -50.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(808604D8, &lit_4200);
#pragma pop

/* 808604E0-808604E8 000070 0008+00 0/1 0/0 0/0 .rodata          @4201 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4201[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(808604E0, &lit_4201);
#pragma pop

/* 808604E8-808604F0 000078 0008+00 0/1 0/0 0/0 .rodata          @4202 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4202[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(808604E8, &lit_4202);
#pragma pop

/* 808604F0-808604F4 000080 0004+00 0/1 0/0 0/0 .rodata          @4203 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4203 = 2.0f / 25.0f;
COMPILER_STRIP_GATE(808604F0, &lit_4203);
#pragma pop

/* 808604F4-808604F8 000084 0004+00 0/1 0/0 0/0 .rodata          @4204 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4204 = 0.5f;
COMPILER_STRIP_GATE(808604F4, &lit_4204);
#pragma pop

/* 808604F8-808604FC 000088 0004+00 0/1 0/0 0/0 .rodata          @4205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4205 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(808604F8, &lit_4205);
#pragma pop

/* 808604FC-80860500 00008C 0004+00 0/1 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4206 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(808604FC, &lit_4206);
#pragma pop

/* 80860500-80860504 000090 0004+00 0/1 0/0 0/0 .rodata          @4207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4207 = 37.0f / 10.0f;
COMPILER_STRIP_GATE(80860500, &lit_4207);
#pragma pop

/* 80860504-80860508 000094 0004+00 0/1 0/0 0/0 .rodata          @4208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4208 = 3.0f;
COMPILER_STRIP_GATE(80860504, &lit_4208);
#pragma pop

/* 80860508-8086050C 000098 0004+00 0/1 0/0 0/0 .rodata          @4209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4209 = 3000.0f;
COMPILER_STRIP_GATE(80860508, &lit_4209);
#pragma pop

/* 8086050C-80860510 00009C 0004+00 0/1 0/0 0/0 .rodata          @4210 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4210 = 0.25f;
COMPILER_STRIP_GATE(8086050C, &lit_4210);
#pragma pop

/* 80860510-80860514 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4211 = 1500.0f;
COMPILER_STRIP_GATE(80860510, &lit_4211);
#pragma pop

/* 80860514-80860518 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4212 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4212 = 0x3A83126F;
COMPILER_STRIP_GATE(80860514, &lit_4212);
#pragma pop

/* 80860518-8086051C 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4213 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4213 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(80860518, &lit_4213);
#pragma pop

/* 8086051C-80860520 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4214 = 0x38D1B717;
COMPILER_STRIP_GATE(8086051C, &lit_4214);
#pragma pop

/* 80860520-80860524 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4215 = 10.0f;
COMPILER_STRIP_GATE(80860520, &lit_4215);
#pragma pop

/* 80860524-80860528 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4216 = -5560.0f;
COMPILER_STRIP_GATE(80860524, &lit_4216);
#pragma pop

/* 80860528-8086052C 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4217 = 925.0f;
COMPILER_STRIP_GATE(80860528, &lit_4217);
#pragma pop

/* 80860540-80860560 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag13_Method */
SECTION_DATA static void* l_daKytag13_Method[8] = {
    (void*)daKytag13_Create__FP10fopAc_ac_c,
    (void*)daKytag13_Delete__FP13kytag13_class,
    (void*)daKytag13_Execute__FP13kytag13_class,
    (void*)daKytag13_IsDelete__FP13kytag13_class,
    (void*)daKytag13_Draw__FP13kytag13_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80860560-80860590 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG13 */
SECTION_DATA extern void* g_profile_KYTAG13[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B70000, (void*)&g_fpcLf_Method,
    (void*)0x00000580, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x006B0000, (void*)&l_daKytag13_Method,
    (void*)0x00060000, (void*)NULL,
};

/* 80860590-808605C0 000050 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80860450,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80860460,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80860458,
};

/* 8085F2B0-80860148 000130 0E98+00 1/1 0/0 0/0 .text
 * daKytag13_Execute_standard__FP13kytag13_class                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag13_Execute_standard(kytag13_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/daKytag13_Execute_standard__FP13kytag13_class.s"
}
#pragma pop

/* 80860148-808601C0 000FC8 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 808601C0-80860200 001040 0040+00 1/0 0/0 0/0 .text daKytag13_Execute__FP13kytag13_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag13_Execute(kytag13_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/daKytag13_Execute__FP13kytag13_class.s"
}
#pragma pop

/* 80860200-80860208 001080 0008+00 1/0 0/0 0/0 .text daKytag13_IsDelete__FP13kytag13_class */
static bool daKytag13_IsDelete(kytag13_class* param_0) {
    return true;
}

/* 80860208-80860210 001088 0008+00 1/0 0/0 0/0 .text            daKytag13_Delete__FP13kytag13_class
 */
static bool daKytag13_Delete(kytag13_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 8086052C-80860530 0000BC 0004+00 1/1 0/0 0/0 .rodata          @4335 */
SECTION_RODATA static f32 const lit_4335 = 255.0f;
COMPILER_STRIP_GATE(8086052C, &lit_4335);

/* 80860530-80860538 0000C0 0008+00 1/1 0/0 0/0 .rodata          @4337 */
SECTION_RODATA static u8 const lit_4337[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80860530, &lit_4337);

/* 80860210-80860450 001090 0240+00 1/0 0/0 0/0 .text            daKytag13_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag13_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/daKytag13_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80860450-80860458 0012D0 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80860450() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/func_80860450.s"
}
#pragma pop

/* 80860458-80860460 0012D8 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80860458() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/func_80860458.s"
}
#pragma pop

/* 80860460-80860468 0012E0 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80860460() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/d_a_kytag13/func_80860460.s"
}
#pragma pop

/* 80860538-8086053F 0000C8 0007+00 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80860538 = "D_MN11";
#pragma pop
