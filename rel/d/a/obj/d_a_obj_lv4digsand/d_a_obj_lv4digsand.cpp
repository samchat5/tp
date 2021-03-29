//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4digsand
//

#include "rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {};

struct daObjL4DigSand_c {
    /* 80C66B18 */ void initBaseMtx();
    /* 80C66B54 */ void setBaseMtx();
    /* 80C66BC8 */ void Create();
    /* 80C66C24 */ void CreateHeap();
    /* 80C66C94 */ void create1st();
    /* 80C66D40 */ void Execute(f32 (**)[3][4]);
    /* 80C66DD0 */ void action();
    /* 80C66E74 */ void mode_init_wait();
    /* 80C66E80 */ void mode_wait();
    /* 80C66EAC */ void mode_init_dig();
    /* 80C66FFC */ void mode_dig();
    /* 80C670AC */ void mode_init_end();
    /* 80C67100 */ void mode_end();
    /* 80C67104 */ void Draw();
    /* 80C671A8 */ void Delete();
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

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C67398 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgW {};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
    /* 80C66F84 */ ~dBgS_ObjGndChk();
};

struct dBgS_ObjAcch {
    /* 80C67464 */ ~dBgS_ObjAcch();
};

struct csXyz {};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
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

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80C673F4 */ ~dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
};

struct cM3dGCyl {
    /* 80C67308 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80C67350 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80C67540 */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjL4DigSand_create1st(daObjL4DigSand_c*);
static void daObjL4DigSand_MoveBGDelete(daObjL4DigSand_c*);
static void daObjL4DigSand_MoveBGExecute(daObjL4DigSand_c*);
static void daObjL4DigSand_MoveBGDraw(daObjL4DigSand_c*);
static void cLib_calcTimer__template0(u8*);

extern "C" void initBaseMtx__16daObjL4DigSand_cFv();
extern "C" void setBaseMtx__16daObjL4DigSand_cFv();
extern "C" void Create__16daObjL4DigSand_cFv();
extern "C" void CreateHeap__16daObjL4DigSand_cFv();
extern "C" void create1st__16daObjL4DigSand_cFv();
extern "C" void Execute__16daObjL4DigSand_cFPPA3_A4_f();
extern "C" void action__16daObjL4DigSand_cFv();
extern "C" void mode_init_wait__16daObjL4DigSand_cFv();
extern "C" void mode_wait__16daObjL4DigSand_cFv();
extern "C" void mode_init_dig__16daObjL4DigSand_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void mode_dig__16daObjL4DigSand_cFv();
extern "C" void mode_init_end__16daObjL4DigSand_cFv();
extern "C" void mode_end__16daObjL4DigSand_cFv();
extern "C" void Draw__16daObjL4DigSand_cFv();
extern "C" void Delete__16daObjL4DigSand_cFv();
extern "C" static void daObjL4DigSand_create1st__FP16daObjL4DigSand_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c();
extern "C" static void daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c();
extern "C" static void daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C67588();
extern "C" static void func_80C675A4();
extern "C" static void func_80C675AC();
extern "C" static void func_80C675B4();
extern "C" static void func_80C675BC();
extern "C" static void func_80C675C4();
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Lv4DigSand[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void checkItemGet(u8, int);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void checkItemGet__FUci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
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
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 data_80C67760[4];

//
// Declarations:
//

/* 80C66B18-80C66B54 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/initBaseMtx__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66B54-80C66BC8 0074+00 s=2 e=0 z=0  None .text      setBaseMtx__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/setBaseMtx__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66BC8-80C66C24 005C+00 s=1 e=0 z=0  None .text      Create__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Create__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C675D4-80C675D8 0004+00 s=2 e=0 z=0  None .rodata    @3746 */
SECTION_RODATA static u32 const lit_3746 = 0xCE6E6B28;

/* 80C675D8-80C675DC 0004+00 s=1 e=0 z=0  None .rodata    @3765 */
SECTION_RODATA static u32 const lit_3765 = 0x41200000;

/* 80C675DC-80C675E0 0004+00 s=1 e=0 z=0  None .rodata    @3766 */
SECTION_RODATA static u32 const lit_3766 = 0x41700000;

/* 80C675E0-80C675E4 0004+00 s=1 e=0 z=0  None .rodata    @3767 */
SECTION_RODATA static u32 const lit_3767 = 0x3F800000;

/* 80C675E4-80C675EC 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C675E4 = "P_DSand";
#pragma pop

/* 80C675EC-80C675F8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C675F8-80C6760C 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80C6760C-80C67610 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80C66C24-80C66C94 0070+00 s=1 e=0 z=0  None .text      CreateHeap__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/CreateHeap__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66C94-80C66D40 00AC+00 s=1 e=0 z=0  None .text      create1st__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/create1st__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66D40-80C66DD0 0090+00 s=1 e=0 z=0  None .text      Execute__16daObjL4DigSand_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Execute__16daObjL4DigSand_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C67610-80C6761C 000C+00 s=1 e=0 z=0  None .data      @3715 */
SECTION_DATA static void* lit_3715[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_wait__16daObjL4DigSand_cFv,
};

/* 80C6761C-80C67628 000C+00 s=1 e=0 z=0  None .data      @3716 */
SECTION_DATA static void* lit_3716[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_dig__16daObjL4DigSand_cFv,
};

/* 80C67628-80C67634 000C+00 s=1 e=0 z=0  None .data      @3717 */
SECTION_DATA static void* lit_3717[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)mode_end__16daObjL4DigSand_cFv,
};

/* 80C67634-80C67658 0024+00 s=1 e=0 z=0  None .data      l_func$3714 */
SECTION_DATA static u8 l_func[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C66DD0-80C66E74 00A4+00 s=1 e=0 z=0  None .text      action__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/action__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66E74-80C66E80 000C+00 s=1 e=0 z=0  None .text      mode_init_wait__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_wait__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66E80-80C66EAC 002C+00 s=1 e=0 z=0  None .text      mode_wait__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_wait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_wait__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C67658-80C67678 0020+00 s=1 e=0 z=0  None .data      daObjL4DigSand_METHODS */
SECTION_DATA static void* daObjL4DigSand_METHODS[8] = {
    (void*)daObjL4DigSand_create1st__FP16daObjL4DigSand_c,
    (void*)daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c,
    (void*)daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c,
    (void*)NULL,
    (void*)daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C67678-80C676A8 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv4DigSand */
SECTION_DATA void* g_profile_Obj_Lv4DigSand[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00A90000, (void*)&g_fpcLf_Method,
    (void*)0x00000944, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02270000, (void*)&daObjL4DigSand_METHODS,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80C676A8-80C676B4 000C+00 s=1 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA static void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C676B4-80C676C0 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA static void* __vt__10cCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C676C0-80C676CC 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA static void* __vt__10dCcD_GStts[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C676CC-80C676D8 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C676D8-80C676E4 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C676E4-80C67708 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA static void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL, (void*)NULL, (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL, (void*)NULL, (void*)func_80C675C4,
    (void*)NULL, (void*)NULL, (void*)func_80C675BC,
};

/* 80C67708-80C67738 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjGndChk */
SECTION_DATA static void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL, (void*)NULL, (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL, (void*)NULL, (void*)func_80C675A4,
    (void*)NULL, (void*)NULL, (void*)func_80C675B4,
    (void*)NULL, (void*)NULL, (void*)func_80C675AC,
};

/* 80C66EAC-80C66F84 00D8+00 s=1 e=0 z=0  None .text      mode_init_dig__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_dig() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_dig__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C66F84-80C66FFC 0078+00 s=4 e=0 z=0  None .text      __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 80C66FFC-80C670AC 00B0+00 s=1 e=0 z=0  None .text      mode_dig__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_dig() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_dig__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C670AC-80C67100 0054+00 s=1 e=0 z=0  None .text      mode_init_end__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::mode_init_end() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/mode_init_end__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C67100-80C67104 0004+00 s=1 e=0 z=0  None .text      mode_end__16daObjL4DigSand_cFv */
void daObjL4DigSand_c::mode_end() {
    /* empty function */
}

/* 80C67104-80C671A8 00A4+00 s=1 e=0 z=0  None .text      Draw__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Draw__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* 80C671A8-80C671DC 0034+00 s=1 e=0 z=0  None .text      Delete__16daObjL4DigSand_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjL4DigSand_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/Delete__16daObjL4DigSand_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C67738-80C67760 0028+00 s=1 e=0 z=0  None .data      __vt__16daObjL4DigSand_c */
SECTION_DATA static void* __vt__16daObjL4DigSand_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__16daObjL4DigSand_cFv,
    (void*)Create__16daObjL4DigSand_cFv,
    (void*)Execute__16daObjL4DigSand_cFPPA3_A4_f,
    (void*)Draw__16daObjL4DigSand_cFv,
    (void*)Delete__16daObjL4DigSand_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C671DC-80C67308 012C+00 s=1 e=0 z=0  None .text
 * daObjL4DigSand_create1st__FP16daObjL4DigSand_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjL4DigSand_create1st(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_create1st__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67308-80C67350 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C67350-80C67398 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C67398-80C673F4 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C673F4-80C67464 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C67464-80C674D4 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C674D4-80C674F4 0020+00 s=1 e=0 z=0  None .text
 * daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjL4DigSand_MoveBGDelete(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGDelete__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C674F4-80C67514 0020+00 s=1 e=0 z=0  None .text
 * daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjL4DigSand_MoveBGExecute(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGExecute__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67514-80C67540 002C+00 s=1 e=0 z=0  None .text
 * daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjL4DigSand_MoveBGDraw(daObjL4DigSand_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/daObjL4DigSand_MoveBGDraw__FP16daObjL4DigSand_c.s"
}
#pragma pop

/* 80C67540-80C67588 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C67588-80C675A4 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C67588.s"
}
#pragma pop

/* 80C675A4-80C675AC 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C675A4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675A4.s"
}
#pragma pop

/* 80C675AC-80C675B4 0008+00 s=1 e=0 z=0  None .text      @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C675AC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675AC.s"
}
#pragma pop

/* 80C675B4-80C675BC 0008+00 s=1 e=0 z=0  None .text      @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C675B4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675B4.s"
}
#pragma pop

/* 80C675BC-80C675C4 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C675BC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675BC.s"
}
#pragma pop

/* 80C675C4-80C675CC 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C675C4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4digsand/d_a_obj_lv4digsand/func_80C675C4.s"
}
#pragma pop
