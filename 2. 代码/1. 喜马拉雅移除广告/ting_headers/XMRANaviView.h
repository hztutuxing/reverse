//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMNPTitleViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, XMNowPlayingTitleView, XMPicButton;
@protocol XMRANaviViewDelegate;

@interface XMRANaviView : UIView <XMNPTitleViewDelegate>
{
    UIButton *_backButton;
    UIButton *_headsetButton;
    UIButton *_shareButton;
    UILabel *_titleLB;
    UIButton *_moreButton;
    _Bool _isLandscape;
    _Bool _isNoCopyright;
    _Bool _isShow;
    _Bool _isDubShow;
    _Bool _isSoundComic;
    _Bool _isShowShareWhenLandscape;
    _Bool _showTopBar;
    _Bool _showPlayingBtn;
    id <XMRANaviViewDelegate> _delegate;
    CDUnknownBlockType _onPlayingAction;
    unsigned long long _viewType;
    XMPicButton *_playingBtn;
    XMNowPlayingTitleView *_titleView;
}

+ (double)viewHeight:(_Bool)arg1;
@property(nonatomic) _Bool showPlayingBtn; // @synthesize showPlayingBtn=_showPlayingBtn;
@property(nonatomic) _Bool showTopBar; // @synthesize showTopBar=_showTopBar;
@property(retain, nonatomic) XMNowPlayingTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) XMPicButton *playingBtn; // @synthesize playingBtn=_playingBtn;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType onPlayingAction; // @synthesize onPlayingAction=_onPlayingAction;
@property(nonatomic) _Bool isShowShareWhenLandscape; // @synthesize isShowShareWhenLandscape=_isShowShareWhenLandscape;
@property(nonatomic) _Bool isSoundComic; // @synthesize isSoundComic=_isSoundComic;
@property(nonatomic) _Bool isDubShow; // @synthesize isDubShow=_isDubShow;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isNoCopyright; // @synthesize isNoCopyright=_isNoCopyright;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) __weak id <XMRANaviViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateDisplayStatus;
- (void)updateDisplayStatus:(_Bool)arg1;
- (void)topBarRefreshWithShow:(_Bool)arg1;
- (void)onPlay;
- (void)onMore;
- (void)onShare;
- (void)onHeadset;
- (void)onBack;
- (void)onPlaying;
- (void)layoutSubviews;
- (void)setPlayingBtnHidden:(_Bool)arg1;
- (void)addRightButton;
- (void)addLeftButton;
- (void)updateTitle:(id)arg1;
@property(readonly, nonatomic) UIButton *backButton;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

