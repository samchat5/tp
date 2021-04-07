//
// Generated By: dol2asm
// Translation Unit: d_a_obj_zcloth
//

#include "rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjZCloth_c {
    /* 80D3EE18 */ void initBaseMtx();
    /* 80D3EE54 */ void setBaseMtx();
    /* 80D3EEC0 */ void Create();
    /* 80D3EF0C */ void create();
    /* 80D3F1AC */ void execute();
    /* 80D3F1D0 */ void draw();
    /* 80D3F200 */ void _delete();
};

struct daItemBase_c {
    /* 8014474C */ bool clothCreate();
    /* 80144754 */ bool __CreateHeap();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144C7C */ void setListStart();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80D3F13C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
};

struct cM3dGCyl {
    /* 80D3F0AC */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D3F0F4 */ ~cM3dGAab();
};

struct J3DModelData {};

//
// Forward References:
//

extern "C" void initBaseMtx__13daObjZCloth_cFv();
extern "C" void setBaseMtx__13daObjZCloth_cFv();
extern "C" void Create__13daObjZCloth_cFv();
extern "C" void create__13daObjZCloth_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void execute__13daObjZCloth_cFv();
extern "C" void draw__13daObjZCloth_cFv();
extern "C" void _delete__13daObjZCloth_cFv();
extern "C" static void daObjZCloth_Draw__FP13daObjZCloth_c();
extern "C" static void daObjZCloth_Execute__FP13daObjZCloth_c();
extern "C" static void daObjZCloth_Delete__FP13daObjZCloth_c();
extern "C" static void daObjZCloth_Create__FP10fopAc_ac_c();
extern "C" static void func_80D3F2BC();
extern "C" static void func_80D3F2C4();

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void CheckFieldItemCreateHeap__FP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" bool __CreateHeap__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void setListStart__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* field_item_res__10dItem_data[1020];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];

//
// Declarations:
//

/* 80D3EE18-80D3EE54 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/initBaseMtx__13daObjZCloth_cFv.s"
}
#pragma pop

/* 80D3EE54-80D3EEC0 0000B4 006C+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/setBaseMtx__13daObjZCloth_cFv.s"
}
#pragma pop

/* 80D3EEC0-80D3EF0C 000120 004C+00 1/1 0/0 0/0 .text            Create__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/Create__13daObjZCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3F2D4-80D3F2F4 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjZCloth_Method */
SECTION_DATA static void* l_daObjZCloth_Method[8] = {
    (void*)daObjZCloth_Create__FP10fopAc_ac_c,
    (void*)daObjZCloth_Delete__FP13daObjZCloth_c,
    (void*)daObjZCloth_Execute__FP13daObjZCloth_c,
    (void*)NULL,
    (void*)daObjZCloth_Draw__FP13daObjZCloth_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D3F2F4-80D3F324 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_ZoraCloth */
SECTION_DATA extern void* g_profile_Obj_ZoraCloth[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01780000, (void*)&g_fpcLf_Method,
    (void*)0x0000092C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02200000, (void*)&l_daObjZCloth_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D3F324-80D3F368 000050 0044+00 1/1 0/0 0/0 .data            __vt__13daObjZCloth_c */
SECTION_DATA extern void* __vt__13daObjZCloth_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daItemBase_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__12daItemBase_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 80D3F368-80D3F374 000094 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D3F374-80D3F380 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D3F380-80D3F3A4 0000AC 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D3F2C4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D3F2BC,
};

/* 80D3EF0C-80D3F0AC 00016C 01A0+00 1/1 0/0 0/0 .text            create__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/func_80D3EF0C.s"
}
#pragma pop

/* 80D3F0AC-80D3F0F4 00030C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D3F0F4-80D3F13C 000354 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D3F13C-80D3F1AC 00039C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80D3F1AC-80D3F1D0 00040C 0024+00 1/1 0/0 0/0 .text            execute__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/execute__13daObjZCloth_cFv.s"
}
#pragma pop

/* 80D3F1D0-80D3F200 000430 0030+00 1/1 0/0 0/0 .text            draw__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/draw__13daObjZCloth_cFv.s"
}
#pragma pop

/* 80D3F200-80D3F23C 000460 003C+00 1/1 0/0 0/0 .text            _delete__13daObjZCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjZCloth_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/_delete__13daObjZCloth_cFv.s"
}
#pragma pop

/* 80D3F23C-80D3F25C 00049C 0020+00 1/0 0/0 0/0 .text            daObjZCloth_Draw__FP13daObjZCloth_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZCloth_Draw(daObjZCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/daObjZCloth_Draw__FP13daObjZCloth_c.s"
}
#pragma pop

/* 80D3F25C-80D3F27C 0004BC 0020+00 1/0 0/0 0/0 .text daObjZCloth_Execute__FP13daObjZCloth_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZCloth_Execute(daObjZCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/daObjZCloth_Execute__FP13daObjZCloth_c.s"
}
#pragma pop

/* 80D3F27C-80D3F29C 0004DC 0020+00 1/0 0/0 0/0 .text daObjZCloth_Delete__FP13daObjZCloth_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZCloth_Delete(daObjZCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/daObjZCloth_Delete__FP13daObjZCloth_c.s"
}
#pragma pop

/* 80D3F29C-80D3F2BC 0004FC 0020+00 1/0 0/0 0/0 .text            daObjZCloth_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjZCloth_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/daObjZCloth_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D3F2BC-80D3F2C4 00051C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80D3F2BC() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/func_80D3F2BC.s"
}
#pragma pop

/* 80D3F2C4-80D3F2CC 000524 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80D3F2C4() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth/func_80D3F2C4.s"
}
#pragma pop
