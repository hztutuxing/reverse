//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMAVPlayer, XMSoundChatPlayItem;

@interface XMSoundChatPlayManager : NSObject
{
    XMAVPlayer *_player;
    XMSoundChatPlayItem *_curItem;
}

+ (id)shareInstance;
@property(retain, nonatomic) XMSoundChatPlayItem *curItem; // @synthesize curItem=_curItem;
@property(retain, nonatomic) XMAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)playItem;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (void)distrory;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)playWithItem:(id)arg1;
- (void)playWithUrl:(id)arg1 source:(unsigned long long)arg2;

@end

