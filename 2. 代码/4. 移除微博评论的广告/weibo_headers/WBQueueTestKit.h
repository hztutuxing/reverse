//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBQueueJobDelegate-Protocol.h"

@class NSString, WBSendMblogJob;
@protocol OS_dispatch_semaphore;

@interface WBQueueTestKit : NSObject <WBQueueJobDelegate>
{
    WBSendMblogJob *_job;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)testKit;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) WBSendMblogJob *job; // @synthesize job=_job;
- (void).cxx_destruct;
- (void)jobSendFinished:(id)arg1;
- (id)loadMediaCachesFromAlbum:(id)arg1 number:(unsigned long long)arg2;
- (void)addImagesWith:(unsigned long long)arg1 preSend:(_Bool)arg2 highQuality:(_Bool)arg3;
- (void)startCase;
- (void)startTest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

