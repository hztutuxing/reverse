//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMPPTNaviViewDelegate-Protocol.h"
#import "XMPPTProgressViewDelegate-Protocol.h"
#import "XMRAPicViewDelegate-Protocol.h"
#import "XMRAThumbViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, XMNoRichAudioView, XMPPTNaviView, XMPPTProgressView, XMRAPicView, XMRAThumbView, XMSoundItem, XMVideoToastView;
@protocol XMNowPlayingPPTFullScreenViewDelegate;

@interface XMNowPlayingPPTFullScreenView : UIView <XMPPTNaviViewDelegate, XMPPTProgressViewDelegate, XMRAThumbViewDelegate, XMRAPicViewDelegate>
{
    _Bool _isLandscape;
    _Bool _isShowConsole;
    _Bool _isLocked;
    XMSoundItem *_sound;
    id <XMNowPlayingPPTFullScreenViewDelegate> _delegate;
    NSArray *_insetMArr;
    NSArray *_lyricMArr;
    XMPPTNaviView *_pptNaviView;
    XMRAPicView *_picView;
    XMRAThumbView *_thumbView;
    XMPPTProgressView *_progressView;
    XMNoRichAudioView *_noRAView;
    UIView *_danmuContainer;
    UIView *_danmuTableView;
    UILabel *_titleLB;
    UIView *_lyricBG;
    UILabel *_lyricLB;
    UIButton *_landscapeBtn;
    UIButton *_lockBtn;
    XMVideoToastView *_videoToastView;
}

@property(retain, nonatomic) XMVideoToastView *videoToastView; // @synthesize videoToastView=_videoToastView;
@property(retain, nonatomic) UIButton *lockBtn; // @synthesize lockBtn=_lockBtn;
@property(retain, nonatomic) UIButton *landscapeBtn; // @synthesize landscapeBtn=_landscapeBtn;
@property(retain, nonatomic) UILabel *lyricLB; // @synthesize lyricLB=_lyricLB;
@property(retain, nonatomic) UIView *lyricBG; // @synthesize lyricBG=_lyricBG;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIView *danmuTableView; // @synthesize danmuTableView=_danmuTableView;
@property(retain, nonatomic) UIView *danmuContainer; // @synthesize danmuContainer=_danmuContainer;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) _Bool isShowConsole; // @synthesize isShowConsole=_isShowConsole;
@property(retain, nonatomic) XMNoRichAudioView *noRAView; // @synthesize noRAView=_noRAView;
@property(retain, nonatomic) XMPPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) XMRAThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) XMRAPicView *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) XMPPTNaviView *pptNaviView; // @synthesize pptNaviView=_pptNaviView;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSArray *lyricMArr; // @synthesize lyricMArr=_lyricMArr;
@property(retain, nonatomic) NSArray *insetMArr; // @synthesize insetMArr=_insetMArr;
@property(nonatomic) __weak id <XMNowPlayingPPTFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (void)progressViewOnProcessBarValueChanged:(id)arg1;
- (void)progressViewSendDanma:(id)arg1 lanscape:(_Bool)arg2;
- (void)progressView:(id)arg1 landscapeButtonPressed:(id)arg2 lanscape:(_Bool)arg3;
- (void)progressView:(id)arg1 danmaButtonPressed:(id)arg2 danma:(_Bool)arg3;
- (void)progressView:(id)arg1 playButtonPressed:(id)arg2 play:(_Bool)arg3;
- (void)PPTNaviViewOnBack;
- (void)RAThumbViewOnViewMore;
- (void)RAThumbViewOnThumbItem:(long long)arg1;
- (void)updateProgressCompletedTime;
- (void)XMProcessBarDidTracking:(id)arg1;
- (void)XMProcessBarDidEndTracking:(id)arg1;
- (void)XMProcessBarDidBeginTracking:(id)arg1;
- (void)XMProcessBarDidTap:(id)arg1;
- (void)lockOpenOrClose:(id)arg1;
- (void)onThumb;
- (void)resetSelfDisplayStatus:(long long)arg1;
- (void)resetSelfDisplayStatus;
- (void)resetSelfDisplayStatusImmediately;
- (void)XMRAPicViewOnChangeText:(id)arg1;
- (void)videoPanGR:(id)arg1;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

