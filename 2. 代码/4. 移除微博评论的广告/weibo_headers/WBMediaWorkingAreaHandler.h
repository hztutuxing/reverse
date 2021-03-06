//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, WBMediaWorkingAreaDetector, WBViewController;

@interface WBMediaWorkingAreaHandler : NSObject
{
    NSMutableDictionary *_viewWrappers;
    WBViewController *_viewController;
    WBMediaWorkingAreaDetector *_detector;
    NSMapTable *_listeners;
}

@property(retain, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) WBMediaWorkingAreaDetector *detector; // @synthesize detector=_detector;
@property(nonatomic) __weak WBViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)_viewWrappersForOptions:(unsigned long long)arg1 forced:(_Bool)arg2;
- (void)_updateWithOptions:(unsigned long long)arg1 forced:(_Bool)arg2;
- (void)update:(_Bool)arg1;
- (void)_anounceDidExitWorkingAreaWithWrapper:(id)arg1 forOption:(unsigned long long)arg2;
- (void)_anounceWillExitWorkingAreaWithWrapper:(id)arg1 forOption:(unsigned long long)arg2;
- (void)_anounceDidEnterWorkingAreaWithWrapper:(id)arg1 forOption:(unsigned long long)arg2;
- (void)_anounceWillEnterWorkingAreaWithWrapper:(id)arg1 forOption:(unsigned long long)arg2;
- (id)_listenersForOptions:(unsigned long long)arg1;
- (void)_enumrateListenersWithBlock:(CDUnknownBlockType)arg1 forProtocol:(unsigned long long)arg2;
- (void)removeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)registeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)_clearViewWrappers;
- (void)notifyViewControllerStateChanged;
- (void)didEnterBackground:(id)arg1;
- (void)didEnterForeground:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)dealloc;

@end

