//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTBLiveCommentTaobaoLoginTool : NSObject
{
    _Bool _sdkHasInit;
    CDUnknownBlockType _loginCallback;
}

+ (id)shareInstance;
@property _Bool sdkHasInit; // @synthesize sdkHasInit=_sdkHasInit;
@property(copy, nonatomic) CDUnknownBlockType loginCallback; // @synthesize loginCallback=_loginCallback;
- (void).cxx_destruct;
- (void)loginTaobaoAccountWithSource:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)bindTaobaoAccountWithComplete:(CDUnknownBlockType)arg1;
- (void)loadALBBCookie;
- (_Bool)hasLoggedInTaobao;
- (void)uploadBindInfoWithDefaultAction;
- (void)uploadBindInfo:(id)arg1 successComplition:(CDUnknownBlockType)arg2 failComplition:(CDUnknownBlockType)arg3;
- (void)initTaobaoWithCompleteHandle:(CDUnknownBlockType)arg1;
- (void)bindingTaobaoAccount;
- (void)hasBindingTaobaoAccount:(CDUnknownBlockType)arg1;

@end

