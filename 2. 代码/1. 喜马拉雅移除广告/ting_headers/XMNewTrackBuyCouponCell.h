//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, XMCoupon, XMTableCellObject, XMWebImageView;

@interface XMNewTrackBuyCouponCell : UITableViewCell
{
    UILabel *_couponLabel;
    UIImageView *_divideLine;
    UILabel *_priceLabel;
    UILabel *_introLabel;
    UILabel *_xiDianLabel;
    UIButton *_getButton;
    XMCoupon *_coupon;
    XMTableCellObject *_cellObject;
    XMWebImageView *_bkg;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMWebImageView *bkg; // @synthesize bkg=_bkg;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMCoupon *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) UIButton *getButton; // @synthesize getButton=_getButton;
@property(retain, nonatomic) UILabel *xiDianLabel; // @synthesize xiDianLabel=_xiDianLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
- (void).cxx_destruct;
- (id)getXiDianLabel;
- (id)getCouponLabel;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)setup;
- (void)getCouponDidClick;
- (void)changeTheme:(int)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

