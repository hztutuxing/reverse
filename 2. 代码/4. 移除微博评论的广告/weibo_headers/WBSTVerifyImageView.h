//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WBContact;

@interface WBSTVerifyImageView : UIView
{
    WBContact *_contact;
    UIImageView *_flagImageView;
}

+ (_Bool)hasVerifyImage:(id)arg1;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(retain, nonatomic) WBContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

