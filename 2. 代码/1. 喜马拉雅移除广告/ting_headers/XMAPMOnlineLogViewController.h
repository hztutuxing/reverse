//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "XMAPMRealTimeLogDelegate-Protocol.h"

@class NSString, UIButton;

@interface XMAPMOnlineLogViewController : UIViewController <XMAPMRealTimeLogDelegate>
{
    UIButton *_realTimeLogBtn;
    CDUnknownBlockType _statusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
- (void).cxx_destruct;
- (void)onRealTimeLogStatusChange:(long long)arg1 message:(id)arg2;
- (void)handRealTimeStatus:(long long)arg1 message:(id)arg2;
- (void)checkNetwork;
- (void)realtimelog;
- (void)shareLog;
- (void)shareUI:(id)arg1 path:(id)arg2;
- (void)uploadLog;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

