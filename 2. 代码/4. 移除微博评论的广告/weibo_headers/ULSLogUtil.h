//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSTimer, ULSLog, ULSLogService, ULSRoom;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ULSLogUtil : NSObject
{
    NSObject<OS_dispatch_queue> *queueForUXLog;
    NSString *_ispName;
    NSString *_ipAddress;
    NSArray *_logCacheArray;
    ULSLog *_log;
    ULSLogService *_logService;
    ULSLogService *_log2Service;
    ULSRoom *_room;
    NSMutableArray *_logsInMemory;
    NSTimer *_reportTimer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (void)uls_addLog:(id)arg1;
+ (void)addLog:(id)arg1;
+ (void)addWeiboDownloadTypeLog:(id)arg1;
+ (void)addWeiboOpenTypeLog:(id)arg1;
+ (void)addWeiboFirstClickTypeLog:(id)arg1;
+ (void)ulsAddWeiboTypeLogPath:(id)arg1;
+ (id)logMessage;
+ (void)setupLog;
+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSTimer *reportTimer; // @synthesize reportTimer=_reportTimer;
@property(retain) NSMutableArray *logsInMemory; // @synthesize logsInMemory=_logsInMemory;
@property(retain, nonatomic) ULSRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) ULSLogService *log2Service; // @synthesize log2Service=_log2Service;
@property(retain, nonatomic) ULSLogService *logService; // @synthesize logService=_logService;
@property(retain, nonatomic) ULSLog *log; // @synthesize log=_log;
@property(retain, nonatomic) NSArray *logCacheArray; // @synthesize logCacheArray=_logCacheArray;
@property(copy) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(copy) NSString *ispName; // @synthesize ispName=_ispName;
- (void).cxx_destruct;
- (void)reportToServer;
- (void)uploadRequest:(id)arg1;
- (void)resaveLogsToPlist:(id)arg1;
- (void)uls_addLog:(id)arg1;
- (id)syncQueue;
- (id)subItems;
- (void)p_addLog:(id)arg1;
- (id)init;
- (id)currentQueue;
- (void)removeCurrentRoom;
- (void)setCurrentRoom:(id)arg1;

@end

