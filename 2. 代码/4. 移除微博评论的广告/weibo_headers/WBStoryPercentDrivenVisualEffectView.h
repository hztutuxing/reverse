//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@interface WBStoryPercentDrivenVisualEffectView : UIVisualEffectView
{
    struct {
        unsigned int isInAnimation:1;
    } _flags;
    double _percentComplete;
}

@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)endPercentDrivenAnimation;
- (void)startRemoveBlurEffectAnimation;
- (void)startPercentDrivenBlurEffectAnimation;
@property(readonly, nonatomic) _Bool isInAnimation;

@end

