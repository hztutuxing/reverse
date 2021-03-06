//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView;

@interface CRImageBrowserCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    id _data;
    CDUnknownBlockType _dissmissBrowser;
    UIImageView *_mainImageView;
}

@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(copy, nonatomic) CDUnknownBlockType dissmissBrowser; // @synthesize dissmissBrowser=_dissmissBrowser;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)_respondsToTapSingle:(id)arg1;
- (void)addGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

