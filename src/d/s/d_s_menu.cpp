//
// Generated By: dol2asm
// Translation Unit: d/s/d_s_menu
//

#include "d/s/d_s_menu.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern void* g_profile_MENU_SCENE[10];

//
// External References:
//

extern "C" extern void* g_fopScn_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcNd_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C3018-803C3040 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_MENU_SCENE */
SECTION_DATA extern void* g_profile_MENU_SCENE[10] = {
    (void*)NULL, (void*)0x0001FFFD, (void*)0x000A0000, (void*)&g_fpcNd_Method,
    (void*)NULL, (void*)NULL,       (void*)NULL,       (void*)&g_fopScn_Method,
    (void*)NULL, (void*)NULL,
};
