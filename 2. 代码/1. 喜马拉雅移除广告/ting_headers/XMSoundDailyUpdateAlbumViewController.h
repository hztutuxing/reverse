//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UILabel, UIView, XMSegmentControl, XMSoundDailyUpdateAlbumPrsenter, XMVXPageViewController;

@interface XMSoundDailyUpdateAlbumViewController : XMBaseVC
{
    XMSoundDailyUpdateAlbumPrsenter *_presenter;
    UIView *_headerView;
    UIView *_tipBackView;
    UILabel *_tipLabel;
    XMSegmentControl *_segmentControl;
    XMVXPageViewController *_pageViewController;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) XMVXPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) XMSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *tipBackView; // @synthesize tipBackView=_tipBackView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMSoundDailyUpdateAlbumPrsenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)p_updatePresenter;
- (void)p_setUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

@end

