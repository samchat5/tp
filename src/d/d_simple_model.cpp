//
// Generated By: dol2asm
// Translation Unit: d/d_simple_model
//

#include "d/d_simple_model.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct modelList_c {};

struct J3DModelData {};

struct diff_model_c {
    /* 80048D60 */ diff_model_c();
    /* 800490EC */ void create(J3DModelData*, int, u8);
    /* 800491F4 */ void getModelData();
    /* 80049210 */ void remove(int);
    /* 80049270 */ void draw();
    /* 80049368 */ void init();
    /* 80049388 */ void isSame(J3DModelData*, int);
    /* 800493FC */ void getRoomNo();
    /* 80049408 */ void insert(modelList_c*);
};

struct J3DModel {};

struct dSmplMdl_draw_c {
    /* 80048CB4 */ dSmplMdl_draw_c();
    /* 80048D80 */ ~dSmplMdl_draw_c();
    /* 80048E0C */ void draw();
    /* 80048EBC */ void entry(J3DModel*, int);
    /* 80048F70 */ void addModel(J3DModelData*, int, u8);
    /* 80049058 */ void removeModel(J3DModelData*, int);
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct JKRSolidHeap {};

//
// Forward References:
//

static void dSmplMdl_modelUpdateDL(J3DModel*);

extern "C" static void dSmplMdl_modelUpdateDL__FP8J3DModel();
extern "C" void __ct__15dSmplMdl_draw_cFv();
extern "C" void __ct__12diff_model_cFv();
extern "C" void __dt__15dSmplMdl_draw_cFv();
extern "C" void draw__15dSmplMdl_draw_cFv();
extern "C" void entry__15dSmplMdl_draw_cFP8J3DModeli();
extern "C" void addModel__15dSmplMdl_draw_cFP12J3DModelDataiUc();
extern "C" void removeModel__15dSmplMdl_draw_cFP12J3DModelDatai();
extern "C" void create__12diff_model_cFP12J3DModelDataiUc();
extern "C" void getModelData__12diff_model_cFv();
extern "C" void remove__12diff_model_cFi();
extern "C" void draw__12diff_model_cFv();
extern "C" void init__12diff_model_cFv();
extern "C" void isSame__12diff_model_cFP12J3DModelDatai();
extern "C" void getRoomNo__12diff_model_cFv();
extern "C" void insert__12diff_model_cFP11modelList_c();

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_createSolidHeapFromGameToCurrent(u32, u32);
void mDoExt_adjustSolidHeapToSystem(JKRSolidHeap*);
void mDoExt_destroySolidHeap(JKRSolidHeap*);
void mDoExt_restoreCurrentHeap();
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void operator delete(void*);

extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FUlUl();
extern "C" void mDoExt_adjustSolidHeapToSystem__FP12JKRSolidHeap();
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern u8 mStatus__20dStage_roomControl_c[65792];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* 80048C54-80048CB4 0060+00 s=1 e=0 z=0  None .text      dSmplMdl_modelUpdateDL__FP8J3DModel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dSmplMdl_modelUpdateDL(J3DModel* param_0) {
    nofralloc
#include "asm/d/d_simple_model/dSmplMdl_modelUpdateDL__FP8J3DModel.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A82F8-803A8308 000C+04 s=2 e=0 z=0  None .data      __vt__15dSmplMdl_draw_c */
SECTION_DATA static void* __vt__15dSmplMdl_draw_c[3 + 1 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__15dSmplMdl_draw_cFv,
    /* padding */
    NULL,
};

/* 80048CB4-80048D60 00AC+00 s=0 e=1 z=0  None .text      __ct__15dSmplMdl_draw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSmplMdl_draw_c::dSmplMdl_draw_c() {
    nofralloc
#include "asm/d/d_simple_model/__ct__15dSmplMdl_draw_cFv.s"
}
#pragma pop

/* 80048D60-80048D80 0020+00 s=1 e=0 z=0  None .text      __ct__12diff_model_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm diff_model_c::diff_model_c() {
    nofralloc
#include "asm/d/d_simple_model/__ct__12diff_model_cFv.s"
}
#pragma pop

/* 80048D80-80048E0C 008C+00 s=1 e=0 z=0  None .text      __dt__15dSmplMdl_draw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSmplMdl_draw_c::~dSmplMdl_draw_c() {
    nofralloc
#include "asm/d/d_simple_model/__dt__15dSmplMdl_draw_cFv.s"
}
#pragma pop

/* 80048E0C-80048EBC 00B0+00 s=0 e=1 z=0  None .text      draw__15dSmplMdl_draw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSmplMdl_draw_c::draw() {
    nofralloc
#include "asm/d/d_simple_model/draw__15dSmplMdl_draw_cFv.s"
}
#pragma pop

/* 80048EBC-80048F70 00B4+00 s=0 e=1 z=0  None .text      entry__15dSmplMdl_draw_cFP8J3DModeli */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSmplMdl_draw_c::entry(J3DModel* param_0, int param_1) {
    nofralloc
#include "asm/d/d_simple_model/entry__15dSmplMdl_draw_cFP8J3DModeli.s"
}
#pragma pop

/* 80048F70-80049058 00E8+00 s=0 e=1 z=0  None .text
 * addModel__15dSmplMdl_draw_cFP12J3DModelDataiUc               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSmplMdl_draw_c::addModel(J3DModelData* param_0, int param_1, u8 param_2) {
    nofralloc
#include "asm/d/d_simple_model/addModel__15dSmplMdl_draw_cFP12J3DModelDataiUc.s"
}
#pragma pop

/* 80049058-800490EC 0094+00 s=0 e=1 z=0  None .text
 * removeModel__15dSmplMdl_draw_cFP12J3DModelDatai              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSmplMdl_draw_c::removeModel(J3DModelData* param_0, int param_1) {
    nofralloc
#include "asm/d/d_simple_model/removeModel__15dSmplMdl_draw_cFP12J3DModelDatai.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451F38-80451F40 0004+04 s=1 e=0 z=0  None .sdata2    @3763 */
SECTION_SDATA2 static f32 lit_3763[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 800490EC-800491F4 0108+00 s=1 e=0 z=0  None .text      create__12diff_model_cFP12J3DModelDataiUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::create(J3DModelData* param_0, int param_1, u8 param_2) {
    nofralloc
#include "asm/d/d_simple_model/create__12diff_model_cFP12J3DModelDataiUc.s"
}
#pragma pop

/* 800491F4-80049210 001C+00 s=2 e=0 z=0  None .text      getModelData__12diff_model_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::getModelData() {
    nofralloc
#include "asm/d/d_simple_model/getModelData__12diff_model_cFv.s"
}
#pragma pop

/* 80049210-80049270 0060+00 s=3 e=0 z=0  None .text      remove__12diff_model_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::remove(int param_0) {
    nofralloc
#include "asm/d/d_simple_model/remove__12diff_model_cFi.s"
}
#pragma pop

/* 80049270-80049368 00F8+00 s=1 e=0 z=0  None .text      draw__12diff_model_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::draw() {
    nofralloc
#include "asm/d/d_simple_model/draw__12diff_model_cFv.s"
}
#pragma pop

/* 80049368-80049388 0020+00 s=2 e=0 z=0  None .text      init__12diff_model_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::init() {
    nofralloc
#include "asm/d/d_simple_model/init__12diff_model_cFv.s"
}
#pragma pop

/* 80049388-800493FC 0074+00 s=3 e=0 z=0  None .text      isSame__12diff_model_cFP12J3DModelDatai */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::isSame(J3DModelData* param_0, int param_1) {
    nofralloc
#include "asm/d/d_simple_model/isSame__12diff_model_cFP12J3DModelDatai.s"
}
#pragma pop

/* 800493FC-80049408 000C+00 s=2 e=0 z=0  None .text      getRoomNo__12diff_model_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::getRoomNo() {
    nofralloc
#include "asm/d/d_simple_model/getRoomNo__12diff_model_cFv.s"
}
#pragma pop

/* 80049408-80049420 0018+00 s=2 e=0 z=0  None .text      insert__12diff_model_cFP11modelList_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void diff_model_c::insert(modelList_c* param_0) {
    nofralloc
#include "asm/d/d_simple_model/insert__12diff_model_cFP11modelList_c.s"
}
#pragma pop
