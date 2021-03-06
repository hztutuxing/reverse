//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "XMEntGiftTopViewDelegate-Protocol.h"
#import "XMGiftTabViewDelegate-Protocol.h"
#import "XMKTVGiftTopViewDelegate-Protocol.h"
#import "XMLiveGiftCountViewDelegate-Protocol.h"
#import "XMLiveGiftUnitViewDelegate-Protocol.h"
#import "XMLuckyBoxTopViewDelegate-Protocol.h"
#import "XMSocialGiftTopViewDelegate-Protocol.h"
#import "XMSupportPopViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIScrollView, UIVisualEffectView, XMEntGiftTopView, XMGiftTab, XMGiftTabView, XMKTVGiftTopView, XMLiveGiftCountView, XMLiveUser, XMLuckyBoxTopView, XMLuckyBoxWebContainView, XMSocialGiftTopView, XMSupportPopView, XMWebImageButton, XMWebImageView;
@protocol XMLiveGiftViewDelegate;

@interface XMLiveGiftView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, XMLiveGiftUnitViewDelegate, XMLiveGiftCountViewDelegate, XMSupportPopViewDelegate, XMGiftTabViewDelegate, XMKTVGiftTopViewDelegate, XMSocialGiftTopViewDelegate, XMEntGiftTopViewDelegate, XMLuckyBoxTopViewDelegate>
{
    id _selectedItem;
    XMGiftTab *_selectedTab;
    NSArray *_giftCountArray;
    NSArray *_packageCountArray;
    unsigned long long _style;
    unsigned long long _topType;
    id <XMLiveGiftViewDelegate> _delegate;
    unsigned long long _giftCount;
    UIView *_alphaView;
    XMWebImageButton *_topAdView;
    UIView *_contentView;
    UIVisualEffectView *_blurEffectView;
    UIView *_topBar;
    UILabel *_titleLabel;
    XMGiftTabView *_tabView;
    XMSocialGiftTopView *_socialTopView;
    XMLiveUser *_userForEntertainment;
    XMKTVGiftTopView *_ktvTopView;
    UICollectionView *_ktvUsersCollection;
    XMEntGiftTopView *_entTopView;
    XMLuckyBoxTopView *_luckyboxTopView;
    XMLuckyBoxWebContainView *_boxContainView;
    UIView *_middleView;
    UIScrollView *_giftPageView;
    NSMutableArray *_contentPageArray;
    UIView *_bottomBar;
    UIView *_leftBottomView;
    UIButton *_loginBtn;
    UIButton *_xiDiamondBtn;
    XMWebImageView *_adBtn1;
    UIButton *_packageDetailBtn;
    UIView *_rightBottomView;
    UIImageView *_rightBottomBg;
    UIButton *_giftCountBtn;
    UIButton *_sendGiftBtn;
    XMLiveGiftCountView *_giftCountView;
    XMSupportPopView *_supportView;
    NSArray *_ktvUserList;
    NSArray *_entroomUserList;
    NSMutableArray *_entSelectedUsers;
}

+ (double)boardviewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *entSelectedUsers; // @synthesize entSelectedUsers=_entSelectedUsers;
@property(retain, nonatomic) NSArray *entroomUserList; // @synthesize entroomUserList=_entroomUserList;
@property(retain, nonatomic) NSArray *ktvUserList; // @synthesize ktvUserList=_ktvUserList;
@property(retain, nonatomic) XMSupportPopView *supportView; // @synthesize supportView=_supportView;
@property(retain, nonatomic) XMLiveGiftCountView *giftCountView; // @synthesize giftCountView=_giftCountView;
@property(retain, nonatomic) UIButton *sendGiftBtn; // @synthesize sendGiftBtn=_sendGiftBtn;
@property(retain, nonatomic) UIButton *giftCountBtn; // @synthesize giftCountBtn=_giftCountBtn;
@property(retain, nonatomic) UIImageView *rightBottomBg; // @synthesize rightBottomBg=_rightBottomBg;
@property(retain, nonatomic) UIView *rightBottomView; // @synthesize rightBottomView=_rightBottomView;
@property(retain, nonatomic) UIButton *packageDetailBtn; // @synthesize packageDetailBtn=_packageDetailBtn;
@property(retain, nonatomic) XMWebImageView *adBtn1; // @synthesize adBtn1=_adBtn1;
@property(retain, nonatomic) UIButton *xiDiamondBtn; // @synthesize xiDiamondBtn=_xiDiamondBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIView *leftBottomView; // @synthesize leftBottomView=_leftBottomView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableArray *contentPageArray; // @synthesize contentPageArray=_contentPageArray;
@property(retain, nonatomic) UIScrollView *giftPageView; // @synthesize giftPageView=_giftPageView;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) XMLuckyBoxWebContainView *boxContainView; // @synthesize boxContainView=_boxContainView;
@property(retain, nonatomic) XMLuckyBoxTopView *luckyboxTopView; // @synthesize luckyboxTopView=_luckyboxTopView;
@property(retain, nonatomic) XMEntGiftTopView *entTopView; // @synthesize entTopView=_entTopView;
@property(retain, nonatomic) UICollectionView *ktvUsersCollection; // @synthesize ktvUsersCollection=_ktvUsersCollection;
@property(retain, nonatomic) XMKTVGiftTopView *ktvTopView; // @synthesize ktvTopView=_ktvTopView;
@property(retain, nonatomic) XMLiveUser *userForEntertainment; // @synthesize userForEntertainment=_userForEntertainment;
@property(retain, nonatomic) XMSocialGiftTopView *socialTopView; // @synthesize socialTopView=_socialTopView;
@property(retain, nonatomic) XMGiftTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) XMWebImageButton *topAdView; // @synthesize topAdView=_topAdView;
@property(retain, nonatomic) UIView *alphaView; // @synthesize alphaView=_alphaView;
@property(nonatomic) unsigned long long giftCount; // @synthesize giftCount=_giftCount;
@property(nonatomic) __weak id <XMLiveGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long topType; // @synthesize topType=_topType;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *packageCountArray; // @synthesize packageCountArray=_packageCountArray;
@property(retain, nonatomic) NSArray *giftCountArray; // @synthesize giftCountArray=_giftCountArray;
@property(retain, nonatomic) XMGiftTab *selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)lockGiftCountAttribute;
- (id)giftCountAttributeWithImage:(id)arg1;
- (id)xiDiamondAttribute;
- (id)loginAttribute;
- (void)onGotoTrackRankDidClick;
- (void)liveCountView:(id)arg1 didSelectGiftCount:(long long)arg2;
- (void)onTabDidSelect:(long long)arg1 tab:(id)arg2;
- (id)itemNumberOptionsForGiftInPackage;
- (void)showAvaibleGiftCountView;
- (void)resetAllSubViewStatus;
- (void)alphaViewBackgroundColor:(id)arg1;
- (void)giftUnitViewOnLongPress:(id)arg1;
- (void)giftUnitViewOnSelected:(id)arg1;
- (void)onGiftBoardSelectGift;
- (void)scrollViewEnd:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onGiftADDidClick:(id)arg1;
- (void)onGiftTopAdClick:(id)arg1;
- (void)onSendGiftDidClick:(id)arg1;
- (void)onGiftCountDidClick:(id)arg1;
- (void)onLoginDidClick:(id)arg1;
- (void)onXiCoinDidClick:(id)arg1;
- (void)onXiDiamondDidClick:(id)arg1;
- (void)onOutSideDidTap;
- (void)onShowPackageDetailDidClick:(id)arg1;
- (void)onKTVGiftShowDetail;
- (void)onKTVGiftPickerShow:(_Bool)arg1;
- (void)onSocialPersonDetailClick:(id)arg1;
- (void)onEntRoomMicUserSelectChanged:(id)arg1;
- (void)onEntRoomSelectUserInfo:(id)arg1;
- (void)onLuckyBoxTopViewDidClickRule:(id)arg1;
- (void)onLuckyBoxTopViewDidClickLuckylist:(id)arg1;
- (void)updateLuckyBoxProgress:(long long)arg1;
- (void)showLuckyBoxTop:(_Bool)arg1;
- (void)updateEntRoomUserList:(id)arg1 selectedUsers:(id)arg2;
- (void)compareEntRoomUserUI;
- (void)updateKTVUserList:(id)arg1 withSelectUser:(id)arg2;
- (void)updateActionButtonUI;
- (void)updateCategoryGiftTabs:(id)arg1;
- (long long)checkSelectedPageIdx:(_Bool)arg1 tabs:(id)arg2;
- (void)updateGiftAds:(id)arg1;
- (void)addViewLayoutConstrants;
- (void)createSocialTopView;
- (void)createKTVUserView;
- (void)createEntRoomTopView;
- (void)customInit;
- (void)showReceiveUser:(id)arg1;
- (void)showBoardTitle:(id)arg1;
- (void)hideSupportView;
- (void)hideSupportViewAtDelay:(double)arg1;
- (void)showSupportType:(unsigned long long)arg1 avatarUrl:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 andFrame:(struct CGRect)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

