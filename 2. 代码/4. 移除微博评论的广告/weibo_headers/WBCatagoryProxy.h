//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBCatagoryProxy : NSObject
{
    id target;
    NSString *protocolName;
}

+ (id)instanceWithTarget:(id)arg1 protocolName:(id)arg2;
+ (void)invoke:(id)arg1;
+ (id)methodSigForSel:(SEL)arg1 instanceMethod:(_Bool)arg2 catagoryOwner:(id)arg3;
+ (_Bool)resolveCatagoryMethodSel:(SEL)arg1 instanceMethod:(_Bool)arg2 toCatagoryOwner:(id)arg3;
+ (void)_parseClass:(Class)arg1;
+ (void)_parseMethod:(Class)arg1 protocol:(id)arg2;
+ (void)register;
+ (id)classMethodIndex;
+ (id)instanceMethodIndex;
+ (id)map;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_dispatch:(id)arg1 arg2:(id)arg2 arg3:(id)arg3 arg4:(id)arg4 arg5:(id)arg5 arg6:(id)arg6 arg7:(id)arg7 arg8:(id)arg8 arg9:(id)arg9 arg10:(id)arg10 arg11:(id)arg11;

@end

