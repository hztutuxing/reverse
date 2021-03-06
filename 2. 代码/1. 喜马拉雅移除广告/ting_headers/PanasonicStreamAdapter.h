//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "streamSourceDelegate-Protocol.h"

@class AQHAP, StreamSource;

@interface PanasonicStreamAdapter : NSObject <streamSourceDelegate>
{
    StreamSource *_streamSource;
    id _delegate;
    AQHAP *_hap;
}

@property(retain) AQHAP *hap; // @synthesize hap=_hap;
@property(retain) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)asyncReadMessage;
- (long long)write:(char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)hasSpaceAvailable;
- (id)initWithHAP:(id)arg1;

@end

