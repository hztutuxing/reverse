//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonButtonAction.h"

@class SNHTTPRequestOperationWrapper;

@interface WBCommonQARewardAskButtonContext : WBCommonButtonAction
{
    SNHTTPRequestOperationWrapper *_wrapper;
}

@property(retain, nonatomic) SNHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void).cxx_destruct;
- (void)actionFinished:(id)arg1;
- (void)doAction;

@end

