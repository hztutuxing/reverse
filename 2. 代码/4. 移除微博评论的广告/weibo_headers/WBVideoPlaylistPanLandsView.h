//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer;

@interface WBVideoPlaylistPanLandsView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _panGestureEnabled;
    int _positionType;
    double _subViewTop;
    double _minTop;
    double _midTop;
    double _maxTop;
    double _maginBottom;
    CDUnknownBlockType _panActionBlock;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType panActionBlock; // @synthesize panActionBlock=_panActionBlock;
@property(nonatomic) int positionType; // @synthesize positionType=_positionType;
@property(nonatomic) _Bool panGestureEnabled; // @synthesize panGestureEnabled=_panGestureEnabled;
@property(nonatomic) double maginBottom; // @synthesize maginBottom=_maginBottom;
@property(nonatomic) double maxTop; // @synthesize maxTop=_maxTop;
@property(nonatomic) double midTop; // @synthesize midTop=_midTop;
@property(nonatomic) double minTop; // @synthesize minTop=_minTop;
@property(nonatomic) double subViewTop; // @synthesize subViewTop=_subViewTop;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)panAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)creatPanGestureWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 subViews:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

