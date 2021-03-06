//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMCategoryTabViewDelegate-Protocol.h"
#import "XMSegmentTabViewCtrolDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PPMediaDevice, XMCategoryItem, XMCategoryTabView, XMSegmentTabViewController, XMServerRequest;

@interface XMWiFiCategoryTabViewController : XMSubLevelViewController <XMSegmentTabViewCtrolDelegate, XMCategoryTabViewDelegate>
{
    NSString *_tagKey;
    long long _tagIndex;
    long long _condition;
    long long _state;
    _Bool _showALlButton;
    NSMutableArray *_tabs;
    NSString *_defaultTag;
    XMCategoryItem *_categoryItem;
    NSMutableDictionary *_viewControllers;
    XMSegmentTabViewController *_tabController;
    XMServerRequest *_tgRerequest;
    NSMutableArray *_tagsArray;
    NSDictionary *_cacheTags;
    XMCategoryTabView *_tabView;
    XMServerRequest *_filteRequest;
    long long _channelIndex;
    PPMediaDevice *_setDevice;
}

@property(retain, nonatomic) PPMediaDevice *setDevice; // @synthesize setDevice=_setDevice;
@property(nonatomic) long long channelIndex; // @synthesize channelIndex=_channelIndex;
@property(retain, nonatomic) XMServerRequest *filteRequest; // @synthesize filteRequest=_filteRequest;
@property(retain, nonatomic) XMCategoryTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSDictionary *cacheTags; // @synthesize cacheTags=_cacheTags;
@property(retain, nonatomic) NSMutableArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) XMServerRequest *tgRerequest; // @synthesize tgRerequest=_tgRerequest;
@property(retain, nonatomic) XMSegmentTabViewController *tabController; // @synthesize tabController=_tabController;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) XMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(copy, nonatomic) NSString *defaultTag; // @synthesize defaultTag=_defaultTag;
@property(retain, nonatomic) NSMutableArray *tabs; // @synthesize tabs=_tabs;
- (void).cxx_destruct;
- (void)onCancel;
- (void)onFinishWith:(long long)arg1 condition:(long long)arg2 state:(long long)arg3;
- (void)saveCategoryTags:(id)arg1;
- (void)loadCategoryTags;
- (void)categoryTag:(id)arg1;
- (id)viewControllerWithTitle:(id)arg1;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (void)hiddenTabView;
- (void)updateCategoryInfoFromDic:(id)arg1;
- (void)updateKeywordDataFromDict:(id)arg1;
- (void)updateDataFromDict:(id)arg1;
- (void)retrieveDataFailedSelector:(id)arg1;
- (void)retrieveDataFinishedSelector:(id)arg1;
- (void)requestTagName;
- (void)addTabController;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCategoryItem:(id)arg1 channelIndex:(long long)arg2 wifiDevice:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

