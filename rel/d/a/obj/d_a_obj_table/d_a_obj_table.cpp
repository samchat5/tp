//
// Generated By: dol2asm
// Translation Unit: d_a_obj_table
//

#include "rel/d/a/obj/d_a_obj_table/d_a_obj_table.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct fopAc_ac_c {};

struct daObjTable_c {
    /* 80D06560 */ void CreateHeap();
    /* 80D065D0 */ void Create();
    /* 80D0695C */ void Execute(f32 (**)[3][4]);
    /* 80D06AD8 */ void Draw();
    /* 80D06BC8 */ void Delete();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
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

struct dMsgObject_c {
    /* 80238098 */ void endFlowGroup();
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dEvt_control_c {
    /* 80042518 */ void reset(void*);
};

struct dEvent_manager_c {
    /* 80046800 */ void setObjectArchive(char*);
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
};

struct J3DModel {};

struct dDlst_shadowControl_c {
    /* 80055C74 */ void setReal(u32, s8, J3DModel*, cXyz*, f32, f32, dKy_tevstr_c*);
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct dBgW {};

struct cBgS_PolyInfo {};

struct csXyz {};

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

//
// Forward References:
//

extern "C" static void daObjTable_Draw__FP12daObjTable_c();
extern "C" static void daObjTable_Execute__FP12daObjTable_c();
extern "C" static bool daObjTable_IsDelete__FP12daObjTable_c();
extern "C" static void daObjTable_Delete__FP12daObjTable_c();
extern "C" static void daObjTable_Create__FP10fopAc_ac_c();
extern "C" void CreateHeap__12daObjTable_cFv();
extern "C" void Create__12daObjTable_cFv();
extern "C" void Execute__12daObjTable_cFPPA3_A4_f();
extern "C" void Draw__12daObjTable_cFv();
extern "C" void Delete__12daObjTable_cFv();
extern "C" extern char const* const d_a_obj_table__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderChangeEventId__FP10fopAc_ac_csUsUs();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_isStageSwitch__Fii();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void setReal__21dDlst_shadowControl_cFUlScP8J3DModelP4cXyzffP12dKy_tevstr_c();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void endFlowGroup__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void PSMTXCopy();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* 80D06438-80D06464 000078 002C+00 1/0 0/0 0/0 .text            daObjTable_Draw__FP12daObjTable_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTable_Draw(daObjTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/daObjTable_Draw__FP12daObjTable_c.s"
}
#pragma pop

/* 80D06464-80D06484 0000A4 0020+00 1/0 0/0 0/0 .text daObjTable_Execute__FP12daObjTable_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTable_Execute(daObjTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/daObjTable_Execute__FP12daObjTable_c.s"
}
#pragma pop

/* 80D06484-80D0648C 0000C4 0008+00 1/0 0/0 0/0 .text daObjTable_IsDelete__FP12daObjTable_c */
static bool daObjTable_IsDelete(daObjTable_c* param_0) {
    return true;
}

/* 80D0648C-80D064B0 0000CC 0024+00 1/0 0/0 0/0 .text            daObjTable_Delete__FP12daObjTable_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTable_Delete(daObjTable_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/daObjTable_Delete__FP12daObjTable_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D06C1C-80D06C20 -00001 0004+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_table__stringBase0;

/* 80D06C20-80D06C40 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjTable_Method */
SECTION_DATA static void* l_daObjTable_Method[8] = {
    (void*)daObjTable_Create__FP10fopAc_ac_c,
    (void*)daObjTable_Delete__FP12daObjTable_c,
    (void*)daObjTable_Execute__FP12daObjTable_c,
    (void*)daObjTable_IsDelete__FP12daObjTable_c,
    (void*)daObjTable_Draw__FP12daObjTable_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D06C40-80D06C70 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Table */
SECTION_DATA extern void* g_profile_Obj_Table[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00B80000, (void*)&g_fpcLf_Method,
    (void*)0x00000600, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02AB0000, (void*)&l_daObjTable_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D06C70-80D06C98 000054 0028+00 1/1 0/0 0/0 .data            __vt__12daObjTable_c */
SECTION_DATA extern void* __vt__12daObjTable_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daObjTable_cFv,
    (void*)Create__12daObjTable_cFv,
    (void*)Execute__12daObjTable_cFPPA3_A4_f,
    (void*)Draw__12daObjTable_cFv,
    (void*)Delete__12daObjTable_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D064B0-80D06560 0000F0 00B0+00 1/0 0/0 0/0 .text            daObjTable_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjTable_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/daObjTable_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D06560-80D065D0 0001A0 0070+00 1/0 0/0 0/0 .text            CreateHeap__12daObjTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTable_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/CreateHeap__12daObjTable_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D06C04-80D06C08 000000 0004+00 2/2 0/0 0/0 .rodata          @4017 */
SECTION_RODATA static f32 const lit_4017 = 100.0f;
COMPILER_STRIP_GATE(80D06C04, &lit_4017);

/* 80D065D0-80D0695C 000210 038C+00 1/0 0/0 0/0 .text            Create__12daObjTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTable_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/Create__12daObjTable_cFv.s"
}
#pragma pop

/* 80D0695C-80D06AD8 00059C 017C+00 1/0 0/0 0/0 .text            Execute__12daObjTable_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTable_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/Execute__12daObjTable_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D06C08-80D06C0C 000004 0004+00 1/1 0/0 0/0 .rodata          @4077 */
SECTION_RODATA static f32 const lit_4077 = 500.0f;
COMPILER_STRIP_GATE(80D06C08, &lit_4077);

/* 80D06AD8-80D06BC8 000718 00F0+00 1/0 0/0 0/0 .text            Draw__12daObjTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTable_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/Draw__12daObjTable_cFv.s"
}
#pragma pop

/* 80D06BC8-80D06BFC 000808 0034+00 1/0 0/0 0/0 .text            Delete__12daObjTable_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTable_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_table/d_a_obj_table/Delete__12daObjTable_cFv.s"
}
#pragma pop

/* 80D06C0C-80D06C1C 000008 0010+00 2/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D06C0C = "Table";
SECTION_DEAD static char const* const stringBase_80D06C12 = "TABLE_MAP";
#pragma pop
