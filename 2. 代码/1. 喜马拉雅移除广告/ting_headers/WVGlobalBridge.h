//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface WVGlobalBridge : NSObject
{
    NSMutableDictionary *_dynamicClasses;
    NSMutableDictionary *_handlers;
    NSDictionary *_dynamicFrameworks;
}

+ (id)getOldDynamicMethodName:(id)arg1;
+ (id)getDynamicMethodName:(id)arg1;
+ (void)addAlias:(id)arg1 to:(id)arg2;
+ (_Bool)isDynamicHandlerSecure:(Class)arg1 withHandlerName:(id)arg2;
+ (_Bool)shouldHackHandler:(id)arg1;
+ (id)findHandlerUnsafe:(id *)arg1 withLocalHandlers:(id)arg2;
+ (void)registerAlias:(id)arg1;
+ (void)registerClassName:(id)arg1 withClass:(Class)arg2;
+ (void)registerHandler:(id)arg1 withInfo:(id)arg2;
+ (id)sharedInstance;
+ (id)queue;
@property(copy, nonatomic) NSDictionary *dynamicFrameworks; // @synthesize dynamicFrameworks=_dynamicFrameworks;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSMutableDictionary *dynamicClasses; // @synthesize dynamicClasses=_dynamicClasses;
- (void).cxx_destruct;
- (Class)getDynaicmFrameworkClass:(id)arg1;
- (id)getDynaicmHandler:(id *)arg1;
- (id)findHandlerUnsafe:(id *)arg1 withLocalHandlers:(id)arg2;
- (id)init;

@end

