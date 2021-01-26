#ifndef JSYSTEM_JGADGET_BINARY_H_
#define JSYSTEM_JGADGET_BINARY_H_

#include "dolphin/types.h"

namespace JGadget {
namespace binary {

struct TEBit {
    u32 value;
};

const void* parseVariableUInt_16_32_following(const void* pu16, u32* pu32First, u32* pu32Second,
                                              TEBit* tebit);

inline u32 align_roundUp(u32 arg0, u32 uAlign) {
    return (arg0 + uAlign - 1) & ~(uAlign - 1);
}

struct TParseData {
    TParseData(const void* pContent) : raw(pContent) {}

    const void* getRaw() const { return raw; }

    const void* raw;
};

template <int T>
struct TParseData_aligned : public TParseData {
    TParseData_aligned(const void* pContent) : TParseData(pContent) {}
};

// Base for header and/or block parsing
struct TParse_header_block {
    virtual ~TParse_header_block();

    virtual bool parseHeader_next(const void** ppData_inout, u32* puBlock_out, u32 arg2) = 0;
    virtual bool parseBlock_next(const void** ppData_inout, u32* puData_out, u32 arg2) = 0;

    bool parse_next(const void** ppData_inout, u32 a2);
};

}  // namespace binary
}  // namespace JGadget

#endif
