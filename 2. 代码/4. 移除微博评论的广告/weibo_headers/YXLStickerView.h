//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, YXLTextStickerView;
@protocol YXLStickerViewDelegate;

@interface YXLStickerView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _locked;
    YXLTextStickerView *_stickerImageView;
    YXLTextStickerView *_textStickerView;
    UIView *_bgMaskView;
    NSMutableArray *_stickerArray;
    id <YXLStickerViewDelegate> _delegate;
    CDUnknownBlockType _panCompletionBlock;
    CDUnknownBlockType _pinCompletoinBlock;
    double _totalImageStickerRotation;
    double _totalTextStickerRotation;
    NSString *_selectedStickerId;
    long long _currentStickerType;
    UIView *_currentSuperView;
    double _totalScale;
    UIView *_dragableArea;
    NSString *_currentStickerText;
}

@property(copy, nonatomic) NSString *currentStickerText; // @synthesize currentStickerText=_currentStickerText;
@property(retain, nonatomic) UIView *dragableArea; // @synthesize dragableArea=_dragableArea;
@property(nonatomic) double totalScale; // @synthesize totalScale=_totalScale;
@property(nonatomic) __weak UIView *currentSuperView; // @synthesize currentSuperView=_currentSuperView;
@property(nonatomic) long long currentStickerType; // @synthesize currentStickerType=_currentStickerType;
@property(copy, nonatomic) NSString *selectedStickerId; // @synthesize selectedStickerId=_selectedStickerId;
@property(nonatomic) double totalTextStickerRotation; // @synthesize totalTextStickerRotation=_totalTextStickerRotation;
@property(nonatomic) double totalImageStickerRotation; // @synthesize totalImageStickerRotation=_totalImageStickerRotation;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(copy, nonatomic) CDUnknownBlockType pinCompletoinBlock; // @synthesize pinCompletoinBlock=_pinCompletoinBlock;
@property(copy, nonatomic) CDUnknownBlockType panCompletionBlock; // @synthesize panCompletionBlock=_panCompletionBlock;
@property(nonatomic) __weak id <YXLStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *stickerArray; // @synthesize stickerArray=_stickerArray;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) YXLTextStickerView *textStickerView; // @synthesize textStickerView=_textStickerView;
@property(retain, nonatomic) YXLTextStickerView *stickerImageView; // @synthesize stickerImageView=_stickerImageView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)swipe;
- (void)dismissView;
- (void)inputKeyboardShow:(double)arg1;
- (void)rotationAction:(id)arg1;
- (void)handlePinAction:(id)arg1;
- (void)didChangeStickerType:(long long)arg1;
- (void)didSelectSticker:(id)arg1;
- (void)changeStickerType:(long long)arg1;
- (void)showCommentInputView;
- (void)showInView:(id)arg1 stickerArray:(id)arg2 delegate:(id)arg3;
- (void)updateSticker:(id)arg1 inView:(id)arg2;
- (void)updateTextStickerWithText:(id)arg1;
- (void)audienceUpdateSticker:(id)arg1 inView:(id)arg2;
- (void)resetStatus;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

