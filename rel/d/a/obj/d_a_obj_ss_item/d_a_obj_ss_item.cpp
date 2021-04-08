//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ss_item
//

#include "rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {};

struct daObj_SSItem_c {
    /* 80CE6C18 */ ~daObj_SSItem_c();
    /* 80CE6E68 */ void create();
    /* 80CE7298 */ void CreateHeap();
    /* 80CE7358 */ void Delete();
    /* 80CE738C */ void Execute();
    /* 80CE7610 */ void Draw();
    /* 80CE7758 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CE7778 */ void setSoldOut();
    /* 80CE77CC */ void getProcessID();
    /* 80CE77F8 */ void getExchangeItemPtr();
    /* 80CE7838 */ void getResName();
    /* 80CE7850 */ void getTypeFromParam();
    /* 80CE789C */ void getFlowNodeNum();
    /* 80CE78D4 */ void getValue();
    /* 80CE78E0 */ void restart();
    /* 80CE7950 */ void initialize();
    /* 80CE7B04 */ void setProcess(int (daObj_SSItem_c::*)(void*));
    /* 80CE7BB4 */ void setParam();
    /* 80CE7C24 */ void setEnvTevColor();
    /* 80CE7C80 */ void setRoomNo();
    /* 80CE7CC4 */ void setMtx();
    /* 80CE7D28 */ void setAttnPos();
    /* 80CE7D5C */ void wait(void*);

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

struct daObj_SSBase_c {
    /* 8015E3F8 */ daObj_SSBase_c();
    /* 8015E450 */ ~daObj_SSBase_c();
};

struct daMyna_c {
    /* 809487EC */ void soldoutItem(unsigned int);
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
};

struct _GXTexObj {};

struct dDlst_shadowControl_c {
    /* 80055F84 */ void setSimple(cXyz*, f32, f32, cXyz*, s16, f32, _GXTexObj*);

    static u8 mSimpleTexObj[32];
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
    /* 80CE71CC */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084658 */ void ChkCoHit();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80CE7228 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80CE715C */ ~dBgS_AcchCir();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 80CE7710 */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80CE70CC */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80CE7114 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CE7E14 */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __dt__14daObj_SSItem_cFv();
extern "C" void create__14daObj_SSItem_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__14daObj_SSItem_cFv();
extern "C" void Delete__14daObj_SSItem_cFv();
extern "C" void Execute__14daObj_SSItem_cFv();
extern "C" void Draw__14daObj_SSItem_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void createHeapCallBack__14daObj_SSItem_cFP10fopAc_ac_c();
extern "C" void setSoldOut__14daObj_SSItem_cFv();
extern "C" void getProcessID__14daObj_SSItem_cFv();
extern "C" void getExchangeItemPtr__14daObj_SSItem_cFv();
extern "C" void getResName__14daObj_SSItem_cFv();
extern "C" void getTypeFromParam__14daObj_SSItem_cFv();
extern "C" void getFlowNodeNum__14daObj_SSItem_cFv();
extern "C" void getValue__14daObj_SSItem_cFv();
extern "C" void restart__14daObj_SSItem_cFv();
extern "C" void initialize__14daObj_SSItem_cFv();
extern "C" void setProcess__14daObj_SSItem_cFM14daObj_SSItem_cFPCvPvPv_i();
extern "C" void setParam__14daObj_SSItem_cFv();
extern "C" void setEnvTevColor__14daObj_SSItem_cFv();
extern "C" void setRoomNo__14daObj_SSItem_cFv();
extern "C" void setMtx__14daObj_SSItem_cFv();
extern "C" void setAttnPos__14daObj_SSItem_cFv();
extern "C" void wait__14daObj_SSItem_cFPv();
extern "C" static void daObj_SSItem_Create__FPv();
extern "C" static void daObj_SSItem_Delete__FPv();
extern "C" static void daObj_SSItem_Execute__FPv();
extern "C" static void daObj_SSItem_Draw__FPv();
extern "C" static bool daObj_SSItem_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_obj_ss_item_cpp();
extern "C" static void func_80CE7E94();
extern "C" static void func_80CE7E9C();
extern "C" u8 const mCcDObjInfo__14daObj_SSItem_c[48];
extern "C" extern char const* const d_a_obj_ss_item__stringBase0;
extern "C" u8 mCcDCyl__14daObj_SSItem_c[68];

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void setSimple__21dDlst_shadowControl_cFP4cXyzffP4cXyzsfP9_GXTexObj();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void __ct__14daObj_SSBase_cFv();
extern "C" void __dt__14daObj_SSBase_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];
extern "C" void soldoutItem__8daMyna_cFUi();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CE7F34-80CE7F40 -00001 000C+00 1/1 0/0 0/0 .data            l_resFileName */
SECTION_DATA static void* l_resFileName[3] = {
    (void*)&d_a_obj_ss_item__stringBase0,
    (void*)&d_a_obj_ss_item__stringBase0,
    (void*)(((char*)&d_a_obj_ss_item__stringBase0) + 0x7),
};

/* 80CE7F40-80CE7F4C 00000C 000C+00 1/1 0/0 0/0 .data            l_bmdIdxName */
SECTION_DATA static u8 l_bmdIdxName[12] = {
    0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE7F4C-80CE7F58 -00001 000C+00 1/2 0/0 0/0 .data            l_bmdFileName */
SECTION_DATA static void* l_bmdFileName[3] = {
    (void*)(((char*)&d_a_obj_ss_item__stringBase0) + 0xF),
    (void*)(((char*)&d_a_obj_ss_item__stringBase0) + 0xF),
    (void*)(((char*)&d_a_obj_ss_item__stringBase0) + 0x10),
};

/* 80CE7F58-80CE7F9C 000024 0044+00 2/2 0/0 0/0 .data            mCcDCyl__14daObj_SSItem_c */
SECTION_DATA u8 daObj_SSItem_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CE7F9C-80CE7FA8 -00001 000C+00 1/1 0/0 0/0 .data            @4309 */
SECTION_DATA static void* lit_4309[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__14daObj_SSItem_cFPv,
};

/* 80CE7FA8-80CE7FC8 -00001 0020+00 1/0 0/0 0/0 .data            daObj_SSItem_MethodTable */
SECTION_DATA static void* daObj_SSItem_MethodTable[8] = {
    (void*)daObj_SSItem_Create__FPv,
    (void*)daObj_SSItem_Delete__FPv,
    (void*)daObj_SSItem_Execute__FPv,
    (void*)daObj_SSItem_IsDelete__FPv,
    (void*)daObj_SSItem_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CE7FC8-80CE7FF8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_SSITEM */
SECTION_DATA extern void* g_profile_OBJ_SSITEM[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01210000, (void*)&g_fpcLf_Method,
    (void*)0x00000B10, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00450000, (void*)&daObj_SSItem_MethodTable,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80CE7FF8-80CE8004 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80CE8004-80CE8028 0000D0 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE7E9C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CE7E94,
};

/* 80CE8028-80CE8034 0000F4 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CE8034-80CE8040 000100 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CE8040-80CE804C 00010C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CE804C-80CE8058 000118 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CE8058-80CE8064 000124 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CE8064-80CE8078 000130 0014+00 2/2 0/0 0/0 .data            __vt__14daObj_SSItem_c */
SECTION_DATA extern void* __vt__14daObj_SSItem_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_SSItem_cFv,
    (void*)setSoldOut__14daObj_SSItem_cFv,
    (void*)getProcessID__14daObj_SSItem_cFv,
};

/* 80CE6C18-80CE6E68 000078 0250+00 1/0 0/0 0/0 .text            __dt__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_SSItem_c::~daObj_SSItem_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE6E68-80CE70CC 0002C8 0264+00 1/1 0/0 0/0 .text            create__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/create__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE70CC-80CE7114 00052C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CE7114-80CE715C 000574 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CE715C-80CE71CC 0005BC 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80CE71CC-80CE7228 00062C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CE7228-80CE7298 000688 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80CE7298-80CE7358 0006F8 00C0+00 1/1 0/0 0/0 .text            CreateHeap__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/CreateHeap__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7358-80CE738C 0007B8 0034+00 1/1 0/0 0/0 .text            Delete__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/Delete__14daObj_SSItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CE7EB0-80CE7EE0 000000 0030+00 5/5 0/0 0/0 .rodata          mCcDObjInfo__14daObj_SSItem_c */
SECTION_RODATA u8 const daObj_SSItem_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80CE7EB0, &daObj_SSItem_c::mCcDObjInfo);

/* 80CE7EE0-80CE7EE4 000030 0004+00 1/2 0/0 0/0 .rodata          @4205 */
SECTION_RODATA static u8 const lit_4205[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80CE7EE0, &lit_4205);

/* 80CE7EE4-80CE7EE8 000034 0004+00 0/2 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4206 = -1000000000.0f;
COMPILER_STRIP_GATE(80CE7EE4, &lit_4206);
#pragma pop

/* 80CE7EE8-80CE7EEC 000038 0004+00 0/1 0/0 0/0 .rodata          @4207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4207 = 8.0f;
COMPILER_STRIP_GATE(80CE7EE8, &lit_4207);
#pragma pop

/* 80CE7EEC-80CE7EF0 00003C 0004+00 0/1 0/0 0/0 .rodata          @4208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4208 = 62.0f;
COMPILER_STRIP_GATE(80CE7EEC, &lit_4208);
#pragma pop

/* 80CE738C-80CE7610 0007EC 0284+00 2/2 0/0 0/0 .text            Execute__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/Execute__14daObj_SSItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CE7EF0-80CE7EF4 000040 0004+00 0/1 0/0 0/0 .rodata          @4234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4234 = 20.0f;
COMPILER_STRIP_GATE(80CE7EF0, &lit_4234);
#pragma pop

/* 80CE7EF4-80CE7EF8 000044 0004+00 0/1 0/0 0/0 .rodata          @4235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4235 = 1.0f;
COMPILER_STRIP_GATE(80CE7EF4, &lit_4235);
#pragma pop

/* 80CE7610-80CE7710 000A70 0100+00 1/1 0/0 0/0 .text            Draw__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/Draw__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7710-80CE7758 000B70 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80CE7758-80CE7778 000BB8 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__14daObj_SSItem_cFP10fopAc_ac_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/createHeapCallBack__14daObj_SSItem_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80CE7778-80CE77CC 000BD8 0054+00 1/0 0/0 0/0 .text            setSoldOut__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setSoldOut() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setSoldOut__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE77CC-80CE77F8 000C2C 002C+00 1/0 0/0 0/0 .text            getProcessID__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getProcessID() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getProcessID__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE77F8-80CE7838 000C58 0040+00 0/0 0/0 1/1 .text getExchangeItemPtr__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getExchangeItemPtr() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getExchangeItemPtr__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7838-80CE7850 000C98 0018+00 4/4 0/0 0/0 .text            getResName__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getResName() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getResName__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7850-80CE789C 000CB0 004C+00 1/1 0/0 0/0 .text getTypeFromParam__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getTypeFromParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getTypeFromParam__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE789C-80CE78D4 000CFC 0038+00 1/1 0/0 0/0 .text            getFlowNodeNum__14daObj_SSItem_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getFlowNodeNum() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getFlowNodeNum__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE78D4-80CE78E0 000D34 000C+00 1/1 0/0 0/0 .text            getValue__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::getValue() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/getValue__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE78E0-80CE7950 000D40 0070+00 1/1 0/0 0/0 .text            restart__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::restart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/restart__14daObj_SSItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CE7EF8-80CE7EFC 000048 0004+00 0/1 0/0 0/0 .rodata          @4347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4347 = -30.0f;
COMPILER_STRIP_GATE(80CE7EF8, &lit_4347);
#pragma pop

/* 80CE7EFC-80CE7F00 00004C 0004+00 0/1 0/0 0/0 .rodata          @4348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4348 = -15.0f;
COMPILER_STRIP_GATE(80CE7EFC, &lit_4348);
#pragma pop

/* 80CE7F00-80CE7F04 000050 0004+00 0/1 0/0 0/0 .rodata          @4349 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4349 = 30.0f;
COMPILER_STRIP_GATE(80CE7F00, &lit_4349);
#pragma pop

/* 80CE7F04-80CE7F08 000054 0004+00 0/1 0/0 0/0 .rodata          @4350 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4350 = 45.0f;
COMPILER_STRIP_GATE(80CE7F04, &lit_4350);
#pragma pop

/* 80CE7F08-80CE7F0C 000058 0004+00 0/2 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4351 = 24.0f;
COMPILER_STRIP_GATE(80CE7F08, &lit_4351);
#pragma pop

/* 80CE7F0C-80CE7F10 00005C 0004+00 0/2 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 12.0f;
COMPILER_STRIP_GATE(80CE7F0C, &lit_4352);
#pragma pop

/* 80CE7950-80CE7B04 000DB0 01B4+00 1/1 0/0 0/0 .text            initialize__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::initialize() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/initialize__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7B04-80CE7BB4 000F64 00B0+00 1/1 0/0 0/0 .text
 * setProcess__14daObj_SSItem_cFM14daObj_SSItem_cFPCvPvPv_i     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setProcess(int (daObj_SSItem_c::*)(void*)) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setProcess__14daObj_SSItem_cFM14daObj_SSItem_cFPCvPvPv_i.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CE7F10-80CE7F14 000060 0004+00 0/1 0/0 0/0 .rodata          @4377 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4377 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(80CE7F10, &lit_4377);
#pragma pop

/* 80CE7F14-80CE7F18 000064 0004+00 0/1 0/0 0/0 .rodata          @4378 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4378 = -5.0f;
COMPILER_STRIP_GATE(80CE7F14, &lit_4378);
#pragma pop

/* 80CE7BB4-80CE7C24 001014 0070+00 1/1 0/0 0/0 .text            setParam__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setParam__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7C24-80CE7C80 001084 005C+00 2/2 0/0 0/0 .text            setEnvTevColor__14daObj_SSItem_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setEnvTevColor() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setEnvTevColor__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7C80-80CE7CC4 0010E0 0044+00 2/2 0/0 0/0 .text            setRoomNo__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setRoomNo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setRoomNo__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7CC4-80CE7D28 001124 0064+00 1/1 0/0 0/0 .text            setMtx__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setMtx__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7D28-80CE7D5C 001188 0034+00 1/1 0/0 0/0 .text            setAttnPos__14daObj_SSItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/setAttnPos__14daObj_SSItem_cFv.s"
}
#pragma pop

/* 80CE7D5C-80CE7D8C 0011BC 0030+00 1/0 0/0 0/0 .text            wait__14daObj_SSItem_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SSItem_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/wait__14daObj_SSItem_cFPv.s"
}
#pragma pop

/* 80CE7D8C-80CE7DAC 0011EC 0020+00 1/0 0/0 0/0 .text            daObj_SSItem_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_SSItem_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/daObj_SSItem_Create__FPv.s"
}
#pragma pop

/* 80CE7DAC-80CE7DCC 00120C 0020+00 1/0 0/0 0/0 .text            daObj_SSItem_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_SSItem_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/daObj_SSItem_Delete__FPv.s"
}
#pragma pop

/* 80CE7DCC-80CE7DEC 00122C 0020+00 1/0 0/0 0/0 .text            daObj_SSItem_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_SSItem_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/daObj_SSItem_Execute__FPv.s"
}
#pragma pop

/* 80CE7DEC-80CE7E0C 00124C 0020+00 1/0 0/0 0/0 .text            daObj_SSItem_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_SSItem_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/daObj_SSItem_Draw__FPv.s"
}
#pragma pop

/* 80CE7E0C-80CE7E14 00126C 0008+00 1/0 0/0 0/0 .text            daObj_SSItem_IsDelete__FPv */
static bool daObj_SSItem_IsDelete(void* param_0) {
    return true;
}

/* 80CE7E14-80CE7E5C 001274 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CE7E5C-80CE7E94 0012BC 0038+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_ss_item_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_ss_item_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/__sinit_d_a_obj_ss_item_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80CE7E5C = (void*)__sinit_d_a_obj_ss_item_cpp;
#pragma pop

/* 80CE7E94-80CE7E9C 0012F4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CE7E94() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/func_80CE7E94.s"
}
#pragma pop

/* 80CE7E9C-80CE7EA4 0012FC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CE7E9C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ss_item/d_a_obj_ss_item/func_80CE7E9C.s"
}
#pragma pop

/* 80CE7F18-80CE7F34 000068 001C+00 2/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80CE7F18 = "Always";
SECTION_DEAD static char const* const stringBase_80CE7F1F = "Pumpkin";
SECTION_DEAD static char const* const stringBase_80CE7F27 = "";
SECTION_DEAD static char const* const stringBase_80CE7F28 = "pumpkin.bmd";
#pragma pop
