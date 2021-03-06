//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "UITextViewDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBComposeViewControllerDelegate-Protocol.h"
#import "WBNoteProHeaderViewDelegate-Protocol.h"
#import "WBNoteProQAPublicQuestionButtonDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView, WBALAssetPickerContextManager, WBCustomActionSheet, WBGuideView, WBNoteProQAPublicQuestionEditorEngine, WBNoteProQAPublicQuestionHeaderView, WBProgressHUD, WBQAPublicQuestion, WBQAQuestion;
@protocol WBNoteProQAPublicQuestionComposeViewControllerDelegate;

@interface WBNoteProQAPublicQuestionComposeViewController : WBTableViewController <WBNoteProHeaderViewDelegate, UITextViewDelegate, WBALAssetPickerContextManagerDelegate, WBComposeViewControllerDelegate, WBNoteProQAPublicQuestionButtonDelegate>
{
    NSString *tagId;
    NSString *topicId;
    NSString *fromTuid;
    double descCellHeightCache;
    _Bool StatusDidSend;
    _Bool questionDescViewShown;
    _Bool needPopTwice;
    _Bool needPopGuide;
    WBNoteProQAPublicQuestionEditorEngine *_engine;
    id <WBNoteProQAPublicQuestionComposeViewControllerDelegate> _qaDelegate;
    NSString *_wendaType;
    NSString *_oid;
    NSString *_yid;
    UIButton *_rightBarButton;
    UIView *_contentWarningView;
    UILabel *_contentWarningLabel;
    UIButton *_choosePicBtn;
    WBCustomActionSheet *_cancelActionSheet;
    WBCustomActionSheet *_fromFreeCancelActionSheet;
    WBNoteProQAPublicQuestionHeaderView *_headerView;
    WBProgressHUD *_questionPostingProgress;
    unsigned long long _state;
    WBALAssetPickerContextManager *_imageManager;
    WBQAPublicQuestion *_question;
    WBQAQuestion *_payQuestion;
    NSString *_money;
    NSString *_questionId;
    NSString *_questionUrl;
    NSString *_fromTuidScreenname;
    WBGuideView *_rewardQuestionGuideView;
}

@property(retain, nonatomic) WBGuideView *rewardQuestionGuideView; // @synthesize rewardQuestionGuideView=_rewardQuestionGuideView;
@property(copy, nonatomic) NSString *fromTuidScreenname; // @synthesize fromTuidScreenname=_fromTuidScreenname;
@property(copy, nonatomic) NSString *questionUrl; // @synthesize questionUrl=_questionUrl;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) WBQAQuestion *payQuestion; // @synthesize payQuestion=_payQuestion;
@property(retain, nonatomic) WBQAPublicQuestion *question; // @synthesize question=_question;
@property(retain, nonatomic) WBALAssetPickerContextManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WBProgressHUD *questionPostingProgress; // @synthesize questionPostingProgress=_questionPostingProgress;
@property(retain, nonatomic) WBNoteProQAPublicQuestionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WBCustomActionSheet *fromFreeCancelActionSheet; // @synthesize fromFreeCancelActionSheet=_fromFreeCancelActionSheet;
@property(retain, nonatomic) WBCustomActionSheet *cancelActionSheet; // @synthesize cancelActionSheet=_cancelActionSheet;
@property(retain, nonatomic) UIButton *choosePicBtn; // @synthesize choosePicBtn=_choosePicBtn;
@property(retain, nonatomic) UILabel *contentWarningLabel; // @synthesize contentWarningLabel=_contentWarningLabel;
@property(retain, nonatomic) UIView *contentWarningView; // @synthesize contentWarningView=_contentWarningView;
@property(retain, nonatomic) UIButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(copy, nonatomic) NSString *yid; // @synthesize yid=_yid;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *wendaType; // @synthesize wendaType=_wendaType;
@property(nonatomic) __weak id <WBNoteProQAPublicQuestionComposeViewControllerDelegate> qaDelegate; // @synthesize qaDelegate=_qaDelegate;
- (void).cxx_destruct;
- (id)getCurrentQuestion;
- (_Bool)hasEditPublisher;
- (void)savePublicDraft:(id)arg1;
- (_Bool)checkHasDraft;
- (void)questionPayDidFinishNotification:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)rightBarButtonPressed:(id)arg1;
- (void)choosepicButtonPressed:(id)arg1;
- (void)cancelComposeNote;
- (void)composeViewControllerDidDismiss:(id)arg1;
- (void)willSendStatusCallBack;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)hintButtonClick;
- (void)rewardButtonClick;
- (void)convertToQuestion;
- (void)composerHeaderViewSizeDidChange:(id)arg1;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showQuestionPayViewControllerWithCurrentQuestionPayUrl:(id)arg1;
- (void)showComposerWithQuestion:(id)arg1 questionUrl:(id)arg2 fromTuidScreenname:(id)arg3;
- (void)showRewardComposerWithQuestion:(id)arg1 questionUrl:(id)arg2 fromTuidScreenname:(id)arg3;
- (void)_showHintView;
- (void)_showConvertHintView;
- (void)loadQuestion;
- (id)placeholderForQuestionDesc;
- (id)placeholderForQuestionTitle;
- (id)typingAttributesForQuestionDescTextView;
- (void)presentAlertWithText:(id)arg1;
- (void)presentErrorViewWithError:(id)arg1;
- (void)dismissSelfAnimated:(_Bool)arg1;
- (void)scrollTableViewRectToVisible:(id)arg1;
- (void)updateContentWarningLabel:(id)arg1;
- (void)_updateContentWarningLabelWithString:(id)arg1 maxLength:(long long)arg2;
- (void)updateCoverImageViewWithCurrentQuesion;
- (void)updateWithCurrentQuestion;
- (void)updateRightBarButtonState;
- (void)_updateDescCellHeightCacheWithCurrentQuestion;
- (void)updateTableViewContentWithAnimationHandler:(CDUnknownBlockType)arg1;
- (void)setupHeaderViews;
- (void)_updateHeaderViewWithCurrentModel;
- (void)_setupTitleViewForHeaderView;
- (void)_setupCoverImageViewForHeaderView;
- (void)_setupQuestionDescView;
- (void)setupContentViews;
- (void)setupNavigationItem;
- (id)navigationTitle;
- (id)bottomLabelText;
- (void)backToNormal;
- (void)goToQuestionPosting;
- (id)coverImageCache;
- (void)_removeGuideView;
- (void)_hideGuideView;
@property(readonly, nonatomic) WBNoteProQAPublicQuestionEditorEngine *engine; // @synthesize engine=_engine;
- (void)viewDidLoad;
- (void)_registerForKeyboardNotifications;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithFromTuid:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

