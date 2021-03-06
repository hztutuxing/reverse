//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NvsObject.h"

@class NSString;

@interface NvsClip : NvsObject
{
}

- (_Bool)getLoopAudio;
- (void)setLoopAudio:(_Bool)arg1;
- (void)getVolumeGain:(float *)arg1 rightVolumeGain:(float *)arg2;
- (void)setVolumeGain:(float)arg1 rightVolumeGain:(float)arg2;
- (void)changeSpeed:(double)arg1 keepAudioPitch:(_Bool)arg2;
- (void)changeSpeed:(double)arg1;
- (double)getSpeed;
- (long long)changeTrimOutPoint:(long long)arg1 affectSibling:(_Bool)arg2;
- (long long)changeTrimInPoint:(long long)arg1 affectSibling:(_Bool)arg2;
@property(readonly) unsigned int fxCount;
@property(readonly) NSString *filePath;
@property(readonly) unsigned int index;
@property(readonly) int type;
@property(readonly) long long outPoint;
@property(readonly) long long inPoint;
@property(readonly) long long trimOut;
@property(readonly) long long trimIn;

@end

