//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBSegmentChannelsBarViewDelegate-Protocol.h"
#import "WBSegmentChannelsListViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, WBFeedHomeChannelListView, WBFeedListViewController, WBFeedSegmentChannelsBarView;
@protocol WBFeedListSegmentBarListWrappeDelegate, WBFeedSegmentChannelModelProtocol, WBSegmentChannelModelProtocol;

@interface WBFeedListSegmentBarListWrapper : NSObject <WBSegmentChannelsBarViewDelegate, WBSegmentChannelsListViewDelegate>
{
    _Bool _isWrapperInitialized;
    _Bool _showMenu;
    _Bool _channelListIsAnimating;
    _Bool _languageDidChange;
    WBFeedListViewController *_ownerVC;
    WBFeedSegmentChannelsBarView *_segmentChannelBar;
    id <WBFeedListSegmentBarListWrappeDelegate> _delegate;
    WBFeedHomeChannelListView *_segmentChannelsListView;
    NSMutableArray<WBFeedSegmentChannelModelProtocol> *_currentChannels;
    NSMutableArray<WBFeedSegmentChannelModelProtocol> *_unusedChannels;
    NSString *_menuScheme;
    NSDictionary *_userInfo;
}

@property(nonatomic) _Bool languageDidChange; // @synthesize languageDidChange=_languageDidChange;
@property(nonatomic) _Bool channelListIsAnimating; // @synthesize channelListIsAnimating=_channelListIsAnimating;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *menuScheme; // @synthesize menuScheme=_menuScheme;
@property(nonatomic) _Bool showMenu; // @synthesize showMenu=_showMenu;
@property(nonatomic) _Bool isWrapperInitialized; // @synthesize isWrapperInitialized=_isWrapperInitialized;
@property(retain, nonatomic) NSMutableArray<WBFeedSegmentChannelModelProtocol> *unusedChannels; // @synthesize unusedChannels=_unusedChannels;
@property(retain, nonatomic) NSMutableArray<WBFeedSegmentChannelModelProtocol> *currentChannels; // @synthesize currentChannels=_currentChannels;
@property(retain, nonatomic) WBFeedHomeChannelListView *segmentChannelsListView; // @synthesize segmentChannelsListView=_segmentChannelsListView;
@property(nonatomic) __weak id <WBFeedListSegmentBarListWrappeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBFeedSegmentChannelsBarView *segmentChannelBar; // @synthesize segmentChannelBar=_segmentChannelBar;
@property(nonatomic) __weak WBFeedListViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
- (void).cxx_destruct;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (void)ownerVCViewWillAppear;
- (void)hideSegmentChannelBar;
- (void)ownerVCViewDidDisappear;
- (void)WBSegmentChannelsListView:(id)arg1 userDidChangeChannel:(long long)arg2 newCurrentChannels:(id)arg3 andNewUnusedChannels:(id)arg4 channelListDidChanged:(_Bool)arg5;
- (void)WBSegmentChannelsListView:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)hideChannelsListView;
- (void)showChannelsListViewWithCurrentIndex:(long long)arg1;
- (void)groupItemBeClick:(id)arg1 groupType:(long long)arg2;
- (void)channelsBar:(id)arg1 didClickMoreButton:(id)arg2;
- (void)channelsBar:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)channelsBarDidClickSortButton:(id)arg1;
- (void)channelsBarDidClickSameButton:(id)arg1;
- (void)channelsBarDidSelectChannelManual:(id)arg1 toIndex:(long long)arg2;
- (void)channelsBarDidSelectChannel:(id)arg1 toIndex:(long long)arg2;
- (_Bool)_updateChannels:(id)arg1 unusedChannels:(id)arg2;
- (void)dealloc;
- (void)removeSubviews;
- (void)selectChannelWithChannelModel:(id)arg1;
@property(readonly, nonatomic) NSObject<WBSegmentChannelModelProtocol> *selectedChannelModel;
@property(readonly, nonatomic) _Bool isShowingSegmentChannelsListView;
- (void)setSelectedIndex:(long long)arg1;
@property(readonly, nonatomic) long long selectedIndex;
- (void)reloadHotSegmentBarSelectIndex;
- (void)updateViewWithChannelModels:(id)arg1 andUnusedChannels:(id)arg2;
- (void)configBarHeight;
- (void)configSubviewsFrame:(struct CGRect)arg1;
- (void)initialize;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

