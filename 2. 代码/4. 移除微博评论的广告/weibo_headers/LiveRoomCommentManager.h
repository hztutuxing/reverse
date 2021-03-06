//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LiveRoomCommentBaseManager.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LiveRoomCommentRequest, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TBLiveCommentModel, UITableView;
@protocol LiveRoomCommentManagerProtocol;

@interface LiveRoomCommentManager : LiveRoomCommentBaseManager <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate>
{
    _Bool _linklivePower;
    _Bool _canBanUserComment;
    _Bool _publishCommentsUseMtop;
    _Bool _fetchCommentsUseMtop;
    _Bool _draging;
    _Bool _requestPause;
    id <LiveRoomCommentManagerProtocol> _delegate;
    NSString *_liveId;
    NSString *_topic;
    unsigned long long _roomStatus;
    NSString *_neoRoomType;
    TBLiveCommentModel *_currentModel;
    UITableView *_commentTableView;
    LiveRoomCommentRequest *_commentRequest;
    NSString *_paginationContext;
    long long _contentSize;
    NSMutableDictionary *_iconImageDict;
    long long _startPullCommentTime;
    CDUnknownBlockType _commentCompletion;
    NSMutableArray *_selfSentComments;
    NSMutableSet *_lastPullCommentIds;
}

@property(retain, nonatomic) NSMutableSet *lastPullCommentIds; // @synthesize lastPullCommentIds=_lastPullCommentIds;
@property(retain, nonatomic) NSMutableArray *selfSentComments; // @synthesize selfSentComments=_selfSentComments;
@property(copy, nonatomic) CDUnknownBlockType commentCompletion; // @synthesize commentCompletion=_commentCompletion;
@property(nonatomic) long long startPullCommentTime; // @synthesize startPullCommentTime=_startPullCommentTime;
@property(retain, nonatomic) NSMutableDictionary *iconImageDict; // @synthesize iconImageDict=_iconImageDict;
@property(nonatomic) long long contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool requestPause; // @synthesize requestPause=_requestPause;
@property(copy, nonatomic) NSString *paginationContext; // @synthesize paginationContext=_paginationContext;
@property(retain, nonatomic) LiveRoomCommentRequest *commentRequest; // @synthesize commentRequest=_commentRequest;
@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(nonatomic) _Bool draging; // @synthesize draging=_draging;
@property(nonatomic) _Bool fetchCommentsUseMtop; // @synthesize fetchCommentsUseMtop=_fetchCommentsUseMtop;
@property(nonatomic) _Bool publishCommentsUseMtop; // @synthesize publishCommentsUseMtop=_publishCommentsUseMtop;
@property(retain, nonatomic) TBLiveCommentModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) NSString *neoRoomType; // @synthesize neoRoomType=_neoRoomType;
@property(nonatomic) unsigned long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) _Bool canBanUserComment; // @synthesize canBanUserComment=_canBanUserComment;
@property(nonatomic) _Bool linklivePower; // @synthesize linklivePower=_linklivePower;
@property(nonatomic) __weak id <LiveRoomCommentManagerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearUICommentList;
- (long long)liveTypeWithRoomStatus:(unsigned long long)arg1;
- (id)commentUIModelWithComment:(id)arg1;
- (void)cacheUserLevelIconImage:(id)arg1;
- (void)stopServerMsg;
- (id)hasDiffWithCommetnResult:(id)arg1;
- (void)commentCompletion:(id)arg1 error:(id)arg2;
- (void)pullCDNComment:(CDUnknownBlockType)arg1;
- (void)requestCommentWithLimit:(id)arg1;
- (void)requestServerMsg;
- (void)pauseRequest;
- (void)resumeRequest;
- (void)timerSelector:(id)arg1;
- (void)reloadSrollCommentLiveView;
- (void)removeUICommentListItemFromFront;
- (void)showDistinctCommentModel:(id)arg1;
- (void)refreshViewWithModels:(id)arg1;
- (void)refreshViewWithSelfNick:(id)arg1 comment:(id)arg2 commentId:(id)arg3 identification:(id)arg4;
- (id)makeCommentModel;
- (void)buildView;
- (void)sendComment:(id)arg1 identification:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cacheCommment:(id)arg1 account:(id)arg2 userId:(long long)arg3 identification:(id)arg4;
- (id)createCommentTableView;
- (void)stopManager;
- (void)dealloc;
- (id)init;
- (_Bool)canBan:(id)arg1;
- (void)endDragging;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

