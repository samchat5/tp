//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv6FurikoTrap
//

#include "rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80C724C8 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daLv6FurikoTrap_c {
    /* 80C72510 */ void setBaseMtx();
    /* 80C72598 */ void CreateHeap();
    /* 80C72604 */ void create();
    /* 80C729B4 */ void Execute(f32 (**)[3][4]);
    /* 80C72CA8 */ void move();
    /* 80C72D24 */ void init_modeMove();
    /* 80C72D38 */ void modeMove();
    /* 80C72EE0 */ void Draw();
    /* 80C72F94 */ void Delete();
};

struct daLv6FurikoTrap_HIO_c {
    /* 80C7248C */ daLv6FurikoTrap_HIO_c();
    /* 80C73050 */ ~daLv6FurikoTrap_HIO_c();
};

struct cXyz {};

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

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80C727D4 */ ~dCcD_Sph();
    /* 80C728A0 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80C72924 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80C7296C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daLv6FurikoTrap_Draw(daLv6FurikoTrap_c*);
static void daLv6FurikoTrap_Execute(daLv6FurikoTrap_c*);
static void daLv6FurikoTrap_Delete(daLv6FurikoTrap_c*);
static void daLv6FurikoTrap_Create(fopAc_ac_c*);

extern "C" void __ct__21daLv6FurikoTrap_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__17daLv6FurikoTrap_cFv();
extern "C" void CreateHeap__17daLv6FurikoTrap_cFv();
extern "C" void create__17daLv6FurikoTrap_cFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void Execute__17daLv6FurikoTrap_cFPPA3_A4_f();
extern "C" void move__17daLv6FurikoTrap_cFv();
extern "C" void init_modeMove__17daLv6FurikoTrap_cFv();
extern "C" void modeMove__17daLv6FurikoTrap_cFv();
extern "C" void Draw__17daLv6FurikoTrap_cFv();
extern "C" void Delete__17daLv6FurikoTrap_cFv();
extern "C" static void daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c();
extern "C" static void daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c();
extern "C" static void daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c();
extern "C" static void daLv6FurikoTrap_Create__FP10fopAc_ac_c();
extern "C" void __dt__21daLv6FurikoTrap_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6FurikoTrap_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv6FuriTrap[12];

//
// External References:
//

void mDoMtx_ZXYrotS(f32 (*)[4], s16, s16, s16);
void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_ZrotS(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_ZrotS__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_18();
extern "C" void _savegpr_25();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_25();
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
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C73130-80C73134 0004+00 s=3 e=0 z=0  None .rodata    @3625 */
SECTION_RODATA static u32 const lit_3625 = 0x3F800000;

/* 80C73134-80C73138 0004+00 s=2 e=0 z=0  None .rodata    @3626 */
SECTION_RODATA static u32 const lit_3626 = 0x42340000;

/* 80C731A4-80C731E4 0040+00 s=2 e=0 z=0  None .data      mCcDSph__17daLv6FurikoTrap_c */
SECTION_DATA static u8 mCcDSph__17daLv6FurikoTrap_c[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C731E4-80C731F0 000C+00 s=1 e=0 z=0  None .data      posx$3810 */
SECTION_DATA static u8 posx[12] = {
    0x43, 0xBF, 0x80, 0x00, 0x43, 0xB2, 0x00, 0x00, 0x43, 0xA4, 0x80, 0x00,
};

/* 80C731F0-80C731FC 000C+00 s=1 e=0 z=0  None .data      posy$3811 */
SECTION_DATA static u8 posy[12] = {
    0xC4, 0x25, 0x00, 0x00, 0xC4, 0x2F, 0x00, 0x00, 0xC4, 0x39, 0x00, 0x00,
};

/* 80C731FC-80C73208 000C+00 s=1 e=0 z=0  None .data      @3884 */
SECTION_DATA static void* lit_3884[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__17daLv6FurikoTrap_cFv,
};

/* 80C73208-80C73214 000C+00 s=1 e=0 z=0  None .data      mode_proc$3883 */
SECTION_DATA static u8 mode_proc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C73214-80C73234 0020+00 s=1 e=0 z=0  None .data      l_daLv6FurikoTrap_Method */
SECTION_DATA static void* l_daLv6FurikoTrap_Method[8] = {
    (void*)daLv6FurikoTrap_Create__FP10fopAc_ac_c,
    (void*)daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c,
    (void*)daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c,
    (void*)NULL,
    (void*)daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C73234-80C73264 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv6FuriTrap */
SECTION_DATA void* g_profile_Obj_Lv6FuriTrap[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00990000, (void*)&g_fpcLf_Method,
    (void*)0x00001D18, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02730000, (void*)&l_daLv6FurikoTrap_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80C73264-80C73270 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C73270-80C7327C 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA static void* __vt__8cM3dGSph[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C7327C-80C732A4 0028+00 s=1 e=0 z=0  None .data      __vt__17daLv6FurikoTrap_c */
SECTION_DATA static void* __vt__17daLv6FurikoTrap_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__17daLv6FurikoTrap_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__17daLv6FurikoTrap_cFPPA3_A4_f,
    (void*)Draw__17daLv6FurikoTrap_cFv,
    (void*)Delete__17daLv6FurikoTrap_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C732A4-80C732B0 000C+00 s=2 e=0 z=0  None .data      __vt__21daLv6FurikoTrap_HIO_c */
SECTION_DATA static void* __vt__21daLv6FurikoTrap_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__21daLv6FurikoTrap_HIO_cFv,
};

/* 80C732B0-80C732BC 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C7248C-80C724C8 003C+00 s=1 e=0 z=0  None .text      __ct__21daLv6FurikoTrap_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6FurikoTrap_HIO_c::daLv6FurikoTrap_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__ct__21daLv6FurikoTrap_HIO_cFv.s"
}
#pragma pop

/* 80C724C8-80C72510 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C72510-80C72598 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/setBaseMtx__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C73138-80C73168 0030+00 s=1 e=0 z=0  None .rodata    mCcDObjInfo__17daLv6FurikoTrap_c */
SECTION_RODATA static u8 const mCcDObjInfo__17daLv6FurikoTrap_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x0A, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C73168-80C7316C 0004+00 s=2 e=0 z=0  None .rodata    @3871 */
SECTION_RODATA static u8 const lit_3871[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C7316C-80C73170 0004+00 s=1 e=0 z=0  None .rodata    @3872 */
SECTION_RODATA static u32 const lit_3872 = 0xC4548000;

/* 80C73170-80C73174 0004+00 s=2 e=0 z=0  None .rodata    @3873 */
SECTION_RODATA static u32 const lit_3873 = 0x43360B61;

/* 80C73174-80C73178 0004+00 s=1 e=0 z=0  None .rodata    @3874 */
SECTION_RODATA static u32 const lit_3874 = 0xC1AC0000;

/* 80C73178-80C7317C 0004+00 s=1 e=0 z=0  None .rodata    @3875 */
SECTION_RODATA static u32 const lit_3875 = 0x40666666;

/* 80C7317C-80C73180 0004+00 s=2 e=0 z=0  None .rodata    @3876 */
SECTION_RODATA static u32 const lit_3876 = 0x41F00000;

/* 80C73180-80C73188 0008+00 s=1 e=0 z=0  None .rodata    @3878 */
SECTION_RODATA static u8 const lit_3878[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80C73188-80C7318C 0004+00 s=1 e=0 z=0  None .rodata    @3941 */
SECTION_RODATA static u32 const lit_3941 = 0x40000000;

/* 80C7318C-80C73190 0004+00 s=1 e=0 z=0  None .rodata    @3942 */
SECTION_RODATA static u32 const lit_3942 = 0x3F7FBE77;

/* 80C73190-80C73194 0004+00 s=1 e=0 z=0  None .rodata    @3943 */
SECTION_RODATA static u32 const lit_3943 = 0xC46B0000;

/* 80C73194-80C73198 0004+00 s=1 e=0 z=0  None .rodata    @3944 */
SECTION_RODATA static u32 const lit_3944 = 0xBF800000;

/* 80C73198-80C731A1 0009+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C73198 = "L6Furiko";
#pragma pop

/* 80C72598-80C72604 006C+00 s=1 e=0 z=0  None .text      CreateHeap__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/CreateHeap__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72604-80C727D4 01D0+00 s=1 e=0 z=0  None .text      create__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/create__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C727D4-80C728A0 00CC+00 s=1 e=0 z=0  None .text      __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80C728A0-80C72924 0084+00 s=1 e=0 z=0  None .text      __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80C72924-80C7296C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80C7296C-80C729B4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C729B4-80C72CA8 02F4+00 s=1 e=0 z=0  None .text      Execute__17daLv6FurikoTrap_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/Execute__17daLv6FurikoTrap_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C732C8-80C732D4 000C+00 s=1 e=0 z=0  None .bss       @3619 */
static u8 lit_3619[12];

/* 80C732D4-80C732E4 0010+00 s=2 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[16];

/* 80C732E4-80C732E8 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80C732E4[4];

/* 80C72CA8-80C72D24 007C+00 s=1 e=0 z=0  None .text      move__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/move__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72D24-80C72D38 0014+00 s=1 e=0 z=0  None .text      init_modeMove__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::init_modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/init_modeMove__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72D38-80C72EE0 01A8+00 s=1 e=0 z=0  None .text      modeMove__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::modeMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/modeMove__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72EE0-80C72F94 00B4+00 s=1 e=0 z=0  None .text      Draw__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/Draw__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72F94-80C72FC4 0030+00 s=1 e=0 z=0  None .text      Delete__17daLv6FurikoTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv6FurikoTrap_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/Delete__17daLv6FurikoTrap_cFv.s"
}
#pragma pop

/* 80C72FC4-80C72FF0 002C+00 s=1 e=0 z=0  None .text daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6FurikoTrap_Draw(daLv6FurikoTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c.s"
}
#pragma pop

/* 80C72FF0-80C73010 0020+00 s=1 e=0 z=0  None .text
 * daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6FurikoTrap_Execute(daLv6FurikoTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c.s"
}
#pragma pop

/* 80C73010-80C73030 0020+00 s=1 e=0 z=0  None .text daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6FurikoTrap_Delete(daLv6FurikoTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c.s"
}
#pragma pop

/* 80C73030-80C73050 0020+00 s=1 e=0 z=0  None .text      daLv6FurikoTrap_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv6FurikoTrap_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/daLv6FurikoTrap_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C73050-80C730AC 005C+00 s=2 e=0 z=0  None .text      __dt__21daLv6FurikoTrap_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv6FurikoTrap_HIO_c::~daLv6FurikoTrap_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__dt__21daLv6FurikoTrap_HIO_cFv.s"
}
#pragma pop

/* 80C730AC-80C7311C 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv6FurikoTrap_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv6FurikoTrap_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6FurikoTrap/d_a_obj_lv6FurikoTrap/__sinit_d_a_obj_lv6FurikoTrap_cpp.s"
}
#pragma pop
