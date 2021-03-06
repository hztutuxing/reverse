//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIScrollView, YXLiveRoomSpendPanelTabButton;
@protocol YXLiveRoomSpendPanelTabViewDelegate;

@interface YXLiveRoomSpendPanelTabView : UIView
{
    id <YXLiveRoomSpendPanelTabViewDelegate> _delegate;
    UIScrollView *_btnContainerView;
    NSMutableArray *_btnContainers;
    YXLiveRoomSpendPanelTabButton *_curBtn;
    YXLiveRoomSpendPanelTabButton *_packSelectBtn;
}

@property(retain, nonatomic) YXLiveRoomSpendPanelTabButton *packSelectBtn; // @synthesize packSelectBtn=_packSelectBtn;
@property(retain, nonatomic) YXLiveRoomSpendPanelTabButton *curBtn; // @synthesize curBtn=_curBtn;
@property(retain, nonatomic) NSMutableArray *btnContainers; // @synthesize btnContainers=_btnContainers;
@property(retain, nonatomic) UIScrollView *btnContainerView; // @synthesize btnContainerView=_btnContainerView;
@property(nonatomic) __weak id <YXLiveRoomSpendPanelTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentSelectIndex;
- (void)_handleContentOffsetWhenChangedBtnAtIndex:(long long)arg1;
- (void)_changeCurBtnState:(id)arg1;
- (void)_changeTabButtonFrames;
- (id)_buildTabButtonWithIndex:(long long)arg1 title:(id)arg2 type:(unsigned long long)arg3;
- (void)tabBarBtnClicked:(id)arg1;
- (void)setDefaultSelectIndex:(long long)arg1;
- (void)resetTabs;
- (void)updateNobleInfo:(id)arg1 title:(id)arg2;
- (void)showPacketRedPoint:(_Bool)arg1;
- (void)clickTabAtIndex:(long long)arg1;
- (void)addTabAtIndex:(long long)arg1 title:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

