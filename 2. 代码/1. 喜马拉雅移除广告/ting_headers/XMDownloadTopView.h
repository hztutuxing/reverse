//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XMDownloadTopView : UIView
{
    UILabel *_soundSizeLabel;
    UILabel *_label1;
    UIImageView *_imageView;
    UILabel *_label2;
    UIView *_progressView;
}

+ (double)height;
- (void).cxx_destruct;
- (void)showSoundSize;
- (void)hideSoundSize;
- (void)showMessage:(id)arg1;
- (void)showSortList;
- (void)hideSortList;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

