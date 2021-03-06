//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TYCyclePagerViewDataSource-Protocol.h"
#import "TYCyclePagerViewDelegate-Protocol.h"

@class NSArray, NSString, TYCyclePagerView;
@protocol XMTopAnchorRankViewDelegate;

@interface XMTopAnchorRankView : UIView <TYCyclePagerViewDelegate, TYCyclePagerViewDataSource>
{
    double _topOffset;
    id <XMTopAnchorRankViewDelegate> _delegate;
    TYCyclePagerView *_pageScrollView;
    NSArray *_rankingList;
}

+ (double)rankViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rankingList; // @synthesize rankingList=_rankingList;
@property(retain, nonatomic) TYCyclePagerView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(nonatomic) __weak id <XMTopAnchorRankViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void)showTopRankingSection:(id)arg1;
- (void)pagerView:(id)arg1 didSelectedItemCell:(id)arg2 atIndex:(long long)arg3;
- (id)layoutForPagerView:(id)arg1;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

