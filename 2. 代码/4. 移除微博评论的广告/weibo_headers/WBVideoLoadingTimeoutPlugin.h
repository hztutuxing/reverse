//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

@class WBVideoLoadingTimeoutView;

@interface WBVideoLoadingTimeoutPlugin : WBVideoPluginBaseView
{
    double _loadingStartTime;
    _Bool _showPluginForLoadingTimeout;
    _Bool _alwaysShowBackButton;
    WBVideoLoadingTimeoutView *_loadingTimeoutView;
}

+ (unsigned long long)defaultPresentationStateVisibilityOptions;
+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
@property(retain, nonatomic) WBVideoLoadingTimeoutView *loadingTimeoutView; // @synthesize loadingTimeoutView=_loadingTimeoutView;
@property(nonatomic) _Bool alwaysShowBackButton; // @synthesize alwaysShowBackButton=_alwaysShowBackButton;
- (void).cxx_destruct;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (void)checkLoadingState;
- (void)_updateLoadingState:(_Bool)arg1;
- (void)resetLoadingState;
- (void)updateLoadingTimeoutStateWithPlaybackState:(long long)arg1;
- (void)updateLoadingTimeoutState;
- (void)updateLoadingTimeoutViewBackButton;

@end

