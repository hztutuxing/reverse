//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMFireworkProtalModel : NSObject
{
    NSString *_signature;
    long long _limitCount;
    NSArray *_plans;
    NSArray *_locations;
    NSString *_resourceIntervals;
    double _intervalMilliseconds;
}

+ (id)loadFromLocalFile;
+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) double intervalMilliseconds; // @synthesize intervalMilliseconds=_intervalMilliseconds;
@property(retain, nonatomic) NSString *resourceIntervals; // @synthesize resourceIntervals=_resourceIntervals;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *plans; // @synthesize plans=_plans;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (_Bool)saveToFile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

