//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowMSMultiItemCollectionViewCellModel : XMModel
{
    NSString *_avater;
    unsigned long long _uid;
    NSString *_name;
    NSString *_roleName;
    NSString *_otherRoleName;
    NSString *_materialCover;
    NSString *_materialTitle;
    NSString *_materialDetail;
    unsigned long long _multiPlayCount;
    long long _materialId;
    long long _trackId;
    NSString *_text;
}

+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(nonatomic) unsigned long long multiPlayCount; // @synthesize multiPlayCount=_multiPlayCount;
@property(copy, nonatomic) NSString *materialDetail; // @synthesize materialDetail=_materialDetail;
@property(copy, nonatomic) NSString *materialTitle; // @synthesize materialTitle=_materialTitle;
@property(copy, nonatomic) NSString *materialCover; // @synthesize materialCover=_materialCover;
@property(copy, nonatomic) NSString *otherRoleName; // @synthesize otherRoleName=_otherRoleName;
@property(copy, nonatomic) NSString *roleName; // @synthesize roleName=_roleName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *avater; // @synthesize avater=_avater;
- (void).cxx_destruct;

@end

