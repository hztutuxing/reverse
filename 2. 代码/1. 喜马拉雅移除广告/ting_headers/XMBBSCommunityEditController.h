//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

@class XMBBSCommunity;

@interface XMBBSCommunityEditController : XMChatBaseScrollVC
{
    XMBBSCommunity *_communityInfo;
}

@property(retain, nonatomic) XMBBSCommunity *communityInfo; // @synthesize communityInfo=_communityInfo;
- (void).cxx_destruct;
- (void)doSelectBrandImage;
- (void)updateProfileLogo:(id)arg1;
- (void)uploadImage:(id)arg1;
- (void)p_onImageInsertAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

@end

