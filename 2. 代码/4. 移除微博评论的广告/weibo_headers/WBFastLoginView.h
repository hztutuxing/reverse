//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBEasyBaseView.h"

#import "TTTAttributedLabelDelegate-Protocol.h"
#import "TencentLoginDelegate-Protocol.h"
#import "TencentSessionDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBWechatLoginDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, TencentOAuth, UIActivityIndicatorView, UIButton, UILabel, UIView, WBStyleButton;
@protocol WBEasyLoginViewDelegate;

@interface WBFastLoginView : WBEasyBaseView <UITextFieldDelegate, TencentLoginDelegate, TencentSessionDelegate, WBWechatLoginDelegate, TTTAttributedLabelDelegate>
{
    _Bool _isTencentOAuthing;
    id <WBEasyLoginViewDelegate> _loginDelegate;
    CDUnknownBlockType _cancelBlock;
    NSString *_luiCode;
    NSString *_uiCode;
    long long _loginViewType;
    UIView *_contentView;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    WBStyleButton *_fastLoginButton;
    UIButton *_smsLoginTypeButton;
    UIButton *_passwordLoginTypeButton;
    UIActivityIndicatorView *_indicatorView;
    UIView *_iconContentView;
    TTTAttributedLabel *_protocolLabel;
    double _contentWidth;
    TencentOAuth *_tencentOAuth;
}

@property(nonatomic) _Bool isTencentOAuthing; // @synthesize isTencentOAuthing=_isTencentOAuthing;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) TTTAttributedLabel *protocolLabel; // @synthesize protocolLabel=_protocolLabel;
@property(retain, nonatomic) UIView *iconContentView; // @synthesize iconContentView=_iconContentView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIButton *passwordLoginTypeButton; // @synthesize passwordLoginTypeButton=_passwordLoginTypeButton;
@property(retain, nonatomic) UIButton *smsLoginTypeButton; // @synthesize smsLoginTypeButton=_smsLoginTypeButton;
@property(retain, nonatomic) WBStyleButton *fastLoginButton; // @synthesize fastLoginButton=_fastLoginButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long loginViewType; // @synthesize loginViewType=_loginViewType;
@property(retain, nonatomic) NSString *uiCode; // @synthesize uiCode=_uiCode;
@property(retain, nonatomic) NSString *luiCode; // @synthesize luiCode=_luiCode;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) __weak id <WBEasyLoginViewDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
- (void).cxx_destruct;
- (void)openCUMProtocolH5;
- (void)openCMCCProtocolH5;
- (void)openTYProtocolH5;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)wechatDidNotLogin;
- (void)wechatDidLoginWithCode:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (long long)lastInterceptadDaysFromNow:(id)arg1;
- (void)wechatLoginButtonClick;
- (void)qqLoginButtonClick;
- (void)passwordLoginTypeButtonClick;
- (void)smsLoginTypeButtonClick;
- (void)quickLoginAlertErrorWithMsg:(id)arg1;
- (void)loadloginEngineWithAccessToken:(id)arg1;
- (void)fastloginClick;
- (void)cancelButtonClick;
- (void)stopIndicatorView;
- (void)startIndicatorViewInView:(id)arg1;
- (id)getAnalysisParameters;
- (void)removeThisView;
- (void)dismissAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)showContentViewWithAnimation;
- (void)showContentView;
- (void)showEasyView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configTitle:(id)arg1;
- (void)getPhoneNumber;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

