//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMMActionSheetControlDelegate-Protocol.h"

@class NSArray, NSString, UIControl, XMMStack;

@interface XMMActionSheetView : UIView <XMMActionSheetControlDelegate>
{
    _Bool _bgViewPopEnabled;
    NSArray *_actions;
    XMMStack *_sheetStack;
    UIControl *_bgViewControl;
}

@property(retain, nonatomic) UIControl *bgViewControl; // @synthesize bgViewControl=_bgViewControl;
@property(retain, nonatomic) XMMStack *sheetStack; // @synthesize sheetStack=_sheetStack;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool bgViewPopEnabled; // @synthesize bgViewPopEnabled=_bgViewPopEnabled;
- (void).cxx_destruct;
- (void)actionSheetControlDidSelectClose:(id)arg1;
- (void)actionSheetControl:(id)arg1 didSelected:(id)arg2;
- (void)didClose;
- (void)show;
- (void)showInView:(id)arg1;
- (void)hide;
- (void)pop;
- (void)push:(id)arg1;
- (id)addSheetControlWithActions:(id)arg1;
- (void)bgViewControlAction;
- (void)baseCustomInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

