//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, XMWeKeComment;

@interface XMWeKeCmtContentView : UIView
{
    _Bool _isLeftStyle;
    _Bool _isQuestionReplyed;
    UIView *attachView;
    XMWeKeComment *_comment;
    UILabel *_tipLabel;
    UILabel *_questionLabel;
    UIView *_verticalLine;
    UIView *_horizontalLine;
    struct UIEdgeInsets _hitTestEdgeOutsets;
}

@property(nonatomic) _Bool isQuestionReplyed; // @synthesize isQuestionReplyed=_isQuestionReplyed;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool isLeftStyle; // @synthesize isLeftStyle=_isLeftStyle;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeOutsets; // @synthesize hitTestEdgeOutsets=_hitTestEdgeOutsets;
@property(retain, nonatomic) XMWeKeComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *attachView; // @synthesize attachView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

