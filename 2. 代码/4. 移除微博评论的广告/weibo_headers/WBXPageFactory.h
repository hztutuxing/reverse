//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WBXApplication, WBXApplicationConfig, WBXPage;

@interface WBXPageFactory : NSObject
{
    NSMutableDictionary *_pageConfigs;
    WBXApplicationConfig *_appConfig;
    NSString *_appId;
    WBXPage *preloadWebPage;
    unsigned long long _rootPageMode;
    long long _renderType;
    NSString *_rootPageName;
    NSString *_originRootPageName;
    WBXApplication *_app;
}

@property(nonatomic) __weak WBXApplication *app; // @synthesize app=_app;
@property(retain, nonatomic) NSString *originRootPageName; // @synthesize originRootPageName=_originRootPageName;
@property(retain, nonatomic) NSString *rootPageName; // @synthesize rootPageName=_rootPageName;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) unsigned long long rootPageMode; // @synthesize rootPageMode=_rootPageMode;
- (void).cxx_destruct;
- (id)createPage:(id)arg1 pageMode:(unsigned long long)arg2;
- (void)_setupFactory;
- (id)initWithApp:(id)arg1 Config:(id)arg2;

@end

