//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveRoomMediaPlayerControlView;

@protocol LiveRoomMediaPlayerControlViewDelegate <NSObject>

@optional
- (void)playRateButtonDidClickedInControlView:(float)arg1;
- (void)controlViewDidTwiceTapped:(LiveRoomMediaPlayerControlView *)arg1;
- (void)controlViewDidTapped:(LiveRoomMediaPlayerControlView *)arg1;
- (void)progressSliderDidDragToTime:(double)arg1 inControlView:(LiveRoomMediaPlayerControlView *)arg2;
- (void)progressSliderBeginToDragInControlView:(LiveRoomMediaPlayerControlView *)arg1;
- (void)miniScreenButtonDidClickedInControlView:(LiveRoomMediaPlayerControlView *)arg1;
- (void)fullScreenButtonDidClickedInControlView:(LiveRoomMediaPlayerControlView *)arg1;
- (void)pauseButtonDidClickedInControlView:(LiveRoomMediaPlayerControlView *)arg1;
- (void)playButtonDidClickedInControlView:(LiveRoomMediaPlayerControlView *)arg1;
@end

