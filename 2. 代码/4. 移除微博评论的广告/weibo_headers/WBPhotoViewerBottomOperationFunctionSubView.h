//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PhotoFunctionBottomBt;
@protocol WBPhotoViewerBottomOperationFunctionSubViewDelegate;

@interface WBPhotoViewerBottomOperationFunctionSubView : UIView
{
    PhotoFunctionBottomBt *functionButton;
    id <WBPhotoViewerBottomOperationFunctionSubViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WBPhotoViewerBottomOperationFunctionSubViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)functionButtonHidden;
- (void)showFunctionView:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)tapFuncButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

