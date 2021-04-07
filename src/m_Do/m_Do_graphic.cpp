//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_graphic
//

#include "m_Do/m_Do_graphic.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct view_port_class {};

struct view_class {};

struct _GXColor {};

struct mDoGph_gInf_c {
    struct bloom_c {
        /* 80009544 */ void create();
        /* 800095F8 */ void remove();
        /* 80009650 */ void draw();
    };

    /* 80007E44 */ void create();
    /* 80007F90 */ void beginRender();
    /* 800080D0 */ void fadeOut(f32);
    /* 80007FD8 */ void fadeOut(f32, _GXColor&);
    /* 80008028 */ void fadeOut_f(f32, _GXColor&);
    /* 800080A0 */ void onBlure(f32 const (*)[4]);
    /* 80008078 */ void onBlure();
    /* 80008330 */ void calcFade();
};

struct daPy_py_c {
    /* 8000B1E4 */ s32 getAtnActorID() const;
};

struct JPADrawInfo {};

struct dPa_control_c {
    /* 8004C134 */ void calcMenu();
    /* 8004C188 */ void draw(JPADrawInfo*, u8);
};

struct dMenu_Collect3D_c {
    /* 801B75E8 */ void setupItem3D(f32 (*)[4]);
};

struct dDlst_shadowControl_c {
    /* 800557C8 */ void imageDraw(f32 (*)[4]);
    /* 80055A14 */ void draw(f32 (*)[4]);
};

struct J3DDrawBuffer {};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056390 */ void init();
    /* 80056538 */ void reset();
    /* 800566D4 */ void drawOpaDrawList(J3DDrawBuffer*);
    /* 80056710 */ void drawXluDrawList(J3DDrawBuffer*);
    /* 8005674C */ void drawOpaListItem3d();
    /* 80056770 */ void drawXluListItem3d();
    /* 800567C4 */ void draw(dDlst_base_c**, dDlst_base_c**);
    /* 80056900 */ void calcWipe();
};

struct dAttention_c {
    /* 800737E4 */ void LockonTruth();
};

struct cXyz {
    /* 80009184 */ ~cXyz();
};

struct _GXRenderModeObj {};

struct Vec {};

struct JUtility {
    struct TColor {};
};

struct JUTXfb {
    struct EXfbNumber {};
};

struct JUTVideo {
    /* 802E5198 */ void setRenderMode(_GXRenderModeObj const*);
};

struct JUTFader {
    /* 802E5530 */ JUTFader(int, int, int, int, JUtility::TColor);
};

struct JKRSolidHeap {};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE548 */ void free(void*);
};

struct JGeometry {
    template <typename A1>
    struct TBox2 {};
    /* TBox2<f32> */
    struct TBox2__template0 {};
};

struct JFWDisplay {
    /* 802721DC */ void createManager(_GXRenderModeObj const*, JKRHeap*, JUTXfb::EXfbNumber, bool);
};

struct J3DSys {
    /* 803100BC */ void drawInit();
    /* 8031073C */ void reinitGX();
};

struct J2DPrint {
    /* 802F4658 */ void setBuffer(u32);
};

struct J2DOrthoGraph {
    /* 8000B118 */ ~J2DOrthoGraph();
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E97B4 */ void setPort();
    /* 802E980C */ void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
};

//
// Forward References:
//

extern "C" static void createTimg__FUsUsUl();
extern "C" void create__13mDoGph_gInf_cFv();
extern "C" void beginRender__13mDoGph_gInf_cFv();
extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void fadeOut_f__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void onBlure__13mDoGph_gInf_cFv();
extern "C" void onBlure__13mDoGph_gInf_cFPA4_Cf();
extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" static void darwFilter__F8_GXColor();
extern "C" void calcFade__13mDoGph_gInf_cFv();
extern "C" void mDoGph_BlankingON__Fv();
extern "C" void mDoGph_BlankingOFF__Fv();
extern "C" static void dScnPly_BeforeOfPaint__Fv();
extern "C" void mDoGph_BeforeOfDraw__Fv();
extern "C" void mDoGph_AfterOfDraw__Fv();
extern "C" static void drawDepth2__FP10view_classP15view_port_classi();
extern "C" void __dt__4cXyzFv();
extern "C" static void trimming__FP10view_classP15view_port_class();
extern "C" void mDoGph_drawFilterQuad__FScSc();
extern "C" void create__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void remove__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void draw__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" static void retry_captue_frame__FP10view_classP15view_port_classi();
extern "C" static void motionBlure__FP10view_class();
extern "C" static void setLight__Fv();
extern "C" static void drawItem3D__Fv();
extern "C" void mDoGph_Painter__Fv();
extern "C" void __dt__13J2DOrthoGraphFv();
extern "C" void mDoGph_Create__Fv();
extern "C" void __sinit_m_Do_graphic_cpp();
extern "C" s32 getAtnActorID__9daPy_py_cCFv();
extern "C" extern char const* const m_Do_m_Do_graphic__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_lookAt__FPA4_fPC3VecPC3VecPC3Vecs();
extern "C" void mDoExt_getArchiveHeap__Fv();
extern "C" void mDoExt_createSolidHeapToCurrent__FUlP7JKRHeapUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void calcMenu__13dPa_control_cFv();
extern "C" void draw__13dPa_control_cFP11JPADrawInfoUc();
extern "C" void imageDraw__21dDlst_shadowControl_cFPA4_f();
extern "C" void draw__21dDlst_shadowControl_cFPA4_f();
extern "C" void init__12dDlst_list_cFv();
extern "C" void reset__12dDlst_list_cFv();
extern "C" void drawOpaDrawList__12dDlst_list_cFP13J3DDrawBuffer();
extern "C" void drawXluDrawList__12dDlst_list_cFP13J3DDrawBuffer();
extern "C" void drawOpaListItem3d__12dDlst_list_cFv();
extern "C" void drawXluListItem3d__12dDlst_list_cFv();
extern "C" void draw__12dDlst_list_cFPP12dDlst_base_cPP12dDlst_base_c();
extern "C" void calcWipe__12dDlst_list_cFv();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void dKy_setLight__Fv();
extern "C" void setupItem3D__17dMenu_Collect3D_cFPA4_f();
extern "C" void cLib_memSet__FPviUl();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb();
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setRenderMode__8JUTVideoFPC16_GXRenderModeObj();
extern "C" void __ct__8JUTFaderFiiiiQ28JUtility6TColor();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void func_802E980C();
extern "C" void setBuffer__8J2DPrintFUl();
extern "C" void drawInit__6J3DSysFv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" void PPCSync();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void C_MTXLightPerspective();
extern "C" void C_MTXLightOrtho();
extern "C" void C_MTXPerspective();
extern "C" void C_MTXOrtho();
extern "C" void PSVECSquareDistance();
extern "C" void VISetBlack();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetTexCoordGen2();
extern "C" void GXSetNumTexGens();
extern "C" void GXPixModeSync();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXSetCoPlanar();
extern "C" void GXSetTexCopySrc();
extern "C" void GXSetTexCopyDst();
extern "C" void GXSetCopyFilter();
extern "C" void GXCopyTex();
extern "C" void GXInitLightSpot();
extern "C" void GXInitLightDistAttn();
extern "C" void GXInitLightPos();
extern "C" void GXInitLightDir();
extern "C" void GXInitLightColor();
extern "C" void GXLoadLightObjImm();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXGetTexBufferSize();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void GXInvalidateTexAll();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevColorIn();
extern "C" void GXSetTevAlphaIn();
extern "C" void GXSetTevColorOp();
extern "C" void GXSetTevAlphaOp();
extern "C" void GXSetTevColor();
extern "C" void GXSetTevColorS10();
extern "C" void GXSetTevKAlphaSel();
extern "C" void GXSetTevSwapMode();
extern "C" void GXSetTevSwapModeTable();
extern "C" void GXSetAlphaCompare();
extern "C" void GXSetZTexture();
extern "C" void GXSetTevOrder();
extern "C" void GXSetNumTevStages();
extern "C" void GXSetFog();
extern "C" void GXSetFogRangeAdj();
extern "C" void GXSetBlendMode();
extern "C" void GXSetAlphaUpdate();
extern "C" void GXSetZMode();
extern "C" void GXSetZCompLoc();
extern "C" void GXSetDither();
extern "C" void GXProject();
extern "C" void GXSetProjection();
extern "C" void GXGetProjectionv();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GXLoadTexMtxImm();
extern "C" void GXSetViewport();
extern "C" void GXGetViewportv();
extern "C" void GXSetScissor();
extern "C" void GXSetClipMode();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_17();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_17();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void strcmp();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_HIO[64 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 mPadStatus__10JUTGamePad[48];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 data_80450580;
extern "C" extern void* mRenderModeObj__15mDoMch_render_c[1 + 1 /* padding */];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;
extern "C" extern u8 systemConsole__9JFWSystem[4];
extern "C" extern u8 sManager__10JFWDisplay[4];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];
extern "C" extern u8 sManager__8JUTVideo[4];
extern "C" extern u8 sManager__6JUTXfb[4 + 4 /* padding */];
extern "C" extern u8 sManager__10JUTProcBar[4];

//
// Declarations:
//

/* 80007D9C-80007E44 0026DC 00A8+00 1/1 0/0 0/0 .text            createTimg__FUsUsUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createTimg(u16 param_0, u16 param_1, u32 param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/createTimg__FUsUsUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450590-80450594 000010 0004+00 2/2 1/1 0/0 .sdata           mBackColor__13mDoGph_gInf_c */
SECTION_SDATA extern u8 mBackColor__13mDoGph_gInf_c[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80450594-80450598 000014 0004+00 4/4 3/3 0/0 .sdata           mFadeColor__13mDoGph_gInf_c */
SECTION_SDATA extern u8 mFadeColor__13mDoGph_gInf_c[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80450BC8-80450BCC 0000C8 0004+00 2/2 38/38 1/1 .sbss            mFader__13mDoGph_gInf_c */
extern u8 mFader__13mDoGph_gInf_c[4];
u8 mFader__13mDoGph_gInf_c[4];

/* 80450BCC-80450BD0 0000CC 0004+00 3/3 8/8 1/1 .sbss            mFrameBufferTimg__13mDoGph_gInf_c
 */
extern u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
u8 mFrameBufferTimg__13mDoGph_gInf_c[4];

/* 80450BD0-80450BD4 0000D0 0004+00 3/3 6/6 0/0 .sbss            mFrameBufferTex__13mDoGph_gInf_c */
extern u8 mFrameBufferTex__13mDoGph_gInf_c[4];
u8 mFrameBufferTex__13mDoGph_gInf_c[4];

/* 80450BD4-80450BD8 0000D4 0004+00 1/1 1/1 0/0 .sbss            mZbufferTimg__13mDoGph_gInf_c */
extern u8 mZbufferTimg__13mDoGph_gInf_c[4];
u8 mZbufferTimg__13mDoGph_gInf_c[4];

/* 80450BD8-80450BDC 0000D8 0004+00 3/3 1/1 0/0 .sbss            mZbufferTex__13mDoGph_gInf_c */
extern u8 mZbufferTex__13mDoGph_gInf_c[4];
u8 mZbufferTex__13mDoGph_gInf_c[4];

/* 80450BDC-80450BE0 0000DC 0004+00 3/3 3/3 1/1 .sbss            mFadeRate__13mDoGph_gInf_c */
extern f32 mFadeRate__13mDoGph_gInf_c;
f32 mFadeRate__13mDoGph_gInf_c;

/* 80450BE0-80450BE4 0000E0 0004+00 3/3 0/0 0/0 .sbss            mFadeSpeed__13mDoGph_gInf_c */
static f32 mFadeSpeed__13mDoGph_gInf_c;

/* 80450BE4-80450BE8 -00001 0004+00 8/8 9/9 11/11 .sbss            None */
/* 80450BE4 0001+00 data_80450BE4 None */
/* 80450BE5 0001+00 data_80450BE5 None */
/* 80450BE6 0001+00 data_80450BE6 None */
/* 80450BE7 0001+00 data_80450BE7 None */
extern u8 struct_80450BE4[4];
u8 struct_80450BE4[4];

/* 80007E44-80007F90 002784 014C+00 1/1 0/0 0/0 .text            create__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/create__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450BE8-80450BF0 0000E8 0008+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80450BE8[8];

/* 80007F90-80007FD8 0028D0 0048+00 1/1 2/2 0/0 .text            beginRender__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::beginRender() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/beginRender__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A38-80451A3C 000038 0004+00 11/11 0/0 0/0 .sdata2          @4062 */
SECTION_SDATA2 static u8 lit_4062[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451A3C-80451A40 00003C 0004+00 8/8 0/0 0/0 .sdata2          @4063 */
SECTION_SDATA2 static f32 lit_4063 = 1.0f;

/* 80007FD8-80008028 002918 0050+00 1/1 6/4 15/15 .text fadeOut__13mDoGph_gInf_cFfR8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut(f32 param_0, _GXColor& param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut__13mDoGph_gInf_cFfR8_GXColor.s"
}
#pragma pop

/* 80008028-80008078 002968 0050+00 0/0 0/0 2/2 .text fadeOut_f__13mDoGph_gInf_cFfR8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut_f(f32 param_0, _GXColor& param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut_f__13mDoGph_gInf_cFfR8_GXColor.s"
}
#pragma pop

/* 80008078-800080A0 0029B8 0028+00 0/0 1/1 8/8 .text            onBlure__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::onBlure() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/onBlure__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DD3E8-803DD408 00A108 0020+00 3/3 3/3 0/0 .bss             mFrameBufferTexObj__13mDoGph_gInf_c
 */
extern u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];
u8 mFrameBufferTexObj__13mDoGph_gInf_c[32];

/* 803DD408-803DD428 00A128 0020+00 1/1 0/0 0/0 .bss             mZbufferTexObj__13mDoGph_gInf_c */
static u8 mZbufferTexObj__13mDoGph_gInf_c[32];

/* 803DD428-803DD43C 00A148 0014+00 2/2 3/3 0/0 .bss             m_bloom__13mDoGph_gInf_c */
extern u8 m_bloom__13mDoGph_gInf_c[20];
u8 m_bloom__13mDoGph_gInf_c[20];

/* 803DD43C-803DD470 00A15C 0030+04 2/2 0/0 0/0 .bss             mBlureMtx__13mDoGph_gInf_c */
static u8 mBlureMtx__13mDoGph_gInf_c[48 + 4 /* padding */];

/* 800080A0-800080D0 0029E0 0030+00 1/1 1/1 0/0 .text            onBlure__13mDoGph_gInf_cFPA4_Cf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::onBlure(f32 const (*param_0)[4]) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/onBlure__13mDoGph_gInf_cFPA4_Cf.s"
}
#pragma pop

/* 800080D0-800080F4 002A10 0024+00 0/0 3/3 7/7 .text            fadeOut__13mDoGph_gInf_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::fadeOut(f32 param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/fadeOut__13mDoGph_gInf_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A40-80451A44 000040 0004+00 5/5 0/0 0/0 .sdata2          @4105 */
SECTION_SDATA2 static f32 lit_4105 = 10.0f;

/* 800080F4-80008330 002A34 023C+00 1/1 0/0 0/0 .text            darwFilter__F8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void darwFilter(_GXColor param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/darwFilter__F8_GXColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451A44-80451A48 000044 0004+00 1/1 0/0 0/0 .sdata2          @4131 */
SECTION_SDATA2 static f32 lit_4131 = 255.0f;

/* 80008330-8000841C 002C70 00EC+00 1/1 0/0 0/0 .text            calcFade__13mDoGph_gInf_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::calcFade() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/calcFade__13mDoGph_gInf_cFv.s"
}
#pragma pop

/* 8000841C-80008420 002D5C 0004+00 0/0 1/0 0/0 .text            mDoGph_BlankingON__Fv */
void mDoGph_BlankingON() {
    /* empty function */
}

/* 80008420-80008424 002D60 0004+00 0/0 1/0 0/0 .text            mDoGph_BlankingOFF__Fv */
void mDoGph_BlankingOFF() {
    /* empty function */
}

/* 80008424-80008450 002D64 002C+00 1/1 0/0 0/0 .text            dScnPly_BeforeOfPaint__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_BeforeOfPaint() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/dScnPly_BeforeOfPaint__Fv.s"
}
#pragma pop

/* 80008450-80008474 002D90 0024+00 0/0 1/0 0/0 .text            mDoGph_BeforeOfDraw__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_BeforeOfDraw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_BeforeOfDraw__Fv.s"
}
#pragma pop

/* 80008474-80008630 002DB4 01BC+00 0/0 1/0 0/0 .text            mDoGph_AfterOfDraw__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_AfterOfDraw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_AfterOfDraw__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450598-8045059C 000018 0004+00 1/1 0/0 0/0 .sdata           l_tevColor0$4208 */
SECTION_SDATA static u8 l_tevColor0[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045059C-804505A0 00001C 0004+00 1/1 0/0 0/0 .sdata           None */
SECTION_SDATA static u8 data_8045059C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451A48-80451A4C 000048 0004+00 1/1 0/0 0/0 .sdata2          @4422 */
SECTION_SDATA2 static f32 lit_4422 = -255.0f;

/* 80451A4C-80451A50 00004C 0004+00 2/2 0/0 0/0 .sdata2          @4423 */
SECTION_SDATA2 static f32 lit_4423 = 60.0f;

/* 80451A50-80451A54 000050 0004+00 1/1 0/0 0/0 .sdata2          @4424 */
SECTION_SDATA2 static f32 lit_4424 = 48.0f;

/* 80451A54-80451A58 000054 0004+00 1/1 0/0 0/0 .sdata2          @4425 */
SECTION_SDATA2 static f32 lit_4425 = 400.0f;

/* 80451A58-80451A60 000058 0008+00 1/1 0/0 0/0 .sdata2          @4426 */
SECTION_SDATA2 static f64 lit_4426 = 0.5;

/* 80451A60-80451A68 000060 0008+00 1/1 0/0 0/0 .sdata2          @4427 */
SECTION_SDATA2 static f64 lit_4427 = 3.0;

/* 80451A68-80451A70 000068 0008+00 1/1 0/0 0/0 .sdata2          @4428 */
SECTION_SDATA2 static u8 lit_4428[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451A70-80451A74 000070 0004+00 1/1 0/0 0/0 .sdata2          @4429 */
SECTION_SDATA2 static f32 lit_4429 = 280.0f;

/* 80451A74-80451A78 000074 0004+00 1/1 0/0 0/0 .sdata2          @4430 */
SECTION_SDATA2 static f32 lit_4430 = 4.0f / 5.0f;

/* 80451A78-80451A7C 000078 0004+00 1/1 0/0 0/0 .sdata2          @4431 */
SECTION_SDATA2 static f32 lit_4431 = -180.0f;

/* 80451A7C-80451A80 00007C 0004+00 1/1 0/0 0/0 .sdata2          @4432 */
SECTION_SDATA2 static f32 lit_4432 = 75.0f;

/* 80451A80-80451A84 000080 0004+00 1/1 0/0 0/0 .sdata2          @4433 */
SECTION_SDATA2 static f32 lit_4433 = 3.0f;

/* 80451A84-80451A88 000084 0004+00 1/1 0/0 0/0 .sdata2          @4434 */
SECTION_SDATA2 static f32 lit_4434 = 999999.0f;

/* 80451A88-80451A8C 000088 0004+00 1/1 0/0 0/0 .sdata2          @4435 */
SECTION_SDATA2 static f32 lit_4435 = 80.0f;

/* 80451A8C-80451A90 00008C 0004+00 1/1 0/0 0/0 .sdata2          @4436 */
SECTION_SDATA2 static f32 lit_4436 = 1.0f / 10.0f;

/* 80451A90-80451A94 000090 0004+00 1/1 0/0 0/0 .sdata2          @4437 */
SECTION_SDATA2 static f32 lit_4437 = 100.0f;

/* 80451A94-80451A98 000094 0004+00 1/1 0/0 0/0 .sdata2          @4438 */
SECTION_SDATA2 static f32 lit_4438 = 9.999999747378752e-05f;

/* 80451A98-80451A9C 000098 0004+00 1/1 0/0 0/0 .sdata2          @4439 */
SECTION_SDATA2 static f32 lit_4439 = -254.0f;

/* 80451A9C-80451AA0 00009C 0004+00 1/1 0/0 0/0 .sdata2          @4440 */
SECTION_SDATA2 static f32 lit_4440 = 509.0f;

/* 80451AA0-80451AA4 0000A0 0004+00 1/1 0/0 0/0 .sdata2          @4441 */
SECTION_SDATA2 static f32 lit_4441 = 0.0024999999441206455f;

/* 80451AA4-80451AA8 0000A4 0004+00 1/1 0/0 0/0 .sdata2          @4442 */
SECTION_SDATA2 static f32 lit_4442 = -0.0024999999441206455f;

/* 80008630-80009184 002F70 0B54+00 1/1 0/0 0/0 .text
 * drawDepth2__FP10view_classP15view_port_classi                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void drawDepth2(view_class* param_0, view_port_class* param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/drawDepth2__FP10view_classP15view_port_classi.s"
}
#pragma pop

/* 80009184-800091C0 003AC4 003C+00 0/0 53/53 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AA8-80451AAC 0000A8 0004+00 3/3 0/0 0/0 .sdata2          @4480 */
SECTION_SDATA2 static f32 lit_4480 = 448.0f;

/* 80451AAC-80451AB0 0000AC 0004+00 3/3 0/0 0/0 .sdata2          @4481 */
SECTION_SDATA2 static f32 lit_4481 = 608.0f;

/* 800091C0-800094B4 003B00 02F4+00 1/1 0/0 0/0 .text trimming__FP10view_classP15view_port_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void trimming(view_class* param_0, view_port_class* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/trimming__FP10view_classP15view_port_class.s"
}
#pragma pop

/* 800094B4-80009544 003DF4 0090+00 2/2 1/1 0/0 .text            mDoGph_drawFilterQuad__FScSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_drawFilterQuad(s8 param_0, s8 param_1) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_drawFilterQuad__FScSc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AB0-80451AB4 0000B0 0004+00 1/1 0/0 0/0 .sdata2          @4505 */
SECTION_SDATA2 static u32 lit_4505 = 0xFFFFFFFF;

/* 80009544-800095F8 003E84 00B4+00 0/0 1/1 0/0 .text            create__Q213mDoGph_gInf_c7bloom_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/create__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* 800095F8-80009650 003F38 0058+00 0/0 1/1 0/0 .text            remove__Q213mDoGph_gInf_c7bloom_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::remove() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/remove__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AB4-80451AB8 0000B4 0004+00 1/1 0/0 0/0 .sdata2          @4528 */
SECTION_SDATA2 static u8 lit_4528[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451AB8-80451ABC 0000B8 0004+00 1/1 0/0 0/0 .sdata2          None */
SECTION_SDATA2 static u32 data_80451AB8 = 0x00000040;

/* 80451ABC-80451AC0 0000BC 0004+00 1/1 0/0 0/0 .sdata2          @4592 */
SECTION_SDATA2 static f32 lit_4592 = 4.0f;

/* 80451AC0-80451AC8 0000C0 0004+04 1/1 0/0 0/0 .sdata2          @4593 */
SECTION_SDATA2 static f32 lit_4593[1 + 1 /* padding */] = {
    0.00015624999650754035f,
    /* padding */
    0.0f,
};

/* 80451AC8-80451AD0 0000C8 0008+00 1/1 0/0 0/0 .sdata2          @4595 */
SECTION_SDATA2 static f64 lit_4595 = 4503599627370496.0 /* cast u32 to float */;

/* 80456B60-80456B68 000000 0004+04 1/1 0/0 0/0 .sbss2           @4530 */
SECTION_SBSS2 static u8 lit_4530[4 + 4 /* padding */];

/* 80009650-8000A160 003F90 0B10+00 1/1 0/0 0/0 .text            draw__Q213mDoGph_gInf_c7bloom_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_gInf_c::bloom_c::draw() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/draw__Q213mDoGph_gInf_c7bloom_cFv.s"
}
#pragma pop

/* 8000A160-8000A290 004AA0 0130+00 1/1 0/0 0/0 .text
 * retry_captue_frame__FP10view_classP15view_port_classi        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void retry_captue_frame(view_class* param_0, view_port_class* param_1, int param_2) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/retry_captue_frame__FP10view_classP15view_port_classi.s"
}
#pragma pop

/* 8000A290-8000A504 004BD0 0274+00 1/1 0/0 0/0 .text            motionBlure__FP10view_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void motionBlure(view_class* param_0) {
    nofralloc
#include "asm/m_Do/m_Do_graphic/motionBlure__FP10view_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AD0-80451AD4 0000D0 0004+00 1/1 0/0 0/0 .sdata2          @4641 */
SECTION_SDATA2 static f32 lit_4641 = -35000.0f;

/* 80451AD4-80451AD8 0000D4 0004+00 1/1 0/0 0/0 .sdata2          @4642 */
SECTION_SDATA2 static f32 lit_4642 = -30000.0f;

/* 8000A504-8000A58C 004E44 0088+00 1/1 0/0 0/0 .text            setLight__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setLight() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/setLight__Fv.s"
}
#pragma pop

/* 8000A58C-8000A604 004ECC 0078+00 1/1 0/0 0/0 .text            drawItem3D__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void drawItem3D() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/drawItem3D__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451AD8-80451ADC 0000D8 0004+00 1/1 0/0 0/0 .sdata2          @5023 */
SECTION_SDATA2 static f32 lit_5023 = -1.0f;

/* 80451ADC-80451AE0 0000DC 0004+00 1/1 0/0 0/0 .sdata2          @5024 */
SECTION_SDATA2 static f32 lit_5024 = 0.5f;

/* 80451AE0-80451AE4 0000E0 0004+00 1/1 0/0 0/0 .sdata2          @5025 */
SECTION_SDATA2 static f32 lit_5025 = -0.5f;

/* 80451AE4-80451AE8 0000E4 0004+00 1/1 0/0 0/0 .sdata2          @5026 */
SECTION_SDATA2 static f32 lit_5026 = 19.0f / 14.0f;

/* 80451AE8-80451AEC 0000E8 0004+00 1/1 0/0 0/0 .sdata2          @5027 */
SECTION_SDATA2 static f32 lit_5027 = 100000.0f;

/* 80451AEC-80451AF0 0000EC 0004+00 1/1 0/0 0/0 .sdata2          @5028 */
SECTION_SDATA2 static f32 lit_5028 = -2.0f;

/* 80451AF0-80451AF4 0000F0 0004+00 1/1 0/0 0/0 .sdata2          @5029 */
SECTION_SDATA2 static f32 lit_5029 = -100000.0f;

/* 80451AF4-80451AF8 0000F4 0004+00 1/1 0/0 0/0 .sdata2          @5030 */
SECTION_SDATA2 static f32 lit_5030 = 304.0f;

/* 80451AF8-80451B00 0000F8 0004+04 1/1 0/0 0/0 .sdata2          @5031 */
SECTION_SDATA2 static f32 lit_5031[1 + 1 /* padding */] = {
    224.0f,
    /* padding */
    0.0f,
};

/* 8000A604-8000B118 004F44 0B14+00 0/0 1/0 0/0 .text            mDoGph_Painter__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_Painter() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_Painter__Fv.s"
}
#pragma pop

/* 8000B118-8000B174 005A58 005C+00 0/0 1/0 0/0 .text            __dt__13J2DOrthoGraphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DOrthoGraph::~J2DOrthoGraph() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__dt__13J2DOrthoGraphFv.s"
}
#pragma pop

/* 8000B174-8000B1D0 005AB4 005C+00 0/0 2/1 0/0 .text            mDoGph_Create__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoGph_Create() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/mDoGph_Create__Fv.s"
}
#pragma pop

/* 8000B1D0-8000B1E4 005B10 0014+00 0/0 1/0 0/0 .text            __sinit_m_Do_graphic_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_m_Do_graphic_cpp() {
    nofralloc
#include "asm/m_Do/m_Do_graphic/__sinit_m_Do_graphic_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8000B1D0 = (void*)__sinit_m_Do_graphic_cpp;
#pragma pop

/* 8000B1E4-8000B1EC 005B24 0008+00 0/0 1/0 0/0 .text            getAtnActorID__9daPy_py_cCFv */
s32 daPy_py_c::getAtnActorID() const {
    return -1;
}

/* 80373DD0-80373DE8 000430 0017+01 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80373DD0 = "F_SP124";
SECTION_DEAD static char const* const stringBase_80373DD8 = "D_MN08";
SECTION_DEAD static char const* const stringBase_80373DDF = "F_SP127";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80373DE7 = "";
#pragma pop
