//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveRadioBaseViewController.h"

#import "XMLiveRadioCellDelegate-Protocol.h"

@class NSMutableArray, NSString, XMLiveRadioLocalItem, XMServerRequest;

@interface XMLiveRadioLocalViewController : XMLiveRadioBaseViewController <XMLiveRadioCellDelegate>
{
    _Bool _hasMore;
    _Bool _firstLoad;
    long long currentProvinceCode;
    long long currentPageNum;
    XMServerRequest *locationRequest;
    XMServerRequest *radioOfLocationRequest;
    XMServerRequest *collectPosInfoRequest;
    XMLiveRadioLocalItem *radioLocalItem;
    NSMutableArray *radioOfProvinceArray;
}

@property(retain, nonatomic) NSMutableArray *radioOfProvinceArray; // @synthesize radioOfProvinceArray;
@property(retain, nonatomic) XMLiveRadioLocalItem *radioLocalItem; // @synthesize radioLocalItem;
@property(retain, nonatomic) XMServerRequest *collectPosInfoRequest; // @synthesize collectPosInfoRequest;
@property(retain, nonatomic) XMServerRequest *radioOfLocationRequest; // @synthesize radioOfLocationRequest;
@property(retain, nonatomic) XMServerRequest *locationRequest; // @synthesize locationRequest;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tabbarRightView;
- (id)tabbarLeftView;
- (void)triggerPullToRefresh;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)requestCollectPosInfoFailed:(id)arg1;
- (void)requestCollectPosInfoFinished:(id)arg1;
- (void)requestCollectPosInfo;
- (void)requestRadioOfLocationFail:(id)arg1;
- (void)requestRadioOfLocationFinish:(id)arg1;
- (void)requestRadioOfLocation:(id)arg1 WithPageNum:(long long)arg2;
- (void)locationRequestDidFail:(id)arg1;
- (void)locationRequestDidFinish:(id)arg1;
- (void)requestLocation;
- (id)getSavedLocation;
- (_Bool)hasSavedLocation;
- (void)saveAndUpdateLocationInfo;
- (long long)getUid;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

