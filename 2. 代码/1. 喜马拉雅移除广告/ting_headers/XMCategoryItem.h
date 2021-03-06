//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString, NSURL;

@interface XMCategoryItem : NSObject <NSCopying, NSCoding, NSMutableCopying>
{
    _Bool isDisplay;
    _Bool isFinished;
    _Bool filterSupported;
    _Bool isPaid;
    int _virtualType;
    NSString *title;
    NSURL *imageUrl;
    long long orderNum;
    long long categoryId;
    NSString *name;
    NSString *intro;
    NSString *contentType;
    NSString *calcDimension;
    NSString *tagName;
    NSString *keywordName;
    long long keywordId;
    NSString *metadataStr;
    long long _categoryType;
    long long _albumCount;
    long long _moduleType;
    NSString *_subCategoryName;
}

@property(retain, nonatomic) NSString *subCategoryName; // @synthesize subCategoryName=_subCategoryName;
@property(nonatomic) int virtualType; // @synthesize virtualType=_virtualType;
@property(nonatomic) long long moduleType; // @synthesize moduleType=_moduleType;
@property(nonatomic) long long albumCount; // @synthesize albumCount=_albumCount;
@property(nonatomic) long long categoryType; // @synthesize categoryType=_categoryType;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid;
@property(nonatomic) _Bool filterSupported; // @synthesize filterSupported;
@property(copy, nonatomic) NSString *metadataStr; // @synthesize metadataStr;
@property(nonatomic) long long keywordId; // @synthesize keywordId;
@property(copy, nonatomic) NSString *keywordName; // @synthesize keywordName;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName;
@property(copy, nonatomic) NSString *calcDimension; // @synthesize calcDimension;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay;
@property(copy, nonatomic) NSString *intro; // @synthesize intro;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) long long categoryId; // @synthesize categoryId;
@property(nonatomic) long long orderNum; // @synthesize orderNum;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)updatePropertiesFromSearchAlertDic:(id)arg1;
- (void)updatePropertiesFromPopDictionary:(id)arg1;
- (void)updatePropertiesFromFindDictionary:(id)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

