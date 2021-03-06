//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContactGroup.h"

@class NSAttributedString, NSDictionary, NSString, WBResultSet, WBStatusListEngineCustomModule, WBTimelineManager, _WBContinuousADStatusChecker;

@interface WBFeedGroup : WBContactGroup
{
    _Bool loading;
    unsigned long long loadingState;
    _Bool shouldAutoLoadMore;
    WBResultSet *statusResultSet;
    long long newStatusCount;
    long long frequency;
    NSString *statisticHandle;
    _Bool _isActive;
    _Bool _isNeedActiveRefresh;
    _Bool _hasReqestRecom;
    _Bool _showRefreshGuideTips;
    _Bool _needShowLocationAlert;
    _Bool _showInTwoTab;
    NSString *type;
    WBTimelineManager *timelineManager;
    NSDictionary *_groupInfo;
    long long _refrenceCount;
    long long _positiveRecomDisplayCount;
    NSString *_trendsTypeStr;
    long long _refreshCount;
    NSString *_statusRemindText;
    NSString *_statusRemindTextJumpScheme;
    NSString *_fID;
    _WBContinuousADStatusChecker *_checker;
    NSDictionary *_customGroupInfo;
    WBStatusListEngineCustomModule *_engineCustomeModule;
    NSString *_cornerBadgeImageURL;
    NSAttributedString *_awardPointsToastText;
    NSString *_customApiPath;
    NSDictionary *_emptyInfo;
    CDUnknownBlockType _topAnchorStatusFetcher;
    NSString *_adScene;
}

+ (id)objectsWithArray:(id)arg1 every:(CDUnknownBlockType)arg2 beforeParseDictBlock:(CDUnknownBlockType)arg3;
+ (id)group;
+ (_Bool)isValidForDictionary:(id)arg1;
@property(nonatomic) _Bool showInTwoTab; // @synthesize showInTwoTab=_showInTwoTab;
@property(copy, nonatomic) NSString *adScene; // @synthesize adScene=_adScene;
@property(copy, nonatomic) CDUnknownBlockType topAnchorStatusFetcher; // @synthesize topAnchorStatusFetcher=_topAnchorStatusFetcher;
@property(retain, nonatomic) NSDictionary *emptyInfo; // @synthesize emptyInfo=_emptyInfo;
@property(nonatomic) _Bool needShowLocationAlert; // @synthesize needShowLocationAlert=_needShowLocationAlert;
@property(copy, nonatomic) NSString *customApiPath; // @synthesize customApiPath=_customApiPath;
@property(copy, nonatomic) NSAttributedString *awardPointsToastText; // @synthesize awardPointsToastText=_awardPointsToastText;
@property(retain, nonatomic) NSString *cornerBadgeImageURL; // @synthesize cornerBadgeImageURL=_cornerBadgeImageURL;
@property(retain, nonatomic) WBStatusListEngineCustomModule *engineCustomeModule; // @synthesize engineCustomeModule=_engineCustomeModule;
@property(retain, nonatomic) NSDictionary *customGroupInfo; // @synthesize customGroupInfo=_customGroupInfo;
@property(retain, nonatomic) _WBContinuousADStatusChecker *checker; // @synthesize checker=_checker;
@property(nonatomic) _Bool showRefreshGuideTips; // @synthesize showRefreshGuideTips=_showRefreshGuideTips;
@property(retain, nonatomic) NSString *fID; // @synthesize fID=_fID;
@property(retain, nonatomic) NSString *statusRemindTextJumpScheme; // @synthesize statusRemindTextJumpScheme=_statusRemindTextJumpScheme;
@property(retain, nonatomic) NSString *statusRemindText; // @synthesize statusRemindText=_statusRemindText;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(nonatomic) _Bool hasReqestRecom; // @synthesize hasReqestRecom=_hasReqestRecom;
@property(copy, nonatomic) NSString *trendsTypeStr; // @synthesize trendsTypeStr=_trendsTypeStr;
@property(nonatomic) long long positiveRecomDisplayCount; // @synthesize positiveRecomDisplayCount=_positiveRecomDisplayCount;
@property(nonatomic) long long refrenceCount; // @synthesize refrenceCount=_refrenceCount;
@property(nonatomic) _Bool isNeedActiveRefresh; // @synthesize isNeedActiveRefresh=_isNeedActiveRefresh;
@property(retain, nonatomic) NSDictionary *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) WBResultSet *statusResultSet; // @synthesize statusResultSet;
@property(nonatomic) long long frequency; // @synthesize frequency;
@property(readonly, nonatomic) WBTimelineManager *timelineManager; // @synthesize timelineManager;
@property(copy, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isNeedShowUnread;
- (void)handleFeedSourceTpyeChange:(id)arg1;
- (void)handleDeleteTagChange:(id)arg1;
- (void)updateFwdCmtLikeCountWithStatus:(id)arg1;
- (void)updateLikeState:(unsigned long long)arg1 attitudeType:(long long)arg2 withItemID:(id)arg3;
- (void)changeFollowStateWithContact:(id)arg1 isFollowed:(_Bool)arg2 isNeedChangeInDB:(_Bool)arg3;
- (void)changeFollowStateWithContact:(id)arg1 isFollowed:(_Bool)arg2;
- (void)analysisFeedLoadingWithIdentified:(id)arg1;
- (void)analysisFeedLoading;
- (long long)feedUpdateType;
- (long long)feedLoadingState;
- (void)resetGroupInfoByGroupInfo:(id)arg1 withPrarm:(id)arg2;
- (void)resetGroupInfoByResults:(id *)arg1 withPrarm:(id)arg2;
- (long long)getWeiboIndexChangeSectionByGroupID:(id)arg1 type:(long long)arg2;
- (void)loadInsertStatusesWithLoadTimelineParams:(id)arg1 completionHandler2:(CDUnknownBlockType)arg2;
- (void)loadGroupMoreStatusesWithLoadTimelineParams:(id)arg1 completionHandler2:(CDUnknownBlockType)arg2;
- (void)reloadStatusesWithLoadTimelineParams:(id)arg1 completionHandler2:(CDUnknownBlockType)arg2;
- (void)loadInsertStatusesWithLoadTimelineParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadGroupMoreStatusesWithLoadTimelineParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadStatusesWithLoadTimelineParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadMoreStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMoreStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)statusInsertRequest;
- (id)statusLoadMoreRequest;
- (id)statusReloadRequest;
- (id)statusLoadRequest;
- (void)setShouldAutoLoadMore:(_Bool)arg1;
- (_Bool)shouldAutoLoadMore;
- (_Bool)containsTrend;
- (_Bool)loading;
- (void)checkCancelLoading;
- (_Bool)isDisableAutoLoadMore;
- (_Bool)canLoadMore;
- (long long)newStatusCount;
- (long long)insertItems:(id)arg1 afterItem:(id)arg2 thenDelete:(_Bool *)arg3;
- (long long)insertTrendItem:(id)arg1 afterStatus:(id)arg2;
- (long long)indexOfItem:(id)arg1 inItems:(id)arg2 conformClass:(Class)arg3;
- (long long)indexOfStatus:(id)arg1;
- (id)lastUnreadStatusInResultSet:(id)arg1;
- (id)lastStatusInResultSet:(id)arg1 excludeStatusType:(long long)arg2;
- (id)lastStatusInResultSet:(id)arg1;
- (id)lastStatusInResultSet;
- (id)statusInResultSetNearIndex:(long long)arg1;
- (id)firstStatusInResultSet;
- (id)firstStatusInResultSet:(id)arg1;
- (id)firstStatusInResultSet:(id)arg1 excludeStatusType:(long long)arg2;
- (_Bool)hasStatus;
- (id)status;
- (void)initStatusResultSet;
- (void)_loadStatusResultFromCache;
- (_Bool)insertTopStatus;
- (_Bool)insertTopStatusIn:(id)arg1;
- (void)resetTopAnchorStatus;
- (id)topAnchorStatusWithDisableInsert:(_Bool *)arg1;
- (_Bool)hasTopAnchorStatusFetcher;
- (long long)removeLocalStatus:(id)arg1;
- (void)removeLocalStatusFromDB:(id)arg1;
- (id)removeLocalStatusFromResultSet:(id)arg1 atIndex:(unsigned long long *)arg2;
- (long long)checkAndInsertLocalStatus:(id)arg1 fromEdit:(_Bool)arg2;
- (long long)checkAndInsertLocalStatus:(id)arg1;
- (void)insertLocalStatus:(id)arg1 isReplace:(_Bool)arg2;
- (unsigned long long)_insertLocalStatusToResuleSet:(id)arg1 fromEdit:(_Bool)arg2;
- (unsigned long long)insertLocalStatusToResuleSet:(id)arg1;
- (_Bool)shouldRemoveLocalStatusFromResultSet:(id)arg1;
- (_Bool)shouldInsertLocalStatusToResultSet:(id)arg1;
- (void)handleTimelineTrendItemDidRemoveNotification:(id)arg1;
- (void)_removeTrendsWithNotification:(id)arg1;
- (void)handleTimelineItemDestroyRemoveNotification:(id)arg1;
- (void)handleTimelineItemWillRemoveNotification:(id)arg1;
- (void)handleTimelineItemDidRemoveNotification:(id)arg1;
- (void)removeStatus:(id)arg1 withContact:(id)arg2 inStatusResultSet:(id)arg3;
- (void)cleanAllCacheStatuses;
- (void)mergeLocalTrendItems;
- (id)loadCacheStatusWithRequest:(id)arg1;
- (id)sqlForRequest:(id)arg1;
- (void)saveStatuses:(id)arg1 removeHistory:(_Bool)arg2;
- (void)sensorLogWithMids:(id)arg1;
- (void)logLocalErrorWithRequestPath:(id)arg1 requestParams:(id)arg2 maxId:(id)arg3 sinceId:(id)arg4 mids:(id)arg5 trends:(id)arg6;
- (void)logLocalErrorWithRequestPath:(id)arg1 requestParams:(id)arg2 maxId:(id)arg3 sinceId:(id)arg4 interval:(long long)arg5 mids:(id)arg6 trends:(id)arg7;
- (void)deactive;
- (void)active:(CDUnknownBlockType)arg1;
- (id)emptyImage;
- (id)emptyTip;
- (void)refreshName;
- (void)dealloc;
- (unsigned long long)unreadCount;
- (_Bool)isCustomFeedGroup;
- (_Bool)isFeedGroup;
- (_Bool)isHotGroup;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)init;
- (id)groupCellImage:(_Bool)arg1;
- (id)navigationImageWhenSelected;
- (id)groupTitleWhenSelected;
- (id)ananyticsGroupID;

@end

