//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUBannerAdView, BUNativeAd, NSArray, NSError;

@protocol BUBannerAdViewDelegate <NSObject>

@optional
- (void)bannerAdViewDidCloseOtherController:(BUBannerAdView *)arg1 interactionType:(long long)arg2;
- (void)bannerAdView:(BUBannerAdView *)arg1 dislikeWithReason:(NSArray *)arg2;
- (void)bannerAdViewDidClick:(BUBannerAdView *)arg1 WithAdmodel:(BUNativeAd *)arg2;
- (void)bannerAdViewDidBecomVisible:(BUBannerAdView *)arg1 WithAdmodel:(BUNativeAd *)arg2;
- (void)bannerAdView:(BUBannerAdView *)arg1 didLoadFailWithError:(NSError *)arg2;
- (void)bannerAdViewDidLoad:(BUBannerAdView *)arg1 WithAdmodel:(BUNativeAd *)arg2;
@end

