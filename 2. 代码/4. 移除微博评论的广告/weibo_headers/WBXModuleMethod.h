//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXBridgeMethod.h"

@class NSDictionary, NSString;

@interface WBXModuleMethod : WBXBridgeMethod
{
    unsigned long long _methodType;
    NSString *_moduleName;
    NSDictionary *_options;
}

@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
- (void).cxx_destruct;
- (void)_dispatchInvocation:(id)arg1 moduleInstance:(id)arg2;
- (id)invoke;
- (id)initWithModuleName:(id)arg1 methodName:(id)arg2 arguments:(id)arg3 options:(id)arg4 page:(id)arg5 app:(id)arg6;

@end

