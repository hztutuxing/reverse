//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class PRLMTableViewWrapper;

@protocol PRLMTableViewWrapperDelegate <UITableViewDelegate, UITableViewDataSource>

@optional
- (void)scrollViewDidEndDraggingAndShowRedEnvelope;
- (void)didTriggerPullShowAD:(PRLMTableViewWrapper *)arg1;
- (struct CGPoint)tableViewContentOffsetAfterPullRefreshAnimation:(PRLMTableViewWrapper *)arg1;
- (void)didEndPullRefreshInWrapper:(PRLMTableViewWrapper *)arg1;
- (void)willEndPullRefreshInWrapper:(PRLMTableViewWrapper *)arg1;
- (void)willHandlePressLoadMoreFooterView:(PRLMTableViewWrapper *)arg1;
- (_Bool)didPressLoadMoreFooterView:(PRLMTableViewWrapper *)arg1;
- (void)willTriggerPullRefreshInWrapper:(PRLMTableViewWrapper *)arg1;
- (void)willTriggerLoadMoreInWrapper:(PRLMTableViewWrapper *)arg1;
- (_Bool)showHeaderWhenRefresh:(PRLMTableViewWrapper *)arg1;
- (_Bool)hasNoDataInWrapper:(PRLMTableViewWrapper *)arg1;
- (void)didTriggerLoadMoreInWrapper:(PRLMTableViewWrapper *)arg1;
- (void)didTriggerPullRefreshInWrapper:(PRLMTableViewWrapper *)arg1;
@end

