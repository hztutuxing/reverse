//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, XMAdItem, XMFeedAdView;

@protocol XMFeedAdViewDelegate <NSObject>

@optional
- (void)willOpenUrlWithItem:(XMAdItem *)arg1;
- (void)needThirdAd:(XMFeedAdView *)arg1;
- (void)openUrlView:(NSURL *)arg1;
- (void)showFeedAdView:(XMFeedAdView *)arg1;
- (void)feedAdViewWillClose:(XMFeedAdView *)arg1;
@end

