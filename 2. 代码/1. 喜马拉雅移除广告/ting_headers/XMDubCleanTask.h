//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubCleanTask : XMModel
{
    long long _taskId;
    unsigned long long _status;
    NSString *_originalAudioUrl;
    NSString *_cleanVideoUrl;
    NSString *_pureHumanUrl;
}

@property(retain, nonatomic) NSString *pureHumanUrl; // @synthesize pureHumanUrl=_pureHumanUrl;
@property(retain, nonatomic) NSString *cleanVideoUrl; // @synthesize cleanVideoUrl=_cleanVideoUrl;
@property(retain, nonatomic) NSString *originalAudioUrl; // @synthesize originalAudioUrl=_originalAudioUrl;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

