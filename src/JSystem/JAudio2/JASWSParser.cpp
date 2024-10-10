//
// Generated By: dol2asm
// Translation Unit: JASWSParser
//

#include "JSystem/JAudio2/JASWSParser.h"
#include "JSystem/JAudio2/JASBasicWaveBank.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void getGroupCount__11JASWSParserFPCv();
extern "C" void createWaveBank__11JASWSParserFPCvP7JKRHeap();
extern "C" void createBasicWaveBank__11JASWSParserFPCvP7JKRHeap();
extern "C" void createSimpleWaveBank__11JASWSParserFPCvP7JKRHeap();
extern "C" void func_80299490(void* _this, void const*, u32);
extern "C" void func_802994A8(void* _this, void const*, u32);
extern "C" void func_802994C0(void* _this, void const*, u32);
extern "C" void func_802994D8(void* _this, void const*, u32);
extern "C" void func_802994F0(void* _this, void const*, u32);
extern "C" void func_80299508(void* _this, void const*, u32);
extern "C" void func_80299520(void* _this, void const*, u32);
extern "C" u8 sUsedHeapSize__11JASWSParser[4 + 4 /* padding */];

//
// External References:
//

extern "C" void __ct__16JASBasicWaveBankFv();
extern "C" void getWaveGroup__16JASBasicWaveBankFUl();
extern "C" void setGroupCount__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void
setWaveInfo__16JASBasicWaveBankFPQ216JASBasicWaveBank10TWaveGroupiUsRC11JASWaveInfo();
extern "C" void setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap();
extern "C" void __ct__17JASSimpleWaveBankFv();
extern "C" void setWaveTableSize__17JASSimpleWaveBankFUlP7JKRHeap();
extern "C" void setWaveInfo__17JASSimpleWaveBankFUlRC11JASWaveInfo();
extern "C" void setFileName__10JASWaveArcFPCc();
extern "C" void getFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" u32 one__11JASWaveInfo[1 + 1 /* padding */];

//
// Declarations:
//

/* 80298FB0-80298FD8 2938F0 0028+00 1/1 0/0 0/0 .text            getGroupCount__11JASWSParserFPCv */
u32 JASWSParser::getGroupCount(void const* stream) {
	THeader* header = (THeader*)stream;
	return ((TOffset<TCtrlGroup>*)&header->mCtrlGroupOffset)->ptr(header)->mCtrlGroupCount;
}


/* 80298FD8-80299034 293918 005C+00 0/0 1/1 0/0 .text createWaveBank__11JASWSParserFPCvP7JKRHeap
 */
JASWaveBank* JASWSParser::createWaveBank(void const* param_0, JKRHeap* param_1) {
    if (getGroupCount(param_0) == 1) {
        return (JASWaveBank*)createSimpleWaveBank(param_0, param_1);
    } else {
        return (JASWaveBank*) createBasicWaveBank(param_0, param_1);
    }
}

/* ############################################################################################## */
/* 80451280-80451288 000780 0004+04 2/2 0/0 0/0 .sbss            sUsedHeapSize__11JASWSParser */
u8 JASWSParser::sUsedHeapSize[4 + 4 /* padding */];

/* 80299034-80299264 293974 0230+00 1/1 0/0 0/0 .text
 * createBasicWaveBank__11JASWSParserFPCvP7JKRHeap              */
JASBasicWaveBank* JASWSParser::createBasicWaveBank(void const* param_0, JKRHeap* param_1) {
    // NONMATCHING
}

/* 80299264-80299490 293BA4 022C+00 1/1 0/0 0/0 .text
 * createSimpleWaveBank__11JASWSParserFPCvP7JKRHeap             */
JASSimpleWaveBank* JASWSParser::createSimpleWaveBank(void const* param_0, JKRHeap* param_1) {
    // NONMATCHING
}

/* 80299490-802994A8 293DD0 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser9TCtrlWave>__FPCvUl     */
extern "C" void func_80299490(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 802994A8-802994C0 293DE8 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser5TWave>__FPCvUl         */
extern "C" void func_802994A8(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 802994C0-802994D8 293E00 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser12TWaveArchive>__FPCvUl */
extern "C" void func_802994C0(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 802994D8-802994F0 293E18 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser16TWaveArchiveBank>__FPCvUl */
extern "C" void func_802994D8(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 802994F0-80299508 293E30 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser5TCtrl>__FPCvUl         */
extern "C" void func_802994F0(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 80299508-80299520 293E48 0018+00 2/2 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlScene>__FPCvUl   */
extern "C" void func_80299508(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}

/* 80299520-80299538 293E60 0018+00 3/3 0/0 0/0 .text
 * JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlGroup>__FPCvUl   */
extern "C" void func_80299520(void* _this, void const* param_0, u32 param_1) {
    // NONMATCHING
}