//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKViewElement.h"

#import "ZegoLivePlayerDelegate-Protocol.h"
#import "ZegoRoomDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, ZegoLiveRoomApi;

@interface WBClawLiveElement : KKViewElement <ZegoRoomDelegate, ZegoLivePlayerDelegate>
{
    _Bool _installing;
    _Bool _loaded;
    _Bool _reconnecting;
    ZegoLiveRoomApi *_liveRoomApi;
    NSArray *_streams;
    NSMutableDictionary *_playingStreams;
    int _viewMode;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)onVideoSizeChangedTo:(struct CGSize)arg1 ofStream:(id)arg2;
- (void)onPlayStateUpdate:(int)arg1 streamID:(id)arg2;
- (void)onStreamUpdated:(int)arg1 streams:(id)arg2 roomID:(id)arg3;
- (void)onTempBroken:(int)arg1 roomID:(id)arg2;
- (void)onReconnect:(int)arg1 roomID:(id)arg2;
- (void)onDisconnect:(int)arg1 roomID:(id)arg2;
- (void)onKickOut:(int)arg1 roomID:(id)arg2;
- (void)dealloc;
- (void)liveUninstall;
- (void)onLoginRoom:(id)arg1 errorCode:(int)arg2;
- (id)streamKey:(id)arg1;
- (_Bool)updatePlayer:(id)arg1;
- (id)playerKey;
- (void)onAppForeground;
- (void)onAppBackground;
- (void)liveInstall;
- (void)onLoadWithName:(id)arg1;
- (void)onError:(id)arg1 errorCode:(int)arg2;
- (void)onError:(id)arg1 errorCode:(int)arg2 name:(id)arg3;
- (void)setNeedsLiveInstall;
- (void)changedKey:(id)arg1;
- (void)setView:(id)arg1;
- (Class)viewClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

