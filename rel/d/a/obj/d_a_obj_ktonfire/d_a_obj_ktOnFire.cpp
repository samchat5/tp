//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ktOnFire
//

#include "rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoHIO_entry_c {
    /* 8058C630 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daKtOnFire_c {
    /* 8058C678 */ void setBaseMtx();
    /* 8058C6D0 */ void create();
    /* 8058C960 */ void lightInit();
    /* 8058C9D4 */ void setLight();
    /* 8058C9F8 */ void cutLight();
    /* 8058CA1C */ void Execute();
    /* 8058CDF8 */ bool Draw();
    /* 8058CE00 */ void Delete();
};

struct daKtOnFire_HIO_c {
    /* 8058C60C */ daKtOnFire_HIO_c();
    /* 8058CEA8 */ ~daKtOnFire_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dKy_tevstr_c {};

struct cXyz {};

struct csXyz {};

struct dPa_control_c {
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
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
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 8058C8D0 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 8058C918 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct LIGHT_INFLUENCE {};

//
// Forward References:
//

extern "C" void __ct__16daKtOnFire_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daKtOnFire_cFv();
extern "C" void create__12daKtOnFire_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__12daKtOnFire_cFv();
extern "C" void setLight__12daKtOnFire_cFv();
extern "C" void cutLight__12daKtOnFire_cFv();
extern "C" void Execute__12daKtOnFire_cFv();
extern "C" bool Draw__12daKtOnFire_cFv();
extern "C" void Delete__12daKtOnFire_cFv();
extern "C" static void daKtOnFire_Draw__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Execute__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Delete__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daKtOnFire_HIO_cFv();
extern "C" void __sinit_d_a_obj_ktOnFire_cpp();

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8058CFDC-8058CFF4 000000 0018+00 1/1 0/0 0/0 .data            l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 8058CFF4-8058D038 000018 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daKtOnFire_c */
SECTION_DATA static u8 mCcDCyl__12daKtOnFire_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058D038-8058D058 -00001 0020+00 1/0 0/0 0/0 .data            l_daKtOnFire_Method */
SECTION_DATA static void* l_daKtOnFire_Method[8] = {
    (void*)daKtOnFire_Create__FP10fopAc_ac_c,
    (void*)daKtOnFire_Delete__FP12daKtOnFire_c,
    (void*)daKtOnFire_Execute__FP12daKtOnFire_c,
    (void*)NULL,
    (void*)daKtOnFire_Draw__FP12daKtOnFire_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8058D058-8058D088 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_KtOnFire */
SECTION_DATA extern void* g_profile_Tag_KtOnFire[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01680000, (void*)&g_fpcLf_Method,
    (void*)0x00000728, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01F60000, (void*)&l_daKtOnFire_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 8058D088-8058D094 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8058D094-8058D0A0 0000B8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8058D0A0-8058D0AC 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__16daKtOnFire_HIO_c */
SECTION_DATA extern void* __vt__16daKtOnFire_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daKtOnFire_HIO_cFv,
};

/* 8058D0AC-8058D0B8 0000D0 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 8058C60C-8058C630 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__16daKtOnFire_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daKtOnFire_HIO_c::daKtOnFire_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__ct__16daKtOnFire_HIO_cFv.s"
}
#pragma pop

/* 8058C630-8058C678 000110 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 8058C678-8058C6D0 000158 0058+00 1/1 0/0 0/0 .text            setBaseMtx__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/setBaseMtx__12daKtOnFire_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058CF88-8058CFB8 000000 0030+00 3/3 0/0 0/0 .rodata          mCcDObjInfo__12daKtOnFire_c */
SECTION_RODATA static u8 const mCcDObjInfo__12daKtOnFire_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8058CF88, &mCcDObjInfo__12daKtOnFire_c);

/* 8058CFB8-8058CFC0 000030 0004+04 1/2 0/0 0/0 .rodata          @3710 */
SECTION_RODATA static f32 const lit_3710[1 + 1 /* padding */] = {
    10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(8058CFB8, &lit_3710);

/* 8058CFC0-8058CFC8 000038 0008+00 1/1 0/0 0/0 .rodata          @3712 */
SECTION_RODATA static u8 const lit_3712[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(8058CFC0, &lit_3712);

/* 8058C6D0-8058C8D0 0001B0 0200+00 1/1 0/0 0/0 .text            create__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/create__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C8D0-8058C918 0003B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8058C918-8058C960 0003F8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058CFC8-8058CFCC 000040 0004+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3797 = 500.0f;
COMPILER_STRIP_GATE(8058CFC8, &lit_3797);
#pragma pop

/* 8058CFCC-8058CFD0 000044 0004+00 0/2 0/0 0/0 .rodata          @3798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3798 = 1.0f;
COMPILER_STRIP_GATE(8058CFCC, &lit_3798);
#pragma pop

/* 8058C960-8058C9D4 000440 0074+00 1/1 0/0 0/0 .text            lightInit__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/lightInit__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C9D4-8058C9F8 0004B4 0024+00 2/2 0/0 0/0 .text            setLight__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/setLight__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C9F8-8058CA1C 0004D8 0024+00 1/1 0/0 0/0 .text            cutLight__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/cutLight__12daKtOnFire_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058CFD0-8058CFD4 000048 0004+00 0/1 0/0 0/0 .rodata          @3913 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3913 = -1.0f;
COMPILER_STRIP_GATE(8058CFD0, &lit_3913);
#pragma pop

/* 8058CFD4-8058CFD8 00004C 0004+00 0/1 0/0 0/0 .rodata          @3914 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3914 = 50.0f;
COMPILER_STRIP_GATE(8058CFD4, &lit_3914);
#pragma pop

/* 8058CFD8-8058CFDC 000050 0004+00 0/1 0/0 0/0 .rodata          @3915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3915 = 100.0f;
COMPILER_STRIP_GATE(8058CFD8, &lit_3915);
#pragma pop

/* 8058D0C0-8058D0CC 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 8058D0CC-8058D0D4 000014 0008+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 8058CA1C-8058CDF8 0004FC 03DC+00 1/1 0/0 0/0 .text            Execute__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/Execute__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058CDF8-8058CE00 0008D8 0008+00 1/1 0/0 0/0 .text            Draw__12daKtOnFire_cFv */
bool daKtOnFire_c::Draw() {
    return true;
}

/* 8058CE00-8058CE28 0008E0 0028+00 1/1 0/0 0/0 .text            Delete__12daKtOnFire_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/Delete__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058CE28-8058CE48 000908 0020+00 1/0 0/0 0/0 .text            daKtOnFire_Draw__FP12daKtOnFire_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKtOnFire_Draw(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Draw__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE48-8058CE68 000928 0020+00 1/0 0/0 0/0 .text daKtOnFire_Execute__FP12daKtOnFire_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKtOnFire_Execute(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Execute__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE68-8058CE88 000948 0020+00 1/0 0/0 0/0 .text            daKtOnFire_Delete__FP12daKtOnFire_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKtOnFire_Delete(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Delete__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE88-8058CEA8 000968 0020+00 1/0 0/0 0/0 .text            daKtOnFire_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKtOnFire_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8058CEA8-8058CF04 000988 005C+00 2/1 0/0 0/0 .text            __dt__16daKtOnFire_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daKtOnFire_HIO_c::~daKtOnFire_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__16daKtOnFire_HIO_cFv.s"
}
#pragma pop

/* 8058CF04-8058CF74 0009E4 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_ktOnFire_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_ktOnFire_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__sinit_d_a_obj_ktOnFire_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8058CF04 = (void*)__sinit_d_a_obj_ktOnFire_cpp;
#pragma pop
