//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMNewUserWelfareGiftAlbumModel : XMModel
{
    long long _uid;
    long long _albumId;
    NSString *_title;
    NSString *_pic;
    unsigned long long _discountedPrice;
}

@property(nonatomic) unsigned long long discountedPrice; // @synthesize discountedPrice=_discountedPrice;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end

