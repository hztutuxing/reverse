//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface YXAACEncoder : NSObject
{
    unsigned char aacBuffer[4096];
    unsigned int _aacBufferSize;
    struct OpaqueAudioConverter *_audioConverter;
    const struct AVFrame *_pPCMBuffer;
    char *_aacBufferPtr;
    NSData *_extraData;
    struct AudioStreamBasicDescription _mInputStremDesc;
    struct AudioStreamBasicDescription _mOutputStremDesc;
}

@property(retain, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property(nonatomic) unsigned int aacBufferSize; // @synthesize aacBufferSize=_aacBufferSize;
@property(nonatomic) char *aacBufferPtr; // @synthesize aacBufferPtr=_aacBufferPtr;
@property(nonatomic) const struct AVFrame *pPCMBuffer; // @synthesize pPCMBuffer=_pPCMBuffer;
@property(nonatomic) struct AudioStreamBasicDescription mOutputStremDesc; // @synthesize mOutputStremDesc=_mOutputStremDesc;
@property(nonatomic) struct AudioStreamBasicDescription mInputStremDesc; // @synthesize mInputStremDesc=_mInputStremDesc;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
- (void).cxx_destruct;
- (id)getExtraData;
- (int)getSampleIndexBySampleRate:(int)arg1;
- (id)adtsDataForPacketLength:(unsigned long long)arg1;
- (int)encodeBuffer:(const struct AVFrame *)arg1 outputBuffer:(struct AVPacket *)arg2;
- (unsigned long long)copyPCMSamplesIntoBuffer:(struct AudioBufferList *)arg1;
- (struct AudioClassDescription *)getAudioClassDescriptionWithType:(unsigned int)arg1 fromManufacturer:(unsigned int)arg2;
- (void)setupEncoderBySampleRate:(int)arg1 numOfChannel:(int)arg2;
- (void)dealloc;
- (id)init;

@end

