//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface WBXApplicationKeepAliveManager : NSObject
{
    NSMutableDictionary *_cachedVCs;
    NSMutableDictionary *_cachedApp;
    NSMutableDictionary *_intanceIdAppIdDic;
    NSTimer *_cachedAppCheckTimer;
    NSMutableArray *_checkingAppQueue;
    unsigned long long _maxAppCacheCount;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxAppCacheCount; // @synthesize maxAppCacheCount=_maxAppCacheCount;
- (void).cxx_destruct;
- (_Bool)addAndShowChildVCOfInstanceId:(id)arg1 toVC:(id)arg2;
- (_Bool)addAndShowChildVC:(id)arg1 toVC:(id)arg2;
- (_Bool)removeChildVCOfInstanceId:(id)arg1 fromVC:(id)arg2 allowRemoveCache:(_Bool)arg3;
- (_Bool)removeWrapperVC:(id)arg1 fromVC:(id)arg2;
- (void)cacheAppVC:(id)arg1 byInstanceId:(id)arg2;
- (id)getCachedAppVCByInstancId:(id)arg1;
- (void)cacheApp:(id)arg1 byInstancId:(id)arg2;
- (id)getCachedAppByAppId:(id)arg1;
- (id)getCachedAppByInstancId:(id)arg1;
- (void)stopAndClearCache;
- (void)checkCachedVC;
- (void)addAppToCheckingQueue:(id)arg1;
- (void)removeAppFromCheckingQueue:(id)arg1;
- (void)removeCacheOfInstanceId:(id)arg1;
- (void)checkCachedApp;
- (void)dealloc;
- (id)init;

@end

