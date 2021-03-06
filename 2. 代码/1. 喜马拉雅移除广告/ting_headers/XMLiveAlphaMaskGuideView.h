//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, UIColor;
@protocol XMLiveAlphaMaskGuideViewDelegate;

@interface XMLiveAlphaMaskGuideView : UIView
{
    _Bool _tapAnywhereToNext;
    _Bool _dismissWhenTapTheLast;
    id <XMLiveAlphaMaskGuideViewDelegate> _delegate;
    UIColor *_bgAlphaColor;
    CAShapeLayer *_bgLayer;
    NSArray *_masks;
    long long _maskIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long maskIndex; // @synthesize maskIndex=_maskIndex;
@property(retain, nonatomic) NSArray *masks; // @synthesize masks=_masks;
@property(retain, nonatomic) CAShapeLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(nonatomic) _Bool dismissWhenTapTheLast; // @synthesize dismissWhenTapTheLast=_dismissWhenTapTheLast;
@property(nonatomic) _Bool tapAnywhereToNext; // @synthesize tapAnywhereToNext=_tapAnywhereToNext;
@property(retain, nonatomic) UIColor *bgAlphaColor; // @synthesize bgAlphaColor=_bgAlphaColor;
@property(nonatomic) __weak id <XMLiveAlphaMaskGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)showInView:(id)arg1 withGuardMasks:(id)arg2;
- (void)displayMaskAtIndex:(long long)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

