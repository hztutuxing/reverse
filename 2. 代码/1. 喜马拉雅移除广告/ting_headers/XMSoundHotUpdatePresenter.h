//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSString, UITableView, XMNRequest, XMSoundHotUpdateViewController, XMTableViewDataSource;

@interface XMSoundHotUpdatePresenter : NSObject <XMTableViewDelegateProtocol>
{
    _Bool _hasMore;
    XMSoundHotUpdateViewController *_controller;
    XMNRequest *_request;
    XMTableViewDataSource *_tableDataSource;
    long long _subscribePageId;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long subscribePageId; // @synthesize subscribePageId=_subscribePageId;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak XMSoundHotUpdateViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)albumRecCellFavDidClick:(id)arg1;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)viewDidAppear;
- (void)onChangeFavStateSuccess:(id)arg1;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (void)p_reloadContentWithIndex:(long long)arg1;
- (void)p_updateTableView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

