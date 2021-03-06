//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CAGradientLayer, UIButton, UILabel, XMDubPerson, XMWebImageView;
@protocol XMDubUserWorkHeaderDelegate;

@interface XMDubUserWorkHeader : UICollectionReusableView
{
    id <XMDubUserWorkHeaderDelegate> _delegate;
    XMDubPerson *_model;
    XMWebImageView *_imageView;
    UILabel *_nickLabel;
    UILabel *_despLabel;
    UIButton *_followButton;
    CAGradientLayer *_followBtnLayer;
    UILabel *_titleView;
    UIButton *_communityBtn;
    UILabel *_zanLabel;
    UILabel *_fansLabel;
    UILabel *_followsLabel;
}

@property(retain, nonatomic) UILabel *followsLabel; // @synthesize followsLabel=_followsLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *zanLabel; // @synthesize zanLabel=_zanLabel;
@property(retain, nonatomic) UIButton *communityBtn; // @synthesize communityBtn=_communityBtn;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) CAGradientLayer *followBtnLayer; // @synthesize followBtnLayer=_followBtnLayer;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) XMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) XMDubPerson *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMDubUserWorkHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)communityBtnClicked;
- (void)onTapUser;
- (void)onFollow;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

