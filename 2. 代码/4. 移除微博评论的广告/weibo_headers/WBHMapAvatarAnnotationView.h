//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIImageView, WBHMapAvatarImageView, WBHMapSubLabelAnnotationView;

@interface WBHMapAvatarAnnotationView : MKAnnotationView
{
    _Bool _hightlight;
    WBHMapAvatarImageView *_avtarImageView;
    UIImageView *_topRightImageView;
    WBHMapSubLabelAnnotationView *_subLabel;
}

@property(retain, nonatomic) WBHMapSubLabelAnnotationView *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UIImageView *topRightImageView; // @synthesize topRightImageView=_topRightImageView;
@property(retain, nonatomic) WBHMapAvatarImageView *avtarImageView; // @synthesize avtarImageView=_avtarImageView;
@property(nonatomic) _Bool hightlight; // @synthesize hightlight=_hightlight;
- (void).cxx_destruct;
- (unsigned long long)_anonotationTypeWithAnnotation:(id)arg1;
- (void)reloadData:(id)arg1;
- (_Bool)_isValidateURLScheme:(id)arg1;
- (void)_setContentLabelText:(id)arg1 subText:(id)arg2;
- (void)_setAvatarImage:(id)arg1 topRightImage:(id)arg2;
- (void)updateHighlightedIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_addSubViews;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)animtaionBeforeRemoveCompeltion:(CDUnknownBlockType)arg1;
- (void)_showAnimtaion;

@end

