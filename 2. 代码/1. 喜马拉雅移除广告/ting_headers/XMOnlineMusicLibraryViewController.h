//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "XMBubbleClusterViewProtocol-Protocol.h"
#import "XMFindTabToolViewDelegate-Protocol.h"
#import "XMRecordBGMusicDelegate-Protocol.h"
#import "XMSegmentTabViewCtrolDelegate-Protocol.h"

@class MBProgressHUD, NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UISearchBar, UIView, XMBubbleClusterView, XMFindTabToolView, XMMusicSelectedInfoView, XMRecordBgMusicSelectViewController, XMSegmentTabViewController;
@protocol XMRecordBGMusicDelegate;

@interface XMOnlineMusicLibraryViewController : XMBaseViewController <XMSegmentTabViewCtrolDelegate, XMBubbleClusterViewProtocol, XMRecordBGMusicDelegate, XMFindTabToolViewDelegate>
{
    long long _tagIndex;
    _Bool _disableItunesMusic;
    _Bool _allowMultipleSelection;
    int _musicSceneType;
    id <XMRecordBGMusicDelegate> _delegate;
    NSMutableArray *_selectedArray;
    long long _sceneType;
    XMSegmentTabViewController *_tabController;
    NSMutableDictionary *_viewControllers;
    NSArray *_musicCategoryArray;
    MBProgressHUD *_hud;
    XMRecordBgMusicSelectViewController *_localBGMViewController;
    XMBubbleClusterView *_dropDownView;
    XMFindTabToolView *_tooView;
    UISearchBar *_searchBar;
    UILabel *_addMusiclabel;
    UIView *_backView;
    long long _originSeletedCount;
    NSArray *_originSeletedArray;
    NSMutableArray *_thisTimeSeletedArray;
    XMMusicSelectedInfoView *_selectedInfoView;
    UIView *_topView;
}

@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) XMMusicSelectedInfoView *selectedInfoView; // @synthesize selectedInfoView=_selectedInfoView;
@property(retain, nonatomic) NSMutableArray *thisTimeSeletedArray; // @synthesize thisTimeSeletedArray=_thisTimeSeletedArray;
@property(retain, nonatomic) NSArray *originSeletedArray; // @synthesize originSeletedArray=_originSeletedArray;
@property(nonatomic) long long originSeletedCount; // @synthesize originSeletedCount=_originSeletedCount;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *addMusiclabel; // @synthesize addMusiclabel=_addMusiclabel;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) XMFindTabToolView *tooView; // @synthesize tooView=_tooView;
@property(retain, nonatomic) XMBubbleClusterView *dropDownView; // @synthesize dropDownView=_dropDownView;
@property(nonatomic) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(retain, nonatomic) XMRecordBgMusicSelectViewController *localBGMViewController; // @synthesize localBGMViewController=_localBGMViewController;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSArray *musicCategoryArray; // @synthesize musicCategoryArray=_musicCategoryArray;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) XMSegmentTabViewController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) int musicSceneType; // @synthesize musicSceneType=_musicSceneType;
@property(nonatomic) _Bool disableItunesMusic; // @synthesize disableItunesMusic=_disableItunesMusic;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(nonatomic) __weak id <XMRecordBGMusicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)findTabToolViewDidClickHistory;
- (void)findTabToolViewDidClickAdd:(id)arg1;
- (void)findTabToolViewDidClickMetadataWithModel:(id)arg1 Index:(long long)arg2;
- (void)findTabToolViewDidClickItingWithModel:(id)arg1;
- (void)findTabToolViewDidClickSearch:(id)arg1;
- (void)deleteNetSound:(id)arg1;
- (_Bool)soundSelected:(id)arg1;
- (_Bool)soundIsOriginSelected:(id)arg1;
- (_Bool)soundIsThisTimeSelected:(id)arg1;
- (_Bool)compileEqualWithArray:(id)arg1 andSecondArray:(id)arg2;
- (void)addNetSound:(id)arg1;
- (void)removeNetSound:(id)arg1;
- (void)XMBubbleClusterViewDidTapBtn:(id)arg1 tag:(id)arg2;
- (void)backPanGestureCancel;
- (void)backPanGestureEnd;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)onBack;
- (void)stopAllDownload;
- (void)addHotCategory;
- (void)addLocalCategory;
- (void)networkChanged;
- (void)hideDropDownView;
- (void)p_handleTap:(id)arg1;
- (void)showDropDownView;
- (id)combineSoungIds;
- (void)selectConfirm;
- (void)addBGM;
- (void)updateSelectCount;
- (void)onRightButtonClicked:(id)arg1;
- (void)transToSegmentIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)segmentCtrol:(id)arg1 badgeLayerAtIndex:(long long)arg2;
- (void)segmentCtrol:(id)arg1 transitionAtController:(id)arg2;
- (id)segmentCtrol:(id)arg1 controllerAtIndex:(long long)arg2;
- (id)segmentCtrolTitles:(id)arg1;
- (id)segmentRightViewAndIsVipTheme;
- (id)viewControllerWithCategory:(id)arg1;
- (void)getOnlineMusicCategory;
- (id)sceneStrForSceneType:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)toSearch;
- (void)updateAddedMusicInfo:(long long)arg1;
- (void)addConfirmView;
- (void)addTopView;
- (void)addHotViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)sourceInfo;
- (id)initWithMultipleSelection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

