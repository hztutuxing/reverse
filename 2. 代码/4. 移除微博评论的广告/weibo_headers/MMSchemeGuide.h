//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

#import "MIMessageForChat-Protocol.h"

@class MMChatKey, NSString;

@interface MMSchemeGuide : MMModel <MIMessageForChat>
{
    MMChatKey *_chatKey;
    long long _messageId;
    long long _time;
    NSString *_text;
    NSString *_scheme;
}

+ (id)objectWithMAPIDictionary:(id)arg1;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) MMChatKey *chatKey; // @synthesize chatKey=_chatKey;
- (void).cxx_destruct;
- (void)fromResultSet:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (_Bool)needAddImUnreadCount;
- (void)setChatType:(int)arg1;
- (int)chatType;
- (void)setChatId:(long long)arg1;
- (long long)chatId;
- (long long)globalId;
- (void)dealloc;
- (id)initWithMAPIDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

