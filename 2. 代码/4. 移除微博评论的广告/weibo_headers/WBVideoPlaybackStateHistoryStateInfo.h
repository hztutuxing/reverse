//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBVideoPlaybackStateHistoryStateInfo : NSObject
{
    long long _state;
    NSArray *_records;
    double _cachedDuration;
}

@property(nonatomic) double cachedDuration; // @synthesize cachedDuration=_cachedDuration;
@property(readonly, copy, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) double totalDuration;
- (void)appendRecord:(id)arg1;
- (id)initWithState:(long long)arg1;

@end

