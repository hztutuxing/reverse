//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMRecFlowNewUserRecModel : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_url;
    NSString *_bgPic;
    long long _Id;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long Id; // @synthesize Id=_Id;
@property(copy, nonatomic) NSString *bgPic; // @synthesize bgPic=_bgPic;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

