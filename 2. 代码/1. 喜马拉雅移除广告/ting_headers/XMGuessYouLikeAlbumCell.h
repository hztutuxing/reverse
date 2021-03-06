//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIButton, UIImageView, UILabel, XMAlbumRecCellModel, YYLabel;
@protocol XMGuessYouLikeAlbumCellDelegate;

@interface XMGuessYouLikeAlbumCell : UICollectionViewCell
{
    XMAlbumRecCellModel *_model;
    id <XMGuessYouLikeAlbumCellDelegate> _delegate;
    UIImageView *_coverView;
    YYLabel *_titleLabel;
    YYLabel *_countLabel;
    YYLabel *_playCountLabel;
    UILabel *_recReasonLabel;
    UIButton *_moreButton;
    UIImageView *_payIcon;
    CAGradientLayer *_gradLayer;
}

+ (id)titleLayoutWithModel:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) CAGradientLayer *gradLayer; // @synthesize gradLayer=_gradLayer;
@property(retain, nonatomic) UIImageView *payIcon; // @synthesize payIcon=_payIcon;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *recReasonLabel; // @synthesize recReasonLabel=_recReasonLabel;
@property(retain, nonatomic) YYLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) YYLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <XMGuessYouLikeAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMAlbumRecCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setup;
- (void)layoutSubviews;
- (void)longPress:(id)arg1;
- (void)moreDidClick:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

