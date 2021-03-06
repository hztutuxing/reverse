//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIImageView, XMPlayGameAlertView;

@interface XMPlayGameViewController : UIViewController
{
    UIActivityIndicatorView *_activeView;
    XMPlayGameAlertView *_noPlayGameAlert;
    UIImageView *_launchImgView;
    UIImageView *_repairImgView;
}

@property(retain, nonatomic) UIImageView *repairImgView; // @synthesize repairImgView=_repairImgView;
@property(retain, nonatomic) UIImageView *launchImgView; // @synthesize launchImgView=_launchImgView;
@property(retain, nonatomic) XMPlayGameAlertView *noPlayGameAlert; // @synthesize noPlayGameAlert=_noPlayGameAlert;
@property(retain, nonatomic) UIActivityIndicatorView *activeView; // @synthesize activeView=_activeView;
- (void).cxx_destruct;
- (_Bool)deviceHasLength:(double)arg1;
- (id)lauchImageNamed:(id)arg1;
- (void)PlayGameAlertView:(id)arg1 didClickType:(int)arg2;
- (void)endActiveLoading;
- (void)startActiveLoading;
- (void)resetAndRelaunch;
- (void)alertNoPlayGame;
- (void)alertNeedReQuery;
- (void)alertNeedReDownload;
- (void)showAlertNeedRepair;
- (void)showActiveView;
- (void)showRepairView;
- (void)showLaunchView;
- (void)viewDidLoad;
- (void)dealloc;

@end

