//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv5SwIce
//

#include "rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80C6C9D8 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct fOpAcm_HIO_entry_c {
    /* 80C6C97C */ ~fOpAcm_HIO_entry_c();
};

struct daLv5SwIce_c {
    /* 80C6CA20 */ void setBaseMtx();
    /* 80C6CAA8 */ void CreateHeap();
    /* 80C6CB14 */ void create();
    /* 80C6CDD0 */ void Execute(f32 (**)[3][4]);
    /* 80C6CE28 */ void procMain();
    /* 80C6CEB4 */ void init_modeWait();
    /* 80C6CED0 */ void modeWait();
    /* 80C6D0F4 */ void init_modeBreak();
    /* 80C6D144 */ void modeBreak();
    /* 80C6D260 */ void Draw();
    /* 80C6D314 */ void Delete();
};

struct daLv5SwIce_HIO_c {
    /* 80C6C94C */ daLv5SwIce_HIO_c();
    /* 80C6D418 */ ~daLv5SwIce_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

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
    /* 80083830 */ void Move();
    /* 80C6CD74 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW {};

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

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C6CCE4 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80C6CD2C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80C6D3D0 */ ~cCcD_GStts();
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

static void daLv5SwIce_Draw(daLv5SwIce_c*);
static void daLv5SwIce_Execute(daLv5SwIce_c*);
static void daLv5SwIce_Delete(daLv5SwIce_c*);
static void daLv5SwIce_Create(fopAc_ac_c*);

extern "C" void __ct__16daLv5SwIce_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daLv5SwIce_cFv();
extern "C" void CreateHeap__12daLv5SwIce_cFv();
extern "C" void create__12daLv5SwIce_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__12daLv5SwIce_cFPPA3_A4_f();
extern "C" void procMain__12daLv5SwIce_cFv();
extern "C" void init_modeWait__12daLv5SwIce_cFv();
extern "C" void modeWait__12daLv5SwIce_cFv();
extern "C" void init_modeBreak__12daLv5SwIce_cFv();
extern "C" void modeBreak__12daLv5SwIce_cFv();
extern "C" void Draw__12daLv5SwIce_cFv();
extern "C" void Delete__12daLv5SwIce_cFv();
extern "C" static void daLv5SwIce_Draw__FP12daLv5SwIce_c();
extern "C" static void daLv5SwIce_Execute__FP12daLv5SwIce_c();
extern "C" static void daLv5SwIce_Delete__FP12daLv5SwIce_c();
extern "C" static void daLv5SwIce_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daLv5SwIce_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv5SwIce_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv5SwIce[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _restgpr_24();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();
extern void* const pad_80C6D500[2];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C6D560-80C6D56C 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6D56C-80C6D580 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80C6D580-80C6D5C4 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__12daLv5SwIce_c */
SECTION_DATA static u8 mCcDCyl__12daLv5SwIce_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6D5C4-80C6D5D0 000C+00 s=1 e=0 z=0  None .data      @3837 */
SECTION_DATA static void* lit_3837[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daLv5SwIce_cFv,
};

/* 80C6D5D0-80C6D5DC 000C+00 s=1 e=0 z=0  None .data      @3838 */
SECTION_DATA static void* lit_3838[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daLv5SwIce_cFv,
};

/* 80C6D5DC-80C6D5F4 0018+00 s=1 e=0 z=0  None .data      mode_proc$3836 */
SECTION_DATA static u8 mode_proc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6D5F4-80C6D614 0020+00 s=1 e=0 z=0  None .data      l_daLv5SwIce_Method */
SECTION_DATA static void* l_daLv5SwIce_Method[8] = {
    (void*)daLv5SwIce_Create__FP10fopAc_ac_c,
    (void*)daLv5SwIce_Delete__FP12daLv5SwIce_c,
    (void*)daLv5SwIce_Execute__FP12daLv5SwIce_c,
    (void*)NULL,
    (void*)daLv5SwIce_Draw__FP12daLv5SwIce_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C6D614-80C6D644 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv5SwIce */
SECTION_DATA void* g_profile_Obj_Lv5SwIce[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x004E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000738, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02190000, (void*)&l_daLv5SwIce_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C6D644-80C6D650 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C6D650-80C6D65C 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C6D65C-80C6D668 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C6D668-80C6D674 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C6D674-80C6D69C 0028+00 s=1 e=0 z=0  None .data      __vt__12daLv5SwIce_c */
SECTION_DATA static void* __vt__12daLv5SwIce_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__12daLv5SwIce_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daLv5SwIce_cFPPA3_A4_f,
    (void*)Draw__12daLv5SwIce_cFv,
    (void*)Delete__12daLv5SwIce_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C6D69C-80C6D6A8 000C+00 s=2 e=0 z=0  None .data      __vt__16daLv5SwIce_HIO_c */
SECTION_DATA static void* __vt__16daLv5SwIce_HIO_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__16daLv5SwIce_HIO_cFv,
};

/* 80C6D6A8-80C6D6B4 000C+00 s=3 e=0 z=0  None .data      __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA static void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80C6D6B4-80C6D6C0 000C+00 s=4 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA static void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C6C94C-80C6C97C 0030+00 s=1 e=0 z=0  None .text      __ct__16daLv5SwIce_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv5SwIce_HIO_c::daLv5SwIce_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__ct__16daLv5SwIce_HIO_cFv.s"
}
#pragma pop

/* 80C6C97C-80C6C9D8 005C+00 s=1 e=0 z=0  None .text      __dt__18fOpAcm_HIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop

/* 80C6C9D8-80C6CA20 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C6CA20-80C6CAA8 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/setBaseMtx__12daLv5SwIce_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6D508-80C6D538 0030+00 s=3 e=0 z=0  None .rodata    mCcDObjInfo__12daLv5SwIce_c */
SECTION_RODATA static u8 const mCcDObjInfo__12daLv5SwIce_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
};

/* 80C6D538-80C6D53C 0004+00 s=1 e=0 z=0  None .rodata    l_eff_r$3861 */
SECTION_RODATA static u8 const l_eff_r[4] = {
    0x8A,
    0xE1,
    0x8A,
    0xE2,
};

/* 80C6D53C-80C6D540 0004+00 s=2 e=0 z=0  None .rodata    @3902 */
SECTION_RODATA static u32 const lit_3902 = 0x3F800000;

/* 80C6D540-80C6D544 0004+00 s=2 e=0 z=0  None .rodata    @3903 */
SECTION_RODATA static u32 const lit_3903 = 0xBF800000;

/* 80C6D544-80C6D548 0004+00 s=1 e=0 z=0  None .rodata    @3904 */
SECTION_RODATA static u32 const lit_3904 = 0x42F00000;

/* 80C6D548-80C6D54C 0004+00 s=1 e=0 z=0  None .rodata    @3905 */
SECTION_RODATA static u32 const lit_3905 = 0x435C0000;

/* 80C6D54C-80C6D550 0004+00 s=1 e=0 z=0  None .rodata    @3906 */
SECTION_RODATA static u32 const lit_3906 = 0x3F19999A;

/* 80C6D550-80C6D554 0004+00 s=1 e=0 z=0  None .rodata    l_eff_break$3922 */
SECTION_RODATA static u8 const l_eff_break[4] = {
    0x8A,
    0xDF,
    0x8A,
    0xE0,
};

/* 80C6D554-80C6D558 0004+00 s=1 e=0 z=0  None .rodata    @3948 */
SECTION_RODATA static u32 const lit_3948 = 0x3F400000;

/* 80C6D558-80C6D560 0008+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C6D558 = "L5SwIce";
#pragma pop

/* 80C6CAA8-80C6CB14 006C+00 s=1 e=0 z=0  None .text      CreateHeap__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/CreateHeap__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6CB14-80C6CCE4 01D0+00 s=1 e=0 z=0  None .text      create__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/create__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6CCE4-80C6CD2C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C6CD2C-80C6CD74 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C6CD74-80C6CDD0 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C6CDD0-80C6CE28 0058+00 s=1 e=0 z=0  None .text      Execute__12daLv5SwIce_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/Execute__12daLv5SwIce_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C6D6C8-80C6D6D4 000C+00 s=1 e=0 z=0  None .bss       @3647 */
static u8 lit_3647[12];

/* 80C6D6D4-80C6D6DC 0008+00 s=2 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[8];

/* 80C6D6DC-80C6D6E0 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80C6D6DC[4];

/* 80C6CE28-80C6CEB4 008C+00 s=1 e=0 z=0  None .text      procMain__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::procMain() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/procMain__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6CEB4-80C6CED0 001C+00 s=1 e=0 z=0  None .text      init_modeWait__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/init_modeWait__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6CED0-80C6D0F4 0224+00 s=1 e=0 z=0  None .text      modeWait__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/modeWait__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6D0F4-80C6D144 0050+00 s=1 e=0 z=0  None .text      init_modeBreak__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::init_modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/init_modeBreak__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6D144-80C6D260 011C+00 s=1 e=0 z=0  None .text      modeBreak__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/modeBreak__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6D260-80C6D314 00B4+00 s=1 e=0 z=0  None .text      Draw__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/Draw__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6D314-80C6D344 0030+00 s=1 e=0 z=0  None .text      Delete__12daLv5SwIce_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv5SwIce_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/Delete__12daLv5SwIce_cFv.s"
}
#pragma pop

/* 80C6D344-80C6D370 002C+00 s=1 e=0 z=0  None .text      daLv5SwIce_Draw__FP12daLv5SwIce_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv5SwIce_Draw(daLv5SwIce_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/daLv5SwIce_Draw__FP12daLv5SwIce_c.s"
}
#pragma pop

/* 80C6D370-80C6D390 0020+00 s=1 e=0 z=0  None .text      daLv5SwIce_Execute__FP12daLv5SwIce_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv5SwIce_Execute(daLv5SwIce_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/daLv5SwIce_Execute__FP12daLv5SwIce_c.s"
}
#pragma pop

/* 80C6D390-80C6D3B0 0020+00 s=1 e=0 z=0  None .text      daLv5SwIce_Delete__FP12daLv5SwIce_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv5SwIce_Delete(daLv5SwIce_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/daLv5SwIce_Delete__FP12daLv5SwIce_c.s"
}
#pragma pop

/* 80C6D3B0-80C6D3D0 0020+00 s=1 e=0 z=0  None .text      daLv5SwIce_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daLv5SwIce_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/daLv5SwIce_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C6D3D0-80C6D418 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C6D418-80C6D484 006C+00 s=2 e=0 z=0  None .text      __dt__16daLv5SwIce_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv5SwIce_HIO_c::~daLv5SwIce_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__dt__16daLv5SwIce_HIO_cFv.s"
}
#pragma pop

/* 80C6D484-80C6D4F4 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv5SwIce_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv5SwIce_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce/__sinit_d_a_obj_lv5SwIce_cpp.s"
}
#pragma pop
