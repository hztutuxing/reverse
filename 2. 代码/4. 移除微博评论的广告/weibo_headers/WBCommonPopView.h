//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBCommonButtonViewDelegate-Protocol.h"

@class CAGradientLayer, NSDictionary, NSString, UIControl, UIWindow, WBContactAvatarView;
@protocol WBCommonPopViewDelegate;

@interface WBCommonPopView : UIView <WBCommonButtonViewDelegate>
{
    UIWindow *baseWindow;
    _Bool _showing;
    _Bool _isDismiss;
    _Bool _checkBoxSelected;
    id <WBCommonPopViewDelegate> _delegate;
    UIControl *_dimView;
    UIView *_baseView;
    UIView *_containerView;
    WBContactAvatarView *_avatarView;
    CAGradientLayer *_shadowLayer;
    NSDictionary *_popInfo;
}

@property(nonatomic) _Bool checkBoxSelected; // @synthesize checkBoxSelected=_checkBoxSelected;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(copy, nonatomic) NSDictionary *popInfo; // @synthesize popInfo=_popInfo;
@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) UIControl *dimView; // @synthesize dimView=_dimView;
@property(readonly, nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(nonatomic) __weak id <WBCommonPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getVerticalLine;
- (id)getLable:(id)arg1;
- (id)getCommonButton:(id)arg1;
- (id)getCutLabelView:(id)arg1;
- (id)getLabelView:(id)arg1;
- (id)getCommonButtonView:(id)arg1;
- (void)deleteButtonBeClicked:(id)arg1;
- (void)checkboxAction:(id)arg1;
- (void)commonButtonView:(id)arg1 didStartButtonActionWithModel:(id)arg2;
- (_Bool)commonButtonView:(id)arg1 handleCommonButtonPressedWithModel:(id)arg2;
- (void)commonButtonInView:(id)arg1 action:(id)arg2;
- (void)notifyCountdownButton:(id)arg1;
- (void)removeAllViews;
- (void)dismissAnimate:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)showInView:(id)arg1;
- (void)configViews;
- (id)initWithPopInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

