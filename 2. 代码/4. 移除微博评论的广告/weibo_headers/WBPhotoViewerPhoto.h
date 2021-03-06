//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PHAsset, PHLivePhoto, UIImage, WBStatus, WBVideoItem;
@protocol WeiboCubeMMMessageProtocol;

@interface WBPhotoViewerPhoto : NSObject
{
    _Bool _isLivePhoto;
    _Bool need_auth;
    _Bool _isOriginalImage;
    _Bool _isUploadedOriginalImage;
    _Bool _isImageSuccessed;
    _Bool _isButtonSchemeH5;
    _Bool _hasTag;
    _Bool _hasFocusPoint;
    _Bool _canDelete;
    _Bool _needRefreshPaidInfo;
    _Bool _fromMessage;
    int _emoticonType;
    long long recommendIndex;
    NSString *_livephotoImageFilePath;
    NSString *_livephotoVideoFilePath;
    UIImage *_photoImage;
    NSString *_photoPath;
    NSString *_photoURL;
    NSString *_photoOriginalUrl;
    NSString *_photoLargeUrl;
    NSDictionary *_thumbnailDic;
    UIImage *_thumbnailImage;
    NSString *_objectID;
    NSString *_picID;
    unsigned long long _originalPhotoSize;
    NSString *_originalPhotoSizeFormat;
    NSString *_mID;
    NSString *_buttonDisplayName;
    NSString *_buttonScheme;
    long long _picLikeCount;
    unsigned long long _picLikeState;
    long long _commentCount;
    PHAsset *_livePhotoAsset;
    NSArray *_photoTags;
    NSString *_filterID;
    NSString *_stickerID;
    NSString *_uid;
    NSDictionary *_logDic;
    NSString *_photoID;
    NSString *_livePhotoVideoUrl;
    id <WeiboCubeMMMessageProtocol> _message;
    NSDictionary *_adMarkDic;
    PHLivePhoto *_livePhoto;
    NSString *_livephotoVideoFileTempPath;
    NSArray *_actionLog;
    WBVideoItem *_gifVideoItem;
    NSDictionary *_redirectBanner;
    NSString *_photoBlurURL;
    WBStatus *_status;
    long long _longStatusRequestState;
    NSString *_messagePhotoThumbUrl;
    NSString *_messagePhotoOriginalUrl;
    NSString *_traceId;
}

+ (id)photoWithThumbUrl:(id)arg1 originalUrl:(id)arg2;
+ (id)photoWithURL:(id)arg1 originalUrl:(id)arg2 largeUrl:(id)arg3 thumbnailDic:(id)arg4;
+ (id)photoWithURL:(id)arg1 originalUrl:(id)arg2 largeUrl:(id)arg3;
+ (id)photoWithFilePath:(id)arg1;
+ (id)photoWithImage:(id)arg1;
+ (id)photoWithTimeline:(id)arg1 status:(id)arg2;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *messagePhotoOriginalUrl; // @synthesize messagePhotoOriginalUrl=_messagePhotoOriginalUrl;
@property(copy, nonatomic) NSString *messagePhotoThumbUrl; // @synthesize messagePhotoThumbUrl=_messagePhotoThumbUrl;
@property(nonatomic) _Bool fromMessage; // @synthesize fromMessage=_fromMessage;
@property(nonatomic) _Bool needRefreshPaidInfo; // @synthesize needRefreshPaidInfo=_needRefreshPaidInfo;
@property(nonatomic) long long longStatusRequestState; // @synthesize longStatusRequestState=_longStatusRequestState;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *photoBlurURL; // @synthesize photoBlurURL=_photoBlurURL;
@property(retain, nonatomic) NSDictionary *redirectBanner; // @synthesize redirectBanner=_redirectBanner;
@property(retain, nonatomic) WBVideoItem *gifVideoItem; // @synthesize gifVideoItem=_gifVideoItem;
@property(nonatomic) int emoticonType; // @synthesize emoticonType=_emoticonType;
@property(retain, nonatomic) NSArray *actionLog; // @synthesize actionLog=_actionLog;
@property(copy, nonatomic) NSString *livephotoVideoFileTempPath; // @synthesize livephotoVideoFileTempPath=_livephotoVideoFileTempPath;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(copy, nonatomic) NSDictionary *adMarkDic; // @synthesize adMarkDic=_adMarkDic;
@property(retain, nonatomic) id <WeiboCubeMMMessageProtocol> message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *livePhotoVideoUrl; // @synthesize livePhotoVideoUrl=_livePhotoVideoUrl;
@property(copy, nonatomic) NSString *photoID; // @synthesize photoID=_photoID;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool hasFocusPoint; // @synthesize hasFocusPoint=_hasFocusPoint;
@property(copy, nonatomic) NSDictionary *logDic; // @synthesize logDic=_logDic;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
@property(copy, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
@property(retain, nonatomic) NSArray *photoTags; // @synthesize photoTags=_photoTags;
@property(nonatomic) _Bool hasTag; // @synthesize hasTag=_hasTag;
@property(retain, nonatomic) PHAsset *livePhotoAsset; // @synthesize livePhotoAsset=_livePhotoAsset;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long picLikeState; // @synthesize picLikeState=_picLikeState;
@property(nonatomic) long long picLikeCount; // @synthesize picLikeCount=_picLikeCount;
@property(nonatomic) _Bool isButtonSchemeH5; // @synthesize isButtonSchemeH5=_isButtonSchemeH5;
@property(copy, nonatomic) NSString *buttonScheme; // @synthesize buttonScheme=_buttonScheme;
@property(copy, nonatomic) NSString *buttonDisplayName; // @synthesize buttonDisplayName=_buttonDisplayName;
@property(copy, nonatomic) NSString *mID; // @synthesize mID=_mID;
@property(copy, nonatomic) NSString *originalPhotoSizeFormat; // @synthesize originalPhotoSizeFormat=_originalPhotoSizeFormat;
@property(nonatomic) unsigned long long originalPhotoSize; // @synthesize originalPhotoSize=_originalPhotoSize;
@property(copy, nonatomic) NSString *picID; // @synthesize picID=_picID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) _Bool isImageSuccessed; // @synthesize isImageSuccessed=_isImageSuccessed;
@property(nonatomic) _Bool isUploadedOriginalImage; // @synthesize isUploadedOriginalImage=_isUploadedOriginalImage;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) NSDictionary *thumbnailDic; // @synthesize thumbnailDic=_thumbnailDic;
@property(copy, nonatomic) NSString *photoLargeUrl; // @synthesize photoLargeUrl=_photoLargeUrl;
@property(copy, nonatomic) NSString *photoOriginalUrl; // @synthesize photoOriginalUrl=_photoOriginalUrl;
@property(copy, nonatomic) NSString *photoURL; // @synthesize photoURL=_photoURL;
@property(copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) _Bool need_auth; // @synthesize need_auth;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(nonatomic) long long recommendIndex; // @synthesize recommendIndex;
- (void).cxx_destruct;
- (id)initWithThumbUrl:(id)arg1 originalUrl:(id)arg2;
- (id)getPictureClickedBottomButtonActionLog;
- (id)getPictureScrollActionLog;
- (id)getPictureClickedActionLog;
@property(readonly, copy, nonatomic) NSString *livephotoVideoFilePath; // @synthesize livephotoVideoFilePath=_livephotoVideoFilePath;
@property(readonly, copy, nonatomic) NSString *livephotoImageFilePath; // @synthesize livephotoImageFilePath=_livephotoImageFilePath;
- (_Bool)setLikeStateAndUpdateLikeCount:(unsigned long long)arg1;
- (_Bool)isLivePhotoCacheAvailable;
- (_Bool)isThumbnailImageAvailable;
- (_Bool)isGIF;
- (void)releasePhoto;
- (void)resetPhotoURL:(id)arg1;
- (id)image;
- (_Bool)isImageOrLivePhotoAvailable;
- (_Bool)isImageAvailable;
- (void)dealloc;
- (id)initWithURL:(id)arg1 originalUrl:(id)arg2 largeUrl:(id)arg3 thumbnailDic:(id)arg4;
- (id)initWithURL:(id)arg1 originalUrl:(id)arg2 largeUrl:(id)arg3;
- (id)initWithFilePath:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

