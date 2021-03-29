//
// Generated By: dol2asm
// Translation Unit: d/file/d_file_sel_warning
//

#include "d/file/d_file_sel_warning.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMsgString_c {
    /* 80249C20 */ dMsgString_c();
    /* 80249D28 */ ~dMsgString_c();
};

struct JKRArchive {};

struct JUtility {
    struct TColor {};
};

struct dFile_warning_c {
    /* 80191BAC */ dFile_warning_c(JKRArchive*, u8);
    /* 80191C18 */ ~dFile_warning_c();
    /* 80191CF4 */ void screenSet();
    /* 80191F18 */ void _move();
    /* 80191F90 */ void modeWait();
    /* 80191F94 */ void modeMove();
    /* 80191FD4 */ void baseMoveAnm();
    /* 801920B8 */ void openInit();
    /* 8019210C */ void closeInit();
    /* 80192160 */ void init();
    /* 80192190 */ void _draw();
    /* 801921CC */ void drawSelf();
    /* 801921F8 */ void setText(u32);
    /* 80192240 */ void setFontColor(JUtility::TColor, JUtility::TColor);
};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct dDlst_FileWarn_c {
    /* 80192354 */ void draw();
    /* 801923CC */ ~dDlst_FileWarn_c();
};

struct JKRFileLoader {
    /* 802D4270 */ void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRExpHeap {};

struct J2DTextBox {
    /* 8019230C */ void setBlackWhite(JUtility::TColor, JUtility::TColor);
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DAnmTransform {};

struct J2DScreen {
    /* 80192414 */ void setAnimation(J2DAnmTransform*);
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
    /* 802F9690 */ void animation();
};

struct J2DPane {
    /* 802F7FC4 */ void setAnimation(J2DAnmTransform*);
};

struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
};

//
// Forward References:
//

extern "C" void __ct__15dFile_warning_cFP10JKRArchiveUc();
extern "C" void __dt__15dFile_warning_cFv();
extern "C" void screenSet__15dFile_warning_cFv();
extern "C" void _move__15dFile_warning_cFv();
extern "C" void modeWait__15dFile_warning_cFv();
extern "C" void modeMove__15dFile_warning_cFv();
extern "C" void baseMoveAnm__15dFile_warning_cFv();
extern "C" void openInit__15dFile_warning_cFv();
extern "C" void closeInit__15dFile_warning_cFv();
extern "C" void init__15dFile_warning_cFv();
extern "C" void _draw__15dFile_warning_cFv();
extern "C" void drawSelf__15dFile_warning_cFv();
extern "C" void setText__15dFile_warning_cFUl();
extern "C" void setFontColor__15dFile_warning_cFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setBlackWhite__10J2DTextBoxFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void draw__16dDlst_FileWarn_cFv();
extern "C" void __sinit_d_file_sel_warning_cpp();
extern "C" void __dt__16dDlst_FileWarn_cFv();
extern "C" void setAnimation__9J2DScreenFP15J2DAnmTransform();
extern "C" extern char const* const d_file_d_file_sel_warning__stringBase0;

//
// External References:
//

void mDoExt_getMesgFont();
void mDoExt_removeMesgFont();
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_removeMesgFont__Fv();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void setAnimation__7J2DPaneFP15J2DAnmTransform();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void __ptmf_scall();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BB410-803BB41C 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB41C-803BB428 000C+00 s=1 e=0 z=0  None .data      @3805 */
SECTION_DATA static void* lit_3805[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__15dFile_warning_cFv,
};

/* 803BB428-803BB434 000C+00 s=1 e=0 z=0  None .data      @3806 */
SECTION_DATA static void* lit_3806[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__15dFile_warning_cFv,
};

/* 803BB434-803BB44C 0018+00 s=2 e=0 z=0  None .data      fileWarningProc */
SECTION_DATA static u8 fileWarningProc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB44C-803BB480 0010+24 s=3 e=0 z=0  None .data      __vt__16dDlst_FileWarn_c */
SECTION_DATA static void* __vt__16dDlst_FileWarn_c[4 + 9 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)draw__16dDlst_FileWarn_cFv,
    (void*)__dt__16dDlst_FileWarn_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 803BB480-803BB498 000C+0C s=2 e=0 z=0  None .data      __vt__15dFile_warning_c */
SECTION_DATA static void* __vt__15dFile_warning_c[3 + 3 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__15dFile_warning_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 804539D8-804539DC 0004+00 s=3 e=0 z=0  None .sdata2    @3741 */
SECTION_SDATA2 static u8 lit_3741[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80191BAC-80191C18 006C+00 s=0 e=3 z=0  None .text      __ct__15dFile_warning_cFP10JKRArchiveUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dFile_warning_c::dFile_warning_c(JKRArchive* param_0, u8 param_1) {
    nofralloc
#include "asm/d/file/d_file_sel_warning/__ct__15dFile_warning_cFP10JKRArchiveUc.s"
}
#pragma pop

/* 80191C18-80191CF4 00DC+00 s=1 e=0 z=0  None .text      __dt__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dFile_warning_c::~dFile_warning_c() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/__dt__15dFile_warning_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394828-803948B8 0089+07 s=5 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80394828 = "zelda_file_select_warning_window.blo";
SECTION_DEAD char const* const stringBase_8039484D = "zelda_option_set_up_window.blo";
SECTION_DEAD char const* const stringBase_8039486C = "zelda_file_select_warning_window.bck";
SECTION_DEAD char const* const stringBase_80394891 = "zelda_option_set_up_window.bck";
SECTION_DEAD char const* const stringBase_803948B0 = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803948B1 = "\0\0\0\0\0\0";
#pragma pop

/* 804539DC-804539E0 0004+00 s=1 e=0 z=0  None .sdata2    @3769 */
SECTION_SDATA2 static void* lit_3769 = (void*)&d_file_d_file_sel_warning__stringBase0;

/* 804539E0-804539E4 0004+00 s=1 e=0 z=0  None .sdata2    None */
SECTION_SDATA2 static void* data_804539E0 =
    (void*)(((char*)&d_file_d_file_sel_warning__stringBase0) + 0x25);

/* 804539E4-804539E8 0004+00 s=1 e=0 z=0  None .sdata2    @3770 */
SECTION_SDATA2 static void* lit_3770 =
    (void*)(((char*)&d_file_d_file_sel_warning__stringBase0) + 0x44);

/* 804539E8-804539EC 0004+00 s=1 e=0 z=0  None .sdata2    None */
SECTION_SDATA2 static void* data_804539E8 =
    (void*)(((char*)&d_file_d_file_sel_warning__stringBase0) + 0x69);

/* 804539EC-804539F0 0004+00 s=2 e=0 z=0  None .sdata2    @3799 */
SECTION_SDATA2 static f32 lit_3799 = 2849.0f;

/* 80191CF4-80191F18 0224+00 s=1 e=0 z=0  None .text      screenSet__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::screenSet() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/screenSet__15dFile_warning_cFv.s"
}
#pragma pop

/* 80191F18-80191F90 0078+00 s=0 e=6 z=0  None .text      _move__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::_move() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/_move__15dFile_warning_cFv.s"
}
#pragma pop

/* 80191F90-80191F94 0004+00 s=1 e=0 z=0  None .text      modeWait__15dFile_warning_cFv */
void dFile_warning_c::modeWait() {
    /* empty function */
}

/* 80191F94-80191FD4 0040+00 s=1 e=0 z=0  None .text      modeMove__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::modeMove() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/modeMove__15dFile_warning_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804539F0-804539F8 0008+00 s=3 e=0 z=0  None .sdata2    @3868 */
SECTION_SDATA2 static f64 lit_3868 = 4503601774854144.0 /* cast s32 to float */;

/* 80191FD4-801920B8 00E4+00 s=1 e=0 z=0  None .text      baseMoveAnm__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::baseMoveAnm() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/baseMoveAnm__15dFile_warning_cFv.s"
}
#pragma pop

/* 801920B8-8019210C 0054+00 s=0 e=5 z=0  None .text      openInit__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::openInit() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/openInit__15dFile_warning_cFv.s"
}
#pragma pop

/* 8019210C-80192160 0054+00 s=0 e=6 z=0  None .text      closeInit__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::closeInit() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/closeInit__15dFile_warning_cFv.s"
}
#pragma pop

/* 80192160-80192190 0030+00 s=0 e=4 z=0  None .text      init__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::init() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/init__15dFile_warning_cFv.s"
}
#pragma pop

/* 80192190-801921CC 003C+00 s=0 e=2 z=0  None .text      _draw__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::_draw() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/_draw__15dFile_warning_cFv.s"
}
#pragma pop

/* 801921CC-801921F8 002C+00 s=0 e=1 z=0  None .text      drawSelf__15dFile_warning_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::drawSelf() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/drawSelf__15dFile_warning_cFv.s"
}
#pragma pop

/* 801921F8-80192240 0048+00 s=0 e=1 z=0  None .text      setText__15dFile_warning_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::setText(u32 param_0) {
    nofralloc
#include "asm/d/file/d_file_sel_warning/setText__15dFile_warning_cFUl.s"
}
#pragma pop

/* 80192240-8019230C 00CC+00 s=0 e=1 z=0  None .text
 * setFontColor__15dFile_warning_cFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_warning_c::setFontColor(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/d/file/d_file_sel_warning/setFontColor__15dFile_warning_cFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 8019230C-80192354 0048+00 s=0 e=1 z=0  None .text
 * setBlackWhite__10J2DTextBoxFQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBox::setBlackWhite(JUtility::TColor param_0, JUtility::TColor param_1) {
    nofralloc
#include "asm/d/file/d_file_sel_warning/setBlackWhite__10J2DTextBoxFQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* 80192354-8019238C 0038+00 s=1 e=0 z=0  None .text      draw__16dDlst_FileWarn_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_FileWarn_c::draw() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/draw__16dDlst_FileWarn_cFv.s"
}
#pragma pop

/* 8019238C-801923CC 0040+00 s=0 e=1 z=0  None .text      __sinit_d_file_sel_warning_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_file_sel_warning_cpp() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/__sinit_d_file_sel_warning_cpp.s"
}
#pragma pop

/* 801923CC-80192414 0048+00 s=1 e=0 z=0  None .text      __dt__16dDlst_FileWarn_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_FileWarn_c::~dDlst_FileWarn_c() {
    nofralloc
#include "asm/d/file/d_file_sel_warning/__dt__16dDlst_FileWarn_cFv.s"
}
#pragma pop

/* 80192414-80192434 0020+00 s=0 e=1 z=0  None .text setAnimation__9J2DScreenFP15J2DAnmTransform
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmTransform* param_0) {
    nofralloc
#include "asm/d/file/d_file_sel_warning/setAnimation__9J2DScreenFP15J2DAnmTransform.s"
}
#pragma pop
