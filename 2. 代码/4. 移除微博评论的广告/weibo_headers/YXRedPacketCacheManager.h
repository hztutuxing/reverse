//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface YXRedPacketCacheManager : NSObject
{
    NSMutableDictionary *_alreadyGrabRedPacketIds;
    NSMutableDictionary *_alreadySharedLiveScIds;
    NSString *_worldRedPacketId;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *worldRedPacketId; // @synthesize worldRedPacketId=_worldRedPacketId;
@property(retain, nonatomic) NSMutableDictionary *alreadySharedLiveScIds; // @synthesize alreadySharedLiveScIds=_alreadySharedLiveScIds;
@property(retain, nonatomic) NSMutableDictionary *alreadyGrabRedPacketIds; // @synthesize alreadyGrabRedPacketIds=_alreadyGrabRedPacketIds;
- (void).cxx_destruct;
- (void)addAlreadyGrabRedPacketId:(id)arg1 userId:(id)arg2;
- (void)addAlreadySharedLiveScId:(id)arg1 userId:(id)arg2;
- (_Bool)isAlreadySharedLiveScIdsWithCache:(id)arg1 userId:(id)arg2;
- (_Bool)isAlreadyGrabRedPacketWithCache:(id)arg1 userId:(id)arg2;

@end

