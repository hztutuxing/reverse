//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIWindow;

@interface WBUGUserTaskView : UIView
{
    _Bool _imageNeedFitSize;
    UIView *_contentView;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_confirmButton;
    UIButton *_closeButton;
    UIWindow *_showWindow;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _dismissBlock;
}

+ (id)alertViewWithText:(id)arg1 subTitle:(id)arg2 confirmTitle:(id)arg3;
+ (void)showAlertViewWithText:(id)arg1 subTitle:(id)arg2 confirmTitle:(id)arg3 completeBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
+ (void)showAlertViewWithImage:(id)arg1 closeImage:(id)arg2 CompleteBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
+ (void)showAlertViewWithImage:(id)arg1 CompleteBlock:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) UIWindow *showWindow; // @synthesize showWindow=_showWindow;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)pulse;
- (void)show;
- (void)closeButtonPressed:(id)arg1;
- (void)confirmButtonPressed:(id)arg1;
- (void)bgTap:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViewsForText:(id)arg1 subTitle:(id)arg2 confirmTitle:(id)arg3;
- (void)initSubViewForImage:(id)arg1;
- (id)initWithText:(id)arg1 subTitle:(id)arg2 confirmTitle:(id)arg3;

@end

