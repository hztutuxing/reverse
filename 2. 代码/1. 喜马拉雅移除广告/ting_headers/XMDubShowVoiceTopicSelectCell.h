//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, XMDubShowVoiceTopicSelectItemModel, XMWebImageView;

@interface XMDubShowVoiceTopicSelectCell : UITableViewCell
{
    XMDubShowVoiceTopicSelectItemModel *_model;
    XMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) XMDubShowVoiceTopicSelectItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

