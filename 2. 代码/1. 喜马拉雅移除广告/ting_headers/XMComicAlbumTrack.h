//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMComicAlbumTrack : XMModel
{
    unsigned long long _trackId;
    NSString *_orderTitle;
    NSString *_title;
    unsigned long long _uid;
}

@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;

@end

