//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

#import "WBTextRendererDelegate-Protocol.h"
#import "WBTextRendererEventDelegate-Protocol.h"

@class NSMutableArray, NSString, WBStatusSubViewModel, WBTextRenderer;
@protocol WBStatusSubTextViewDelegate;

@interface WBStatusSubTextView : WBAsyncDrawingView <WBTextRendererDelegate, WBTextRendererEventDelegate>
{
    _Bool _highlighted;
    _Bool _disableTextLinkHighlight;
    WBStatusSubViewModel *_viewModel;
    id <WBStatusSubTextViewDelegate> _delegate;
    WBTextRenderer *_respondTextRenderer;
    unsigned long long _touchingItemIndex;
    NSMutableArray *_attachments;
    NSMutableArray *_attachmentViews;
    struct WBStatusViewModelRenderVersion _viewModelRenderVersion;
}

@property(retain, nonatomic) NSMutableArray *attachmentViews; // @synthesize attachmentViews=_attachmentViews;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) struct WBStatusViewModelRenderVersion viewModelRenderVersion; // @synthesize viewModelRenderVersion=_viewModelRenderVersion;
@property(nonatomic) unsigned long long touchingItemIndex; // @synthesize touchingItemIndex=_touchingItemIndex;
@property(retain, nonatomic) WBTextRenderer *respondTextRenderer; // @synthesize respondTextRenderer=_respondTextRenderer;
@property(nonatomic) _Bool disableTextLinkHighlight; // @synthesize disableTextLinkHighlight=_disableTextLinkHighlight;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak id <WBStatusSubTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBStatusSubViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)wbt_debugDescription;
- (void)postWillJumpToDetailMessageIfNeed;
- (void)addUnionAreaFlagForParameters:(id)arg1;
- (void)didPressOtherTouchableItem:(unsigned long long)arg1 params:(id)arg2;
- (unsigned long long)cellResponseTypeWithTouchableItemIndex:(unsigned long long)arg1;
- (void)postItemDidPressedMessageWithPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inView:(id)arg4 userInfo:(id)arg5;
- (struct CGRect)pressedItemAttachmentPointIsQuoted:(_Bool)arg1 Rect:(struct CGRect)arg2;
- (struct CGRect)pressedItemaAttachmentPointInWindow:(id)arg1;
- (void)adClickeStatisticsWithActionCode:(id)arg1 actionEvent:(unsigned long long)arg2;
- (void)addExtParametersTo:(id)arg1 withStatus:(id)arg2;
- (void)pressedTimelineURL:(id)arg1;
- (void)didPressShowPictures:(id)arg1 inView:(id)arg2;
- (id)timelineURLForScheme:(id)arg1;
- (id)schemeForMiniCardActiveRange:(id)arg1 andAttributedText:(id)arg2;
- (void)didPressUrlLink:(id)arg1;
- (void)didPressTopicName:(id)arg1;
- (id)schemeForTopicName:(id)arg1;
- (id)getTopicByTopicName:(id)arg1;
- (void)didPressUserName:(id)arg1;
- (void)pressedActiveRange:(id)arg1 inText:(id)arg2;
- (_Bool)textRenderer:(id)arg1 shouldInteractWithActiveRange:(id)arg2;
- (void)textRenderer:(id)arg1 didPressActiveRange:(id)arg2;
- (id)activeRangesForTextRenderer:(id)arg1;
- (id)contextViewForTextRenderer:(id)arg1;
- (void)textRenderer:(id)arg1 placeAttachment:(id)arg2 frame:(struct CGRect)arg3 context:(struct CGContext *)arg4;
- (void)removeAttachmentViews;
- (id)getLargeCardViewIfHave;
- (void)addAttachmentViews;
- (id)rendererAtPoint:(struct CGPoint)arg1;
- (id)textRenderers;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)checkNeedToDrawUnionAreaHightlightedFeedback:(id)arg1;
- (void)otherTouchableItemLongPressed:(unsigned long long)arg1;
- (void)longTouchAtPoint:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (unsigned long long)touchingOtherTouchableItemIndex:(struct CGPoint)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool enableAsyncDrawing;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (void)drawingWillStartAsynchronously:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

