//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XMActivityGuideView : UIView
{
    UILabel *_textLB;
    UIImageView *_rightIV;
    CDUnknownBlockType _touchBlock;
    UIImageView *_arrowIV;
}

+ (double)height;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) UIImageView *rightIV; // @synthesize rightIV=_rightIV;
@property(retain, nonatomic) UILabel *textLB; // @synthesize textLB=_textLB;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

