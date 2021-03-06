//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNNetworkClient.h"

@interface WBUniversalNetworkClient : SNNetworkClient
{
    _Bool disableServerSwitching;
    _Bool useSecureConnection;
    _Bool ignoreReachabilityStatus;
}

+ (_Bool)serverAvailable;
+ (id)serverBaseURLSuffix;
+ (_Bool)serverSupportsHTTPSConnection:(id)arg1;
+ (id)sharedClient_safe;
+ (id)sharedClientWithModuleName:(id)arg1;
+ (id)generalRequestParams;
+ (id)ua;
+ (void)setForceRequestProtocol:(unsigned long long)arg1;
+ (unsigned long long)forceRequestProtocol;
@property(nonatomic) _Bool ignoreReachabilityStatus; // @synthesize ignoreReachabilityStatus;
@property(nonatomic) _Bool disableServerSwitching; // @synthesize disableServerSwitching;
- (id)wrapperWithRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)getHostName:(id)arg1;
- (void)chooseAndResetBaseUrl:(id)arg1;
- (id)uploadPath:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)postPath:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)getPath:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)uploadPath:(id)arg1 parameters:(id)arg2 arrayQueryPaths:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)postPath:(id)arg1 parameters:(id)arg2 arrayQueryPaths:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)getPath:(id)arg1 parameters:(id)arg2 arrayQueryPaths:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)logFailureRequestWithPath:(id)arg1 parameters:(id)arg2 operationWrapper:(id)arg3 error:(id)arg4 method:(id)arg5 startRequestTime:(id)arg6 endRequestTime:(id)arg7;
- (void)logSuccessRequestWithPath:(id)arg1 parameters:(id)arg2 operationWrapper:(id)arg3 reulst:(id)arg4 method:(id)arg5 startRequestTime:(id)arg6 endRequestTime:(id)arg7;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;
- (id)defaultBaseURL;
- (id)backupBaseURL;
- (Class)httpOperationClass;
- (Class)errorHandlerClass;
- (id)defaultServerHost;
- (id)defaultRequestScheme;
- (_Bool)isDebugModeNeeded;
- (_Bool)isLogNeeded;
- (void)generateNotificationHandler;
- (void)generateDefaultParameters;
- (void)resetBaseURL:(id)arg1;
- (void)handleForceReqeustProtocolChangedNotification:(id)arg1;
- (void)resetSecureConnection;
- (id)connectionURLScheme;
- (void)didSuccessAfterSwitchHTTPS2HTTP;
- (void)reachabilityChanged:(id)arg1;
- (_Bool)isWIFIConnected;

@end

