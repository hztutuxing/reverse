//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface XMPersonEditButtonProgressView : UIView
{
    UIView *_trackView;
    UIView *_progressView;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    double _progress;
    UIImageView *_progressDot;
}

@property(retain, nonatomic) UIImageView *progressDot; // @synthesize progressDot=_progressDot;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *trackView; // @synthesize trackView=_trackView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

