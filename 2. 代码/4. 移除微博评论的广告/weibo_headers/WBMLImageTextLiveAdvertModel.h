//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString, WBMLImageTextLiveAdvertCloseWindowModel;

@interface WBMLImageTextLiveAdvertModel : WBMLBaseModel
{
    unsigned long long _type;
    NSString *_title;
    NSString *_resource_url;
    NSString *_target_url;
    NSString *_cover_url;
    unsigned long long _delivery_mode;
    WBMLImageTextLiveAdvertCloseWindowModel *_close_window;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) WBMLImageTextLiveAdvertCloseWindowModel *close_window; // @synthesize close_window=_close_window;
@property(nonatomic) unsigned long long delivery_mode; // @synthesize delivery_mode=_delivery_mode;
@property(copy, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
@property(copy, nonatomic) NSString *target_url; // @synthesize target_url=_target_url;
@property(copy, nonatomic) NSString *resource_url; // @synthesize resource_url=_resource_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

