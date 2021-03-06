//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, NSURL, UIImage;

@interface XMChatItem : XMModel
{
    _Bool _isVerified;
    _Bool _isInBlacklist;
    _Bool _isLetterQuiet;
    _Bool _isNoReadNumStyle;
    _Bool _isOfficial;
    _Bool _isOpenAskAndAnswer;
    _Bool _isFollowed;
    _Bool _isFollowing;
    _Bool _isTopping;
    _Bool _replied;
    _Bool _didShowQA;
    _Bool _hasUserInfo;
    long long _chatId;
    long long _uid;
    NSString *_nickname;
    NSURL *_smallLogo;
    NSString *_chatContent;
    unsigned long long _unReadCount;
    long long _lastId;
    long long _maxMsgId;
    long long _lastSubscribeMsgId;
    long long _bizType;
    double _updatedAt;
    double _createdAt;
    long long _anchorGrade;
    long long _verifyType;
    NSString *_personDescribe;
    long long _vLogoType;
    long long _isMeCreate;
    UIImage *_icon;
}

+ (id)noticeList;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long isMeCreate; // @synthesize isMeCreate=_isMeCreate;
@property(nonatomic) _Bool hasUserInfo; // @synthesize hasUserInfo=_hasUserInfo;
@property(nonatomic) long long vLogoType; // @synthesize vLogoType=_vLogoType;
@property(nonatomic) _Bool didShowQA; // @synthesize didShowQA=_didShowQA;
@property(nonatomic) _Bool replied; // @synthesize replied=_replied;
@property(nonatomic) _Bool isTopping; // @synthesize isTopping=_isTopping;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSString *personDescribe; // @synthesize personDescribe=_personDescribe;
@property(nonatomic) _Bool isOpenAskAndAnswer; // @synthesize isOpenAskAndAnswer=_isOpenAskAndAnswer;
@property(nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(nonatomic) _Bool isNoReadNumStyle; // @synthesize isNoReadNumStyle=_isNoReadNumStyle;
@property(nonatomic) _Bool isLetterQuiet; // @synthesize isLetterQuiet=_isLetterQuiet;
@property(nonatomic) _Bool isInBlacklist; // @synthesize isInBlacklist=_isInBlacklist;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(nonatomic) long long anchorGrade; // @synthesize anchorGrade=_anchorGrade;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) double updatedAt; // @synthesize updatedAt=_updatedAt;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long lastSubscribeMsgId; // @synthesize lastSubscribeMsgId=_lastSubscribeMsgId;
@property(nonatomic) long long maxMsgId; // @synthesize maxMsgId=_maxMsgId;
@property(nonatomic) long long lastId; // @synthesize lastId=_lastId;
@property(nonatomic) unsigned long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) NSString *chatContent; // @synthesize chatContent=_chatContent;
@property(retain, nonatomic) NSURL *smallLogo; // @synthesize smallLogo=_smallLogo;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long chatId; // @synthesize chatId=_chatId;
- (void).cxx_destruct;
- (_Bool)isNoticeAccount;
- (_Bool)isSpecialAccount;
- (_Bool)showDirectly;
- (id)altChatContent;
- (void)updatePropertiesFromChatDictionary:(id)arg1;
- (id)init;

@end

