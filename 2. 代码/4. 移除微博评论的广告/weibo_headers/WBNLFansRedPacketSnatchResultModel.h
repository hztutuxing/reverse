//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSArray, WBNLFansRedPacketSnatchResultInfoModel;

@interface WBNLFansRedPacketSnatchResultModel : WBNLBaseModel
{
    WBNLFansRedPacketSnatchResultInfoModel *_result;
    NSArray *_best_list;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *best_list; // @synthesize best_list=_best_list;
@property(retain, nonatomic) WBNLFansRedPacketSnatchResultInfoModel *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

