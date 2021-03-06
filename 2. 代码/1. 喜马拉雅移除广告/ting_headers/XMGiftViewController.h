//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "XMGiftMutiClickButtonDelegate-Protocol.h"
#import "XMLiveGiftViewDelegate-Protocol.h"
#import "XMSendGiftResultDelegate-Protocol.h"

@class NSArray, NSString, XMGiftMutiClickButton, XMGiftTab, XMLiveGiftView, XMLiveUser, XMNRequest, XMTimer;
@protocol XMGiftViewControllerDelegate;

@interface XMGiftViewController : XMBaseVC <XMLiveGiftViewDelegate, XMGiftMutiClickButtonDelegate, XMSendGiftResultDelegate>
{
    _Bool _forceLoadEntUsers;
    _Bool _hasEnterFansClub;
    NSString *_boardTitle;
    XMLiveUser *_receiveUser;
    id _selectedItem;
    XMGiftTab *_giftTab;
    unsigned long long _giftCategory;
    unsigned long long _modelType;
    NSArray *_countArray;
    NSArray *_packageCountArray;
    NSArray *_giftAds;
    NSArray *_giftTabList;
    NSArray *_ktvUserList;
    NSArray *_entUserList;
    NSArray *_entSelectedUsers;
    id <XMGiftViewControllerDelegate> _delegate;
    XMLiveGiftView *_giftViewBoard;
    XMGiftMutiClickButton *_mutiClickBtn;
    unsigned long long _showType;
    XMNRequest *_request;
    unsigned long long _boardStyle;
    unsigned long long _topType;
    XMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long topType; // @synthesize topType=_topType;
@property(nonatomic) unsigned long long boardStyle; // @synthesize boardStyle=_boardStyle;
@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool hasEnterFansClub; // @synthesize hasEnterFansClub=_hasEnterFansClub;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) XMGiftMutiClickButton *mutiClickBtn; // @synthesize mutiClickBtn=_mutiClickBtn;
@property(retain, nonatomic) XMLiveGiftView *giftViewBoard; // @synthesize giftViewBoard=_giftViewBoard;
@property(nonatomic) __weak id <XMGiftViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *entSelectedUsers; // @synthesize entSelectedUsers=_entSelectedUsers;
@property(retain, nonatomic) NSArray *entUserList; // @synthesize entUserList=_entUserList;
@property(nonatomic) _Bool forceLoadEntUsers; // @synthesize forceLoadEntUsers=_forceLoadEntUsers;
@property(retain, nonatomic) NSArray *ktvUserList; // @synthesize ktvUserList=_ktvUserList;
@property(retain, nonatomic) NSArray *giftTabList; // @synthesize giftTabList=_giftTabList;
@property(retain, nonatomic) NSArray *giftAds; // @synthesize giftAds=_giftAds;
@property(retain, nonatomic) NSArray *packageCountArray; // @synthesize packageCountArray=_packageCountArray;
@property(retain, nonatomic) NSArray *countArray; // @synthesize countArray=_countArray;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
@property(nonatomic) unsigned long long giftCategory; // @synthesize giftCategory=_giftCategory;
@property(retain, nonatomic) XMGiftTab *giftTab; // @synthesize giftTab=_giftTab;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) XMLiveUser *receiveUser; // @synthesize receiveUser=_receiveUser;
@property(retain, nonatomic) NSString *boardTitle; // @synthesize boardTitle=_boardTitle;
- (_Bool)liveGiftViewShouldHideCharmValue;
- (void)liveGiftViewOnEntSelectUsersChanged:(id)arg1;
- (void)liveGiftViewOnSelectKTVUser:(id)arg1;
- (void)liveGiftViewOnSwitchTab:(id)arg1;
- (void)liveGiftViewAtEntertainmentOnPersonInfoDidClick:(id)arg1;
- (void)liveGiftView:(id)arg1 clickPackageDetail:(id)arg2;
- (void)liveGiftViewOnAdClickAt:(id)arg1;
- (void)liveGiftViewOnTouchOutSide:(id)arg1;
- (void)liveSupportViewDidClickRank:(id)arg1;
- (void)liveGiftView:(id)arg1 sendPackageItem:(id)arg2 number:(long long)arg3;
- (void)liveGiftView:(id)arg1 sendGiftItem:(id)arg2 number:(long long)arg3;
- (void)liveGiftView:(id)arg1 onLongPressAtGift:(id)arg2;
- (void)liveGiftView:(id)arg1 didSelectTab:(id)arg2 AndItem:(id)arg3;
- (_Bool)liveGiftView:(id)arg1 canSendGiftItem:(id)arg2 number:(long long)arg3;
- (void)liveGiftViewNeedLogin:(id)arg1;
- (void)liveGiftViewPurchaseXibean:(id)arg1;
- (void)liveGiftViewPurchaseXibi:(id)arg1;
- (void)requestLuckyboxProgress;
- (void)endLuckyboxTimer;
- (void)beginLuckyboxTimer;
- (void)onMutiClickTimeOut;
- (void)onMutiClickTouchOutside;
- (void)onMutiClickConsecutiveTerminateWithGiftInfo:(id)arg1;
- (void)onMutiClickWithGiftInfo:(id)arg1;
- (void)giftSendFailureWithMsg:(id)arg1 packageItem:(id)arg2;
- (void)giftSendFailureWithMsg:(id)arg1 gift:(id)arg2 modeType:(unsigned long long)arg3;
- (void)normalGiftSucceedWithRankType:(unsigned long long)arg1;
- (void)giftSucceedWithGift:(id)arg1 modeType:(unsigned long long)arg2 uniqueKey:(id)arg3 count:(long long)arg4;
- (void)queryEntryFansClub;
- (_Bool)checkUpdateTypeOfTabs:(id)arg1;
- (void)updateEntRoomUserList:(id)arg1 selectedUsers:(id)arg2;
- (void)updateKTVUserList:(id)arg1 onSelectUser:(id)arg2;
- (void)updateGiftAds:(id)arg1;
- (void)filterVisiableAds;
- (void)updateGiftNumberList:(id)arg1 withTabList:(id)arg2;
- (void)updateGiftBoardStyle;
- (void)switchToGiftBoard;
- (void)switchToConsecutiveView;
- (void)hideGiftViewController;
- (void)_hideGiftViewOnComplation:(CDUnknownBlockType)arg1;
- (void)showGiftView;
- (void)updateAccountUI;
- (void)onReceiveStatusBarDidChange:(id)arg1;
- (void)back;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

