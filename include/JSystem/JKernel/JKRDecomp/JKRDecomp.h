#ifndef __JKRDECOMP_H__
#define __JKRDECOMP_H__

#include "JSystem/JKernel/JKRThread/JKRThread.h"
#include "dolphin/types.h"

class JKRAMCommand;
class JKRDecompCommand {
public:
    typedef void (*AsyncCallback)(u32);

    JKRDecompCommand();
    ~JKRDecompCommand();

public:
    /* 0x00 */ u32 field_0x0;
    /* 0x04 */ u8* mSrcBuffer;
    /* 0x08 */ u8* mDstBuffer;
    /* 0x0C */ u32 mSrcLength;
    /* 0x10 */ u32 mDstLength;
    /* 0x14 */ AsyncCallback mCallback;
    /* 0x18 */ JKRDecompCommand* mThis;
    /* 0x1C */ OSMessageQueue* field_0x1c;
    /* 0x20 */ s32 field_0x20;
    /* 0x24 */ JKRAMCommand* mAMCommand;
    /* 0x28 */ OSMessageQueue mMessageQueue;
    /* 0x48 */ OSMessage mMessage;
};

#define JKRDECOMP_SYNC_BLOCKING 0
#define JKRDECOMP_SYNC_NON_BLOCKING 1

class JKRDecomp : public JKRThread {
private:
    JKRDecomp(long);
    virtual ~JKRDecomp();

    /* vt[03] */ virtual void* run(); /* override */

public:
    enum Compression {
        NONE = 0,
        YAY0 = 1,
        YAZ0 = 2,
        ASR = 3,

        __COMPRESSION_ENUM_FORCE_S32 = INT32_MAX,
        __COMPRESSION_ENUM_FORCE_SIGNED = -1,
    };

    static JKRDecomp* create(long);
    static JKRDecompCommand* prepareCommand(u8*, u8*, u32, u32, JKRDecompCommand::AsyncCallback);
    static void sendCommand(JKRDecompCommand*);
    static bool sync(JKRDecompCommand*, int);
    static JKRDecompCommand* orderAsync(u8*, u8*, u32, u32, JKRDecompCommand::AsyncCallback);
    static bool orderSync(u8*, u8*, u32, u32);
    static void decode(u8*, u8*, u32, u32);
    static void decodeSZP(u8*, u8*, u32, u32);
    static void decodeSZS(u8*, u8*, u32, u32);
    static Compression checkCompressed(u8*);
};

#endif
