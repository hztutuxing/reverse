//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMLiveGuardianTag : XMModel
{
    long long _dailyReduction;
    long long _friendship;
    long long _grade;
    NSString *_goldUrl;
    NSString *_iconUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *goldUrl; // @synthesize goldUrl=_goldUrl;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
@property(nonatomic) long long friendship; // @synthesize friendship=_friendship;
@property(nonatomic) long long dailyReduction; // @synthesize dailyReduction=_dailyReduction;

@end

