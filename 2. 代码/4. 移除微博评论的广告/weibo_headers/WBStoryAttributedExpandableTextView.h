//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryTimelineAttributedTextView.h"

@class WBTimelineAttributedText;
@protocol WBStoryAttributedExpandableTextViewDelegate;

@interface WBStoryAttributedExpandableTextView : WBStoryTimelineAttributedTextView
{
    _Bool _isPublishTweetEnable;
    id <WBStoryAttributedExpandableTextViewDelegate> _st_delegate;
    WBTimelineAttributedText *_contentText;
}

@property(nonatomic) _Bool isPublishTweetEnable; // @synthesize isPublishTweetEnable=_isPublishTweetEnable;
@property(retain, nonatomic) WBTimelineAttributedText *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) __weak id <WBStoryAttributedExpandableTextViewDelegate> st_delegate; // @synthesize st_delegate=_st_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textFoldBtnPressed:(id)arg1;
- (void)updateAttributeTextViewWithSegment:(id)arg1 maxLine:(long long)arg2 maxWidth:(double)arg3;
- (void)updateTextContentView:(id)arg1 maxWidth:(double)arg2 maxLine:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

