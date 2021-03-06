//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMVideoCollectionModel;
@protocol XMComicVideoPageSelectedDelegate;

@interface XMComicVideoListView : UIView
{
    _Bool _isShowing;
    _Bool _isPortrait;
    XMVideoCollectionModel *_videoModel;
    id <XMComicVideoPageSelectedDelegate> _selectItemDelegate;
    CDUnknownBlockType _listViewWillHideBlock;
}

@property(copy, nonatomic) CDUnknownBlockType listViewWillHideBlock; // @synthesize listViewWillHideBlock=_listViewWillHideBlock;
@property(nonatomic) __weak id <XMComicVideoPageSelectedDelegate> selectItemDelegate; // @synthesize selectItemDelegate=_selectItemDelegate;
@property(retain, nonatomic) XMVideoCollectionModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)hideListViewForPortrait;
- (void)showListViewForPortrait;
- (void)hideListView;
- (void)showListView;
- (struct CGSize)fittingSize;
- (void)loadSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

