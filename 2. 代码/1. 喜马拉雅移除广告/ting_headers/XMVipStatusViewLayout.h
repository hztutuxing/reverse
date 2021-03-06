//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseLayout.h"

@class NSURL, XMVipStatusItem;

@interface XMVipStatusViewLayout : XMBaseLayout
{
    NSURL *_avatarUrl;
    XMVipStatusItem *_statusItem;
    XMBaseLayout *_avatarLayout;
    XMBaseLayout *_vipTagLayout;
    XMBaseLayout *_vipButtonLayout;
    XMBaseLayout *_expiredLabelLayout;
    XMBaseLayout *_expiredBackLayout;
    XMBaseLayout *_greetLabelLayout;
    XMBaseLayout *_levelIconLayout;
    XMBaseLayout *_weeklyLayout;
}

@property(retain, nonatomic) XMBaseLayout *weeklyLayout; // @synthesize weeklyLayout=_weeklyLayout;
@property(retain, nonatomic) XMBaseLayout *levelIconLayout; // @synthesize levelIconLayout=_levelIconLayout;
@property(retain, nonatomic) XMBaseLayout *greetLabelLayout; // @synthesize greetLabelLayout=_greetLabelLayout;
@property(retain, nonatomic) XMBaseLayout *expiredBackLayout; // @synthesize expiredBackLayout=_expiredBackLayout;
@property(retain, nonatomic) XMBaseLayout *expiredLabelLayout; // @synthesize expiredLabelLayout=_expiredLabelLayout;
@property(retain, nonatomic) XMBaseLayout *vipButtonLayout; // @synthesize vipButtonLayout=_vipButtonLayout;
@property(retain, nonatomic) XMBaseLayout *vipTagLayout; // @synthesize vipTagLayout=_vipTagLayout;
@property(retain, nonatomic) XMBaseLayout *avatarLayout; // @synthesize avatarLayout=_avatarLayout;
@property(retain, nonatomic) XMVipStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain, nonatomic) NSURL *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;

@end

