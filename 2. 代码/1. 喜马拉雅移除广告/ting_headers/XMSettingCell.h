//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIImageView;

@interface XMSettingCell : XMTableViewCell
{
    _Bool hot;
    _Bool arrow;
    _Bool txtCenter;
    UIImageView *hotImageView;
    double maxDetailLabelLength;
}

@property(nonatomic) _Bool txtCenter; // @synthesize txtCenter;
@property(nonatomic) double maxDetailLabelLength; // @synthesize maxDetailLabelLength;
@property(nonatomic) _Bool arrow; // @synthesize arrow;
@property(nonatomic) _Bool hot; // @synthesize hot;
@property(retain, nonatomic) UIImageView *hotImageView; // @synthesize hotImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

