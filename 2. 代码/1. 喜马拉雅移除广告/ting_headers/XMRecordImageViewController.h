//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIAlertView, UILabel, UIScrollView;

@interface XMRecordImageViewController : XMBaseViewController <UIAlertViewDelegate, UIScrollViewDelegate>
{
    UIScrollView *_bgScrollView;
    int _currentSeclectIndex;
    UILabel *_label;
    NSMutableArray *imageDataArray;
    id delegate;
    UIAlertView *myAlertView;
    NSMutableArray *_imageFileArray;
}

@property(retain, nonatomic) NSMutableArray *imageFileArray; // @synthesize imageFileArray=_imageFileArray;
@property(retain, nonatomic) UIAlertView *myAlertView; // @synthesize myAlertView;
@property(nonatomic) int curIndex; // @synthesize curIndex=_currentSeclectIndex;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *imageDataArray; // @synthesize imageDataArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delImage;
- (void)reloadViews;
- (void)scrollViewEnd:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)imageFileArray:(id)arg1;
- (void)imageDataArray:(id)arg1;
- (void)touch;
- (void)back;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

