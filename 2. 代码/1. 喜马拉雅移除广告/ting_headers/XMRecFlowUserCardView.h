//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class LOTAnimationView, UILabel, XMRecFlowNewUserRecModel, XMWebImageView;

@interface XMRecFlowUserCardView : UIButton
{
    XMRecFlowNewUserRecModel *_model;
    XMWebImageView *_bgImageView;
    UILabel *_itingTitleLabel;
    UILabel *_subTitleLabel;
    LOTAnimationView *_aniView;
}

@property(retain, nonatomic) LOTAnimationView *aniView; // @synthesize aniView=_aniView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *itingTitleLabel; // @synthesize itingTitleLabel=_itingTitleLabel;
@property(retain, nonatomic) XMWebImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) XMRecFlowNewUserRecModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

