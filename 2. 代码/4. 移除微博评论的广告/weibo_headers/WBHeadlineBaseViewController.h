//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WBArticlePayCompleteNotificationListenerProtocol-Protocol.h"

@class NSObject, NSString, UIView, WBArticlePayCompleteNotificationListener, WBHeadlineContentViewController, WBPRLMTableViewWrapper, WBUniversalArticle;
@protocol OS_dispatch_queue;

@interface WBHeadlineBaseViewController : WBTableViewController <UIScrollViewDelegate, PRLMTableViewWrapperDelegate, WBArticlePayCompleteNotificationListenerProtocol>
{
    UIView *tableHeaderView;
    UIView *footerToolbar;
    WBHeadlineContentViewController *headlineContentViewController;
    struct CGRect visableFrame;
    double automaticallyCenterxOffset;
    double contentWidth;
    WBPRLMTableViewWrapper *prlmWrapper;
    SEL moreButtonItemSelector;
    NSObject<OS_dispatch_queue> *cacheUpdateQueue;
    UIView *_placeholderView;
    _Bool _isHiddenToolBar;
    _Bool _isScrolledByTouch;
    WBUniversalArticle *_article;
    WBArticlePayCompleteNotificationListener *_vipClubPayCompleteNotificationListener;
}

@property(retain, nonatomic) WBArticlePayCompleteNotificationListener *vipClubPayCompleteNotificationListener; // @synthesize vipClubPayCompleteNotificationListener=_vipClubPayCompleteNotificationListener;
@property(nonatomic) _Bool isScrolledByTouch; // @synthesize isScrolledByTouch=_isScrolledByTouch;
@property(nonatomic) _Bool isHiddenToolBar; // @synthesize isHiddenToolBar=_isHiddenToolBar;
@property(retain, nonatomic) WBUniversalArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) UIView *placeholderView;
- (void)removePlaceView;
- (void)_notifyDidFinishScroll;
- (_Bool)_isArticleRecycleScrollViewVisible:(id)arg1 visibleFrameBlock:(CDUnknownBlockType)arg2;
- (id)fID;
- (void)configSubviewsFrame;
- (void)loadMoreDataDidTriggered;
- (void)pullRefreshDidTriggered;
- (void)initNaviRightButton;
- (_Bool)enableLoadMore;
- (void)performAnalysisActionWithCode:(id)arg1 andExtParam:(id)arg2;
- (void)executeDbUpdateBlock:(CDUnknownBlockType)arg1;
- (id)parseCardlistURL:(id)arg1;
- (_Bool)isReCalculateTotalHeightWithPragraphModelArray:(id)arg1;
- (void)setCycleScrollViewVisibleBoundsByScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)refreshViewsOnPayCompleteWithPayCompleteNotificationListener:(id)arg1 wbExtendType:(id)arg2;
- (_Bool)articlePayCompleteNotificationListener:(id)arg1 vipClubPayResultIsValidWithUid:(id)arg2 vUid:(id)arg3;
- (_Bool)articlePayCompleteNotificationListener:(id)arg1 shouldProcessByWbExtendParamValueDic:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)resetContentTableView;
- (void)initPrlmWrapperWithTableView:(id)arg1 enablePullRefresh:(_Bool)arg2 enableLoadMore:(_Bool)arg3;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

