//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLDebug : NSObject
{
    _Bool _debugMode;
}

+ (void)logWarn:(id)arg1;
+ (void)logError:(id)arg1;
+ (void)logInfo:(id)arg1;
+ (void)setDebugMode:(_Bool)arg1;
+ (_Bool)debugMode;
+ (id)sharedInstance;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;

@end

