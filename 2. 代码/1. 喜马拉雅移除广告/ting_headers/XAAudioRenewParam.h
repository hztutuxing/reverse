//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XAAudioRenewParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _loop;
    _Bool _obeyMuteSwitch;
    _Bool _autoplay;
    NSString *_audioId;
    NSString *_slaveId;
    NSString *_src;
    double _startTime;
    double _volume;
}

@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

