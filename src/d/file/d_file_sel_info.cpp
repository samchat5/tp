//
// Generated By: dol2asm
// Translation Unit: d/file/d_file_sel_info
//

#include "d/file/d_file_sel_info.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dSv_save_c {};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
};

struct JKRArchive {};

struct dFile_info_c {
    /* 80192434 */ dFile_info_c(JKRArchive*, u8);
    /* 801924A0 */ ~dFile_info_c();
    /* 80192570 */ void screenSet();
    /* 80192954 */ void setSaveData(dSv_save_c*, int, u8);
    /* 80192AA0 */ void setHeartCnt(dSv_save_c*);
    /* 80192C08 */ void setSaveDate(dSv_save_c*);
    /* 80192C70 */ void setPlayTime(dSv_save_c*);
    /* 80192D58 */ void modeWait();
    /* 80192D5C */ void modeMove();
    /* 80192D60 */ void _draw();
};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct dDlst_FileInfo_c {
    /* 80192D9C */ void draw();
    /* 80192EC8 */ ~dDlst_FileInfo_c();
};

struct JKRExpHeap {};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct CPaneMgrAlpha {
    /* 802553FC */ CPaneMgrAlpha(J2DScreen*, u64, u8, JKRExpHeap*);
};

//
// Forward References:
//

extern "C" void __ct__12dFile_info_cFP10JKRArchiveUc();
extern "C" void __dt__12dFile_info_cFv();
extern "C" void screenSet__12dFile_info_cFv();
extern "C" void setSaveData__12dFile_info_cFP10dSv_save_ciUc();
extern "C" void setHeartCnt__12dFile_info_cFP10dSv_save_c();
extern "C" void setSaveDate__12dFile_info_cFP10dSv_save_c();
extern "C" void setPlayTime__12dFile_info_cFP10dSv_save_c();
extern "C" void modeWait__12dFile_info_cFv();
extern "C" void modeMove__12dFile_info_cFv();
extern "C" void _draw__12dFile_info_cFv();
extern "C" void draw__16dDlst_FileInfo_cFv();
extern "C" void __sinit_d_file_sel_info_cpp();
extern "C" void __dt__16dDlst_FileInfo_cFv();
extern "C" extern char const* const d_file_d_file_sel_info__stringBase0;

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
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void __ct__13CPaneMgrAlphaFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void OSTicksToCalendarTime();
extern "C" void PSMTXCopy();
extern "C" void PSMTXConcat();
extern "C" void PSMTXScale();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void __div2i();
extern "C" void __mod2i();
extern "C" void sprintf();
extern "C" void strcpy();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];

//
// Declarations:
//

/* ############################################################################################## */
/* 803948B8-80394910 0057+01 s=6 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_803948B8 = "zelda_file_select_info_text.blo";
SECTION_DEAD char const* const stringBase_803948D8 = "";
SECTION_DEAD char const* const stringBase_803948D9 = "tt_heart_00.bti";
SECTION_DEAD char const* const stringBase_803948E9 = "%02d/%02d/%d %02d:%02d";
SECTION_DEAD char const* const stringBase_80394900 = "999:59";
SECTION_DEAD char const* const stringBase_80394907 = "%d:%02d";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039490F = "";
#pragma pop

/* 803BB498-803BB4A8 000C+04 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 803BB4A8-803BB548 00A0+00 s=1 e=0 z=0  None .data      l_htag$3879 */
SECTION_DATA static u8 l_htag[160] = {
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x30, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x31,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x32, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x33,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x34, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x35,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x36, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x37,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x38, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x32, 0x39,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x30, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x31,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x32, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x33,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x34, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x35,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x36, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x37,
    0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x38, 0x00, 0x68, 0x65, 0x61, 0x72, 0x5F, 0x33, 0x39,
};

/* 803BB548-803BB558 0010+00 s=1 e=0 z=0  None .data      amariheartTex$3880 */
SECTION_DATA static void* amariheartTex[4] = {
    (void*)(((char*)&d_file_d_file_sel_info__stringBase0) + 0x21),
    (void*)(((char*)&d_file_d_file_sel_info__stringBase0) + 0x21),
    (void*)(((char*)&d_file_d_file_sel_info__stringBase0) + 0x21),
    (void*)(((char*)&d_file_d_file_sel_info__stringBase0) + 0x21),
};

/* 803BB558-803BB564 000C+00 s=1 e=0 z=0  None .data      @3953 */
SECTION_DATA static void* lit_3953[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12dFile_info_cFv,
};

/* 803BB564-803BB570 000C+00 s=1 e=0 z=0  None .data      @3954 */
SECTION_DATA static void* lit_3954[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__12dFile_info_cFv,
};

/* 803BB570-803BB588 0018+00 s=1 e=0 z=0  None .data      fileWarningProc */
SECTION_DATA static u8 fileWarningProc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB588-803BB598 0010+00 s=3 e=0 z=0  None .data      __vt__16dDlst_FileInfo_c */
SECTION_DATA static void* __vt__16dDlst_FileInfo_c[4] = {
    (void*)NULL,
    (void*)NULL,
    (void*)draw__16dDlst_FileInfo_cFv,
    (void*)__dt__16dDlst_FileInfo_cFv,
};

/* 803BB598-803BB5B0 000C+0C s=2 e=0 z=0  None .data      __vt__12dFile_info_c */
SECTION_DATA static void* __vt__12dFile_info_c[3 + 3 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12dFile_info_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 80192434-801924A0 006C+00 s=0 e=3 z=0  None .text      __ct__12dFile_info_cFP10JKRArchiveUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dFile_info_c::dFile_info_c(JKRArchive* param_0, u8 param_1) {
    nofralloc
#include "asm/d/file/d_file_sel_info/__ct__12dFile_info_cFP10JKRArchiveUc.s"
}
#pragma pop

/* 801924A0-80192570 00D0+00 s=1 e=0 z=0  None .text      __dt__12dFile_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dFile_info_c::~dFile_info_c() {
    nofralloc
#include "asm/d/file/d_file_sel_info/__dt__12dFile_info_cFv.s"
}
#pragma pop

/* 80192570-80192954 03E4+00 s=1 e=0 z=0  None .text      screenSet__12dFile_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::screenSet() {
    nofralloc
#include "asm/d/file/d_file_sel_info/screenSet__12dFile_info_cFv.s"
}
#pragma pop

/* 80192954-80192AA0 014C+00 s=0 e=3 z=0  None .text setSaveData__12dFile_info_cFP10dSv_save_ciUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::setSaveData(dSv_save_c* param_0, int param_1, u8 param_2) {
    nofralloc
#include "asm/d/file/d_file_sel_info/setSaveData__12dFile_info_cFP10dSv_save_ciUc.s"
}
#pragma pop

/* 80192AA0-80192C08 0168+00 s=1 e=0 z=0  None .text      setHeartCnt__12dFile_info_cFP10dSv_save_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::setHeartCnt(dSv_save_c* param_0) {
    nofralloc
#include "asm/d/file/d_file_sel_info/setHeartCnt__12dFile_info_cFP10dSv_save_c.s"
}
#pragma pop

/* 80192C08-80192C70 0068+00 s=1 e=0 z=0  None .text      setSaveDate__12dFile_info_cFP10dSv_save_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::setSaveDate(dSv_save_c* param_0) {
    nofralloc
#include "asm/d/file/d_file_sel_info/setSaveDate__12dFile_info_cFP10dSv_save_c.s"
}
#pragma pop

/* 80192C70-80192D58 00E8+00 s=1 e=0 z=0  None .text      setPlayTime__12dFile_info_cFP10dSv_save_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::setPlayTime(dSv_save_c* param_0) {
    nofralloc
#include "asm/d/file/d_file_sel_info/setPlayTime__12dFile_info_cFP10dSv_save_c.s"
}
#pragma pop

/* 80192D58-80192D5C 0004+00 s=1 e=0 z=0  None .text      modeWait__12dFile_info_cFv */
void dFile_info_c::modeWait() {
    /* empty function */
}

/* 80192D5C-80192D60 0004+00 s=1 e=0 z=0  None .text      modeMove__12dFile_info_cFv */
void dFile_info_c::modeMove() {
    /* empty function */
}

/* 80192D60-80192D9C 003C+00 s=0 e=2 z=0  None .text      _draw__12dFile_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dFile_info_c::_draw() {
    nofralloc
#include "asm/d/file/d_file_sel_info/_draw__12dFile_info_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804539F8-804539FC 0004+00 s=1 e=0 z=0  None .sdata2    @4000 */
SECTION_SDATA2 static f32 lit_4000 = 1.0f;

/* 804539FC-80453A00 0004+00 s=1 e=0 z=0  None .sdata2    @4001 */
SECTION_SDATA2 static u8 lit_4001[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80192D9C-80192E88 00EC+00 s=1 e=0 z=0  None .text      draw__16dDlst_FileInfo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_FileInfo_c::draw() {
    nofralloc
#include "asm/d/file/d_file_sel_info/draw__16dDlst_FileInfo_cFv.s"
}
#pragma pop

/* 80192E88-80192EC8 0040+00 s=0 e=1 z=0  None .text      __sinit_d_file_sel_info_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_file_sel_info_cpp() {
    nofralloc
#include "asm/d/file/d_file_sel_info/__sinit_d_file_sel_info_cpp.s"
}
#pragma pop

/* 80192EC8-80192F10 0048+00 s=1 e=0 z=0  None .text      __dt__16dDlst_FileInfo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_FileInfo_c::~dDlst_FileInfo_c() {
    nofralloc
#include "asm/d/file/d_file_sel_info/__dt__16dDlst_FileInfo_cFv.s"
}
#pragma pop
