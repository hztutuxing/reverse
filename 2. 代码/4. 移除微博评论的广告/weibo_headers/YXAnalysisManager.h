//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer, YXStatisticsHttpClient;
@protocol OS_dispatch_queue, YXAnalysisManagerDelegate;

@interface YXAnalysisManager : NSObject
{
    NSObject<OS_dispatch_queue> *_save_queue;
    _Bool _isCompressRequestBody;
    NSString *_udid;
    NSDictionary *_frameworksVer;
    NSString *_appKey;
    NSString *_logUrl;
    long long _uploadLogInterval;
    id <YXAnalysisManagerDelegate> _delegate;
    NSString *_scid;
    NSString *_autherId;
    NSString *_liveType;
    NSString *_liveFrom;
    NSString *_luicode;
    long long _status;
    YXStatisticsHttpClient *_httpClient;
    NSString *_currentToken;
    NSDictionary *_currentUserInfo;
    NSTimer *_uploadLogTimer;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *uploadLogTimer; // @synthesize uploadLogTimer=_uploadLogTimer;
@property(retain, nonatomic) NSDictionary *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property(retain, nonatomic) NSString *currentToken; // @synthesize currentToken=_currentToken;
@property(retain, nonatomic) YXStatisticsHttpClient *httpClient; // @synthesize httpClient=_httpClient;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
@property(retain, nonatomic) NSString *liveFrom; // @synthesize liveFrom=_liveFrom;
@property(retain, nonatomic) NSString *liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) NSString *autherId; // @synthesize autherId=_autherId;
@property(retain, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) __weak id <YXAnalysisManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uploadLogInterval; // @synthesize uploadLogInterval=_uploadLogInterval;
@property(retain, nonatomic) NSString *logUrl; // @synthesize logUrl=_logUrl;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSDictionary *frameworksVer; // @synthesize frameworksVer=_frameworksVer;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
- (void).cxx_destruct;
- (void)doUploadLogTimer:(id)arg1;
- (id)logTypeBlacklist;
@property(nonatomic) _Bool isCompressRequestBody; // @dynamic isCompressRequestBody;
- (id)getNetworkStatus;
- (id)riskDirList;
- (id)riskAppList;
- (id)getAntiCheatingInfo;
- (id)exclusivePerformanceLog;
- (id)generateCommonLog:(id)arg1 eventID:(id)arg2 tag:(id)arg3;
- (id)cm;
- (void)reportInstantLog:(id)arg1 type:(id)arg2 isMultiple:(_Bool)arg3;
- (void)reportInstantLog:(id)arg1 isMultiple:(_Bool)arg2;
- (id)_generateLogHeaderWithTag:(id)arg1;
- (void)sendAntiCheatingData;
- (void)sendMultiMediaRDLogsInstanly;
- (void)streamToLocalDiskByTag:(id)arg1;
- (void)logMultiMediaRDWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logMultiMediaRDInstanlyWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logPerformanceWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logPerformanceInstanlyWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logWithExtraParameters:(id)arg1 instantly:(_Bool)arg2;
- (void)logInstantlyTrackPageWithExtraParameters:(id)arg1;
- (void)logInstantlyWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logWithEvent:(id)arg1 andExtraParameters:(id)arg2;
- (void)logPublisherTraceWithType:(id)arg1 info:(id)arg2;
- (void)logPlayerTraceWithType:(id)arg1 info:(id)arg2;
- (void)logTraceWithType:(id)arg1 andExtraParameters:(id)arg2 instantly:(_Bool)arg3;
- (void)logTraceWithType:(id)arg1 andExtraParameters:(id)arg2;
- (void)logTraceWithType:(id)arg1 info:(id)arg2;
- (id)_generateRegisterLogParams;
- (void)registerLogSystem;
- (id)init;

@end

