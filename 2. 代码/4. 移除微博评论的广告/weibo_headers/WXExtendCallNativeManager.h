//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface WXExtendCallNativeManager : NSObject
{
    NSLock *_configLock;
    NSMutableDictionary *_names;
}

+ (id)sendExtendCallNativeEvent:(id)arg1;
+ (Class)classWithExtendCallNativeName:(id)arg1;
+ (void)registerExtendCallNative:(id)arg1 withClass:(Class)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *names; // @synthesize names=_names;
- (void).cxx_destruct;
- (id)initPrivate;

@end

