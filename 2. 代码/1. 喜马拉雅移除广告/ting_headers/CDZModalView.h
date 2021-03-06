//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton;

@interface CDZModalView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isContentViewPenetrated;
    _Bool _autoHideWhenTouchBackgroundView;
    _Bool _becomeFistResponserWhenAppear;
    _Bool _isShowing;
    _Bool _contentViewMoveWithKeyboard;
    int _contentViewPosition;
    int _showAnimation;
    int _hideAnimation;
    UIView *_backgroundView;
    UIView *_contentView;
    double _showAnimationDuration;
    double _hideAnimationDuration;
    CDUnknownBlockType _didHideBlock;
    UIButton *_backgroudButton;
    struct CGRect _keyboardFrame;
}

+ (void)popModalViewFromStack:(id)arg1;
+ (void)pushModalViewToStack:(id)arg1;
+ (id)currentModalView;
@property(readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(retain, nonatomic) UIButton *backgroudButton; // @synthesize backgroudButton=_backgroudButton;
@property(copy, nonatomic) CDUnknownBlockType didHideBlock; // @synthesize didHideBlock=_didHideBlock;
@property(nonatomic) _Bool contentViewMoveWithKeyboard; // @synthesize contentViewMoveWithKeyboard=_contentViewMoveWithKeyboard;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) double hideAnimationDuration; // @synthesize hideAnimationDuration=_hideAnimationDuration;
@property(nonatomic) int hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(nonatomic) double showAnimationDuration; // @synthesize showAnimationDuration=_showAnimationDuration;
@property(nonatomic) int showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) int contentViewPosition; // @synthesize contentViewPosition=_contentViewPosition;
@property(nonatomic) _Bool becomeFistResponserWhenAppear; // @synthesize becomeFistResponserWhenAppear=_becomeFistResponserWhenAppear;
@property(nonatomic) _Bool autoHideWhenTouchBackgroundView; // @synthesize autoHideWhenTouchBackgroundView=_autoHideWhenTouchBackgroundView;
@property(nonatomic) _Bool isContentViewPenetrated; // @synthesize isContentViewPenetrated=_isContentViewPenetrated;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isKeyboardShowing;
- (void)performKeyboardHideAnimation;
- (void)prepareKeyboardHideAnimation;
- (void)performKeyboardSizeChangeAnimation;
- (void)performKeyboardShowAnimation;
- (void)prepareKeyboardShowAnimation;
- (void)keyboardFrameWillChangeNotification:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)contentViewFinalFrame;
- (void)performHideAnimation;
- (void)prepareHideAnimation;
- (void)performShowAnimation;
- (void)prepareShowAnimatoin;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)didHide;
- (void)willHide;
- (void)didShowInView:(id)arg1;
- (void)willShowInView:(id)arg1;
- (void)clickBackgroud;
- (void)hideAfterDelay:(double)arg1;
- (void)showInView:(id)arg1 andHideAfterDelay:(double)arg2;
- (void)showAndHideAfterDelay:(double)arg1;
- (void)show;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

