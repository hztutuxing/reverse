//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface XMPayResp : NSObject
{
    long long _errCode;
    NSString *_errStr;
    long long _type;
    NSDictionary *_responseObject;
    NSError *_error;
    long long _retCode;
    NSString *_orderNo;
}

@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *responseObject; // @synthesize responseObject=_responseObject;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;

@end

