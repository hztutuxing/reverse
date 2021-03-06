//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface LiveRoomGoodsPickerCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_maskView;
    UILabel *_priceLabel;
    UIView *_actionView;
    UILabel *_goodsNumLabel;
    UIImageView *_footprintView;
    UIView *_tagBgView;
    NSString *_itemId;
    CDUnknownBlockType _callback;
}

+ (id)reusableIdentify;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) UIView *tagBgView; // @synthesize tagBgView=_tagBgView;
@property(retain, nonatomic) UIImageView *footprintView; // @synthesize footprintView=_footprintView;
@property(retain, nonatomic) UILabel *goodsNumLabel; // @synthesize goodsNumLabel=_goodsNumLabel;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_pressOnCell:(id)arg1;
- (void)refreshWithModel:(id)arg1 itemIndex:(long long)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

