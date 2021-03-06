//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JGProgressHUDAnimation, JGProgressHUDIndicatorView, UILabel;
@protocol JGProgressHUDDelegate;

@interface JGProgressHUD : UIView
{
    _Bool _transitioning;
    _Bool _updateAfterAppear;
    _Bool _dismissAfterTransitionFinished;
    _Bool _dismissAfterTransitionFinishedWithAnimation;
    _Bool _observeTraitCollectionChange;
    _Bool _presentingFull;
    double _displayTimestamp;
    JGProgressHUDIndicatorView *_indicatorViewAfterTransitioning;
    UIView *_hostForActualHUDView;
    _Bool _square;
    _Bool _voiceOverEnabled;
    float _progress;
    UIView *_HUDView;
    UIView *_actualHUDView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    JGProgressHUDIndicatorView *_indicatorView;
    JGProgressHUDAnimation *_animation;
    UIView *_targetView;
    id <JGProgressHUDDelegate> _delegate;
    CDUnknownBlockType _tapOnHUDViewBlock;
    CDUnknownBlockType _tapOutsideBlock;
    unsigned long long _interactionType;
    unsigned long long _parallaxMode;
    unsigned long long _style;
    double _cornerRadius;
    unsigned long long _position;
    double _layoutChangeAnimationDuration;
    double _minimumDisplayTime;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _marginInsets;
}

+ (id)progressHUDWithStyle:(unsigned long long)arg1;
+ (void)load;
+ (struct CGRect)currentKeyboardFrame;
+ (void)keyboardDidHide;
+ (void)keyboardFrameDidChange:(id)arg1;
+ (void)keyboardFrameWillChange:(id)arg1;
+ (id)allProgressHUDsInViewHierarchy:(id)arg1;
+ (id)_allProgressHUDsInViewHierarchy:(id)arg1;
+ (id)allProgressHUDsInView:(id)arg1;
@property(nonatomic) _Bool voiceOverEnabled; // @synthesize voiceOverEnabled=_voiceOverEnabled;
@property(nonatomic) double minimumDisplayTime; // @synthesize minimumDisplayTime=_minimumDisplayTime;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) double layoutChangeAnimationDuration; // @synthesize layoutChangeAnimationDuration=_layoutChangeAnimationDuration;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool square; // @synthesize square=_square;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long parallaxMode; // @synthesize parallaxMode=_parallaxMode;
@property(nonatomic) unsigned long long interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) CDUnknownBlockType tapOutsideBlock; // @synthesize tapOutsideBlock=_tapOutsideBlock;
@property(copy, nonatomic) CDUnknownBlockType tapOnHUDViewBlock; // @synthesize tapOnHUDViewBlock=_tapOnHUDViewBlock;
@property(nonatomic) __weak id <JGProgressHUDDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) JGProgressHUDIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(readonly, nonatomic) UIView *HUDView; // @synthesize HUDView=_HUDView;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) JGProgressHUDAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
@property(readonly, nonatomic) UIView *actualHUDView; // @synthesize actualHUDView=_actualHUDView;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @dynamic visible;
- (void)animationDidFinish:(_Bool)arg1;
- (void)updateMotionOnHUDView;
- (void)appDidBecomeActive;
- (void)orientationChanged;
- (void)keyboardFrameChanged:(id)arg1;
- (void)tapped:(id)arg1;
- (void)dismissAfterDelay:(double)arg1 animated:(_Bool)arg2;
- (void)dismissAfterDelay:(double)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)cleanUpAfterDismissal;
- (void)showInRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)showInRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1;
- (void)cleanUpAfterPresentation;
- (void)updateFrame:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyCornerRadius;
- (struct CGRect)fullFrameInView:(id)arg1;
- (void)updateHUDAnimated:(_Bool)arg1 animateIndicatorViewFrame:(_Bool)arg2;
- (void)setHUDViewFrameCenterWithSize:(struct CGSize)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

