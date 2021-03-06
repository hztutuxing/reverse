//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCommonImageTextCard.h"

@class NSArray, NSDictionary, NSString;

@interface WBPageImageWithDoubleFieldDoubleLinesCard : WBPageCommonImageTextCard
{
    _Bool _roundedImgView;
    NSString *pic;
    NSString *desc;
    NSString *title_sub;
    NSArray *buttonModels;
    NSString *arrowDesc;
    NSString *_title_color;
    NSString *_title_sub_color;
    NSString *_photoTagType;
    NSDictionary *_locationDic;
    unsigned long long _buttonStyle;
    unsigned long long _topPaddingStyle;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(nonatomic) unsigned long long topPaddingStyle; // @synthesize topPaddingStyle=_topPaddingStyle;
@property(nonatomic) _Bool roundedImgView; // @synthesize roundedImgView=_roundedImgView;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSDictionary *locationDic; // @synthesize locationDic=_locationDic;
@property(copy, nonatomic) NSString *photoTagType; // @synthesize photoTagType=_photoTagType;
@property(copy, nonatomic) NSString *title_sub_color; // @synthesize title_sub_color=_title_sub_color;
@property(copy, nonatomic) NSString *title_color; // @synthesize title_color=_title_color;
@property(retain, nonatomic) NSString *arrowDesc; // @synthesize arrowDesc;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels;
@property(retain, nonatomic) NSString *title_sub; // @synthesize title_sub;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *pic; // @synthesize pic;
- (void).cxx_destruct;
- (id)searchItem;
- (id)commonButtonModels;
- (id)commonDesc1;
- (id)commonPic;
- (id)commonSubTitle;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (_Bool)needBubbleBackgroundInTrend;
- (_Bool)isLargeImageMode;
- (id)textFields;

@end

