//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, XMCommunityModel, XMWebImageView;

@interface XMUserCommunityCell : UITableViewCell
{
    XMCommunityModel *_communityModel;
    UIView *_backView;
    XMWebImageView *_webImageView;
    UILabel *_titleLabel;
    UIImageView *_tagImageView;
    UILabel *_subTitleLabel;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) XMCommunityModel *communityModel; // @synthesize communityModel=_communityModel;
- (void).cxx_destruct;
- (void)p_setUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

