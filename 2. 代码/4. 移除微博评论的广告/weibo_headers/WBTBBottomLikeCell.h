//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBottomButtonCell.h"

@class UILabel, UIView;

@interface WBTBBottomLikeCell : YXLiveBottomButtonCell
{
    unsigned long long _likeCount;
    UIView *_bgView;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (void).cxx_destruct;
- (id)getNumWith:(long long)arg1;
- (void)updateSubViewConstraints;
- (void)viewUpdateConstraints;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

