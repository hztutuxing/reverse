//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMessageFlowFilterModel, NSArray, NSMutableDictionary, NSString;

@interface MMMessageFlowFilterManager : NSObject
{
    _Bool loading;
    MMMessageFlowFilterModel *_selectedFirstGroupModel;
    MMMessageFlowFilterModel *_selectedSecondGroupModel;
    CDUnknownBlockType _titleChangeBlock;
    NSMutableDictionary *_nameModelInfo;
    NSArray *_filterGroups;
    NSString *_version;
}

+ (unsigned long long)focusUnreadRemindType;
+ (unsigned long long)allUnreadRemindType;
+ (id)sharedManager;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *filterGroups; // @synthesize filterGroups=_filterGroups;
@property(retain, nonatomic) NSMutableDictionary *nameModelInfo; // @synthesize nameModelInfo=_nameModelInfo;
@property(copy, nonatomic) CDUnknownBlockType titleChangeBlock; // @synthesize titleChangeBlock=_titleChangeBlock;
@property(retain, nonatomic) MMMessageFlowFilterModel *selectedSecondGroupModel; // @synthesize selectedSecondGroupModel=_selectedSecondGroupModel;
@property(retain, nonatomic) MMMessageFlowFilterModel *selectedFirstGroupModel; // @synthesize selectedFirstGroupModel=_selectedFirstGroupModel;
- (void).cxx_destruct;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (id)loadFilterMuLanguage:(id)arg1;
- (id)allFilerGroups;
- (id)defaultFilterGroups;
- (void)loadCaceData;
- (id)badgeValue:(id)arg1;
- (void)saveDotRemindTimeStamp;
- (_Bool)dotRemindingRegular;
- (id)titleViewUnreadCount;
- (id)titleViewBadgeValue;
- (void)resetSelectedFilterItem;
- (void)configDelfaultSelect;
- (id)filterTitle;
- (void)loadDataWithDic:(id)arg1;
- (void)archiveFilterInfo:(id)arg1;
- (void)fetchFilterInfo;
- (void)fetchFilterInfoWithVersion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

