//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface XMRecommendGenderView : UIView
{
    long long _gender;
    CDUnknownBlockType _selectedGenderBlock;
    UIButton *_maleButton;
    UIButton *_femaleButton;
}

@property(retain, nonatomic) UIButton *femaleButton; // @synthesize femaleButton=_femaleButton;
@property(retain, nonatomic) UIButton *maleButton; // @synthesize maleButton=_maleButton;
@property(copy, nonatomic) CDUnknownBlockType selectedGenderBlock; // @synthesize selectedGenderBlock=_selectedGenderBlock;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

