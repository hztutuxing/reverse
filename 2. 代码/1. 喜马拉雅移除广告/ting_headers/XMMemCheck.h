//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XMMemCheck : NSObject
{
    NSMutableDictionary *_allViewControllerDict;
}

+ (id)shareInstance;
+ (id)getVersion;
@property(retain, nonatomic) NSMutableDictionary *allViewControllerDict; // @synthesize allViewControllerDict=_allViewControllerDict;
- (void).cxx_destruct;
- (void)delayCheckMem:(id)arg1;
- (void)checkNavigationViewController:(id)arg1;
- (void)checkViewController:(id)arg1;
- (void)enableLog:(_Bool)arg1;
- (void)enableAssertLeak:(_Bool)arg1;
- (void)memoryMonitorCheck:(id)arg1;
- (void)setIgnoreDeallocClassArray:(id)arg1;
- (void)setIgnoreNavigationControllersArray:(id)arg1;
- (void)setIgnoreNotificationNameArray:(id)arg1 withIgnoreNotificationClassArray:(id)arg2;
- (void)registerMonitorClassArray:(id)arg1 withIgnoreClassArray:(id)arg2;
- (void)registerMonitorDelegate:(id)arg1;
- (id)getCurrentViewControllerStack;
- (id)classes;
- (id)init;

@end

