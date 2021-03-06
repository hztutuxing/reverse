//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSDate, NSString, NSTimer;

@interface XMChatPlayer : NSObject <AVAudioPlayerDelegate>
{
    CDUnknownBlockType _playFinish;
    NSDate *_startDate;
    AVAudioPlayer *_player;
    NSTimer *_playerTimer;
    CDUnknownBlockType _onTimeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onTimeBlock; // @synthesize onTimeBlock=_onTimeBlock;
@property(retain, nonatomic) NSTimer *playerTimer; // @synthesize playerTimer=_playerTimer;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) CDUnknownBlockType playFinish; // @synthesize playFinish=_playFinish;
- (void).cxx_destruct;
- (void)onPlayerTimer;
- (void)stopPlayerTimer;
- (void)startPlayerTimer;
- (void)onFinish:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopCurrentPlaying;
- (void)playWavFileWithPath:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)playAMRFileWithPath:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

