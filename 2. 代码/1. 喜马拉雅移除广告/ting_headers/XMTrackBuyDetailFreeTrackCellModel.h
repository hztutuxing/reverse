//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString;

@interface XMTrackBuyDetailFreeTrackCellModel : NSObject <XMTableCellModelProtocol>
{
    _Bool _highlightTitle;
    long long _index;
    NSString *_trackTitle;
    long long _duration;
    long long _soundNumber;
}

@property(nonatomic) long long soundNumber; // @synthesize soundNumber=_soundNumber;
@property(nonatomic) _Bool highlightTitle; // @synthesize highlightTitle=_highlightTitle;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

