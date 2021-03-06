//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMPopViewContainerDelegate-Protocol.h"
#import "XMPopViewProtocol-Protocol.h"

@class NSString, UIColor, XMPopViewContainer;
@protocol XMPopSubviewDelegate;

@interface XMPopSubview : UIView <XMPopViewContainerDelegate, XMPopViewProtocol>
{
    _Bool _needWithBottonSafeInset;
    _Bool _isShowing;
    _Bool _autoSizeWithSubFrame;
    _Bool _canTouchToHide;
    _Bool _canDraggable;
    id <XMPopSubviewDelegate> _popDelegate;
    NSString *_popTitle;
    UIColor *_popBackgroundColor;
    unsigned long long _style;
    XMPopViewContainer *_popContainer;
}

+ (id)popDarkColor;
+ (id)popLightColor;
@property(retain, nonatomic) XMPopViewContainer *popContainer; // @synthesize popContainer=_popContainer;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool canDraggable; // @synthesize canDraggable=_canDraggable;
@property(nonatomic) _Bool canTouchToHide; // @synthesize canTouchToHide=_canTouchToHide;
@property(nonatomic) _Bool autoSizeWithSubFrame; // @synthesize autoSizeWithSubFrame=_autoSizeWithSubFrame;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool needWithBottonSafeInset; // @synthesize needWithBottonSafeInset=_needWithBottonSafeInset;
@property(retain, nonatomic) UIColor *popBackgroundColor; // @synthesize popBackgroundColor=_popBackgroundColor;
@property(copy, nonatomic) NSString *popTitle; // @synthesize popTitle=_popTitle;
@property(nonatomic) __weak id <XMPopSubviewDelegate> popDelegate; // @synthesize popDelegate=_popDelegate;
- (void).cxx_destruct;
- (void)onViewHide;
- (_Bool)containerCanHandleGesture:(id)arg1;
- (void)containerDidTouchOutsideHide:(id)arg1;
- (void)containerDidHide:(id)arg1;
- (void)containerDidShow:(id)arg1;
- (_Bool)canHandleDragGesture:(id)arg1;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)showWithAnimate:(_Bool)arg1;
- (id)initPopFromView:(id)arg1;
- (id)initWithController:(id)arg1 title:(id)arg2;
- (id)initWithController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

