//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class WBUser;

@interface WBUserProfileLikeButton : UIButton
{
    WBUser *_user;
    unsigned long long _currentLikeState;
}

@property(nonatomic) unsigned long long currentLikeState; // @synthesize currentLikeState=_currentLikeState;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)profileLikeButtonAction;
- (_Bool)isOther;
- (void)postWithLikeState:(unsigned long long)arg1;
- (void)setLikeState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

