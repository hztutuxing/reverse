//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, UIControl, UILabel;
@protocol WBStorySoundGuideViewDelegate;

@interface WBStorySoundGuideView : UIView
{
    struct {
        unsigned int pausedByEnterBackground:1;
    } _flags;
    id <WBStorySoundGuideViewDelegate> _delegate;
    UILabel *_tipsLabel;
    UILabel *_titleLabel;
    UIControl *_tapControl;
    LOTAnimationView *_lottieAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
@property(retain, nonatomic) UIControl *tapControl; // @synthesize tapControl=_tapControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak id <WBStorySoundGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (void)startAnimation;
- (void)tapControlAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

