//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSString;

@interface WBFreshFilterGroupCard : WBPageCard
{
    long long _mp_type;
    NSString *_pic_url;
    NSArray *_params;
    long long _currentIndex;
}

+ (Class)viewClass;
+ (Class)fangleTableCellClass;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(nonatomic) long long mp_type; // @synthesize mp_type=_mp_type;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

