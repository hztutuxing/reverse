//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UILabel, XMDubShowMSLandPageHeaderViewModel, XMWebImageView;

@interface XMDubShowMSLandPageHeaderView : UIView
{
    XMDubShowMSLandPageHeaderViewModel *_model;
    UIButton *_startPlayButton;
    CDUnknownBlockType _clickPlayButton;
    CDUnknownBlockType _clickTagWithModel;
    UILabel *_titleLabel;
    XMWebImageView *_tagWebImageView;
    UIView *_dotPoint1;
    UILabel *_deductionLabel;
    UIView *_tagsView;
    NSMutableArray *_tagButtonsArray;
    UIView *_sepLine;
}

+ (double)pageHeaderViewHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) NSMutableArray *tagButtonsArray; // @synthesize tagButtonsArray=_tagButtonsArray;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *deductionLabel; // @synthesize deductionLabel=_deductionLabel;
@property(retain, nonatomic) UIView *dotPoint1; // @synthesize dotPoint1=_dotPoint1;
@property(retain, nonatomic) XMWebImageView *tagWebImageView; // @synthesize tagWebImageView=_tagWebImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType clickTagWithModel; // @synthesize clickTagWithModel=_clickTagWithModel;
@property(copy, nonatomic) CDUnknownBlockType clickPlayButton; // @synthesize clickPlayButton=_clickPlayButton;
@property(retain, nonatomic) UIButton *startPlayButton; // @synthesize startPlayButton=_startPlayButton;
@property(retain, nonatomic) XMDubShowMSLandPageHeaderViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)clickTagButton:(id)arg1;
- (void)generateTagButtonsWithTags:(id)arg1;
- (void)p_handleStartPlayAction:(id)arg1;
- (void)addStartButtonSpace;
- (void)addSopaSpace;
- (void)addStarSpace;
- (void)addTitleSpace;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

