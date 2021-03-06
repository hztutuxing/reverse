//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMCouponSelectDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"
#import "XMVIPOrderCellDelegate-Protocol.h"

@class NSString, UIButton, UIView, XMAlbumItem, XMCoupon, XMNSDataServerPostRequest, XMRCLabel, XMServerRequest, XMTableViewDataSource, XMTrackBuyAlbumModel, XMTrackBuyBgView, XMTrackBuyLoadingView, XMVouchersItem;

@interface XMTrackBuyAlbumViewController : XMSubLevelViewController <XMTableViewDelegateProtocol, XMCouponSelectDelegate, XMVIPOrderCellDelegate>
{
    XMRCLabel *_rcLabel;
    UIButton *_buyBtn;
    UIView *_buyBtnContainer;
    XMTrackBuyLoadingView *_loadingView;
    _Bool _inloading;
    _Bool _tableViewDidFirstLoad;
    _Bool _selectVipDiscount;
    _Bool _useCoupon;
    _Bool _presentAlbum;
    _Bool _isCampAlbum;
    _Bool _isRefreshForBind;
    _Bool _oldVipStatus;
    XMAlbumItem *_album;
    long long _itemId;
    XMTrackBuyAlbumModel *_albumModel;
    XMServerRequest *_modelRequest;
    XMTrackBuyBgView *_bgView;
    XMTableViewDataSource *_tableDataSource;
    XMCoupon *_selectedCoupon;
    XMVouchersItem *_selectedVoucher;
    XMNSDataServerPostRequest *_verifyCodeRequest;
    XMServerRequest *_tokenRequest;
    NSString *_tokenStr;
}

@property(nonatomic) _Bool oldVipStatus; // @synthesize oldVipStatus=_oldVipStatus;
@property(nonatomic) _Bool isRefreshForBind; // @synthesize isRefreshForBind=_isRefreshForBind;
@property(copy, nonatomic) NSString *tokenStr; // @synthesize tokenStr=_tokenStr;
@property(retain, nonatomic) XMServerRequest *tokenRequest; // @synthesize tokenRequest=_tokenRequest;
@property(retain, nonatomic) XMNSDataServerPostRequest *verifyCodeRequest; // @synthesize verifyCodeRequest=_verifyCodeRequest;
@property(retain, nonatomic) XMVouchersItem *selectedVoucher; // @synthesize selectedVoucher=_selectedVoucher;
@property(retain, nonatomic) XMCoupon *selectedCoupon; // @synthesize selectedCoupon=_selectedCoupon;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMTrackBuyBgView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) XMServerRequest *modelRequest; // @synthesize modelRequest=_modelRequest;
@property(retain, nonatomic) XMTrackBuyAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
@property(nonatomic) _Bool isCampAlbum; // @synthesize isCampAlbum=_isCampAlbum;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) XMAlbumItem *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)vipOrderCellDidSelectOrUnselectWithModel:(id)arg1;
- (void)onSelectCoupon:(id)arg1;
- (void)pushVoucherSelectViewController;
- (void)pushCoponSelectViewController;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)refundTipsImage;
- (void)initBottomView;
- (void)tapGR;
- (void)postFinishedTrackBuyDataTrack:(id)arg1;
- (void)postStartPaymentDataTrack;
- (id)customhudForGrouponRevokeSuccess;
- (void)showGrouponRevokeSuccess;
- (void)requestRevokeGroupon;
- (void)showRevokeGrouponMessage;
- (void)showJoinedGrouponMessage;
- (id)desString;
- (void)stateViewFinish;
- (void)addStateView:(_Bool)arg1;
- (void)onBuy;
- (_Bool)basedSanityCheck;
- (double)reducedPrice;
- (_Bool)moneyEnough;
- (void)updateButtonTitle;
- (void)endLoading;
- (void)startLoading;
- (void)exchangeBindViewTapAction:(id)arg1 buttonIndex:(long long)arg2;
- (void)trackBuyAlbumBindMphoneConfirmRequest;
- (void)getRandomToken;
- (void)trackBuyAlbumModelConfirmRequest;
- (_Bool)showVouchers;
- (_Bool)showCoupon;
- (_Bool)vipDiscountMuchMore;
- (_Bool)needVipCell;
- (double)totlePriceWithVoucherOrCoupon;
- (double)totlePriceWithoutVouchers;
- (unsigned long long)validVouchersCount;
- (id)bestVoucherItem;
- (_Bool)hasValidVouchers;
- (void)addSectionPresent;
- (void)addSectionVouchers;
- (void)addSectionBindMphone;
- (void)addCoponCellToSection:(id)arg1;
- (void)addTotleCellToSection:(id)arg1;
- (void)addSectionCoupon;
- (void)addSectionOne;
- (void)dataSourceReload;
- (void)requestAlbumModelInfo;
- (void)onAlbumModelFailed:(id)arg1;
- (void)onAlbumModelFinished:(id)arg1;
- (void)onGetCoupon;
- (void)onGetVipStateSuccess:(id)arg1;
- (void)back;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onRefreshForBind;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

