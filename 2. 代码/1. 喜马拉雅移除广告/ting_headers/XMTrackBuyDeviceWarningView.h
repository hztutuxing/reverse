//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTrackBuyView.h"

@class UIButton, UIImageView, UILabel;

@interface XMTrackBuyDeviceWarningView : XMTrackBuyView
{
    UIImageView *_stateBg;
    UILabel *_stateLab;
    UILabel *_netStateLab;
    UIButton *_deviceBuyBtn;
    UIButton *_loginFirstBtn;
}

+ (struct CGSize)size;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onLoginFirst;
- (void)onDeviceBuy;
- (void)customDeviceWarningInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

