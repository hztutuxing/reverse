//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton, XMDubShowFilterConvViewModel, XMDubShowMaterialFilterView;

@interface XMDubShowFilterConvView : UIView
{
    XMDubShowFilterConvViewModel *_filterModel;
    CDUnknownBlockType _clickAction;
    CDUnknownBlockType _clickFilterAction;
    UIButton *_nButton;
    CAGradientLayer *_nButtonGL;
    UIButton *_hotButton;
    CAGradientLayer *_hotButtonGL;
    UIButton *_selectButton;
    XMDubShowMaterialFilterView *_filterView;
}

@property(retain, nonatomic) XMDubShowMaterialFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) CAGradientLayer *hotButtonGL; // @synthesize hotButtonGL=_hotButtonGL;
@property(retain, nonatomic) UIButton *hotButton; // @synthesize hotButton=_hotButton;
@property(retain, nonatomic) CAGradientLayer *nButtonGL; // @synthesize nButtonGL=_nButtonGL;
@property(retain, nonatomic) UIButton *nButton; // @synthesize nButton=_nButton;
@property(copy, nonatomic) CDUnknownBlockType clickFilterAction; // @synthesize clickFilterAction=_clickFilterAction;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) XMDubShowFilterConvViewModel *filterModel; // @synthesize filterModel=_filterModel;
- (void).cxx_destruct;
- (void)resizeUIFrame;
- (void)updateAllButtons;
- (void)p_handleSelectButton;
- (void)toActionHot;
- (void)toActionNew;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

