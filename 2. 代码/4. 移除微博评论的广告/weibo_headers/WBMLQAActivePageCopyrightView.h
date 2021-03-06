//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WBMLQAActivePageCopyrightView : UIView
{
    UIButton *_rankButton;
    UIButton *_ruleButton;
    UILabel *_delimiterLabel;
    UILabel *_recordLabel;
    CDUnknownBlockType _rankCallBack;
    CDUnknownBlockType _ruleCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType ruleCallBack; // @synthesize ruleCallBack=_ruleCallBack;
@property(copy, nonatomic) CDUnknownBlockType rankCallBack; // @synthesize rankCallBack=_rankCallBack;
@property(retain, nonatomic) UILabel *recordLabel; // @synthesize recordLabel=_recordLabel;
@property(retain, nonatomic) UILabel *delimiterLabel; // @synthesize delimiterLabel=_delimiterLabel;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) UIButton *rankButton; // @synthesize rankButton=_rankButton;
- (void).cxx_destruct;
- (void)setRankButtonText:(id)arg1 ruleButtonText:(id)arg2 copyrightText:(id)arg3;
- (void)copyrightCallBackRankAction:(CDUnknownBlockType)arg1 ruleAction:(CDUnknownBlockType)arg2;
- (void)buttonActionWithSender:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

