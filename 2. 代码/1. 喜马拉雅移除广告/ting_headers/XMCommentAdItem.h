//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMAdItem.h"

@class NSString;

@interface XMCommentAdItem : XMAdItem
{
    _Bool _soundEnabled;
    NSString *_providerName;
    NSString *_providerAvatar;
    NSString *_actionButtonText;
    NSString *_pictureUrl;
}

@property(nonatomic) _Bool soundEnabled; // @synthesize soundEnabled=_soundEnabled;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(copy, nonatomic) NSString *providerAvatar; // @synthesize providerAvatar=_providerAvatar;
@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
- (void).cxx_destruct;
- (void)updateFromDictionary:(id)arg1;

@end

