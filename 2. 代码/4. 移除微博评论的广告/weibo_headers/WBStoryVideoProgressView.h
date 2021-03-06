//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WBVideoProgressSlider;
@protocol WBStoryVideoControlsProgressViewDelegate;

@interface WBStoryVideoProgressView : UIView
{
    _Bool _activate;
    id <WBStoryVideoControlsProgressViewDelegate> _delegate;
    WBVideoProgressSlider *_playProgressSlider;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    WBVideoProgressSlider *_cacheProgressSlider;
    UIView *_placeHolderSeparator;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *placeHolderSeparator; // @synthesize placeHolderSeparator=_placeHolderSeparator;
@property(nonatomic, getter=isActivate) _Bool activate; // @synthesize activate=_activate;
@property(retain, nonatomic) WBVideoProgressSlider *cacheProgressSlider; // @synthesize cacheProgressSlider=_cacheProgressSlider;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) WBVideoProgressSlider *playProgressSlider; // @synthesize playProgressSlider=_playProgressSlider;
@property(nonatomic) __weak id <WBStoryVideoControlsProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) double cacheProgress;
@property(nonatomic) double progress;
- (void)progressChangedConfirm:(id)arg1;
- (void)progressChanged:(id)arg1;
- (void)progressSlidePressed:(id)arg1;
- (void)updateTimeLabels:(id)arg1 remainTime:(id)arg2;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

