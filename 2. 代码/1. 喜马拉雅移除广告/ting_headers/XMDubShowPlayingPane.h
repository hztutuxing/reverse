//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, UIImageView, UILabel, UIPanGestureRecognizer, UIScrollView;
@protocol XMDubShowPlayingPaneDelegate;

@interface XMDubShowPlayingPane : UIView
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableSet *_shouldRecognizeToFailSet;
    UIView *_contentView;
    UILabel *_titleLabel;
    id <XMDubShowPlayingPaneDelegate> _delagte;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <XMDubShowPlayingPaneDelegate> delagte; // @synthesize delagte=_delagte;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)contentViewMoveTo:(double)arg1;
- (void)onPanGR:(id)arg1;
- (void)addPanGRWithScrollView:(id)arg1;
- (void)onCloseViewTapGR:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)dealloc;

@end

