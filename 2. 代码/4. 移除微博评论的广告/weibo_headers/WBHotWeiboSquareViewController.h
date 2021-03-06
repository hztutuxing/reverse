//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSquareViewController.h"

#import "WBBaseSegmentViewWrapperDelegate-Protocol.h"
#import "WBHotWeiboSquareBottomViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WBCardListBaseItem, WBHelperView, WBHotWeiboSquareBottomViewController, WBPageCard, WBPageGradientAnimateCard, WBTableViewEmptyView;

@interface WBHotWeiboSquareViewController : WBSquareViewController <WBBaseSegmentViewWrapperDelegate, WBHotWeiboSquareBottomViewDelegate>
{
    WBCardListBaseItem *_dummyEmptyCardList;
    _Bool _topCardListPrepared;
    _Bool _bottomCardListPrepared;
    _Bool _isIntegrateMode;
    _Bool _suppressScrollEvent;
    _Bool _bottomVCLoadError;
    _Bool _viewSizeChanged;
    double _topCardsTotalHeight;
    WBHotWeiboSquareBottomViewController *_bottomVC;
    WBCardListBaseItem *_previousItem;
    CDUnknownBlockType _reloadAction;
    NSMutableArray *_heightOfCards;
    WBTableViewEmptyView *_errorEmptyView;
    WBPageCard *_bannerCard;
    WBPageGradientAnimateCard *_gradientBannerCard;
    double _bannerHeight;
    double _currentTabBarBottomOffset;
    WBHelperView *_hotweiboHelperView;
    CDUnknownBlockType _openBottomBlock;
}

@property(copy, nonatomic) CDUnknownBlockType openBottomBlock; // @synthesize openBottomBlock=_openBottomBlock;
@property(retain, nonatomic) WBHelperView *hotweiboHelperView; // @synthesize hotweiboHelperView=_hotweiboHelperView;
@property(nonatomic) _Bool viewSizeChanged; // @synthesize viewSizeChanged=_viewSizeChanged;
@property(nonatomic) double currentTabBarBottomOffset; // @synthesize currentTabBarBottomOffset=_currentTabBarBottomOffset;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) WBPageGradientAnimateCard *gradientBannerCard; // @synthesize gradientBannerCard=_gradientBannerCard;
@property(retain, nonatomic) WBPageCard *bannerCard; // @synthesize bannerCard=_bannerCard;
@property(nonatomic) _Bool bottomVCLoadError; // @synthesize bottomVCLoadError=_bottomVCLoadError;
@property(retain, nonatomic) WBTableViewEmptyView *errorEmptyView; // @synthesize errorEmptyView=_errorEmptyView;
@property(nonatomic) _Bool suppressScrollEvent; // @synthesize suppressScrollEvent=_suppressScrollEvent;
@property(retain, nonatomic) NSMutableArray *heightOfCards; // @synthesize heightOfCards=_heightOfCards;
@property(copy, nonatomic) CDUnknownBlockType reloadAction; // @synthesize reloadAction=_reloadAction;
@property(nonatomic) _Bool isIntegrateMode; // @synthesize isIntegrateMode=_isIntegrateMode;
@property(retain, nonatomic) WBCardListBaseItem *previousItem; // @synthesize previousItem=_previousItem;
@property(nonatomic) _Bool bottomCardListPrepared; // @synthesize bottomCardListPrepared=_bottomCardListPrepared;
@property(nonatomic) _Bool topCardListPrepared; // @synthesize topCardListPrepared=_topCardListPrepared;
@property(retain, nonatomic) WBHotWeiboSquareBottomViewController *bottomVC; // @synthesize bottomVC=_bottomVC;
@property(nonatomic) double topCardsTotalHeight; // @synthesize topCardsTotalHeight=_topCardsTotalHeight;
- (void).cxx_destruct;
- (void)openedViewUpdateWithUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)finishLoadingData;
- (_Bool)bypassGlobalTabbarAdjustment;
- (_Bool)generalMediaAutoPlayIgnored;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)currentAccountDidChangeNotification:(id)arg1;
- (unsigned long long)cachePolicyForEngine:(id)arg1;
- (_Bool)needRemovePreviousPolicyCacheForEngine:(id)arg1;
- (Class)PullRefreshHeaderViewClass;
- (void)setupUILayout:(int)arg1;
- (void)saveSquareID;
- (void)configSubviewsFrame;
- (id)bubbleTypeWithIndexPage:(id)arg1 tableView:(id)arg2;
- (_Bool)handleActionWithTableViewCell:(id)arg1 mainView:(id)arg2 actionType:(int)arg3 pageCard:(id)arg4 actionPara:(id)arg5 withButton:(id)arg6;
- (_Bool)forceNotShowTabBarWhenPopWithPanGesture;
- (_Bool)canDisableADMonitor;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)doPendingReloadAction;
- (void)refreshBottomView;
- (void)refreshTopView;
- (void)doReloadActionWhenNessesary:(CDUnknownBlockType)arg1;
- (void)setCardListBaseItem:(id)arg1;
- (_Bool)hasDataInCardList:(id)arg1;
- (_Bool)hasDataShownOnScreen;
- (_Bool)hasTopBannerCard;
- (_Bool)hasTopNewDoubleTextLinkCard;
- (unsigned long long)predictedTopBannerPosition;
- (void)refresh;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1;
- (id)customCacheForEngine:(id)arg1;
- (_Bool)isDummyEmptyCardlistShownOnScreen;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (_Bool)needShowPrlmHeaderViewWhenReloadIn:(id)arg1;
- (void)showError:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)showError:(id)arg1;
- (double)calculeTopCardsTotalHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)bottomViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2;
- (void)bottomViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2;
- (void)trackScrollView:(id)arg1;
- (void)tabBarTrackScrollView:(id)arg1;
- (void)resetStatusBarWithMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)switchInterfaceToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)reloadViews;
- (_Bool)helperViewIsDisplaying;
- (void)checkAndReloadAllViews;
- (void)presentGifViewIfNeed;
- (void)hideBottomErrorView;
- (void)showBottomErrorViewWithError:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)positionBottomErrorViewIfNeeded;
- (void)resetTopTableViewFrame;
- (void)_resetTopTableViewInsetsWithHeight:(double)arg1;
- (void)resetBottomTableViewFrame;
- (void)setTheCell:(id)arg1 ForIndex:(id)arg2 Tableview:(id)arg3 UseCard:(id)arg4;
- (id)errorEmptyViewWithError:(id)arg1;
- (void)resetSearchBarUI;
- (void)setUpBottomVC;
- (void)removeBottomVC;
- (void)viewDidLoad;
- (void)configTableViewInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)hasBindingOnPath:(id)arg1 onObject:(id)arg2 toObject:(id)arg3;
- (Class)searchBarClass;
- (Class)baseViewClass;
- (id)initWithID:(id)arg1;
- (void)dealloc;
- (_Bool)supportPushWrappedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

