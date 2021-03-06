//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "GDTResourceLoaderDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol GDTResourceLoaderManagerDelegate;

@interface GDTResourceLoaderManager : NSObject <GDTResourceLoaderDelegate, AVAssetResourceLoaderDelegate>
{
    id <GDTResourceLoaderManagerDelegate> _delegate;
    NSMutableDictionary *_loaders;
}

+ (id)assetURLWithURL:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *loaders; // @synthesize loaders=_loaders;
@property(nonatomic) __weak id <GDTResourceLoaderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)loaderForRequest:(id)arg1;
- (id)keyForResourceLoaderWithURL:(id)arg1;
- (void)resourceLoader:(id)arg1 didFailWithError:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)cleanCache;
- (id)init;
- (id)urlAssetWithURL:(id)arg1;
- (id)playerItemWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

