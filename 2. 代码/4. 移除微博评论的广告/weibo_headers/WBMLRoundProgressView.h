//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, CAShapeLayer, UIBezierPath, UIColor;

@interface WBMLRoundProgressView : UIView
{
    double _lineWidth;
    UIColor *_strokColor;
    unsigned long long _duration;
    CAShapeLayer *_shapeLayer;
    UIBezierPath *_bezierPath;
    CABasicAnimation *_progressAnimation;
}

+ (Class)layerClass;
@property(retain, nonatomic) CABasicAnimation *progressAnimation; // @synthesize progressAnimation=_progressAnimation;
@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *strokColor; // @synthesize strokColor=_strokColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

