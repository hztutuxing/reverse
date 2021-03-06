//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface YXLiveCommentCommonTaskCell : UITableViewCell
{
    NSString *_title;
    NSString *_icon;
    CAGradientLayer *_bgLayer;
    UIImageView *_arrowView;
    UILabel *_contentLabel;
    UIImageView *_yzbView;
}

@property(retain, nonatomic) UIImageView *yzbView; // @synthesize yzbView=_yzbView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) CAGradientLayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)iPhoneSE;
- (void)initView;
- (double)taskCellHeight;
- (void)reloadUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

