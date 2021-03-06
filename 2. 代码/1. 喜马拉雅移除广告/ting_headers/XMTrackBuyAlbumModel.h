//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XMCoupon, XMVipPromotionMessageItem;

@interface XMTrackBuyAlbumModel : NSObject
{
    _Bool _isVip;
    _Bool _isRefunding;
    _Bool _isSupportCoupon;
    _Bool _isRefundable;
    _Bool _checkIsBindMPhone;
    unsigned long long _albumId;
    NSString *_albumTitle;
    long long _totalTrackCount;
    long long _curTrackCount;
    double _price;
    double _discountPrice;
    double _albumVipPrice;
    double _vipRate;
    NSString *_desc;
    NSString *_vipGuideInfo;
    long long _grouponStatus;
    XMCoupon *_defaultCoupon;
    long long _couponCount;
    NSString *_refundRule;
    NSArray *_vochers;
    XMVipPromotionMessageItem *_vipPromotionMessageVo;
}

@property(retain, nonatomic) XMVipPromotionMessageItem *vipPromotionMessageVo; // @synthesize vipPromotionMessageVo=_vipPromotionMessageVo;
@property(retain, nonatomic) NSArray *vochers; // @synthesize vochers=_vochers;
@property(nonatomic) _Bool checkIsBindMPhone; // @synthesize checkIsBindMPhone=_checkIsBindMPhone;
@property(copy, nonatomic) NSString *refundRule; // @synthesize refundRule=_refundRule;
@property(nonatomic) _Bool isRefundable; // @synthesize isRefundable=_isRefundable;
@property(nonatomic) long long couponCount; // @synthesize couponCount=_couponCount;
@property(retain, nonatomic) XMCoupon *defaultCoupon; // @synthesize defaultCoupon=_defaultCoupon;
@property(nonatomic) _Bool isSupportCoupon; // @synthesize isSupportCoupon=_isSupportCoupon;
@property(nonatomic) long long grouponStatus; // @synthesize grouponStatus=_grouponStatus;
@property(nonatomic) _Bool isRefunding; // @synthesize isRefunding=_isRefunding;
@property(copy, nonatomic) NSString *vipGuideInfo; // @synthesize vipGuideInfo=_vipGuideInfo;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) double vipRate; // @synthesize vipRate=_vipRate;
@property(nonatomic) double albumVipPrice; // @synthesize albumVipPrice=_albumVipPrice;
@property(nonatomic) double discountPrice; // @synthesize discountPrice=_discountPrice;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long curTrackCount; // @synthesize curTrackCount=_curTrackCount;
@property(nonatomic) long long totalTrackCount; // @synthesize totalTrackCount=_totalTrackCount;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *trackTitle;
- (void)updatePropertiesWithDict:(id)arg1;
- (void)dealloc;

@end

