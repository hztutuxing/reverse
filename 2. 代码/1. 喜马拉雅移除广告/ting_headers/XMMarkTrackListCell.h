//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMMarkTrackListItem, XMMarkTrackMoreView, XMTableCellObject, XMWebImageView;
@protocol XMMarkTrackListCellDelegate;

@interface XMMarkTrackListCell : XMTableViewCell
{
    id <XMMarkTrackListCellDelegate> _delegate;
    UIView *_shadowView;
    XMWebImageView *_soundCoverIV;
    UILabel *_soundTitleLB;
    UIImageView *_albumTitleIV;
    UILabel *_albumTitleLB;
    UIView *_segementLine;
    UIImageView *_unShelve;
    NSMutableArray *_marks;
    XMMarkTrackMoreView *_moreView;
    UIButton *_selectBtn;
    XMMarkTrackListItem *_trackItem;
    XMTableCellObject *_cellObj;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) XMMarkTrackListItem *trackItem; // @synthesize trackItem=_trackItem;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) XMMarkTrackMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) NSMutableArray *marks; // @synthesize marks=_marks;
@property(retain, nonatomic) UIImageView *unShelve; // @synthesize unShelve=_unShelve;
@property(retain, nonatomic) UIView *segementLine; // @synthesize segementLine=_segementLine;
@property(retain, nonatomic) UILabel *albumTitleLB; // @synthesize albumTitleLB=_albumTitleLB;
@property(retain, nonatomic) UIImageView *albumTitleIV; // @synthesize albumTitleIV=_albumTitleIV;
@property(retain, nonatomic) UILabel *soundTitleLB; // @synthesize soundTitleLB=_soundTitleLB;
@property(retain, nonatomic) XMWebImageView *soundCoverIV; // @synthesize soundCoverIV=_soundCoverIV;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak id <XMMarkTrackListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onDetailMarkAction:(id)arg1;
- (void)onMoreViewTap:(id)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

