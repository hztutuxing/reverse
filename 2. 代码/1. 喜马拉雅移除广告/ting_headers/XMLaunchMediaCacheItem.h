//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMLaunchMediaCacheItem : NSObject
{
    _Bool _finished;
    NSString *_url;
    NSString *_fileName;
    double _start;
    double _end;
    long long _size;
}

@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;

@end

