//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView, UIImageView, UILabel, UIScrollView, UIView, XMBaseLayout, XMMoreButton, XMVipHAlbumCellLayout;
@protocol XMVipHAlbumCellDelegate;

@interface XMVipHAlbumCell : XMTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    XMBaseLayout *_layout;
    id <XMVipHAlbumCellDelegate> _delegate;
    XMVipHAlbumCellLayout *_myLayout;
    UICollectionView *_collectionView;
    UIScrollView *_pageScr;
    UIView *_backView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    XMMoreButton *_moreButton;
}

+ (void)switchWithModuleType:(long long)arg1 andCardClass:(long long)arg2 caseAlbumH:(CDUnknownBlockType)arg3 caseAlbumV:(CDUnknownBlockType)arg4 caseCustomAlbum:(CDUnknownBlockType)arg5;
+ (id)layoutWithAlbums:(id)arg1 andChannelHeaderItem:(id)arg2;
+ (id)cellObjectWithAlbums:(id)arg1 andChannelHeaderItem:(id)arg2;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIScrollView *pageScr; // @synthesize pageScr=_pageScr;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMVipHAlbumCellLayout *myLayout; // @synthesize myLayout=_myLayout;
@property(nonatomic) __weak id <XMVipHAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMBaseLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updatePageScrollFrame;
- (void)buildPageScroll;
- (void)p_clickMoreAction;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

