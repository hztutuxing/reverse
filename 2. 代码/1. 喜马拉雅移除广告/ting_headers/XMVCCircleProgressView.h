//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor, XMVCCirclePath;

@interface XMVCCircleProgressView : UIView
{
    double _lineWidth;
    double _progress;
    UIColor *_bgCircleColor;
    UIColor *_fgCircleColor;
    UIView *_circleView;
    XMVCCirclePath *_bgCirclePath;
    CAShapeLayer *_bgCircleLayer;
    XMVCCirclePath *_circlePath;
    CAShapeLayer *_circleLayer;
}

@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) XMVCCirclePath *circlePath; // @synthesize circlePath=_circlePath;
@property(retain, nonatomic) CAShapeLayer *bgCircleLayer; // @synthesize bgCircleLayer=_bgCircleLayer;
@property(retain, nonatomic) XMVCCirclePath *bgCirclePath; // @synthesize bgCirclePath=_bgCirclePath;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIColor *fgCircleColor; // @synthesize fgCircleColor=_fgCircleColor;
@property(retain, nonatomic) UIColor *bgCircleColor; // @synthesize bgCircleColor=_bgCircleColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

