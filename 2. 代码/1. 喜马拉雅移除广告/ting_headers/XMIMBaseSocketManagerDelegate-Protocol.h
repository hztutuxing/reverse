//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, NSString, XMIMBaseSocketManager, XMIMMessage;

@protocol XMIMBaseSocketManagerDelegate <NSObject>
- (void)imSocketManagerServerUnreachable;
- (_Bool)imSocketManager:(XMIMBaseSocketManager *)arg1 recvJoinRsp:(GPBMessage *)arg2;
- (NSString *)imJoinRspMsgNameOfSocketManager:(XMIMBaseSocketManager *)arg1;
- (GPBMessage *)imJoinReqMsgOfSocketManager:(XMIMBaseSocketManager *)arg1;
- (NSString *)reSendMsgUniqueKey:(GPBMessage *)arg1;
- (void)onMsgDidSendTimeout:(XMIMMessage *)arg1;
- (void)imSocketManager:(XMIMBaseSocketManager *)arg1 recvNewMsg:(GPBMessage *)arg2;

@optional
- (NSString *)imLeaveRspMsgNameOfSocketManager:(XMIMBaseSocketManager *)arg1;
- (GPBMessage *)imLeaveReqMsgOfSocketManager:(XMIMBaseSocketManager *)arg1;
- (GPBMessage *)imHeartbeatMsgOfSocketManager:(XMIMBaseSocketManager *)arg1;
- (NSString *)imHeartbeatMsgNameOfSocketManager:(XMIMBaseSocketManager *)arg1;
@end

