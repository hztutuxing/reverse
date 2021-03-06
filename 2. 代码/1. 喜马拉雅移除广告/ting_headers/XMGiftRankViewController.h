//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "XMBlurPersonViewDelegate-Protocol.h"
#import "XMGiftRankListViewControllerDelegate-Protocol.h"
#import "XMGiftRankSegmentViewDelegate-Protocol.h"
#import "XMGiftViewManagerDelegate-Protocol.h"
#import "XMLiveNobleHideAlertViewDelegate-Protocol.h"
#import "XMPayLiveNavigationBarDelegate-Protocol.h"
#import "XMRankBottomViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIPageViewController, XMBlurPersonView, XMGiftRankSegmentView, XMLiveNobleHideAlertView, XMLiveRoomApproachInfo, XMLiveUser, XMPayLiveNavigationBar, XMRankBottomView;

@interface XMGiftRankViewController : XMBaseVC <XMRankBottomViewDelegate, XMGiftRankSegmentViewDelegate, XMBlurPersonViewDelegate, XMPayLiveNavigationBarDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, XMGiftRankListViewControllerDelegate, XMGiftViewManagerDelegate, XMLiveNobleHideAlertViewDelegate>
{
    XMRankBottomView *_bottomView;
    XMGiftRankSegmentView *_segmentView;
    long long _pendingIndex;
    _Bool _canShowBottomView;
    XMLiveUser *_anchorItem;
    unsigned long long _entryType;
    XMLiveRoomApproachInfo *_live;
    long long _liveId;
    long long _trackId;
    UIPageViewController *_pageCtrl;
    NSMutableArray *_rankListVCs;
    NSArray *_segmentArray;
    XMBlurPersonView *_personView;
    XMPayLiveNavigationBar *_navigationBar;
    XMLiveNobleHideAlertView *_nobleAlertView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveNobleHideAlertView *nobleAlertView; // @synthesize nobleAlertView=_nobleAlertView;
@property(retain, nonatomic) XMPayLiveNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) XMBlurPersonView *personView; // @synthesize personView=_personView;
@property(retain, nonatomic) NSArray *segmentArray; // @synthesize segmentArray=_segmentArray;
@property(retain, nonatomic) NSMutableArray *rankListVCs; // @synthesize rankListVCs=_rankListVCs;
@property(retain, nonatomic) UIPageViewController *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) XMLiveRoomApproachInfo *live; // @synthesize live=_live;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
@property(retain, nonatomic) XMLiveUser *anchorItem; // @synthesize anchorItem=_anchorItem;
@property(nonatomic) _Bool canShowBottomView; // @synthesize canShowBottomView=_canShowBottomView;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)onGiftRankCallback:(id)arg1;
- (void)onRankListTableViewDidSelect:(id)arg1;
- (void)nobleHideAlertViewClickedConfirm:(id)arg1;
- (void)startEntryFansClubRequest;
- (void)onRankBottomViewDidClick;
- (void)onPersonViewDidClick;
- (void)jumpToUserCtrlWithModel:(id)arg1;
- (void)bottomViewShowOrHide;
- (void)onGiftRankDidSelectIndex:(long long)arg1 from:(long long)arg2 withTag:(long long)arg3;
- (void)onNavigationAnchorRankDidClick;
- (void)onNavigationBackDidClick;
- (void)handleLoginOrNotNotification:(id)arg1;
- (void)back;
- (void)createRankListVCs;
- (void)addNavigationBar;
- (void)addPageViewCtrl;
- (void)addSegmentViewAndBottom;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSoundID:(long long)arg1;
- (id)initWithLiveID:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

