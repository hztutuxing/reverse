//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FreshNewsEditBaseViewController.h"

@class NSMutableArray, WBFreshNewsBlockData;

@interface FreshNewsAuxiliaryWeiboTypeController : FreshNewsEditBaseViewController
{
    WBFreshNewsBlockData *_blockData;
    NSMutableArray *_indexArray;
}

@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) WBFreshNewsBlockData *blockData; // @synthesize blockData=_blockData;
- (void).cxx_destruct;
- (void)initFeatures;
- (void)saveAuxiliaryStrategy:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

