//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSPointerArray;

@interface COTuple : NSObject <NSFastEnumeration>
{
    NSPointerArray *storage;
}

- (void)dealloc;
- (void)unpack:(id *)arg1;
- (id)third;
- (id)second;
- (id)first;
- (id)objectAtIndex:(int)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithObjects:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;
- (int)count;
- (void)_setStorage:(id)arg1;
- (id)_storage;

@end

