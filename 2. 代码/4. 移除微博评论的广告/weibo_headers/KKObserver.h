//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, KKKeyObserver, NSMutableDictionary;

@interface KKObserver : NSObject
{
    KKKeyObserver *_keyObserver;
    long long _priorityDesc;
    long long _priorityAsc;
    NSMutableDictionary *_object;
    KKObserver *_parent;
    JSContext *_jsContext;
}

+ (void)setMainJSContext:(id)arg1;
+ (id)mainJSContext;
@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(nonatomic) __weak KKObserver *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSMutableDictionary *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)off:(id)arg1 fn:(id)arg2 context:(void *)arg3;
- (void)onEvaluateScript:(id)arg1 fn:(id)arg2 context:(void *)arg3;
- (void)on:(id)arg1 fn:(id)arg2 context:(void *)arg3;
- (id)evaluateScript:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)set:(id)arg1 value:(id)arg2;
- (id)get:(id)arg1 defaultValue:(id)arg2;
- (void)changeKeys:(id)arg1;
- (void)off:(CDUnknownBlockType)arg1 keys:(id)arg2 context:(void *)arg3;
- (void)on:(CDUnknownBlockType)arg1 keys:(id)arg2 context:(void *)arg3;
- (void)on:(CDUnknownBlockType)arg1 keys:(id)arg2 children:(_Bool)arg3 priority:(long long)arg4 context:(void *)arg5;
- (void)on:(CDUnknownBlockType)arg1 keys:(id)arg2 children:(_Bool)arg3 context:(void *)arg4;
- (void)on:(CDUnknownBlockType)arg1 evaluateScript:(id)arg2 priority:(long long)arg3 context:(void *)arg4;
- (void)on:(CDUnknownBlockType)arg1 evaluateScript:(id)arg2 context:(void *)arg3;
- (void)on:(CDUnknownBlockType)arg1 evaluateScript:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)init;
- (id)initWithJSContext:(id)arg1 object:(id)arg2;
- (id)initWithJSContext:(id)arg1;
- (id)newObserver;
- (unsigned long long)count;
- (void)dealloc;

@end

