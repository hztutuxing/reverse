//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UITableView, XMLiveRoomApproachInfo;

@interface XMChoosePairResultViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_resultTableView;
    UILabel *_resultTitleLabel;
    UILabel *_resultDesLabel;
    NSString *_bottomStr;
    UIButton *_closeBtn;
    NSMutableArray *_pairsArray;
    NSArray *_lovePairs;
    XMLiveRoomApproachInfo *_liveItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveRoomApproachInfo *liveItem; // @synthesize liveItem=_liveItem;
@property(retain, nonatomic) NSArray *lovePairs; // @synthesize lovePairs=_lovePairs;
- (void)resetTitle:(long long)arg1 isIn:(_Bool)arg2;
- (void)calculatePair;
- (void)onBack:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

