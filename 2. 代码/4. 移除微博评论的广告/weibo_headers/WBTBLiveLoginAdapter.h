//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiveRoomLoginProtocol-Protocol.h"

@class NSString;

@interface WBTBLiveLoginAdapter : NSObject <LiveRoomLoginProtocol>
{
}

- (void)requestMtop:(id)arg1 data:(id)arg2 extraParams:(id)arg3;
- (id)currentSession;
- (void)cancelRequestMtop:(id)arg1;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)tbLiveLoginWithLoginOption:(long long)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)tbLiveLoginWithLoginOption:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
- (_Bool)isLoginForBaichuan;
- (_Bool)isValidLogin;
- (void)setNick:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)getSid;
- (id)getNick;
- (id)getUserId;
- (unsigned long long)getEnvironment;
- (void)setEnvironment:(unsigned long long)arg1;
- (id)timeStampFixedWithServer;
- (void)setDeviceID:(id)arg1;
- (void)setSecurityAppKey:(id)arg1;
- (void)setAppkey:(id)arg1;
- (id)getWapTTID;
- (id)getAppKey;
- (id)getDeviceId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

