//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXLiveBaseTraceLogger.h"

@class NSString;

@interface YXLiveWBLiveTraceLogger : YXLiveBaseTraceLogger
{
    double _enterRoomTime;
    NSString *_schmma;
}

@property(retain, nonatomic) NSString *schmma; // @synthesize schmma=_schmma;
@property(nonatomic) double enterRoomTime; // @synthesize enterRoomTime=_enterRoomTime;
- (void).cxx_destruct;
- (void)sendLogger;
- (id)formatTime:(id)arg1;
- (void)setLiveType:(id)arg1;
- (void)setContainerId:(id)arg1;
- (void)setRouteScheme:(id)arg1;
- (id)getTraceID;

@end

