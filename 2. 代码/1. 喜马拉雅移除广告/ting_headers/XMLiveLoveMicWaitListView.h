//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UIControl, UILabel, UITableView, YYThreadSafeArray;
@protocol XMLiveLoveMicListDelegate;

@interface XMLiveLoveMicWaitListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIControl *_backControl;
    UIView *_whiteBoard;
    UITableView *_micListView;
    UILabel *_titleLabel;
    YYThreadSafeArray *_dataSource;
    id <XMLiveLoveMicListDelegate> _delegate;
    CDUnknownBlockType _dismissCallback;
    UIButton *_actionBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(nonatomic) __weak id <XMLiveLoveMicListDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onActionBtnClick:(id)arg1;
- (void)onBackAction;
- (void)handleData;
- (void)synchronizeMicList:(id)arg1;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)customInit;
- (void)_setupUnits;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

