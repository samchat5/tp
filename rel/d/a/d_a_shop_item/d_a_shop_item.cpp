//
// Generated By: dol2asm
// Translation Unit: d_a_shop_item
//

#include "rel/d/a/d_a_shop_item/d_a_shop_item.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daShopItem_c {
    /* 8059E9B8 */ void getShopArcname();
    /* 8059EC04 */ void getHeapSize();
    /* 8059EC1C */ void CreateInit();
    /* 8059ED58 */ void set_mtx();
    /* 8059EEF4 */ void _execute();
    /* 8059EF48 */ void _draw();
    /* 8059EF9C */ void setListStart();
    /* 8059EFA0 */ void setShadow();
    /* 8059F024 */ void chkFlag(int);
    /* 8059F044 */ void getTevFrm();
    /* 8059F064 */ void getBtpFrm();
    /* 8059F084 */ void getShadowSize();
    /* 8059F0A0 */ void getCollisionH();
    /* 8059F0BC */ void getCollisionR();
};

struct daItemBase_c {
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144754 */ bool __CreateHeap();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 8014503C */ void animPlay(f32, f32, f32, f32, f32, f32);
};

struct dKy_tevstr_c {};

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
    /* 8059F324 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
};

struct cXyz {};

struct cM3dGCyl {
    /* 8059F294 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 8059F2DC */ ~cM3dGAab();
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

struct J3DModel {};

//
// Forward References:
//

extern "C" void getShopArcname__12daShopItem_cFv();
extern "C" void getHeapSize__12daShopItem_cFv();
extern "C" void CreateInit__12daShopItem_cFv();
extern "C" void set_mtx__12daShopItem_cFv();
extern "C" void _execute__12daShopItem_cFv();
extern "C" void _draw__12daShopItem_cFv();
extern "C" void setListStart__12daShopItem_cFv();
extern "C" void setShadow__12daShopItem_cFv();
extern "C" void chkFlag__12daShopItem_cFi();
extern "C" void getTevFrm__12daShopItem_cFv();
extern "C" void getBtpFrm__12daShopItem_cFv();
extern "C" void getShadowSize__12daShopItem_cFv();
extern "C" void getCollisionH__12daShopItem_cFv();
extern "C" void getCollisionR__12daShopItem_cFv();
extern "C" static void daShopItem_Create__FPv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daShopItem_Delete__FPv();
extern "C" static void daShopItem_Draw__FPv();
extern "C" static void daShopItem_Execute__FPv();
extern "C" static bool daShopItem_IsDelete__FPv();
extern "C" static void func_8059F420();
extern "C" static void func_8059F428();
extern "C" extern char const* const d_a_shop_item__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckShopItemCreateHeap__FP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" bool __CreateHeap__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void animPlay__12daItemBase_cFffffff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* const mData__12daShopItem_c[276];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern f32 mSystemFar__14mDoLib_clipper;

//
// Declarations:
//

/* 8059E9B8-8059EC04 000078 024C+00 2/2 0/0 0/0 .text            getShopArcname__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getShopArcname() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getShopArcname__12daShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059F438-8059F43C 000000 0004+00 2/2 0/0 0/0 .rodata          m_cullfar_max__12daShopItem_c */
SECTION_RODATA static f32 const m_cullfar_max__12daShopItem_c = 5000.0f;
COMPILER_STRIP_GATE(8059F438, &m_cullfar_max__12daShopItem_c);

/* 8059F43C-8059F46C 000004 002E+02 1/1 0/0 0/0 .rodata          HeapSizeTbl$3665 */
SECTION_RODATA static u8 const HeapSizeTbl[46 + 2 /* padding */] = {
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x0E,
    0xB0,
    0x08,
    0x10,
    0x0E,
    0xB0,
    0x39,
    0x90,
    0x39,
    0x90,
    0x80,
    0x00,
    0x08,
    0x10,
    0x15,
    0x40,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x43,
    0xA0,
    0x22,
    0x80,
    0x08,
    0x10,
    0x08,
    0x10,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(8059F43C, &HeapSizeTbl);

/* 8059EC04-8059EC1C 0002C4 0018+00 1/1 0/0 0/0 .text            getHeapSize__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getHeapSize() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getHeapSize__12daShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059F46C-8059F470 000034 0004+00 0/1 0/0 0/0 .rodata          @3718 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3718 = -100.0f;
COMPILER_STRIP_GATE(8059F46C, &lit_3718);
#pragma pop

/* 8059F470-8059F474 000038 0004+00 0/2 0/0 0/0 .rodata          @3719 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3719[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(8059F470, &lit_3719);
#pragma pop

/* 8059F474-8059F478 00003C 0004+00 0/1 0/0 0/0 .rodata          @3720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3720 = 100.0f;
COMPILER_STRIP_GATE(8059F474, &lit_3720);
#pragma pop

/* 8059F478-8059F47C 000040 0004+00 0/1 0/0 0/0 .rodata          @3721 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3721 = 200.0f;
COMPILER_STRIP_GATE(8059F478, &lit_3721);
#pragma pop

/* 8059F47C-8059F480 000044 0004+00 1/3 0/0 0/0 .rodata          @3722 */
SECTION_RODATA static f32 const lit_3722 = 1.0f;
COMPILER_STRIP_GATE(8059F47C, &lit_3722);

/* 8059F480-8059F484 000048 0004+00 0/1 0/0 0/0 .rodata          @3723 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3723 = 5000.0f;
COMPILER_STRIP_GATE(8059F480, &lit_3723);
#pragma pop

/* 8059F484-8059F488 00004C 0004+00 0/1 0/0 0/0 .rodata          @3724 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3724 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(8059F484, &lit_3724);
#pragma pop

/* 8059EC1C-8059ED58 0002DC 013C+00 1/1 0/0 0/0 .text            CreateInit__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/CreateInit__12daShopItem_cFv.s"
}
#pragma pop

/* 8059ED58-8059EEF4 000418 019C+00 2/2 0/0 0/0 .text            set_mtx__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::set_mtx() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/set_mtx__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EEF4-8059EF48 0005B4 0054+00 1/1 0/0 0/0 .text            _execute__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::_execute() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/_execute__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EF48-8059EF9C 000608 0054+00 1/1 0/0 0/0 .text            _draw__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::_draw() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/_draw__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EF9C-8059EFA0 00065C 0004+00 1/0 0/0 0/0 .text            setListStart__12daShopItem_cFv */
void daShopItem_c::setListStart() {
    /* empty function */
}

/* ############################################################################################## */
/* 8059F488-8059F48C 000050 0004+00 0/1 0/0 0/0 .rodata          @3823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3823 = 80.0f;
COMPILER_STRIP_GATE(8059F488, &lit_3823);
#pragma pop

/* 8059EFA0-8059F024 000660 0084+00 1/0 0/0 0/0 .text            setShadow__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::setShadow() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/setShadow__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F024-8059F044 0006E4 0020+00 1/0 0/0 0/0 .text            chkFlag__12daShopItem_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::chkFlag(int param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/chkFlag__12daShopItem_cFi.s"
}
#pragma pop

/* 8059F044-8059F064 000704 0020+00 1/0 0/0 0/0 .text            getTevFrm__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getTevFrm() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getTevFrm__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F064-8059F084 000724 0020+00 1/0 0/0 0/0 .text            getBtpFrm__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getBtpFrm() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getBtpFrm__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F084-8059F0A0 000744 001C+00 1/0 0/0 0/0 .text            getShadowSize__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getShadowSize() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getShadowSize__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F0A0-8059F0BC 000760 001C+00 1/0 0/0 0/0 .text            getCollisionH__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getCollisionH() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getCollisionH__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F0BC-8059F0D8 00077C 001C+00 1/0 0/0 0/0 .text            getCollisionR__12daShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getCollisionR() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getCollisionR__12daShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059F49C-8059F4BC -00001 0020+00 1/0 0/0 0/0 .data            daShopItemMethodTable */
SECTION_DATA static void* daShopItemMethodTable[8] = {
    (void*)daShopItem_Create__FPv,
    (void*)daShopItem_Delete__FPv,
    (void*)daShopItem_Execute__FPv,
    (void*)daShopItem_IsDelete__FPv,
    (void*)daShopItem_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8059F4BC-8059F4EC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_ShopItem */
SECTION_DATA extern void* g_profile_ShopItem[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x021E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000968, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F20000, (void*)&daShopItemMethodTable,
    (void*)0x00060100, (void*)0x000E0000,
};

/* 8059F4EC-8059F4F8 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8059F4F8-8059F504 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8059F504-8059F528 000068 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059F428,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059F420,
};

/* 8059F528-8059F56C 00008C 0044+00 1/1 0/0 0/0 .data            __vt__12daShopItem_c */
SECTION_DATA extern void* __vt__12daShopItem_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daShopItem_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daShopItem_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__12daItemBase_cFv,
    (void*)chkFlag__12daShopItem_cFi,
    (void*)getTevFrm__12daShopItem_cFv,
    (void*)getBtpFrm__12daShopItem_cFv,
    (void*)getShadowSize__12daShopItem_cFv,
    (void*)getCollisionH__12daShopItem_cFv,
    (void*)getCollisionR__12daShopItem_cFv,
};

/* 8059F0D8-8059F294 000798 01BC+00 1/0 0/0 0/0 .text            daShopItem_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daShopItem_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Create__FPv.s"
}
#pragma pop

/* 8059F294-8059F2DC 000954 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8059F2DC-8059F324 00099C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8059F324-8059F394 0009E4 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8059F394-8059F3D0 000A54 003C+00 1/0 0/0 0/0 .text            daShopItem_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daShopItem_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Delete__FPv.s"
}
#pragma pop

/* 8059F3D0-8059F3F4 000A90 0024+00 1/0 0/0 0/0 .text            daShopItem_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daShopItem_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Draw__FPv.s"
}
#pragma pop

/* 8059F3F4-8059F418 000AB4 0024+00 1/0 0/0 0/0 .text            daShopItem_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daShopItem_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Execute__FPv.s"
}
#pragma pop

/* 8059F418-8059F420 000AD8 0008+00 1/0 0/0 0/0 .text            daShopItem_IsDelete__FPv */
static bool daShopItem_IsDelete(void* param_0) {
    return true;
}

/* 8059F420-8059F428 000AE0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8059F420() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/func_8059F420.s"
}
#pragma pop

/* 8059F428-8059F430 000AE8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_8059F428() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/func_8059F428.s"
}
#pragma pop

/* 8059F48C-8059F49C 000054 0010+00 2/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8059F48C = "R_SP160";
SECTION_DEAD static char const* const stringBase_8059F494 = "R_SP109";
#pragma pop
