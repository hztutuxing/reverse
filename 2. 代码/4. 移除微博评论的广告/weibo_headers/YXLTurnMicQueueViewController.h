//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView, YXLiveFootRefreshView, YXLiveHeadRefreshView, YXLiveSender;
@protocol YXLTurnMicQueueVcDelegate;

@interface YXLTurnMicQueueViewController : YXBaseViewController <UITableViewDelegate, UITableViewDataSource, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *dataSource;
    UITableView *listTable;
    UIView *bottomView;
    UIView *mask;
    _Bool _isAudience;
    _Bool _isPerformer;
    _Bool _noMoreData;
    id <YXLTurnMicQueueVcDelegate> _delegate;
    NSString *_scid;
    NSString *_mcContainerid;
    long long _iscontrol;
    YXLiveHeadRefreshView *_headerRefreshView;
    YXLiveFootRefreshView *_footerRefreshView;
    unsigned long long _currentPage;
    unsigned long long _limit;
    YXLiveSender *_sender;
}

@property(retain, nonatomic) YXLiveSender *sender; // @synthesize sender=_sender;
@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak YXLiveFootRefreshView *footerRefreshView; // @synthesize footerRefreshView=_footerRefreshView;
@property(nonatomic) __weak YXLiveHeadRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(nonatomic) long long iscontrol; // @synthesize iscontrol=_iscontrol;
@property(retain, nonatomic) NSString *mcContainerid; // @synthesize mcContainerid=_mcContainerid;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) __weak id <YXLTurnMicQueueVcDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPerformer; // @synthesize isPerformer=_isPerformer;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getWBfocusWithYXLTurnMicQueueModel:(id)arg1 withIndex:(long long)arg2;
- (void)requestDataWithPage:(long long)arg1 limit:(long long)arg2;
- (void)loadMoreDone;
- (void)refreshDone;
- (void)exitMcQueueRequest;
- (void)exitMc;
- (_Bool)isPresented:(id)arg1;
- (void)presentPerformrVC;
- (void)permissionCheckerDismiss;
- (void)joinMc;
- (void)attentionWB:(id)arg1;
- (void)attention:(id)arg1;
- (void)updateBottom:(long long)arg1;
- (void)popViewController;
- (void)initbackButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

