//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAGradientLayer, TYAttributedLabel, UIImageView, UILabel, XMAlbumImageView, XMAlbumItem, XMAlbumRecCellModel, XMFeedsFlowInfoView;

@interface XMUserAlbumsSubCell : UITableViewCell
{
    XMAlbumItem *_albumItem;
    XMAlbumRecCellModel *_cellModel;
    XMAlbumImageView *_coverImageView;
    UIImageView *_shadowImageView;
    CAGradientLayer *_gradientLayer;
    TYAttributedLabel *_albumTitleTYLab;
    UILabel *_introLabel;
    XMFeedsFlowInfoView *_infoView;
    UIImageView *_shadowView;
}

@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) XMFeedsFlowInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) TYAttributedLabel *albumTitleTYLab; // @synthesize albumTitleTYLab=_albumTitleTYLab;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) XMAlbumImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMAlbumRecCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (void)p_makeConstraints;
- (void)p_setUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

