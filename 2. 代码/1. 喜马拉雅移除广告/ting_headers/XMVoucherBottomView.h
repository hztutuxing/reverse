//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIButton, UILabel;

@interface XMVoucherBottomView : UIView
{
    NSAttributedString *_title;
    CDUnknownBlockType _done;
    UIButton *_doneButton;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) CDUnknownBlockType done; // @synthesize done=_done;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)doneClick:(id)arg1;
- (void)initUI;
- (void)layoutSubviews;
- (id)init;

@end

