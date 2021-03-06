//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshFooter.h"

@class UIActivityIndicatorView;

@interface XMRefreshVLefter : MJRefreshFooter
{
    double _insetTDelta;
    UIActivityIndicatorView *_loadingView;
    long long _activityIndicatorViewStyle;
}

+ (id)headerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
@property(nonatomic) __weak UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

