//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YYThreadSafeArray;

@interface XMRadioAndSoundHistoryMgr : NSObject
{
    YYThreadSafeArray *_radioAndSloundHistoryList;
    YYThreadSafeArray *_listenedHistoryList;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) YYThreadSafeArray *listenedHistoryList; // @synthesize listenedHistoryList=_listenedHistoryList;
@property(retain, nonatomic) YYThreadSafeArray *radioAndSloundHistoryList; // @synthesize radioAndSloundHistoryList=_radioAndSloundHistoryList;
- (void).cxx_destruct;
- (void)updateExtControlCenter;
- (void)saveListenedHistoryData;
- (id)loadListenedHistoryData;
- (void)cleanHistory;
- (void)clearFileIfNeeded;
- (void)removeHistoryItem:(id)arg1;
- (void)writeHistoryListToFile;
- (void)updateSoundItem:(id)arg1;
- (void)updateRadioItem:(id)arg1;
- (void)changeRadioNotify:(id)arg1;
- (void)changeSoundTrackNotify:(id)arg1;
- (void)loadRadioAndSoundHistory;
- (void)addNotificationsObserver;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

