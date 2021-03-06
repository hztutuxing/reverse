//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UITextView, UIView, XMAlbumItem, XMWebImageView;

@interface XMHwAlbumInfoCell : UITableViewCell
{
    UIImageView *_coverBgImageView;
    XMWebImageView *_coverImageView;
    UIImageView *_novelFinishImageView;
    UILabel *_nickNameLabel;
    XMWebImageView *_photoImgView;
    UIImageView *_trackMarkView;
    UILabel *_trackLabel;
    UITextView *_introTextView;
    UIImageView *_albumMaskView;
    _Bool _isBind;
    XMAlbumItem *albumItem;
    UIView *_tabView;
}

+ (double)cellHeight;
@property(nonatomic) _Bool isBind; // @synthesize isBind=_isBind;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) XMWebImageView *photoImageView; // @synthesize photoImageView=_photoImgView;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)customInit;
- (void)dealloc;

@end

