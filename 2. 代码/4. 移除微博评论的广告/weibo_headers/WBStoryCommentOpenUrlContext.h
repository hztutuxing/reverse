//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

#import "WBStoryDataStoreObserver-Protocol.h"

@class NSString;

@interface WBStoryCommentOpenUrlContext : WBOpenUrlContextBase <WBStoryDataStoreObserver>
{
    NSString *_storyID;
    long long _segmentID;
    long long _commentID;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long commentID; // @synthesize commentID=_commentID;
@property(nonatomic) long long segmentID; // @synthesize segmentID=_segmentID;
@property(retain, nonatomic) NSString *storyID; // @synthesize storyID=_storyID;
- (void).cxx_destruct;
- (void)startContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

