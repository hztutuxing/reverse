//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMDubShowVoiceTopicVCModel : NSObject
{
    _Bool _login;
    _Bool _activeEnable;
    NSString *_topicImage;
    NSString *_title;
    NSString *_detail;
    NSString *_time;
    double _beiginTime;
    double _endTime;
    long long _uid;
    NSString *_userNickname;
    NSString *_userDescription;
    NSString *_userPic;
    long long _myCount;
    long long _hasRecent;
    long long _status;
    NSString *_ad;
    NSString *_adAction;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *adAction; // @synthesize adAction=_adAction;
@property(copy, nonatomic) NSString *ad; // @synthesize ad=_ad;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool activeEnable; // @synthesize activeEnable=_activeEnable;
@property(nonatomic) long long hasRecent; // @synthesize hasRecent=_hasRecent;
@property(nonatomic) long long myCount; // @synthesize myCount=_myCount;
@property(nonatomic) _Bool login; // @synthesize login=_login;
@property(retain, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(retain, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain, nonatomic) NSString *userNickname; // @synthesize userNickname=_userNickname;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beiginTime; // @synthesize beiginTime=_beiginTime;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *topicImage; // @synthesize topicImage=_topicImage;
- (void).cxx_destruct;

@end

