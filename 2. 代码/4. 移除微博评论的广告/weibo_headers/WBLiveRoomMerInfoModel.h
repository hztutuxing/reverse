//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSDictionary, WBLiveRoomConfigModel;

@interface WBLiveRoomMerInfoModel : WBNLBaseModel
{
    _Bool _isDemotion;
    _Bool _hasPre;
    WBLiveRoomConfigModel *_liveRoomConfigModel;
    NSDictionary *_imageStickerDic;
    NSDictionary *_textStickerDic;
}

@property(retain, nonatomic) NSDictionary *textStickerDic; // @synthesize textStickerDic=_textStickerDic;
@property(retain, nonatomic) NSDictionary *imageStickerDic; // @synthesize imageStickerDic=_imageStickerDic;
@property(nonatomic) _Bool hasPre; // @synthesize hasPre=_hasPre;
@property(nonatomic) _Bool isDemotion; // @synthesize isDemotion=_isDemotion;
@property(retain, nonatomic) WBLiveRoomConfigModel *liveRoomConfigModel; // @synthesize liveRoomConfigModel=_liveRoomConfigModel;
- (void).cxx_destruct;

@end

