//
// Generated By: dol2asm
// Translation Unit: d_a_obj_knBullet
//

#include "rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CED4 */ void XYZrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjKnBullet_c {
    /* 80C47118 */ void Create();
    /* 80C47300 */ void Execute();
    /* 80C47480 */ bool Draw();
    /* 80C47488 */ bool Delete();
    /* 80C47490 */ void setBaseMtx();
    /* 80C474E8 */ void col_init();
    /* 80C47558 */ void col_chk();
    /* 80C477B4 */ void hitPrtclSet();
};

struct dPa_levelEcallBack {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266F48 */ void normalizeZP();
};

struct _GXColor {};

struct dKy_tevstr_c {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
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
    /* 800842C0 */ void ChkAtHit();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80C47270 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80C472B8 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JPABaseEmitter {
    /* 8027EC60 */ void deleteAllParticle();
};

//
// Forward References:
//

static void daObjKnBullet_Execute(daObjKnBullet_c*);
static void daObjKnBullet_Draw(daObjKnBullet_c*);
static bool daObjKnBullet_IsDelete(daObjKnBullet_c*);
static void daObjKnBullet_Delete(daObjKnBullet_c*);
static void daObjKnBullet_create(fopAc_ac_c*);
static void cLib_calcTimer__template0(s16*);

extern "C" void Create__15daObjKnBullet_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void Execute__15daObjKnBullet_cFv();
extern "C" bool Draw__15daObjKnBullet_cFv();
extern "C" bool Delete__15daObjKnBullet_cFv();
extern "C" void setBaseMtx__15daObjKnBullet_cFv();
extern "C" void col_init__15daObjKnBullet_cFv();
extern "C" void col_chk__15daObjKnBullet_cFv();
extern "C" void hitPrtclSet__15daObjKnBullet_cFv();
extern "C" static void daObjKnBullet_Execute__FP15daObjKnBullet_c();
extern "C" static void daObjKnBullet_Draw__FP15daObjKnBullet_c();
extern "C" static bool daObjKnBullet_IsDelete__FP15daObjKnBullet_c();
extern "C" static void daObjKnBullet_Delete__FP15daObjKnBullet_c();
extern "C" static void daObjKnBullet_create__FP10fopAc_ac_c();
extern "C" static void func_80C4792C();
extern "C" extern void* g_profile_KN_BULLET[12];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_posMove(fopAc_ac_c*, cXyz const*);
void fpcEx_SearchByID(unsigned int);
void dComIfGp_getReverb(int);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void XYZrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void fpcEx_SearchByID__FUi();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECScale();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
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
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C47950-80C4795C 000C+00 s=4 e=0 z=0  None .rodata    l_DATA */
SECTION_RODATA static u8 const l_DATA[12] = {
    0x41, 0xF0, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00,
};

/* 80C4795C-80C4799C 0040+00 s=1 e=0 z=0  None .rodata    l_sph_src */
SECTION_RODATA static u8 const l_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C4799C-80C479A0 0004+00 s=1 e=0 z=0  None .rodata    @3907 */
SECTION_RODATA static u32 const lit_3907 = 0xC3960000;

/* 80C479A0-80C479A4 0004+00 s=1 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA static u32 const lit_3908 = 0xC2480000;

/* 80C479A4-80C479A8 0004+00 s=1 e=0 z=0  None .rodata    @3909 */
SECTION_RODATA static u32 const lit_3909 = 0x43960000;

/* 80C479A8-80C479AC 0004+00 s=1 e=0 z=0  None .rodata    @3910 */
SECTION_RODATA static u32 const lit_3910 = 0x43E10000;

/* 80C479CC-80C479EC 0020+00 s=1 e=0 z=0  None .data      l_daObjKnBullet_Method */
SECTION_DATA static void* l_daObjKnBullet_Method[8] = {
    (void*)daObjKnBullet_create__FP10fopAc_ac_c,
    (void*)daObjKnBullet_Delete__FP15daObjKnBullet_c,
    (void*)daObjKnBullet_Execute__FP15daObjKnBullet_c,
    (void*)daObjKnBullet_IsDelete__FP15daObjKnBullet_c,
    (void*)daObjKnBullet_Draw__FP15daObjKnBullet_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C479EC-80C47A1C 0030+00 s=0 e=0 z=1  None .data      g_profile_KN_BULLET */
SECTION_DATA void* g_profile_KN_BULLET[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x025B0000, (void*)&g_fpcLf_Method,
    (void*)0x0000071C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x015C0000, (void*)&l_daObjKnBullet_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80C47A1C-80C47A28 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C47A28-80C47A34 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C47118-80C47270 0158+00 s=1 e=0 z=0  None .text      Create__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/Create__15daObjKnBullet_cFv.s"
}
#pragma pop

/* 80C47270-80C472B8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C472B8-80C47300 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C479AC-80C479B4 0006+02 s=1 e=0 z=0  None .rodata    l_prticles_id$3986 */
SECTION_RODATA static u8 const l_prticles_id_3986[6 + 2 /* padding */] = {
    0x8B,
    0x7F,
    0x8B,
    0x80,
    0x8B,
    0x81,
    /* padding */
    0x00,
    0x00,
};

/* 80C479B4-80C479B8 0004+00 s=2 e=0 z=0  None .rodata    @4021 */
SECTION_RODATA static u32 const lit_4021 = 0x3F800000;

/* 80C479B8-80C479BC 0004+00 s=1 e=0 z=0  None .rodata    @4022 */
SECTION_RODATA static u32 const lit_4022 = 0xBF800000;

/* 80C47300-80C47480 0180+00 s=1 e=0 z=0  None .text      Execute__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/Execute__15daObjKnBullet_cFv.s"
}
#pragma pop

/* 80C47480-80C47488 0008+00 s=1 e=0 z=0  None .text      Draw__15daObjKnBullet_cFv */
bool daObjKnBullet_c::Draw() {
    return true;
}

/* 80C47488-80C47490 0008+00 s=1 e=0 z=0  None .text      Delete__15daObjKnBullet_cFv */
bool daObjKnBullet_c::Delete() {
    return true;
}

/* 80C47490-80C474E8 0058+00 s=2 e=0 z=0  None .text      setBaseMtx__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/setBaseMtx__15daObjKnBullet_cFv.s"
}
#pragma pop

/* 80C474E8-80C47558 0070+00 s=1 e=0 z=0  None .text      col_init__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::col_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/col_init__15daObjKnBullet_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C479BC-80C479C0 0004+00 s=1 e=0 z=0  None .rodata    @4129 */
SECTION_RODATA static u8 const lit_4129[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C479C0-80C479C4 0004+00 s=1 e=0 z=0  None .rodata    @4130 */
SECTION_RODATA static u32 const lit_4130 = 0x43160000;

/* 80C47558-80C477B4 025C+00 s=1 e=0 z=0  None .text      col_chk__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::col_chk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/col_chk__15daObjKnBullet_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C479C4-80C479CA 0006+00 s=1 e=0 z=0  None .rodata    l_prticles_id$4141 */
SECTION_RODATA static u8 const l_prticles_id_4141[6] = {
    0x8B, 0x82, 0x8B, 0x83, 0x8B, 0x84,
};

/* 80C477B4-80C478A4 00F0+00 s=1 e=0 z=0  None .text      hitPrtclSet__15daObjKnBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjKnBullet_c::hitPrtclSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/hitPrtclSet__15daObjKnBullet_cFv.s"
}
#pragma pop

/* 80C478A4-80C478C4 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Execute__FP15daObjKnBullet_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKnBullet_Execute(daObjKnBullet_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Execute__FP15daObjKnBullet_c.s"
}
#pragma pop

/* 80C478C4-80C478E4 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Draw__FP15daObjKnBullet_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKnBullet_Draw(daObjKnBullet_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Draw__FP15daObjKnBullet_c.s"
}
#pragma pop

/* 80C478E4-80C478EC 0008+00 s=1 e=0 z=0  None .text daObjKnBullet_IsDelete__FP15daObjKnBullet_c
 */
static bool daObjKnBullet_IsDelete(daObjKnBullet_c* param_0) {
    return true;
}

/* 80C478EC-80C4790C 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Delete__FP15daObjKnBullet_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKnBullet_Delete(daObjKnBullet_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Delete__FP15daObjKnBullet_c.s"
}
#pragma pop

/* 80C4790C-80C4792C 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjKnBullet_create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C4792C-80C47948 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(s16* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/func_80C4792C.s"
}
#pragma pop
