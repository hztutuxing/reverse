//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKScrollViewElement.h"

@class KKElementView, KKViewElement, UITapGestureRecognizer;

@interface KKSlideViewElement : KKScrollViewElement
{
    KKElementView *_curElementView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (void)initialize;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void).cxx_destruct;
- (void)addSubview:(id)arg1 element:(id)arg2 toView:(id)arg3;
- (void)updateAnchor:(_Bool)arg1;
@property(readonly, nonatomic) KKElementView *curElementView; // @synthesize curElementView=_curElementView;
- (void)changedKey:(id)arg1;
- (void)setView:(id)arg1;
@property(readonly, nonatomic) KKViewElement *curElement;
- (void)tapAction:(id)arg1;

@end

