//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class XMMCommunity;

@interface XMBBSIntimateShareCtrl : XMChatBaseScrollVC
{
    unsigned long long _communityId;
    XMMCommunity *_community;
}

@property(retain, nonatomic) XMMCommunity *community; // @synthesize community=_community;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)didInitialize;

@end

