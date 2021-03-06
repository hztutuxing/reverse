//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFAVPlayerItem-Protocol.h"

@class NSArray, NSString, NSURL, WBVideoExperimentContextSnapshot, WBVideoItem, WBVideoPlayerItemPlaybackLog, WBVideoSceneQualityConfig;
@protocol WBVideoCastingDevice, WBVideoPlaybackResource, WBVideoPlayer, WBVideoPlayerItem;

@protocol WBVideoPlayerItem <WBFAVPlayerItem>
+ (id <WBVideoPlayer>)createPlayerWithPlayerItem:(id <WBVideoPlayerItem>)arg1;
+ (void)queryLocalCacheStatusWithURL:(NSURL *)arg1 playbackIdentifier:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
+ (id)playerItemWithVideoItem:(WBVideoItem *)arg1 options:(CDStruct_692c7470)arg2;
@property(readonly, nonatomic) _Bool playbackAboutComplete;
@property(readonly, nonatomic) long long playbackBitrate;
@property(readonly, nonatomic) NSString *playbackIdentifier;
@property(readonly, nonatomic) WBVideoExperimentContextSnapshot *experimentContextSnapshot;
@property(retain, nonatomic) WBVideoSceneQualityConfig *automaticMediaSelectionSceneConfig;
@property(readonly, nonatomic) WBVideoPlayerItemPlaybackLog *playbackLog;
@property(readonly, nonatomic) double readyTimestamp;
@property(readonly, nonatomic) double creationTimestamp;
@property(readonly, nonatomic) id <WBVideoCastingDevice> castingDevice;
@property(readonly, nonatomic) NSURL *playbackURL;
@property(readonly, nonatomic) NSURL *originalURL;
@property(readonly, nonatomic) unsigned long long contentAccessScopes;
@property(readonly, nonatomic) _Bool autoSelectedResource;
@property(readonly, nonatomic) NSArray *availablePlaybackResources;
@property(readonly, nonatomic) id <WBVideoPlaybackResource> playbackResource;
@property(readonly, nonatomic) WBVideoItem *videoItem;
- (void)didPerformUserSeek;
- (void)willPerformUserSeek;
- (void)didFinishPlaybackLogEvent;
- (void)willFinishPlaybackLogEvent;
- (void)stopResourceLoading;
@end

