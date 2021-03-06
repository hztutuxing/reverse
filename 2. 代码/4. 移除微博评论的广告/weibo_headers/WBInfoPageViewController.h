//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WBPageEngineDelegate-Protocol.h"

@class NSString, NSUserActivity, UIBarButtonItem, WBContact, WBInfoPage, WBPageEngine, WBProgressHUD;

@interface WBInfoPageViewController : WBBasicWebViewController <WBPageEngineDelegate, UIScrollViewDelegate>
{
    UIBarButtonItem *moreButton;
    UIBarButtonItem *spinnerButton;
    WBContact *selectedContact;
    struct {
        unsigned int closeButtonVisibilityNeedsUpdate:1;
        unsigned int closeButtonVisible:1;
    } _flags;
    WBPageEngine *engine;
    WBInfoPage *_infoPage;
    NSString *_URLString;
    WBProgressHUD *_progressHUD;
    unsigned long long _shareSourceType;
    NSUserActivity *_savedUserActivity;
}

+ (id)classNameWillCreateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
@property(retain, nonatomic) NSUserActivity *savedUserActivity; // @synthesize savedUserActivity=_savedUserActivity;
@property(nonatomic) unsigned long long shareSourceType; // @synthesize shareSourceType=_shareSourceType;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) WBInfoPage *infoPage; // @synthesize infoPage=_infoPage;
@property(retain, nonatomic) WBContact *selectedContact; // @synthesize selectedContact;
- (void).cxx_destruct;
- (void)viewDidPopFromPeeking;
- (void)viewDidStartPeeking;
- (void)updatePeekingState;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)wb_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (unsigned long long)deriveShareSourceType;
- (void)updateShareSourceTypeIfNeeded;
- (void)setOpenURLContext:(id)arg1;
- (id)shareViaStatusComposerDefaultJobParameters;
- (id)fID;
- (id)type;
- (_Bool)logIfNeed;
- (void)webDebugLogInfoPageCaching:(id)arg1;
- (void)webDebugLogLoadingWithInfoPageCard:(id)arg1 fromCache:(_Bool)arg2;
- (void)layoutViews;
- (struct CGRect)webviewRect;
- (void)closeButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)updateLeftBarButtonItems;
- (id)_actionSheetForMoreMenu;
- (id)sharingInfoPage;
- (void)setupShareContentWithInfoPage:(id)arg1 sharingToSession:(_Bool)arg2 shareType:(long long)arg3;
- (id)externalShareURLKeywordForShareType:(long long)arg1;
- (_Bool)_shouldShowMoreMenu;
- (void)otherItemAction:(id)arg1;
- (void)pageDataDidReceivedFromNetwork:(id)arg1 error:(id)arg2;
- (id)getCurrentViewController;
- (_Bool)cacheForEngine:(id)arg1;
- (id)apiPathForPageEngine:(id)arg1;
- (Class)modelClassForPageEngine:(id)arg1;
- (_Bool)isWeiboArticle;
- (_Bool)logEnabled;
- (id)logType;
- (_Bool)disablesSinaURL;
- (void)didReceiveResult:(id)arg1 isLoadFromCache:(_Bool)arg2;
- (void)showError:(id)arg1;
- (void)didFinishPullRefreshing;
- (void)didBeginRefreshing;
- (void)updateUserActivityWithSavedUserActivity;
- (void)presentUserActivityWithInfoPage:(id)arg1;
- (void)refetchDataAndShowsLoadingHUDView:(_Bool)arg1;
- (void)showRightAcitivityLoading:(_Bool)arg1;
- (void)configRightBarButtonItem;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)invalidExternalParameters;
- (id)invalidSinaURLParameters;
- (id)invalidOriginalURLParameters;
- (id)openurlExtractFinalURL;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

