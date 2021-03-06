//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSegmentChannelsListView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;

@interface WBFeedHomeChannelListView : WBSegmentChannelsListView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGesture;
}

+ (id)segmentChannelsListViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void).cxx_destruct;
- (long long)moveItemFromBottomToTopByGroupID:(id)arg1 index:(id)arg2;
- (void)refreshCornerBadge;
- (void)reloadLanguageUI;
- (_Bool)commitTranslation:(struct CGPoint)arg1;
- (void)animationForTopViewExcItem:(id)arg1;
- (void)resetPositions;
- (void)resetChannels;
- (void)updateScrollViewContentOffset:(struct CGPoint)arg1;
- (void)panClick:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

