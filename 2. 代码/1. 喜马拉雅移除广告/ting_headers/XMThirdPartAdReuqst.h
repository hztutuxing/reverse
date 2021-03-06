//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface XMThirdPartAdReuqst : NSObject
{
    NSMutableArray *_adItems;
    NSMutableArray *_gdtAdItemsNeedUpdate;
    NSMutableArray *_buAdItemsNeedUpdate;
    NSMutableArray *_madAdItemsNeedUpdate;
    NSMutableArray *_inmobiAdItemsNeedUpdate;
    CDUnknownBlockType _complete;
    CDUnknownBlockType _gotSomeData;
    double _timeout;
}

+ (id)gdtGetViewFromExtraInfo:(id)arg1;
+ (id)gdtExtrInfoWithView:(id)arg1 andWeakReference:(_Bool)arg2;
+ (void)fillLaunchThirdPartNativeAdWithAdItems:(id)arg1 andTimeout:(double)arg2 andGotSomeData:(CDUnknownBlockType)arg3;
+ (void)fillThirdPartNativeAdWithAdItems:(id)arg1 andTimeout:(double)arg2 andComplete:(CDUnknownBlockType)arg3;
+ (void)fillThirdPartNativeAdWithAdItems:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType gotSomeData; // @synthesize gotSomeData=_gotSomeData;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSMutableArray *inmobiAdItemsNeedUpdate; // @synthesize inmobiAdItemsNeedUpdate=_inmobiAdItemsNeedUpdate;
@property(retain, nonatomic) NSMutableArray *madAdItemsNeedUpdate; // @synthesize madAdItemsNeedUpdate=_madAdItemsNeedUpdate;
@property(retain, nonatomic) NSMutableArray *buAdItemsNeedUpdate; // @synthesize buAdItemsNeedUpdate=_buAdItemsNeedUpdate;
@property(retain, nonatomic) NSMutableArray *gdtAdItemsNeedUpdate; // @synthesize gdtAdItemsNeedUpdate=_gdtAdItemsNeedUpdate;
@property(retain, nonatomic) NSMutableArray *adItems; // @synthesize adItems=_adItems;
- (void).cxx_destruct;
- (void)startFillLaunchAd;
- (void)startFill;
- (void)dealloc;

@end

