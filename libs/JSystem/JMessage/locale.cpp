//
// Generated By: dol2asm
// Translation Unit: locale
//

#include "JSystem/JMessage/locale.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JMessage {
    struct locale {
        /* 802A9528 */ void parseCharacter_ShiftJIS(char const**);
        /* 802A958C */ void parseCharacter_UTF8(char const**);
    };
};

//
// Forward References:
//

extern "C" void parseCharacter_ShiftJIS__Q28JMessage6localeFPPCc();
extern "C" void parseCharacter_UTF8__Q28JMessage6localeFPPCc();

//
// External References:
//

//
// Declarations:
//

/* 802A9528-802A958C 2A3E68 0064+00 0/0 1/0 0/0 .text
 * parseCharacter_ShiftJIS__Q28JMessage6localeFPPCc             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::locale::parseCharacter_ShiftJIS(char const** param_0) {
    nofralloc
#include "asm/JSystem/JMessage/locale/parseCharacter_ShiftJIS__Q28JMessage6localeFPPCc.s"
}
#pragma pop

/* 802A958C-802A968C 2A3ECC 0100+00 0/0 1/0 0/0 .text parseCharacter_UTF8__Q28JMessage6localeFPPCc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::locale::parseCharacter_UTF8(char const** param_0) {
    nofralloc
#include "asm/JSystem/JMessage/locale/parseCharacter_UTF8__Q28JMessage6localeFPPCc.s"
}
#pragma pop
