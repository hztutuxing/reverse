//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XAAppInstallManagerInstallParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_type;
    NSString *_url;
    NSString *_appId;
    NSString *_name;
    NSString *_onProgressUpdate;
    NSString *_cb;
}

@property(copy, nonatomic) NSString *cb; // @synthesize cb=_cb;
@property(copy, nonatomic) NSString *onProgressUpdate; // @synthesize onProgressUpdate=_onProgressUpdate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

