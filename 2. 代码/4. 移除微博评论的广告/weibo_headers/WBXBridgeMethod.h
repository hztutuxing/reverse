//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WBXApplication;

@interface WBXBridgeMethod : NSObject
{
    NSString *_methodName;
    NSMutableArray *_arguments;
    NSString *_pageID;
    WBXApplication *_app;
}

@property(readonly, nonatomic) __weak WBXApplication *app; // @synthesize app=_app;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(readonly, copy, nonatomic) NSMutableArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (void).cxx_destruct;
- (id)invocationWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)parseArgument:(id)arg1 parameterType:(const char *)arg2 order:(int)arg3;
- (id)description;
- (id)initWithMethodName:(id)arg1 arguments:(id)arg2 page:(id)arg3 app:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)initWithMethodName:(id)arg1 arguments:(id)arg2 page:(id)arg3 app:(id)arg4;

@end

