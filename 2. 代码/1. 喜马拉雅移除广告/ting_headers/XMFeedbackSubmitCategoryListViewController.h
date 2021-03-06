//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMBaseVCProtocol-Protocol.h"

@class NSString, UITableView, XMFeedBackCategoryListRawDataModel, XMNRequest;

@interface XMFeedbackSubmitCategoryListViewController : XMBaseVC <UITableViewDelegate, UITableViewDataSource, XMBaseVCProtocol>
{
    XMFeedBackCategoryListRawDataModel *_rawData;
    UITableView *_tableView;
    XMNRequest *_categoryRequest;
}

@property(retain, nonatomic) XMNRequest *categoryRequest; // @synthesize categoryRequest=_categoryRequest;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XMFeedBackCategoryListRawDataModel *rawData; // @synthesize rawData=_rawData;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)feedBackNotes;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double heightOffset;
@property(nonatomic) _Bool hiddenTabbar;
@property(nonatomic) _Bool navigationBarHidden;
@property(readonly) Class superclass;

@end

