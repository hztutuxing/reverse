//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol WKAudioPlayerDelegate;

@protocol WKAudioPlayerProtocol <NSObject>
@property(nonatomic) __weak id <WKAudioPlayerDelegate> delegate;
- (void)setPlayRate:(double)arg1;
- (double)currentTime;
- (double)duration;
- (void)stop;
- (void)resumeAtTime:(double)arg1;
- (void)resume;
- (void)pause;
- (void)replay;
- (void)seekToTime:(double)arg1;
- (void)playAtTime:(double)arg1;
- (void)play;
@end

