//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveBaseApproachInfo.h"

#import "XMTableCellModelProtocol-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, XMLiveChatRoomVo, XMLiveFansClubVo, XMLiveNobleClubVo, XMLiveRoomMicSDKInfo, XMLiveUser;

@interface XMLiveRoomApproachInfo : XMLiveBaseApproachInfo <XMTableCellModelProtocol>
{
    _Bool _hasRedpacket;
    _Bool _hasTrackId;
    _Bool _isSaveTrack;
    _Bool _noticeFans;
    _Bool _hasFansClub;
    _Bool _kickoutForPC;
    XMLiveUser *_anchor;
    XMLiveRoomMicSDKInfo *_micSDKInfo;
    NSString *_anchorName;
    NSString *_avatarUrl;
    long long _scheduleId;
    NSString *_liveTitle;
    NSString *_liveDetail;
    NSString *_shortDescription;
    long long _categoryId;
    NSString *_categoryName;
    long long _playCount;
    NSString *_itingUrl;
    long long _startAt;
    long long _endAt;
    long long _remainTs;
    long long _startTimeInterval;
    long long _endTimeInterval;
    long long _totalLiveMillSeconds;
    NSString *_shareUrl;
    long long _trackId;
    unsigned long long _fansIncreaceCount;
    NSString *_totalMoney;
    NSString *_totalMoneyXiBean;
    NSArray *_topRankArray;
    NSString *_reason;
    unsigned long long _msgCount;
    NSDictionary *_sendHotProgressInfo;
    NSString *_labelColorLeft;
    NSString *_labelColorRight;
    NSString *_labelName;
    NSString *_socialName;
    NSString *_socialColorLeft;
    NSString *_socialColorRight;
    NSString *_fansClubHtml;
    XMLiveNobleClubVo *_nobleClubVo;
    XMLiveFansClubVo *_fansClubVo;
    XMLiveChatRoomVo *_chatroomVo;
    long long _pkRankGrade;
    NSString *_pkRankIcon;
    long long _pkSeasonId;
    NSString *_recSrc;
    NSString *_recTrack;
    long long _bizType;
    long long _subBizType;
    long long _presideId;
}

+ (id)activityPlayFromLive:(id)arg1;
+ (id)xmm_modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(nonatomic) _Bool kickoutForPC; // @synthesize kickoutForPC=_kickoutForPC;
@property(nonatomic) long long presideId; // @synthesize presideId=_presideId;
@property(nonatomic) long long subBizType; // @synthesize subBizType=_subBizType;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *recTrack; // @synthesize recTrack=_recTrack;
@property(copy, nonatomic) NSString *recSrc; // @synthesize recSrc=_recSrc;
@property(nonatomic) long long pkSeasonId; // @synthesize pkSeasonId=_pkSeasonId;
@property(copy, nonatomic) NSString *pkRankIcon; // @synthesize pkRankIcon=_pkRankIcon;
@property(nonatomic) long long pkRankGrade; // @synthesize pkRankGrade=_pkRankGrade;
@property(retain, nonatomic) XMLiveChatRoomVo *chatroomVo; // @synthesize chatroomVo=_chatroomVo;
@property(retain, nonatomic) XMLiveFansClubVo *fansClubVo; // @synthesize fansClubVo=_fansClubVo;
@property(retain, nonatomic) XMLiveNobleClubVo *nobleClubVo; // @synthesize nobleClubVo=_nobleClubVo;
@property(copy, nonatomic) NSString *fansClubHtml; // @synthesize fansClubHtml=_fansClubHtml;
@property(nonatomic) _Bool hasFansClub; // @synthesize hasFansClub=_hasFansClub;
@property(copy, nonatomic) NSString *socialColorRight; // @synthesize socialColorRight=_socialColorRight;
@property(copy, nonatomic) NSString *socialColorLeft; // @synthesize socialColorLeft=_socialColorLeft;
@property(copy, nonatomic) NSString *socialName; // @synthesize socialName=_socialName;
@property(copy, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(copy, nonatomic) NSString *labelColorRight; // @synthesize labelColorRight=_labelColorRight;
@property(copy, nonatomic) NSString *labelColorLeft; // @synthesize labelColorLeft=_labelColorLeft;
@property(retain, nonatomic) NSDictionary *sendHotProgressInfo; // @synthesize sendHotProgressInfo=_sendHotProgressInfo;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSArray *topRankArray; // @synthesize topRankArray=_topRankArray;
@property(copy, nonatomic) NSString *totalMoneyXiBean; // @synthesize totalMoneyXiBean=_totalMoneyXiBean;
@property(copy, nonatomic) NSString *totalMoney; // @synthesize totalMoney=_totalMoney;
@property(nonatomic) unsigned long long fansIncreaceCount; // @synthesize fansIncreaceCount=_fansIncreaceCount;
@property(nonatomic) _Bool noticeFans; // @synthesize noticeFans=_noticeFans;
@property(nonatomic) _Bool isSaveTrack; // @synthesize isSaveTrack=_isSaveTrack;
@property(nonatomic) _Bool hasTrackId; // @synthesize hasTrackId=_hasTrackId;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) long long totalLiveMillSeconds; // @synthesize totalLiveMillSeconds=_totalLiveMillSeconds;
@property(nonatomic) long long endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(nonatomic) long long startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(nonatomic) long long remainTs; // @synthesize remainTs=_remainTs;
@property(nonatomic) long long endAt; // @synthesize endAt=_endAt;
@property(nonatomic) long long startAt; // @synthesize startAt=_startAt;
@property(copy, nonatomic) NSString *itingUrl; // @synthesize itingUrl=_itingUrl;
@property(nonatomic) _Bool hasRedpacket; // @synthesize hasRedpacket=_hasRedpacket;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(copy, nonatomic) NSString *liveDetail; // @synthesize liveDetail=_liveDetail;
@property(copy, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(nonatomic) long long scheduleId; // @synthesize scheduleId=_scheduleId;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(retain, nonatomic) XMLiveRoomMicSDKInfo *micSDKInfo; // @synthesize micSDKInfo=_micSDKInfo;
@property(retain, nonatomic) XMLiveUser *anchor; // @synthesize anchor=_anchor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updatePropertiesFromActivtyDict:(id)arg1;
- (void)updatePropertiesFromDict:(id)arg1;
- (void)updatePropertiesFromCreateDict:(id)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSNumber *liveFormType;
@property(copy, nonatomic) NSString *recommendWord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

