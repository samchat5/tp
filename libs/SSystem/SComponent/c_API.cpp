//
// Generated By: dol2asm
// Translation Unit: c_API
//

#include "SSystem/SComponent/c_API.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern void* g_cAPI_Interface[6];

//
// External References:
//

void mDoGph_BlankingON();
void mDoGph_BlankingOFF();
void mDoGph_BeforeOfDraw();
void mDoGph_AfterOfDraw();
void mDoGph_Painter();
void mDoGph_Create();

extern "C" void mDoGph_BlankingON__Fv();
extern "C" void mDoGph_BlankingOFF__Fv();
extern "C" void mDoGph_BeforeOfDraw__Fv();
extern "C" void mDoGph_AfterOfDraw__Fv();
extern "C" void mDoGph_Painter__Fv();
extern "C" void mDoGph_Create__Fv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C3528-803C3540 0018+00 s=0 e=3 z=0  None .data      g_cAPI_Interface */
SECTION_DATA void* g_cAPI_Interface[6] = {
    (void*)mDoGph_Create__Fv,  (void*)mDoGph_BeforeOfDraw__Fv, (void*)mDoGph_AfterOfDraw__Fv,
    (void*)mDoGph_Painter__Fv, (void*)mDoGph_BlankingON__Fv,   (void*)mDoGph_BlankingOFF__Fv,
};
