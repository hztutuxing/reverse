//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLDiversionAppStoreView.h"

#import "WBNLDiversionViewable-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIControl, UIImageView, UILabel, UIView;
@protocol WBNLDiversionViewDelegate;

@interface WBNLDiversionView : WBNLDiversionAppStoreView <WBNLDiversionViewable>
{
    _Bool _onlyContainsTitle;
    UILabel *_desLabel;
    NSString *_buttonLabel;
    NSString *_title;
    NSString *_top_icon;
    NSArray *_sub_title;
    id <WBNLDiversionViewDelegate> _delegate;
    UIView *_bgView;
    UIButton *_button;
    UIControl *_tapControl;
    UIImageView *_iconView;
    NSMutableArray *_redHotViews;
    long long _btnAnimationCnt;
    NSMutableArray *_subTitleLabels;
}

@property(nonatomic) _Bool onlyContainsTitle; // @synthesize onlyContainsTitle=_onlyContainsTitle;
@property(retain, nonatomic) NSMutableArray *subTitleLabels; // @synthesize subTitleLabels=_subTitleLabels;
@property(nonatomic) long long btnAnimationCnt; // @synthesize btnAnimationCnt=_btnAnimationCnt;
@property(retain, nonatomic) NSMutableArray *redHotViews; // @synthesize redHotViews=_redHotViews;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIControl *tapControl; // @synthesize tapControl=_tapControl;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <WBNLDiversionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sub_title; // @synthesize sub_title=_sub_title;
@property(copy, nonatomic) NSString *top_icon; // @synthesize top_icon=_top_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
- (void).cxx_destruct;
- (_Bool)isShow;
- (void)dismissInView:(id)arg1;
- (void)buttonAnimation;
- (void)titleConfig;
- (double)heightForContent;
- (void)showOpenYizhiboViewInView:(id)arg1;
- (void)tapOnSpace:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (id)mask;
- (id)createSubTitleLabel;
- (id)createRedHotView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

