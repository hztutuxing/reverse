//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, UICollectionView;
@protocol YXRedPacketAccountOptionViewDelegate;

@interface YXRedPacketAccountOptionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    long long selectAccont;
    NSMutableArray *_dataSource;
    id <YXRedPacketAccountOptionViewDelegate> _delegate;
    long long _selectIndex;
    UICollectionView *_optionCollectionView;
}

+ (id)initYXRedPacketAccountOptionView;
@property(retain, nonatomic) UICollectionView *optionCollectionView; // @synthesize optionCollectionView=_optionCollectionView;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) __weak id <YXRedPacketAccountOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)isHiddenOptionList:(_Bool)arg1;
- (void)reloadView;
- (void)accountValueChanged:(long long)arg1;
- (void)initConstrains;
- (void)initOptionCollectionView;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

