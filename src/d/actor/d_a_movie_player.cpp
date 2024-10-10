/**
 * @file d_a_movie_player.cpp
 * 
*/

#include "d/actor/d_a_movie_player.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void THPAudioDecode();
extern "C" void __THPAudioGetNewSample();
extern "C" void __THPAudioInitialize();
extern "C" static void THPVideoDecode();
extern "C" void __THPSetupBuffers();
extern "C" void __THPReadFrameHeader();
extern "C" void __THPReadScaneHeader();
extern "C" void __THPReadQuantizationTable();
extern "C" void __THPReadHuffmanTableSpecification();
extern "C" void __THPHuffGenerateSizeTable();
extern "C" void __THPHuffGenerateCodeTable();
extern "C" void __THPHuffGenerateDecoderTables();
extern "C" void __THPRestartDefinition();
extern "C" void __THPPrepBitStream();
extern "C" void __THPDecompressYUV();
extern "C" void __THPGQRRestore();
extern "C" void __THPGQRSetup();
extern "C" void __THPDecompressiMCURow512x448();
extern "C" void __THPInverseDCTY8();
extern "C" void __THPInverseDCTNoYPos();
extern "C" void __THPDecompressiMCURow640x480();
extern "C" void __THPDecompressiMCURowNxN();
extern "C" void __THPHuffDecodeDCTCompY();
extern "C" void __THPHuffDecodeTab();
extern "C" void __THPHuffDecodeDCTCompU();
extern "C" void __THPHuffDecodeDCTCompV();
extern "C" static void i_OSInitFastCast();
extern "C" static void THPInit();
extern "C" static void daMP_PopReadedBuffer__Fv();
extern "C" static void daMP_PushReadedBuffer__FPv();
extern "C" static void daMP_PopFreeReadBuffer__Fv();
extern "C" static void daMP_PushFreeReadBuffer__FPv();
extern "C" static void daMP_PopReadedBuffer2__Fv();
extern "C" static void daMP_PushReadedBuffer2__FPv();
extern "C" static void daMP_ReadThreadStart__Fv();
extern "C" static void daMP_ReadThreadCancel__Fv();
extern "C" static void daMP_Reader__FPv();
extern "C" static void daMP_NEXT_READ_SIZE__FP18daMP_THPReadBuffer();
extern "C" static void daMP_CreateReadThread__Fl();
extern "C" static void daMP_PopFreeTextureSet__Fv();
extern "C" static void daMP_PushFreeTextureSet__FPv();
extern "C" static void daMP_PopDecodedTextureSet__Fl();
extern "C" static void daMP_PushDecodedTextureSet__FPv();
extern "C" static void daMP_VideoDecode__FP18daMP_THPReadBuffer();
extern "C" static void daMP_VideoDecoder__FPv();
extern "C" static void daMP_VideoDecoderForOnMemory__FPv();
extern "C" static void daMP_CreateVideoDecodeThread__FlPUc();
extern "C" static void daMP_VideoDecodeThreadStart__Fv();
extern "C" static void daMP_VideoDecodeThreadCancel__Fv();
extern "C" static void daMP_PopFreeAudioBuffer__Fv();
extern "C" static void daMP_PushFreeAudioBuffer__FPv();
extern "C" static void daMP_PopDecodedAudioBuffer__Fl();
extern "C" static void daMP_PushDecodedAudioBuffer__FPv();
extern "C" static void daMP_AudioDecode__FP18daMP_THPReadBuffer();
extern "C" static void daMP_AudioDecoder__FPv();
extern "C" static void daMP_AudioDecoderForOnMemory__FPv();
extern "C" static void daMP_CreateAudioDecodeThread__FlPUc();
extern "C" static void daMP_AudioDecodeThreadStart__Fv();
extern "C" static void daMP_AudioDecodeThreadCancel__Fv();
extern "C" static void daMP_THPGXRestore__Fv();
extern "C" static void daMP_THPGXYuv2RgbSetup__FPC16_GXRenderModeObj();
extern "C" static void i_GXSetTexCoordGen();
extern "C" static void daMP_THPGXYuv2RgbDraw__FPUcPUcPUcssssss();
extern "C" static void i_GXTexCoord2u16();
extern "C" static void daMP_MixAudio__FPsPsUl();
extern "C" static void daMP_audioCallbackWithMSound__Fl();
extern "C" static void daMP_audioInitWithMSound__Fv();
extern "C" static void daMP_audioQuitWithMSound__Fv();
extern "C" static void daMP_PushUsedTextureSet__FPv();
extern "C" static void daMP_PopUsedTextureSet__Fv();
extern "C" static void daMP_THPPlayerInit__Fl();
extern "C" static void daMP_THPPlayerQuit__Fv();
extern "C" static void daMP_THPPlayerOpen__FPCci();
extern "C" static void daMP_THPPlayerClose__Fv();
extern "C" static void daMP_THPPlayerCalcNeedMemory__Fv();
extern "C" static void daMP_THPPlayerSetBuffer__FPUc();
extern "C" static void daMP_InitAllMessageQueue__Fv();
extern "C" static void daMP_ProperTimingForStart__Fv();
extern "C" static void daMP_ProperTimingForGettingNextFrame__Fv();
extern "C" static void daMP_PlayControl__FUl();
extern "C" static void daMP_WaitUntilPrepare__Fv();
extern "C" static void daMP_PrepareReady__Fi();
extern "C" static void daMP_THPPlayerPrepare__Flll();
extern "C" static void daMP_THPPlayerDrawDone__Fv();
extern "C" static void daMP_THPPlayerPlay__Fv();
extern "C" static void daMP_THPPlayerStop__Fv();
extern "C" static void daMP_THPPlayerPause__Fv();
extern "C" static void daMP_THPPlayerDrawCurrentFrame__FPC16_GXRenderModeObjUlUlUlUl();
extern "C" void fadeIn__13mDoGph_gInf_cFf();
extern "C" void isFade__13mDoGph_gInf_cFv();
extern "C" static void daMP_THPPlayerGetVideoInfo__FP12THPVideoInfo();
extern "C" static void daMP_THPPlayerGetAudioInfo__FP12THPAudioInfo();
extern "C" static void daMP_THPPlayerGetTotalFrame__Fv();
extern "C" static void daMP_THPPlayerGetState__Fv();
extern "C" static void daMP_THPPlayerSetVolume__Fll();
extern "C" static void daMP_ActivePlayer_Init__FPCc();
extern "C" void getRenderMode__8JUTVideoCFv();
extern "C" void getManager__8JUTVideoFv();
extern "C" static void daMP_ActivePlayer_Finish__Fv();
extern "C" static void JKRFree__FPv();
extern "C" static void daMP_ActivePlayer_Main__Fv();
extern "C" static void daMP_ActivePlayer_Draw__Fv();
extern "C" static void dComIfGp_event_reset__Fv();
extern "C" void getEvent__14dComIfG_play_cFv();
extern "C" static void daMP_Get_MovieRestFrame__Fv();
extern "C" static void daMP_Set_PercentMovieVolume__Ff();
extern "C" void daMP_c_Get_arg_demoNo__6daMP_cFv();
extern "C" static void fopAcM_GetParam__FPCv();
extern "C" static void fpcM_GetParam__FPCv();
extern "C" void daMP_c_Get_arg_movieNo__6daMP_cFv();
extern "C" void daMP_c_Init__6daMP_cFv();
extern "C" void setFrameRate__13mDoGph_gInf_cFUs();
extern "C" void setFrameRate__10JFWDisplayFUs();
extern "C" void getManager__10JFWDisplayFv();
extern "C" void daMP_c_Finish__6daMP_cFv();
extern "C" void daMP_c_Main__6daMP_cFv();
extern "C" void draw__16daMP_Dlst_base_cFv();
extern "C" void daMP_c_Draw__6daMP_cFv();
extern "C" static void dComIfGd_set2DOpa__FP12dDlst_base_c();
extern "C" void set2DOpa__12dDlst_list_cFP12dDlst_base_c();
extern "C" void daMP_c_Callback_Init__6daMP_cFP10fopAc_ac_c();
extern "C" static void fopAcM_OnCondition__FP10fopAc_ac_cUl();
extern "C" void __ct__6daMP_cFv();
extern "C" static void* __nw__FUlPv();
extern "C" static void fopAcM_CheckCondition__FP10fopAc_ac_cUl();
extern "C" void daMP_c_Callback_Finish__6daMP_cFP6daMP_c();
extern "C" void daMP_c_Callback_Main__6daMP_cFP6daMP_c();
extern "C" void daMP_c_Callback_Draw__6daMP_cFP6daMP_c();
extern "C" static bool daMP_Callback_Dummy__FP6daMP_c();
extern "C" void __sinit_d_a_movie_player_cpp();
extern "C" void __ct__16daMP_Dlst_base_cFv();
extern "C" void __ct__12dDlst_base_cFv();
extern "C" void draw__12dDlst_base_cFv();
extern "C" extern char const* const d_a_movie_player__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" void mDoExt_getArchiveHeap__Fv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void daMP_c_Get_MovieRestFrame__6daMP_cFv();
extern "C" void daMP_c_Set_PercentMovieVolume__6daMP_cFf();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void cAPICPad_ANY_BUTTON__FUl();
extern "C" void registerMixCallback__9JASDriverFPFl_Ps10JASMixMode();
extern "C" void getOutputMode__9JASDriverFv();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void PPCMfhid2();
extern "C" void LCEnable();
extern "C" void LCDisable();
extern "C" void VIGetNextField();
extern "C" void AIGetDSPSampleRate();
extern "C" void GXDrawDone();
extern "C" void GXInvalidateTexAll();
extern "C" static void i_GXEnd();
extern "C" static void i_GXPosition3s16();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void __div2i();
extern "C" void sprintf();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_clearColor[4];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" u8 m_myObj__6daMP_c[4];
extern "C" u8 sManager__10JFWDisplay[4];
extern "C" u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* 80872758-80872BF0 000078 0498+00 1/1 0/0 0/0 .text            THPAudioDecode */
static void THPAudioDecode() {
    // NONMATCHING
}

/* 80872BF0-80872C80 000510 0090+00 1/1 0/0 0/0 .text            __THPAudioGetNewSample */
void __THPAudioGetNewSample() {
    // NONMATCHING
}

/* 80872C80-80872CBC 0005A0 003C+00 1/1 0/0 0/0 .text            __THPAudioInitialize */
void __THPAudioInitialize() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808795A0-808795A4 000000 0001+03 15/15 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 808795A4-808795A8 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 808795A8-808795AC 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 808795AC-808795B0 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 808795B0-808795B4 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */] ALIGN_DECL(16);
#pragma pop

/* 808795B4-808795B8 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 808795B8-808795BC 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 808795BC-808795C0 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 808795C0-808795C4 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */] ALIGN_DECL(32);
#pragma pop

/* 808795C4-808795C8 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 808795C8-808795CC 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 808795CC-808795D0 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 808795D0-808795D4 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */] ALIGN_DECL(16);
#pragma pop

/* 808795D4-808795D8 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 808795D8-808795DC 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 808795DC-808795E0 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 808795E0-80879A40 000040 0460+00 0/0 0/0 0/0 .bss             THPStatistics */
#pragma push
#pragma force_active on
static u8 THPStatistics[1120] ALIGN_DECL(32);
#pragma pop

/* 80879A40-80879A44 0004A0 0004+00 1/2 0/0 0/0 .bss             Ydchuff */
static u8 Ydchuff[4];

/* 80879A44-80879A48 0004A4 0004+00 1/2 0/0 0/0 .bss             Udchuff */
static u8 Udchuff[4];

/* 80879A48-80879A4C 0004A8 0004+00 1/2 0/0 0/0 .bss             Vdchuff */
static u8 Vdchuff[4];

/* 80879A4C-80879A50 0004AC 0004+00 1/2 0/0 0/0 .bss             Yachuff */
static u8 Yachuff[4];

/* 80879A50-80879A54 0004B0 0004+00 1/2 0/0 0/0 .bss             Uachuff */
static u8 Uachuff[4];

/* 80879A54-80879A60 0004B4 0004+08 1/2 0/0 0/0 .bss             Vachuff */
static u8 Vachuff[4 + 8 /* padding */];

/* 80879A60-80879B60 0004C0 0100+00 0/2 0/0 0/0 .bss             __THPIDCTWorkspace */
#pragma push
#pragma force_active on
static u8 __THPIDCTWorkspace[256] ALIGN_DECL(32);
#pragma pop

/* 80879B60-80879B64 0005C0 0004+00 1/3 0/0 0/0 .bss             __THPHuffmanBits */
static u8 __THPHuffmanBits[4];

/* 80879B64-80879B68 0005C4 0004+00 2/3 0/0 0/0 .bss             __THPHuffmanSizeTab */
static u8 __THPHuffmanSizeTab[4];

/* 80879B68-80879B6C 0005C8 0004+00 1/3 0/0 0/0 .bss             __THPHuffmanCodeTab */
static u8 __THPHuffmanCodeTab[4];

/* 80879B6C-80879B80 0005CC 0004+10 0/5 0/0 0/0 .bss             Gbase */
#pragma push
#pragma force_active on
static u8 Gbase[4 + 16 /* padding */];
#pragma pop

/* 80879B80-80879B84 0005E0 0004+00 0/5 0/0 0/0 .bss             Gwid */
#pragma push
#pragma force_active on
static u8 Gwid[4] ALIGN_DECL(32);
#pragma pop

/* 80879B84-80879B88 0005E4 0004+00 0/5 0/0 0/0 .bss             Gq */
#pragma push
#pragma force_active on
static u8 Gq[4];
#pragma pop

/* 80879B88-80879B94 0005E8 000C+00 0/2 0/0 0/0 .bss             __THPLCWork512 */
#pragma push
#pragma force_active on
static u8 __THPLCWork512[12];
#pragma pop

/* 80879B94-80879BA0 0005F4 000C+00 0/3 0/0 0/0 .bss             __THPLCWork640 */
#pragma push
#pragma force_active on
static u8 __THPLCWork640[12];
#pragma pop

/* 80879BA0-80879BA4 000600 0004+00 2/2 0/0 0/0 .bss             __THPOldGQR5 */
static u8 __THPOldGQR5[4];

/* 80879BA4-80879BA8 000604 0004+00 2/2 0/0 0/0 .bss             __THPOldGQR6 */
static u8 __THPOldGQR6[4];

/* 80879BA8-80879BAC 000608 0004+00 1/3 0/0 0/0 .bss             __THPWorkArea */
static u8 __THPWorkArea[4];

/* 80879BAC-80879BC4 00060C 0018+00 1/4 0/0 0/0 .bss             __THPMCUBuffer */
static u8 __THPMCUBuffer[24];

/* 80879BC4-80879BC8 000624 0004+00 5/12 0/0 0/0 .bss             __THPInfo */
static u8 __THPInfo[4];

/* 80879BC8-80879BD0 000628 0004+04 0/2 0/0 0/0 .bss             __THPInitFlag */
#pragma push
#pragma force_active on
static u8 __THPInitFlag[4 + 4 /* padding */];
#pragma pop

/* 80872CBC-80872F00 0005DC 0244+00 1/1 0/0 0/0 .text            THPVideoDecode */
static void THPVideoDecode() {
    // NONMATCHING
}

/* 80872F00-80872F48 000820 0048+00 1/1 0/0 0/0 .text            __THPSetupBuffers */
void __THPSetupBuffers() {
    // NONMATCHING
}

/* 80872F48-80873088 000868 0140+00 1/1 0/0 0/0 .text            __THPReadFrameHeader */
void __THPReadFrameHeader() {
    // NONMATCHING
}

/* 80873088-808731B4 0009A8 012C+00 1/1 0/0 0/0 .text            __THPReadScaneHeader */
void __THPReadScaneHeader() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879034-80879084 000000 0050+00 8/8 0/0 0/0 .rodata          __THPJpegNaturalOrder */
SECTION_RODATA static u8 const __THPJpegNaturalOrder[80] = {
    0x00, 0x01, 0x08, 0x10, 0x09, 0x02, 0x03, 0x0A, 0x11, 0x18, 0x20, 0x19, 0x12, 0x0B, 0x04, 0x05,
    0x0C, 0x13, 0x1A, 0x21, 0x28, 0x30, 0x29, 0x22, 0x1B, 0x14, 0x0D, 0x06, 0x07, 0x0E, 0x15, 0x1C,
    0x23, 0x2A, 0x31, 0x38, 0x39, 0x32, 0x2B, 0x24, 0x1D, 0x16, 0x0F, 0x17, 0x1E, 0x25, 0x2C, 0x33,
    0x3A, 0x3B, 0x34, 0x2D, 0x26, 0x1F, 0x27, 0x2E, 0x35, 0x3C, 0x3D, 0x36, 0x2F, 0x37, 0x3E, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
};
COMPILER_STRIP_GATE(0x80879034, &__THPJpegNaturalOrder);

/* 80879084-808790C4 000050 0040+00 1/1 0/0 0/0 .rodata          __THPAANScaleFactor */
SECTION_RODATA static u8 const __THPAANScaleFactor[64] = {
    0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF6, 0x31, 0x50, 0xC0, 0x00, 0x00, 0x00,
    0x3F, 0xF4, 0xE7, 0xAE, 0xA0, 0x00, 0x00, 0x00, 0x3F, 0xF2, 0xD0, 0x62, 0xE0, 0x00, 0x00, 0x00,
    0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x24, 0x69, 0xC0, 0x00, 0x00, 0x00,
    0x3F, 0xE1, 0x51, 0x7A, 0x80, 0x00, 0x00, 0x00, 0x3F, 0xD1, 0xA8, 0x55, 0xE0, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80879084, &__THPAANScaleFactor);

/* 808790C4-808790CC 000090 0008+00 1/1 0/0 0/0 .rodata          @3998 */
SECTION_RODATA static u8 const lit_3998[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x808790C4, &lit_3998);

/* 808731B4-80873574 000AD4 03C0+00 1/1 0/0 0/0 .text            __THPReadQuantizationTable */
void __THPReadQuantizationTable() {
    // NONMATCHING
}

/* 80873574-8087375C 000E94 01E8+00 1/1 0/0 0/0 .text            __THPReadHuffmanTableSpecification
 */
void __THPReadHuffmanTableSpecification() {
    // NONMATCHING
}

/* 8087375C-8087383C 00107C 00E0+00 1/1 0/0 0/0 .text            __THPHuffGenerateSizeTable */
void __THPHuffGenerateSizeTable() {
    // NONMATCHING
}

/* 8087383C-808738B0 00115C 0074+00 1/1 0/0 0/0 .text            __THPHuffGenerateCodeTable */
void __THPHuffGenerateCodeTable() {
    // NONMATCHING
}

/* 808738B0-808739A8 0011D0 00F8+00 1/1 0/0 0/0 .text            __THPHuffGenerateDecoderTables */
void __THPHuffGenerateDecoderTables() {
    // NONMATCHING
}

/* 808739A8-80873A04 0012C8 005C+00 1/1 0/0 0/0 .text            __THPRestartDefinition */
void __THPRestartDefinition() {
    // NONMATCHING
}

/* 80873A04-80873C44 001324 0240+00 1/1 0/0 0/0 .text            __THPPrepBitStream */
void __THPPrepBitStream() {
    // NONMATCHING
}

/* 80873C44-80873D28 001564 00E4+00 1/1 0/0 0/0 .text            __THPDecompressYUV */
void __THPDecompressYUV() {
    // NONMATCHING
}

/* 80873D28-80873D48 001648 0020+00 1/1 0/0 0/0 .text            __THPGQRRestore */
void __THPGQRRestore() {
    // NONMATCHING
}

/* 80873D48-80873D7C 001668 0034+00 1/1 0/0 0/0 .text            __THPGQRSetup */
void __THPGQRSetup() {
    // NONMATCHING
}

/* 80873D7C-80873FBC 00169C 0240+00 1/1 0/0 0/0 .text            __THPDecompressiMCURow512x448 */
void __THPDecompressiMCURow512x448() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808790CC-808790D0 000098 0004+00 0/2 0/0 0/0 .rodata          @4205 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4205 = 0x3FB504F3;
COMPILER_STRIP_GATE(0x808790CC, &lit_4205);
#pragma pop

/* 808790D0-808790D4 00009C 0004+00 0/2 0/0 0/0 .rodata          @4206 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4206 = 0x3FEC835E;
COMPILER_STRIP_GATE(0x808790D0, &lit_4206);
#pragma pop

/* 808790D4-808790D8 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4207 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4207 = 0x3F8A8BD4;
COMPILER_STRIP_GATE(0x808790D4, &lit_4207);
#pragma pop

/* 808790D8-808790DC 0000A4 0004+00 0/2 0/0 0/0 .rodata          @4208 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4208 = 0xC0273D75;
COMPILER_STRIP_GATE(0x808790D8, &lit_4208);
#pragma pop

/* 808790DC-808790E0 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4209 = 1024.0f;
COMPILER_STRIP_GATE(0x808790DC, &lit_4209);
#pragma pop

/* 80873FBC-8087445C 0018DC 04A0+00 3/3 0/0 0/0 .text            __THPInverseDCTY8 */
void __THPInverseDCTY8() {
    // NONMATCHING
}

/* 8087445C-808748F4 001D7C 0498+00 3/3 0/0 0/0 .text            __THPInverseDCTNoYPos */
void __THPInverseDCTNoYPos() {
    // NONMATCHING
}

/* 808748F4-80874B38 002214 0244+00 1/1 0/0 0/0 .text            __THPDecompressiMCURow640x480 */
void __THPDecompressiMCURow640x480() {
    // NONMATCHING
}

/* 80874B38-80874D8C 002458 0254+00 1/1 0/0 0/0 .text            __THPDecompressiMCURowNxN */
void __THPDecompressiMCURowNxN() {
    // NONMATCHING
}

/* 80874D8C-80875198 0026AC 040C+00 3/3 0/0 0/0 .text            __THPHuffDecodeDCTCompY */
void __THPHuffDecodeDCTCompY() {
    // NONMATCHING
}

/* 80875198-80875410 002AB8 0278+00 3/3 0/0 0/0 .text            __THPHuffDecodeTab */
void __THPHuffDecodeTab() {
    // NONMATCHING
}

/* 80875410-808755F8 002D30 01E8+00 3/3 0/0 0/0 .text            __THPHuffDecodeDCTCompU */
void __THPHuffDecodeDCTCompU() {
    // NONMATCHING
}

/* 808755F8-808757E0 002F18 01E8+00 3/3 0/0 0/0 .text            __THPHuffDecodeDCTCompV */
void __THPHuffDecodeDCTCompV() {
    // NONMATCHING
}

/* 808757E0-8087584C 003100 006C+00 1/1 0/0 0/0 .text            THPInit */
static void THPInit() {
    // NONMATCHING
}

/* 8087584C-80875880 00316C 0034+00 1/1 0/0 0/0 .text            OSInitFastCast */
static void i_OSInitFastCast() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879BD0-80879DA0 000630 01D0+00 28/29 0/0 0/0 .bss             daMP_ActivePlayer */
static u8 daMP_ActivePlayer[464] ALIGN_DECL(16);

/* 80879DA0-80879DA4 000800 0004+00 2/3 0/0 0/0 .bss             daMP_ReadThreadCreated */
static u8 daMP_ReadThreadCreated[4];

/* 80879DA4-80879DC4 000804 0020+00 2/3 0/0 0/0 .bss             daMP_FreeReadBufferQueue */
static u8 daMP_FreeReadBufferQueue[32];

/* 80879DC4-80879DE4 000824 0020+00 2/3 0/0 0/0 .bss             daMP_ReadedBufferQueue */
static u8 daMP_ReadedBufferQueue[32];

/* 80875880-808758B4 0031A0 0034+00 2/2 0/0 0/0 .text            daMP_PopReadedBuffer__Fv */
static void daMP_PopReadedBuffer() {
    // NONMATCHING
}

/* 808758B4-808758E4 0031D4 0030+00 1/1 0/0 0/0 .text            daMP_PushReadedBuffer__FPv */
static void daMP_PushReadedBuffer(void* param_0) {
    // NONMATCHING
}

/* 808758E4-80875918 003204 0034+00 1/1 0/0 0/0 .text            daMP_PopFreeReadBuffer__Fv */
static void daMP_PopFreeReadBuffer() {
    // NONMATCHING
}

/* 80875918-80875948 003238 0030+00 2/2 0/0 0/0 .text            daMP_PushFreeReadBuffer__FPv */
static void daMP_PushFreeReadBuffer(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879DE4-80879E04 000844 0020+00 2/3 0/0 0/0 .bss             daMP_ReadedBufferQueue2 */
static u8 daMP_ReadedBufferQueue2[32];

/* 80875948-8087597C 003268 0034+00 1/1 0/0 0/0 .text            daMP_PopReadedBuffer2__Fv */
static void daMP_PopReadedBuffer2() {
    // NONMATCHING
}

/* 8087597C-808759AC 00329C 0030+00 1/1 0/0 0/0 .text            daMP_PushReadedBuffer2__FPv */
static void daMP_PushReadedBuffer2(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879E04-80879E2C 000864 0028+00 0/1 0/0 0/0 .bss             daMP_FreeReadBufferMessage */
#pragma push
#pragma force_active on
static u8 daMP_FreeReadBufferMessage[40];
#pragma pop

/* 80879E2C-80879E54 00088C 0028+00 0/1 0/0 0/0 .bss             daMP_ReadedBufferMessage */
#pragma push
#pragma force_active on
static u8 daMP_ReadedBufferMessage[40];
#pragma pop

/* 80879E54-80879E80 0008B4 0028+04 0/1 0/0 0/0 .bss             daMP_ReadedBufferMessage2 */
#pragma push
#pragma force_active on
static u8 daMP_ReadedBufferMessage2[40 + 4 /* padding */];
#pragma pop

/* 80879E80-8087A198 0008E0 0318+00 3/4 0/0 0/0 .bss             daMP_ReadThread */
static u8 daMP_ReadThread[792] ALIGN_DECL(32);

/* 808759AC-808759E4 0032CC 0038+00 1/1 0/0 0/0 .text            daMP_ReadThreadStart__Fv */
static void daMP_ReadThreadStart() {
    // NONMATCHING
}

/* 808759E4-80875A28 003304 0044+00 1/1 0/0 0/0 .text            daMP_ReadThreadCancel__Fv */
static void daMP_ReadThreadCancel() {
    // NONMATCHING
}

/* 80875A28-80875B0C 003348 00E4+00 1/1 0/0 0/0 .text            daMP_Reader__FPv */
static void daMP_Reader(void* param_0) {
    // NONMATCHING
}

/* 80875B0C-80875B18 00342C 000C+00 1/1 0/0 0/0 .text daMP_NEXT_READ_SIZE__FP18daMP_THPReadBuffer
 */
static void daMP_NEXT_READ_SIZE(daMP_THPReadBuffer* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8087911C = "Can't create read thread\n";
#pragma pop

/* 8087A198-8087C198 000BF8 2000+00 0/1 0/0 0/0 .bss             daMP_ReadThreadStack */
#pragma push
#pragma force_active on
static u8 daMP_ReadThreadStack[8192];
#pragma pop

/* 8087C198-8087C1A0 002BF8 0004+04 2/4 0/0 0/0 .bss             daMP_VideoDecodeThreadCreated */
static u8 daMP_VideoDecodeThreadCreated[4 + 4 /* padding */];

/* 80875B18-80875BC8 003438 00B0+00 1/1 0/0 0/0 .text            daMP_CreateReadThread__Fl */
static void daMP_CreateReadThread(s32 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087C1A0-8087C4B8 002C00 0318+00 4/5 0/0 0/0 .bss             daMP_VideoDecodeThread */
static u8 daMP_VideoDecodeThread[792] ALIGN_DECL(32);

/* 8087C4B8-808E04B8 002F18 64000+00 1/1 0/0 0/0 .bss             daMP_VideoDecodeThreadStack */
static u8 daMP_VideoDecodeThreadStack[409600];

/* 808E04B8-808E04D8 066F18 0020+00 2/2 0/0 0/0 .bss             daMP_FreeTextureSetQueue */
static u8 daMP_FreeTextureSetQueue[32];

/* 80875BC8-80875BFC 0034E8 0034+00 1/1 0/0 0/0 .text            daMP_PopFreeTextureSet__Fv */
static void daMP_PopFreeTextureSet() {
    // NONMATCHING
}

/* 80875BFC-80875C2C 00351C 0030+00 2/2 0/0 0/0 .text            daMP_PushFreeTextureSet__FPv */
static void daMP_PushFreeTextureSet(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808E04D8-808E04F8 066F38 0020+00 2/2 0/0 0/0 .bss             daMP_DecodedTextureSetQueue */
static u8 daMP_DecodedTextureSetQueue[32];

/* 80875C2C-80875C70 00354C 0044+00 1/1 0/0 0/0 .text            daMP_PopDecodedTextureSet__Fl */
static void daMP_PopDecodedTextureSet(s32 param_0) {
    // NONMATCHING
}

/* 80875C70-80875CA0 003590 0030+00 1/1 0/0 0/0 .text            daMP_PushDecodedTextureSet__FPv */
static void daMP_PushDecodedTextureSet(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808E04F8-808E0504 066F58 000C+00 0/0 0/0 0/0 .bss             daMP_FreeTextureSetMessage */
#pragma push
#pragma force_active on
static u8 daMP_FreeTextureSetMessage[12];
#pragma pop

/* 808E0504-808E0510 066F64 000C+00 0/0 0/0 0/0 .bss             daMP_DecodedTextureSetMessage */
#pragma push
#pragma force_active on
static u8 daMP_DecodedTextureSetMessage[12];
#pragma pop

/* 808E0510-808E0514 066F70 0004+00 1/1 0/0 0/0 .bss             daMP_First */
static u8 daMP_First[4];

/* 80875CA0-80875DD8 0035C0 0138+00 2/2 0/0 0/0 .text daMP_VideoDecode__FP18daMP_THPReadBuffer */
static void daMP_VideoDecode(daMP_THPReadBuffer* param_0) {
    // NONMATCHING
}

/* 80875DD8-80875EA0 0036F8 00C8+00 1/1 0/0 0/0 .text            daMP_VideoDecoder__FPv */
static void daMP_VideoDecoder(void* param_0) {
    // NONMATCHING
}

/* 80875EA0-80875FD4 0037C0 0134+00 1/1 0/0 0/0 .text            daMP_VideoDecoderForOnMemory__FPv
 */
static void daMP_VideoDecoderForOnMemory(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80879136 = "Can't create video decode thread\n";
#pragma pop

/* 80875FD4-808760EC 0038F4 0118+00 1/1 0/0 0/0 .text            daMP_CreateVideoDecodeThread__FlPUc
 */
static void daMP_CreateVideoDecodeThread(s32 param_0, u8* param_1) {
    // NONMATCHING
}

/* 808760EC-80876124 003A0C 0038+00 1/1 0/0 0/0 .text            daMP_VideoDecodeThreadStart__Fv */
static void daMP_VideoDecodeThreadStart() {
    // NONMATCHING
}

/* 80876124-80876168 003A44 0044+00 1/1 0/0 0/0 .text            daMP_VideoDecodeThreadCancel__Fv */
static void daMP_VideoDecodeThreadCancel() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808E0514-808E0518 066F74 0004+00 2/2 0/0 0/0 .bss             daMP_AudioDecodeThreadCreated */
static u8 daMP_AudioDecodeThreadCreated[4];

/* 808E0518-808E0830 066F78 0318+00 3/3 0/0 0/0 .bss             daMP_AudioDecodeThread */
static u8 daMP_AudioDecodeThread[792];

/* 808E0830-80944830 067290 64000+00 0/0 0/0 0/0 .bss             daMP_AudioDecodeThreadStack */
#pragma push
#pragma force_active on
static u8 daMP_AudioDecodeThreadStack[409600];
#pragma pop

/* 80944830-80944850 0CB290 0020+00 2/2 0/0 0/0 .bss             daMP_FreeAudioBufferQueue */
static u8 daMP_FreeAudioBufferQueue[32];

/* 80876168-8087619C 003A88 0034+00 1/1 0/0 0/0 .text            daMP_PopFreeAudioBuffer__Fv */
static void daMP_PopFreeAudioBuffer() {
    // NONMATCHING
}

/* 8087619C-808761CC 003ABC 0030+00 2/2 0/0 0/0 .text            daMP_PushFreeAudioBuffer__FPv */
static void daMP_PushFreeAudioBuffer(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80944850-80944870 0CB2B0 0020+00 2/2 0/0 0/0 .bss             daMP_DecodedAudioBufferQueue */
static u8 daMP_DecodedAudioBufferQueue[32];

/* 808761CC-80876210 003AEC 0044+00 1/1 0/0 0/0 .text            daMP_PopDecodedAudioBuffer__Fl */
static void daMP_PopDecodedAudioBuffer(s32 param_0) {
    // NONMATCHING
}

/* 80876210-80876240 003B30 0030+00 1/1 0/0 0/0 .text            daMP_PushDecodedAudioBuffer__FPv */
static void daMP_PushDecodedAudioBuffer(void* param_0) {
    // NONMATCHING
}

/* 80876240-8087631C 003B60 00DC+00 2/2 0/0 0/0 .text daMP_AudioDecode__FP18daMP_THPReadBuffer */
static void daMP_AudioDecode(daMP_THPReadBuffer* param_0) {
    // NONMATCHING
}

/* 8087631C-80876344 003C3C 0028+00 1/1 0/0 0/0 .text            daMP_AudioDecoder__FPv */
static void daMP_AudioDecoder(void* param_0) {
    // NONMATCHING
}

/* 80876344-808763EC 003C64 00A8+00 1/1 0/0 0/0 .text            daMP_AudioDecoderForOnMemory__FPv
 */
static void daMP_AudioDecoderForOnMemory(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80879158 = "Can't create audio decode thread\n";
#pragma pop

/* 808763EC-808764E8 003D0C 00FC+00 1/1 0/0 0/0 .text            daMP_CreateAudioDecodeThread__FlPUc
 */
static void daMP_CreateAudioDecodeThread(s32 param_0, u8* param_1) {
    // NONMATCHING
}

/* 808764E8-80876520 003E08 0038+00 1/1 0/0 0/0 .text            daMP_AudioDecodeThreadStart__Fv */
static void daMP_AudioDecodeThreadStart() {
    // NONMATCHING
}

/* 80876520-80876564 003E40 0044+00 1/1 0/0 0/0 .text            daMP_AudioDecodeThreadCancel__Fv */
static void daMP_AudioDecodeThreadCancel() {
    // NONMATCHING
}

/* 80876564-8087667C 003E84 0118+00 1/1 0/0 0/0 .text            daMP_THPGXRestore__Fv */
static void daMP_THPGXRestore() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808790E0-808790E4 0000AC 0004+00 1/1 0/0 0/0 .rodata          @4465 */
SECTION_RODATA static f32 const lit_4465 = 100.0f;
COMPILER_STRIP_GATE(0x808790E0, &lit_4465);

/* 808790E4-808790E8 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4466 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4466 = 60.0f;
COMPILER_STRIP_GATE(0x808790E4, &lit_4466);
#pragma pop

/* 808790E8-808790F0 0000B4 0008+00 0/1 0/0 0/0 .rodata          @4779 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4779[8] = {
    0xFF, 0xA6, 0x00, 0x00, 0xFF, 0x8E, 0x00, 0x87,
};
COMPILER_STRIP_GATE(0x808790E8, &lit_4779);
#pragma pop

/* 808790F0-808790F4 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4782 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4782 = 0x0000E258;
COMPILER_STRIP_GATE(0x808790F0, &lit_4782);
#pragma pop

/* 808790F4-808790F8 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4785 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4785 = 0xB30000B6;
COMPILER_STRIP_GATE(0x808790F4, &lit_4785);
#pragma pop

/* 808790F8-808790FC 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4788 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4788 = 0xFF00FF80;
COMPILER_STRIP_GATE(0x808790F8, &lit_4788);
#pragma pop

/* 808790FC-80879100 0000C8 0004+00 2/4 0/0 0/0 .rodata          @4809 */
SECTION_RODATA static u8 const lit_4809[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x808790FC, &lit_4809);

/* 80879100-80879104 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4810 = -1.0f;
COMPILER_STRIP_GATE(0x80879100, &lit_4810);
#pragma pop

/* 80879104-8087910C 0000D0 0004+04 1/3 0/0 0/0 .rodata          @4811 */
SECTION_RODATA static f32 const lit_4811[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80879104, &lit_4811);

/* 8087910C-80879114 0000D8 0008+00 2/3 0/0 0/0 .rodata          @4814 */
SECTION_RODATA static u8 const lit_4814[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8087910C, &lit_4814);

/* 8087667C-80876BA8 003F9C 052C+00 1/1 0/0 0/0 .text
 * daMP_THPGXYuv2RgbSetup__FPC16_GXRenderModeObj                */
static void daMP_THPGXYuv2RgbSetup(_GXRenderModeObj const* param_0) {
    // NONMATCHING
}

/* 80876BA8-80876BD0 0044C8 0028+00 1/1 0/0 0/0 .text            GXSetTexCoordGen */
static void i_GXSetTexCoordGen() {
    // NONMATCHING
}

/* 80876BD0-80876DE4 0044F0 0214+00 1/1 0/0 0/0 .text daMP_THPGXYuv2RgbDraw__FPUcPUcPUcssssss */
static void daMP_THPGXYuv2RgbDraw(u8* param_0, u8* param_1, u8* param_2, s16 param_3,
                                      s16 param_4, s16 param_5, s16 param_6, s16 param_7,
                                      s16 param_8) {
    // NONMATCHING
}

/* 80876DE4-80876DE8 004704 0004+00 1/1 0/0 0/0 .text            GXEnd */
static void i_GXEnd() {
    /* empty function */
}

/* 80876DE8-80876DF8 004708 0010+00 1/1 0/0 0/0 .text            GXTexCoord2u16 */
static void i_GXTexCoord2u16() {
    // NONMATCHING
}

/* 80876DF8-80876E0C 004718 0014+00 1/1 0/0 0/0 .text            GXPosition3s16 */
static void i_GXPosition3s16() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879114-80879118 0000E0 0004+00 1/1 0/0 0/0 .rodata          @4894 */
SECTION_RODATA static f32 const lit_4894 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80879114, &lit_4894);

/* 80879434-80879534 000000 0100+00 1/1 0/0 0/0 .data            daMP_VolumeTable */
SECTION_DATA static u8 daMP_VolumeTable[256] = {
    0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x00, 0x12, 0x00, 0x20, 0x00, 0x32, 0x00, 0x49, 0x00, 0x63,
    0x00, 0x82, 0x00, 0xA4, 0x00, 0xCB, 0x00, 0xF5, 0x01, 0x24, 0x01, 0x57, 0x01, 0x8E, 0x01, 0xC9,
    0x02, 0x08, 0x02, 0x4B, 0x02, 0x92, 0x02, 0xDD, 0x03, 0x2C, 0x03, 0x7F, 0x03, 0xD7, 0x04, 0x32,
    0x04, 0x92, 0x04, 0xF5, 0x05, 0x5D, 0x05, 0xC9, 0x06, 0x38, 0x06, 0xAC, 0x07, 0x24, 0x07, 0xA0,
    0x08, 0x20, 0x08, 0xA4, 0x09, 0x2C, 0x09, 0xB8, 0x0A, 0x48, 0x0A, 0xDD, 0x0B, 0x75, 0x0C, 0x12,
    0x0C, 0xB2, 0x0D, 0x57, 0x0D, 0xFF, 0x0E, 0xAC, 0x0F, 0x5D, 0x10, 0x12, 0x10, 0xCA, 0x11, 0x87,
    0x12, 0x48, 0x13, 0x0D, 0x13, 0xD7, 0x14, 0xA4, 0x15, 0x75, 0x16, 0x4A, 0x17, 0x24, 0x18, 0x01,
    0x18, 0xE3, 0x19, 0xC8, 0x1A, 0xB2, 0x1B, 0xA0, 0x1C, 0x91, 0x1D, 0x87, 0x1E, 0x81, 0x1F, 0x7F,
    0x20, 0x81, 0x21, 0x87, 0x22, 0x91, 0x23, 0x9F, 0x24, 0xB2, 0x25, 0xC8, 0x26, 0xE2, 0x28, 0x01,
    0x29, 0x23, 0x2A, 0x4A, 0x2B, 0x75, 0x2C, 0xA3, 0x2D, 0xD6, 0x2F, 0x0D, 0x30, 0x48, 0x31, 0x87,
    0x32, 0xCA, 0x34, 0x11, 0x35, 0x5C, 0x36, 0xAB, 0x37, 0xFF, 0x39, 0x56, 0x3A, 0xB1, 0x3C, 0x11,
    0x3D, 0x74, 0x3E, 0xDC, 0x40, 0x48, 0x41, 0xB7, 0x43, 0x2B, 0x44, 0xA3, 0x46, 0x1F, 0x47, 0x9F,
    0x49, 0x23, 0x4A, 0xAB, 0x4C, 0x37, 0x4D, 0xC7, 0x4F, 0x5C, 0x50, 0xF4, 0x52, 0x90, 0x54, 0x31,
    0x55, 0xD6, 0x57, 0x7E, 0x59, 0x2B, 0x5A, 0xDC, 0x5C, 0x90, 0x5E, 0x49, 0x60, 0x06, 0x61, 0xC7,
    0x63, 0x8C, 0x65, 0x55, 0x67, 0x22, 0x68, 0xF4, 0x6A, 0xC9, 0x6C, 0xA2, 0x6E, 0x80, 0x70, 0x61,
    0x72, 0x47, 0x74, 0x30, 0x76, 0x1E, 0x78, 0x10, 0x7A, 0x06, 0x7C, 0x00, 0x7D, 0xFE, 0x80, 0x00,
};

/* 80876E0C-80877074 00472C 0268+00 1/1 0/0 0/0 .text            daMP_MixAudio__FPsPsUl */
static void daMP_MixAudio(s16* param_0, s16* param_1, u32 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80944870-8094487C 0CB2D0 000C+00 0/0 0/0 0/0 .bss             daMP_FreeAudioBufferMessage */
#pragma push
#pragma force_active on
static u8 daMP_FreeAudioBufferMessage[12];
#pragma pop

/* 8094487C-80944888 0CB2DC 000C+00 0/0 0/0 0/0 .bss             daMP_DecodedAudioBufferMessage */
#pragma push
#pragma force_active on
static u8 daMP_DecodedAudioBufferMessage[12];
#pragma pop

/* 80944888-809448A0 0CB2E8 0004+14 3/3 0/0 0/0 .bss             daMP_Initialized */
static u8 daMP_Initialized[4 + 20 /* padding */];

/* 809448A0-809448E0 0CB300 0040+00 2/2 0/0 0/0 .bss             daMP_WorkBuffer */
static u8 daMP_WorkBuffer[64] ALIGN_DECL(32);

/* 809448E0-80944900 0CB340 0020+00 3/3 0/0 0/0 .bss             daMP_PrepareReadyQueue */
static u8 daMP_PrepareReadyQueue[32];

/* 80944900-80944920 0CB360 0020+00 2/2 0/0 0/0 .bss             daMP_UsedTextureSetQueue */
static u8 daMP_UsedTextureSetQueue[32];

/* 80944920-80944924 0CB380 0004+00 1/1 0/0 0/0 .bss             daMP_PrepareReadyMessage */
static u8 daMP_PrepareReadyMessage[4];

/* 80944924-80944930 0CB384 000C+00 0/0 0/0 0/0 .bss             daMP_UsedTextureSetMessage */
#pragma push
#pragma force_active on
static u8 daMP_UsedTextureSetMessage[12];
#pragma pop

/* 80944930-80944934 0CB390 0004+00 3/3 0/0 0/0 .bss             daMP_OldVIPostCallback */
static u8 daMP_OldVIPostCallback[4];

/* 80944934-80944938 0CB394 0004+00 1/1 0/0 0/0 .bss             daMP_SoundBufferIndex */
static u8 daMP_SoundBufferIndex[4];

/* 80944938-8094493C 0CB398 0004+00 0/0 0/0 0/0 .bss             daMP_OldAIDCallback */
#pragma push
#pragma force_active on
static u8 daMP_OldAIDCallback[4];
#pragma pop

/* 8094493C-80944940 0CB39C 0004+00 0/0 0/0 0/0 .bss             daMP_LastAudioBuffer */
#pragma push
#pragma force_active on
static u8 daMP_LastAudioBuffer[4];
#pragma pop

/* 80944940-80944944 0CB3A0 0004+00 0/0 0/0 0/0 .bss             daMP_CurAudioBuffer */
#pragma push
#pragma force_active on
static u8 daMP_CurAudioBuffer[4];
#pragma pop

/* 80944944-80944960 0CB3A4 0004+18 0/0 0/0 0/0 .bss             daMP_AudioSystem */
#pragma push
#pragma force_active on
static u8 daMP_AudioSystem[4 + 24 /* padding */];
#pragma pop

/* 80944960-80945AE0 0CB3C0 1180+00 1/1 0/0 0/0 .bss             daMP_SoundBuffer */
static u8 daMP_SoundBuffer[4480] ALIGN_DECL(32);

/* 80877074-8087712C 004994 00B8+00 1/1 0/0 0/0 .text            daMP_audioCallbackWithMSound__Fl */
static void daMP_audioCallbackWithMSound(s32 param_0) {
    // NONMATCHING
}

/* 8087712C-80877158 004A4C 002C+00 1/1 0/0 0/0 .text            daMP_audioInitWithMSound__Fv */
static void daMP_audioInitWithMSound() {
    // NONMATCHING
}

/* 80877158-80877180 004A78 0028+00 2/2 0/0 0/0 .text            daMP_audioQuitWithMSound__Fv */
static void daMP_audioQuitWithMSound() {
    // NONMATCHING
}

/* 80877180-808771B0 004AA0 0030+00 1/1 0/0 0/0 .text            daMP_PushUsedTextureSet__FPv */
static void daMP_PushUsedTextureSet(void* param_0) {
    // NONMATCHING
}

/* 808771B0-808771F4 004AD0 0044+00 2/2 0/0 0/0 .text            daMP_PopUsedTextureSet__Fv */
static void daMP_PopUsedTextureSet() {
    // NONMATCHING
}

/* 808771F4-808772CC 004B14 00D8+00 1/1 0/0 0/0 .text            daMP_THPPlayerInit__Fl */
static void daMP_THPPlayerInit(s32 param_0) {
    // NONMATCHING
}

/* 808772CC-8087730C 004BEC 0040+00 1/1 0/0 0/0 .text            daMP_THPPlayerQuit__Fv */
static void daMP_THPPlayerQuit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879118-8087911C 0000E4 0004+00 1/2 0/0 0/0 .rodata          @4983 */
SECTION_RODATA static f32 const lit_4983 = 127.0f;
COMPILER_STRIP_GATE(0x80879118, &lit_4983);

/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8087917A =
    "You must call daMP_THPPlayerInit before you call"
    " this function\n";
SECTION_DEAD static char const* const stringBase_808791BA =
    "Can't open %s. Because thp file have already ope"
    "ned.\n";
SECTION_DEAD static char const* const stringBase_808791F0 = "Can't open %s.\n";
SECTION_DEAD static char const* const stringBase_80879200 =
    "Fail to read the header from THP file.\n";
SECTION_DEAD static char const* const stringBase_80879228 = "THP";
SECTION_DEAD static char const* const stringBase_8087922C = "This file is not THP file.\n";
SECTION_DEAD static char const* const stringBase_80879248 = "invalid version.\n";
SECTION_DEAD static char const* const stringBase_8087925A =
    "Fail to read the frame component infomation from"
    " THP file.\n";
SECTION_DEAD static char const* const stringBase_80879296 =
    "Fail to read the video infomation from THP file."
    "\n";
SECTION_DEAD static char const* const stringBase_808792C8 = "Unknow frame components.\n";
#pragma pop

/* 8087730C-808776EC 004C2C 03E0+00 1/1 0/0 0/0 .text            daMP_THPPlayerOpen__FPCci */
static void daMP_THPPlayerOpen(char const* param_0, int param_1) {
    // NONMATCHING
}

/* 808776EC-80877740 00500C 0054+00 2/2 0/0 0/0 .text            daMP_THPPlayerClose__Fv */
static void daMP_THPPlayerClose() {
    // NONMATCHING
}

/* 80877740-808777F0 005060 00B0+00 1/1 0/0 0/0 .text            daMP_THPPlayerCalcNeedMemory__Fv */
static void daMP_THPPlayerCalcNeedMemory() {
    // NONMATCHING
}

/* 808777F0-80877A08 005110 0218+00 1/1 0/0 0/0 .text            daMP_THPPlayerSetBuffer__FPUc */
static void daMP_THPPlayerSetBuffer(u8* param_0) {
    // NONMATCHING
}

/* 80877A08-80877ADC 005328 00D4+00 1/1 0/0 0/0 .text            daMP_InitAllMessageQueue__Fv */
static void daMP_InitAllMessageQueue() {
    // NONMATCHING
}

/* 80877ADC-80877B48 0053FC 006C+00 1/1 0/0 0/0 .text            daMP_ProperTimingForStart__Fv */
static void daMP_ProperTimingForStart() {
    // NONMATCHING
}

/* 80877B48-80877C8C 005468 0144+00 1/1 0/0 0/0 .text daMP_ProperTimingForGettingNextFrame__Fv */
static void daMP_ProperTimingForGettingNextFrame() {
    // NONMATCHING
}

/* 80877C8C-80877F48 0055AC 02BC+00 1/1 0/0 0/0 .text            daMP_PlayControl__FUl */
static void daMP_PlayControl(u32 param_0) {
    // NONMATCHING
}

/* 80877F48-80877F88 005868 0040+00 1/1 0/0 0/0 .text            daMP_WaitUntilPrepare__Fv */
static void daMP_WaitUntilPrepare() {
    // NONMATCHING
}

/* 80877F88-80877FB8 0058A8 0030+00 2/2 0/0 0/0 .text            daMP_PrepareReady__Fi */
static void daMP_PrepareReady(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808792E2 =
    "This thp file doesn't have the offset data\n";
SECTION_DEAD static char const* const stringBase_8087930E =
    "Fail to read the offset data from THP file.\n";
SECTION_DEAD static char const* const stringBase_8087933B =
    "Specified frame number is over total frame numbe"
    "r\n";
SECTION_DEAD static char const* const stringBase_8087936E =
    "Specified audio track number is invalid\n";
SECTION_DEAD static char const* const stringBase_80879397 =
    "Fail to read all movie data from THP file\n";
#pragma pop

/* 80877FB8-808782A0 0058D8 02E8+00 1/1 0/0 0/0 .text            daMP_THPPlayerPrepare__Flll */
static void daMP_THPPlayerPrepare(s32 param_0, s32 param_1, s32 param_2) {
    // NONMATCHING
}

/* 808782A0-808782E4 005BC0 0044+00 1/1 0/0 0/0 .text            daMP_THPPlayerDrawDone__Fv */
static void daMP_THPPlayerDrawDone() {
    // NONMATCHING
}

/* 808782E4-80878344 005C04 0060+00 1/1 0/0 0/0 .text            daMP_THPPlayerPlay__Fv */
static void daMP_THPPlayerPlay() {
    // NONMATCHING
}

/* 80878344-808783FC 005C64 00B8+00 3/3 0/0 0/0 .text            daMP_THPPlayerStop__Fv */
static void daMP_THPPlayerStop() {
    // NONMATCHING
}

/* 808783FC-80878438 005D1C 003C+00 1/1 0/0 0/0 .text            daMP_THPPlayerPause__Fv */
static void daMP_THPPlayerPause() {
    // NONMATCHING
}

/* 80878438-80878534 005D58 00FC+00 1/1 0/0 0/0 .text
 * daMP_THPPlayerDrawCurrentFrame__FPC16_GXRenderModeObjUlUlUlUl */
static void daMP_THPPlayerDrawCurrentFrame(_GXRenderModeObj const* param_0, u32 param_1,
                                               u32 param_2, u32 param_3, u32 param_4) {
    // NONMATCHING
}

/* 80878534-80878558 005E54 0024+00 1/1 0/0 0/0 .text            fadeIn__13mDoGph_gInf_cFf */
// void mDoGph_gInf_c::fadeIn(f32 param_0) {
extern "C" void fadeIn__13mDoGph_gInf_cFf() {
    // NONMATCHING
}

/* 80878558-80878568 005E78 0010+00 1/1 0/0 0/0 .text            isFade__13mDoGph_gInf_cFv */
// void mDoGph_gInf_c::isFade() {
extern "C" void isFade__13mDoGph_gInf_cFv() {
    // NONMATCHING
}

/* 80878568-808785B0 005E88 0048+00 1/1 0/0 0/0 .text daMP_THPPlayerGetVideoInfo__FP12THPVideoInfo
 */
static void daMP_THPPlayerGetVideoInfo(THPVideoInfo* param_0) {
    // NONMATCHING
}

/* 808785B0-808785F8 005ED0 0048+00 1/1 0/0 0/0 .text daMP_THPPlayerGetAudioInfo__FP12THPAudioInfo
 */
static void daMP_THPPlayerGetAudioInfo(THPAudioInfo* param_0) {
    // NONMATCHING
}

/* 808785F8-8087861C 005F18 0024+00 2/2 0/0 0/0 .text            daMP_THPPlayerGetTotalFrame__Fv */
static void daMP_THPPlayerGetTotalFrame() {
    // NONMATCHING
}

/* 8087861C-8087862C 005F3C 0010+00 2/2 0/0 0/0 .text            daMP_THPPlayerGetState__Fv */
static void daMP_THPPlayerGetState() {
    // NONMATCHING
}

/* 8087862C-80878758 005F4C 012C+00 1/1 0/0 0/0 .text            daMP_THPPlayerSetVolume__Fll */
static void daMP_THPPlayerSetVolume(s32 param_0, s32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808793C2 = "Fail to open the thp file\n";
SECTION_DEAD static char const* const stringBase_808793DD = "Can't allocate the memory";
SECTION_DEAD static char const* const stringBase_808793F7 = "Fail to prepare\n";
#pragma pop

/* 80878758-808788BC 006078 0164+00 1/1 0/0 0/0 .text            daMP_ActivePlayer_Init__FPCc */
static void daMP_ActivePlayer_Init(char const* param_0) {
    // NONMATCHING
}

/* 808788BC-808788C4 0061DC 0008+00 2/2 0/0 0/0 .text            getRenderMode__8JUTVideoCFv */
// void JUTVideo::getRenderMode() const {
extern "C" void getRenderMode__8JUTVideoCFv() {
    // NONMATCHING
}

/* 808788C4-808788D4 0061E4 0010+00 2/2 0/0 0/0 .text            getManager__8JUTVideoFv */
// void JUTVideo::getManager() {
extern "C" void getManager__8JUTVideoFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80945AE0-80945AEC 0CC540 000C+00 1/1 0/0 0/0 .bss             daMP_videoInfo */
static u8 daMP_videoInfo[12];

/* 80945AEC-80945AFC 0CC54C 0010+00 0/0 0/0 0/0 .bss             daMP_audioInfo */
#pragma push
#pragma force_active on
static u8 daMP_audioInfo[16];
#pragma pop

/* 80945AFC-80945B00 0CC55C 0004+00 1/1 0/0 0/0 .bss             daMP_DrawPosX */
static u8 daMP_DrawPosX[4];

/* 80945B00-80945B04 0CC560 0004+00 1/1 0/0 0/0 .bss             daMP_DrawPosY */
static u8 daMP_DrawPosY[4];

/* 80945B04-80945B08 0CC564 0004+00 2/2 0/0 0/0 .bss             daMP_buffer */
static u8 daMP_buffer[4];

/* 808788D4-80878914 0061F4 0040+00 1/1 0/0 0/0 .text            daMP_ActivePlayer_Finish__Fv */
static void daMP_ActivePlayer_Finish() {
    // NONMATCHING
}

/* 80878914-80878938 006234 0024+00 2/2 0/0 0/0 .text            JKRFree__FPv */
extern "C" void JKRFree__FPv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80879408 = "Error happen";
#pragma pop

/* 80878938-80878994 006258 005C+00 1/1 0/0 0/0 .text            daMP_ActivePlayer_Main__Fv */
static void daMP_ActivePlayer_Main() {
    // NONMATCHING
}

/* 80878994-80878A34 0062B4 00A0+00 1/1 0/0 0/0 .text            daMP_ActivePlayer_Draw__Fv */
static void daMP_ActivePlayer_Draw() {
    // NONMATCHING
}

/* 80878A34-80878A64 006354 0030+00 1/1 0/0 0/0 .text            dComIfGp_event_reset__Fv */
static void dComIfGp_event_reset() {
    // NONMATCHING
}

/* 80878A64-80878A6C 006384 0008+00 1/1 0/0 0/0 .text            getEvent__14dComIfG_play_cFv */
// void dComIfG_play_c::getEvent() {
extern "C" void getEvent__14dComIfG_play_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80945B08-80945B0C 0CC568 0004+00 5/5 0/0 0/0 .bss             daMP_Fail_alloc */
static u8 daMP_Fail_alloc[4];

/* 80878A6C-80878B38 00638C 00CC+00 1/1 0/0 0/0 .text            daMP_Get_MovieRestFrame__Fv */
static void daMP_Get_MovieRestFrame() {
    // NONMATCHING
}

/* 80878B38-80878BB8 006458 0080+00 1/1 0/0 0/0 .text            daMP_Set_PercentMovieVolume__Ff */
static void daMP_Set_PercentMovieVolume(f32 param_0) {
    // NONMATCHING
}

/* 80878BB8-80878BDC 0064D8 0024+00 1/1 0/0 0/0 .text            daMP_c_Get_arg_demoNo__6daMP_cFv */
void daMP_c::daMP_c_Get_arg_demoNo() {
    // NONMATCHING
}

/* 80878BDC-80878BFC 0064FC 0020+00 2/2 0/0 0/0 .text            fopAcM_GetParam__FPCv */
static void fopAcM_GetParam(void const* param_0) {
    // NONMATCHING
}

/* 80878BFC-80878C04 00651C 0008+00 1/1 0/0 0/0 .text            fpcM_GetParam__FPCv */
static void fpcM_GetParam(void const* param_0) {
    // NONMATCHING
}

/* 80878C04-80878C28 006524 0024+00 1/1 0/0 0/0 .text            daMP_c_Get_arg_movieNo__6daMP_cFv
 */
void daMP_c::daMP_c_Get_arg_movieNo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80879415 = "/Movie/demo_movie%02d_%02d.thp";
#pragma pop

/* 80878C28-80878D10 006548 00E8+00 1/1 0/0 0/0 .text            daMP_c_Init__6daMP_cFv */
void daMP_c::daMP_c_Init() {
    // NONMATCHING
}

/* 80878D10-80878D44 006630 0034+00 1/1 0/0 0/0 .text            setFrameRate__13mDoGph_gInf_cFUs */
// void mDoGph_gInf_c::setFrameRate(u16 param_0) {
extern "C" void setFrameRate__13mDoGph_gInf_cFUs() {
    // NONMATCHING
}

/* 80878D44-80878D54 006664 0010+00 1/1 0/0 0/0 .text            setFrameRate__10JFWDisplayFUs */
// void JFWDisplay::setFrameRate(u16 param_0) {
extern "C" void setFrameRate__10JFWDisplayFUs() {
    // NONMATCHING
}

/* 80878D54-80878D64 006674 0010+00 1/1 0/0 0/0 .text            getManager__10JFWDisplayFv */
// void JFWDisplay::getManager() {
extern "C" void getManager__10JFWDisplayFv() {
    // NONMATCHING
}

/* 80878D64-80878D94 006684 0030+00 1/1 0/0 0/0 .text            daMP_c_Finish__6daMP_cFv */
void daMP_c::daMP_c_Finish() {
    // NONMATCHING
}

/* 80878D94-80878DB8 0066B4 0024+00 1/1 0/0 0/0 .text            daMP_c_Main__6daMP_cFv */
void daMP_c::daMP_c_Main() {
    // NONMATCHING
}

/* 80878DB8-80878DD8 0066D8 0020+00 1/0 0/0 0/0 .text            draw__16daMP_Dlst_base_cFv */
void daMP_Dlst_base_c::draw() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80945B0C-80945B10 0CC56C 0004+00 2/2 0/0 0/0 .bss             daMP_c_Dlst_base */
static u8 daMP_c_Dlst_base[4];

/* 80878DD8-80878E04 0066F8 002C+00 1/1 0/0 0/0 .text            daMP_c_Draw__6daMP_cFv */
void daMP_c::daMP_c_Draw() {
    // NONMATCHING
}

/* 80878E04-80878E34 006724 0030+00 1/1 0/0 0/0 .text            dComIfGd_set2DOpa__FP12dDlst_base_c
 */
// static void dComIfGd_set2DOpa(dDlst_base_c* param_0) {
extern "C" static asm void dComIfGd_set2DOpa__FP12dDlst_base_c() {
    // NONMATCHING
}

/* 80878E34-80878E60 006754 002C+00 1/1 0/0 0/0 .text set2DOpa__12dDlst_list_cFP12dDlst_base_c */
// void dDlst_list_c::set2DOpa(dDlst_base_c* param_0) {
extern "C" void set2DOpa__12dDlst_list_cFP12dDlst_base_c() {
    // NONMATCHING
}

/* 80878E60-80878EC4 006780 0064+00 1/0 0/0 0/0 .text daMP_c_Callback_Init__6daMP_cFP10fopAc_ac_c
 */
void daMP_c::daMP_c_Callback_Init(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80878EC4-80878ED4 0067E4 0010+00 1/1 0/0 0/0 .text fopAcM_OnCondition__FP10fopAc_ac_cUl */
static void fopAcM_OnCondition(fopAc_ac_c* param_0, u32 param_1) {
    // NONMATCHING
}

/* 80878ED4-80878F04 0067F4 0030+00 1/1 0/0 0/0 .text            __ct__6daMP_cFv */
daMP_c::daMP_c() {
    // NONMATCHING
}

/* 80878F04-80878F0C 006824 0008+00 1/1 0/0 0/0 .text            __nw__FUlPv */
extern "C" static void* __nw__FUlPv() {
    // NONMATCHING
}

/* 80878F0C-80878F18 00682C 000C+00 1/1 0/0 0/0 .text fopAcM_CheckCondition__FP10fopAc_ac_cUl */
static void fopAcM_CheckCondition(fopAc_ac_c* param_0, u32 param_1) {
    // NONMATCHING
}

/* 80878F18-80878F38 006838 0020+00 1/0 0/0 0/0 .text daMP_c_Callback_Finish__6daMP_cFP6daMP_c */
void daMP_c::daMP_c_Callback_Finish(daMP_c* param_0) {
    // NONMATCHING
}

/* 80878F38-80878F70 006858 0038+00 1/0 0/0 0/0 .text daMP_c_Callback_Main__6daMP_cFP6daMP_c */
void daMP_c::daMP_c_Callback_Main(daMP_c* param_0) {
    // NONMATCHING
}

/* 80878F70-80878FA8 006890 0038+00 1/0 0/0 0/0 .text daMP_c_Callback_Draw__6daMP_cFP6daMP_c */
void daMP_c::daMP_c_Callback_Draw(daMP_c* param_0) {
    // NONMATCHING
}

/* 80878FA8-80878FB0 0068C8 0008+00 1/0 0/0 0/0 .text            daMP_Callback_Dummy__FP6daMP_c */
static bool daMP_Callback_Dummy(daMP_c* param_0) {
    return true;
}

/* 80878FB0-80878FD8 0068D0 0028+00 0/0 1/0 0/0 .text            __sinit_d_a_movie_player_cpp */
void __sinit_d_a_movie_player_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80878FB0, __sinit_d_a_movie_player_cpp);
#pragma pop

/* ############################################################################################## */
/* 80879534-80879554 -00001 0020+00 1/0 0/0 0/0 .data            daMP_METHODS */
static actor_method_class daMP_METHODS = {
    (process_method_func)daMP_c_Callback_Init__6daMP_cFP10fopAc_ac_c,
    (process_method_func)daMP_c_Callback_Finish__6daMP_cFP6daMP_c,
    (process_method_func)daMP_c_Callback_Main__6daMP_cFP6daMP_c,
    (process_method_func)daMP_Callback_Dummy__FP6daMP_c,
    (process_method_func)daMP_c_Callback_Draw__6daMP_cFP6daMP_c,
};

/* 80879554-80879584 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_MOVIE_PLAYER */
extern actor_process_profile_definition g_profile_MOVIE_PLAYER = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_MOVIE_PLAYER,      // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daMP_c),         // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  9,                      // mPriority
  &daMP_METHODS,          // sub_method
  0x0006C000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80879584-80879590 000150 000C+00 1/1 0/0 0/0 .data            __vt__16daMP_Dlst_base_c */
SECTION_DATA extern void* __vt__16daMP_Dlst_base_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__16daMP_Dlst_base_cFv,
};

/* 80878FD8-80879014 0068F8 003C+00 1/1 0/0 0/0 .text            __ct__16daMP_Dlst_base_cFv */
daMP_Dlst_base_c::daMP_Dlst_base_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80879590-8087959C 00015C 000C+00 1/1 0/0 0/0 .data            __vt__12dDlst_base_c */
SECTION_DATA extern void* __vt__12dDlst_base_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__12dDlst_base_cFv,
};

/* 80879014-80879024 006934 0010+00 1/1 0/0 0/0 .text            __ct__12dDlst_base_cFv */
// dDlst_base_c::dDlst_base_c() {
extern "C" void __ct__12dDlst_base_cFv() {
    // NONMATCHING
}

/* 80879024-80879028 006944 0004+00 1/0 0/0 0/0 .text            draw__12dDlst_base_cFv */
// void dDlst_base_c::draw() {
extern "C" void draw__12dDlst_base_cFv() {
    /* empty function */
}

/* ############################################################################################## */
/* 80945B10-80945B14 0CC570 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80945B10[4];
#pragma pop

/* 80945B14-80945B18 0CC574 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80945B14[4];
#pragma pop

/* 80945B18-80945B1C 0CC578 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80945B18[4];
#pragma pop

/* 80945B1C-80945B20 0CC57C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80945B1C[4];
#pragma pop

/* 80945B20-80945B24 0CC580 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B20[4];
#pragma pop

/* 80945B24-80945B28 0CC584 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B24[4];
#pragma pop

/* 80945B28-80945B2C 0CC588 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80945B28[4];
#pragma pop

/* 80945B2C-80945B30 0CC58C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80945B2C[4];
#pragma pop

/* 80945B30-80945B34 0CC590 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80945B30[4];
#pragma pop

/* 80945B34-80945B38 0CC594 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80945B34[4];
#pragma pop

/* 80945B38-80945B3C 0CC598 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80945B38[4];
#pragma pop

/* 80945B3C-80945B40 0CC59C 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80945B3C[4];
#pragma pop

/* 80945B40-80945B44 0CC5A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80945B40[4];
#pragma pop

/* 80945B44-80945B48 0CC5A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B44[4];
#pragma pop

/* 80945B48-80945B4C 0CC5A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80945B48[4];
#pragma pop

/* 80945B4C-80945B50 0CC5AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80945B4C[4];
#pragma pop

/* 80945B50-80945B54 0CC5B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80945B50[4];
#pragma pop

/* 80945B54-80945B58 0CC5B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80945B54[4];
#pragma pop

/* 80945B58-80945B5C 0CC5B8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80945B58[4];
#pragma pop

/* 80945B5C-80945B60 0CC5BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80945B5C[4];
#pragma pop

/* 80945B60-80945B64 0CC5C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80945B60[4];
#pragma pop

/* 80945B64-80945B68 0CC5C4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B64[4];
#pragma pop

/* 80945B68-80945B6C 0CC5C8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B68[4];
#pragma pop

/* 80945B6C-80945B70 0CC5CC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80945B6C[4];
#pragma pop

/* 80945B70-80945B74 0CC5D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80945B70[4];
#pragma pop

/* 8087911C-8087911C 0000E8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */