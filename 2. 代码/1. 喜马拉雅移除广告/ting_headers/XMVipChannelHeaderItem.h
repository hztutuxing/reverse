//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, XMVipCategoryItem;

@interface XMVipChannelHeaderItem : XMModel
{
    _Bool _hasMore;
    NSString *_icon;
    NSString *_defaultIcon;
    long long _moreAlbumId;
    NSString *_title;
    NSString *_buttonText;
    NSString *_subTitle;
    NSString *_moreUrl;
    NSString *_aggregatePictures;
    NSString *_cardClass;
    long long _cardClassType;
    long long _moduleType;
    NSString *_moduleTypeStr;
    NSString *_moduleName;
    long long _moduleId;
    unsigned long long _categoryId;
    unsigned long long _albumId;
    long long _showStyle;
    NSString *_squareClassTypeStr;
    long long _squareClassType;
}

+ (id)headerItemFromModuleDic:(id)arg1;
@property(nonatomic) long long squareClassType; // @synthesize squareClassType=_squareClassType;
@property(copy, nonatomic) NSString *squareClassTypeStr; // @synthesize squareClassTypeStr=_squareClassTypeStr;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long moduleId; // @synthesize moduleId=_moduleId;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *moduleTypeStr; // @synthesize moduleTypeStr=_moduleTypeStr;
@property(nonatomic) long long moduleType; // @synthesize moduleType=_moduleType;
@property(nonatomic) long long cardClassType; // @synthesize cardClassType=_cardClassType;
@property(copy, nonatomic) NSString *cardClass; // @synthesize cardClass=_cardClass;
@property(copy, nonatomic) NSString *aggregatePictures; // @synthesize aggregatePictures=_aggregatePictures;
@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long moreAlbumId; // @synthesize moreAlbumId=_moreAlbumId;
@property(copy, nonatomic) NSString *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
@property(retain, nonatomic) XMVipCategoryItem *selectedCategory;

@end

