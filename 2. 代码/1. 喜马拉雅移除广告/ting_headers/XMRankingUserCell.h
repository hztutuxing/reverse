//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIImageView, UILabel, XMPersonItem, XMWebImageView;

@interface XMRankingUserCell : XMTableViewCell
{
    UILabel *_indexLab;
    XMWebImageView *_coverImageView;
    UILabel *_titleLab;
    UILabel *_describeLabel;
    UIImageView *_verifiedLogoImageView;
    UIImageView *_moreIndicator;
    UIImageView *_fansImgView;
    UILabel *_fansLabel;
    XMPersonItem *_person;
}

+ (double)height;
@property(retain, nonatomic) XMPersonItem *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)customInit;
- (void)dealloc;

@end

