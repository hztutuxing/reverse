//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber;

@interface SDLTouchEventCapabilities : SDLRPCStruct
{
}

@property(retain) NSNumber *doublePressAvailable;
@property(retain) NSNumber *multiTouchAvailable;
@property(retain) NSNumber *pressAvailable;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

