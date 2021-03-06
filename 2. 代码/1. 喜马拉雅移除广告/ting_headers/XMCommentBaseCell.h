//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIView;
@protocol XMCommentBaseLayout;

@interface XMCommentBaseCell : UITableViewCell
{
    _Bool _hasInitialized;
    _Bool _autoLayoutSeparatorView;
    _Bool _contentHasChangedSinceLastLayoutSubviews;
    _Bool _onlyLayoutValid;
    id _delegate;
    id _userInfo;
    NSIndexPath *_indexPath;
    id _model;
    UIView *_separatorView;
    id <XMCommentBaseLayout> _layout;
    id _layoutConfig;
    struct CGSize _lastLayoutSubviewsSize;
}

@property(nonatomic) _Bool onlyLayoutValid; // @synthesize onlyLayoutValid=_onlyLayoutValid;
@property(retain, nonatomic) id layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(retain, nonatomic) id <XMCommentBaseLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) struct CGSize lastLayoutSubviewsSize; // @synthesize lastLayoutSubviewsSize=_lastLayoutSubviewsSize;
@property(nonatomic) _Bool contentHasChangedSinceLastLayoutSubviews; // @synthesize contentHasChangedSinceLastLayoutSubviews=_contentHasChangedSinceLastLayoutSubviews;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) _Bool autoLayoutSeparatorView; // @synthesize autoLayoutSeparatorView=_autoLayoutSeparatorView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initializationLayout;
@property(readonly, nonatomic) double separatorViewHeight;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

