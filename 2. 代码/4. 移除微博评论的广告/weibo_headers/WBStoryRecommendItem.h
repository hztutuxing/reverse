//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface WBStoryRecommendItem : WBModelObject
{
    NSString *_type;
    NSArray *_storyItems;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *storyItems; // @synthesize storyItems=_storyItems;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

