//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSMutableDictionary, NSString, XMServerRequest;

@interface XMFindAdbFriendsViewController : XMSubLevelViewController <MFMessageComposeViewControllerDelegate>
{
    XMServerRequest *myHttpRequest;
    NSMutableArray *notRegisteredList;
    NSString *inviteContent;
    XMServerRequest *inviteContentRequest;
    NSMutableArray *filteredArray;
    NSMutableDictionary *sendContactDic;
    MBProgressHUD *_progress;
}

@property(retain, nonatomic) MBProgressHUD *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSMutableDictionary *sendContactDic; // @synthesize sendContactDic;
@property(retain, nonatomic) NSMutableArray *filteredArray; // @synthesize filteredArray;
@property(retain, nonatomic) XMServerRequest *inviteContentRequest; // @synthesize inviteContentRequest;
@property(retain, nonatomic) NSString *inviteContent; // @synthesize inviteContent;
@property(retain, nonatomic) NSMutableArray *notRegisteredList; // @synthesize notRegisteredList;
@property(retain, nonatomic) XMServerRequest *myHttpRequest; // @synthesize myHttpRequest;
- (void).cxx_destruct;
- (void)requestInviteContentFinished:(id)arg1;
- (void)requestInviteContent;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendMessage;
- (void)inviteFriend:(id)arg1;
- (void)finish:(id)arg1;
- (void)fail:(id)arg1;
- (void)requestAdbFriendsUnRegister;
- (void)filter;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)showNotAddressView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

