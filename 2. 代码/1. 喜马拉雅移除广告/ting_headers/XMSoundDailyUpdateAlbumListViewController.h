//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSString, XMSoundDailyUpdateAlbumListPresenter, XMSoundDailyUpdateTabModel;

@interface XMSoundDailyUpdateAlbumListViewController : XMBaseTabelVC <XMVXPageViewSubControllerProtocol>
{
    _Bool _needRefresh;
    XMSoundDailyUpdateTabModel *_tabModel;
    XMSoundDailyUpdateAlbumListPresenter *_presenter;
}

@property(retain, nonatomic) XMSoundDailyUpdateAlbumListPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) __weak XMSoundDailyUpdateTabModel *tabModel; // @synthesize tabModel=_tabModel;
- (void).cxx_destruct;
- (void)reloadDataIfNeed;
- (void)p_updatePresenter;
- (void)p_setUI;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (double)tableViewBottomInset;
- (id)vxContentScrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

