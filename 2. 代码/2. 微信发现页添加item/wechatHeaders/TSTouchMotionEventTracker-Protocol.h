//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSEventTracker-Protocol.h"

@class UIView;

@protocol TSTouchMotionEventTracker <TSEventTracker>
- (id)initWithInterval:(double)arg1 view:(UIView *)arg2 trackEventHandler:(void (^)(TSTrackedItem *))arg3;
@end

