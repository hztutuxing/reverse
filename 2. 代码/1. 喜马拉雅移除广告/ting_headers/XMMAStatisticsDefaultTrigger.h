//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMAStatisticsCollectorDelegate-Protocol.h"
#import "XMMAStatisticsTriggerProtocol-Protocol.h"

@class NSString, XMMAStatisticsDefaultTriggerConfiguration, XMMAStatisticsReportTransaction;
@protocol OS_dispatch_queue, OS_dispatch_source, XMMAStatisticsCollectorProtocol, XMMAStatisticsTriggerDelegate;

@interface XMMAStatisticsDefaultTrigger : NSObject <XMMAStatisticsCollectorDelegate, XMMAStatisticsTriggerProtocol>
{
    id <XMMAStatisticsCollectorProtocol> _collector;
    XMMAStatisticsDefaultTriggerConfiguration *_config;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    XMMAStatisticsReportTransaction *_currentProcessingReportTransaction;
    id <XMMAStatisticsTriggerDelegate> delegate;
}

@property(nonatomic) __weak id <XMMAStatisticsTriggerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)statisticsCollector:(id)arg1 recordDidAdd:(id)arg2;
- (void)dealloc;
- (void)setupTriggerTimer;
- (void)triggerReport;
- (id)createReportTransaction;
- (id)initWithCollector:(id)arg1 config:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

