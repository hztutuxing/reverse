//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ArticleContinueReadBaseView.h"

#import "WBContinueReadViewDelegate-Protocol.h"
#import "WBPageCardViewProtocol-Protocol.h"

@class NSString, UIImageView, WBContinueReadView, WBPageCardFlatBigPicView, WBUniversalArticle, WBUser;

@interface ArticleContinueReadView : ArticleContinueReadBaseView <WBContinueReadViewDelegate, WBPageCardViewProtocol>
{
    double followToReadCardHeight;
    WBContinueReadView *continueReadView;
    UIImageView *_topLineView;
    WBPageCardFlatBigPicView *_flatBigPicView;
    WBUser *_user;
    WBUniversalArticle *_articleModel;
}

+ (double)viewHeightWithArticle:(id)arg1 showContinueView:(_Bool)arg2;
@property(retain, nonatomic) WBUniversalArticle *articleModel; // @synthesize articleModel=_articleModel;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) WBPageCardFlatBigPicView *flatBigPicView; // @synthesize flatBigPicView=_flatBigPicView;
@property(retain, nonatomic) UIImageView *topLineView; // @synthesize topLineView=_topLineView;
- (void).cxx_destruct;
- (void)continueButtonDidClick:(id)arg1;
- (_Bool)handleActionWithView:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4 withButton:(id)arg5;
- (void)_buildFollowButtonExtraActionHttpPramsByArticle:(id)arg1 moduleId:(id)arg2;
- (void)setFollowed:(_Bool)arg1;
- (void)sizeToFit;
- (void)setArticle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

