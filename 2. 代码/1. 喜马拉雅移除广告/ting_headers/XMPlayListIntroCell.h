//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UILabel;

@interface XMPlayListIntroCell : XMTableViewCell
{
    UILabel *_listName;
    UILabel *_listDescription;
}

+ (double)heightWithDataSource:(id)arg1;
@property(retain, nonatomic) UILabel *listDescription; // @synthesize listDescription=_listDescription;
@property(retain, nonatomic) UILabel *listName; // @synthesize listName=_listName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

