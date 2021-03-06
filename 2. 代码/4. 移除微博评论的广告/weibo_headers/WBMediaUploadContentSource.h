//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSData, NSString, PHAsset, WBMediaUploadContentSourceAVAssetFetcher, WBMediaUploadContentSourceImageFetcher;

@interface WBMediaUploadContentSource : WBModelObject
{
    PHAsset *_libraryAsset;
    struct {
        unsigned int md5:1;
        unsigned int length:1;
    } _resolved;
    NSString *_md5;
    unsigned long long _contentLength;
    WBMediaUploadContentSourceAVAssetFetcher *_videoAssetFetcher;
    WBMediaUploadContentSourceImageFetcher *_imageFetcher;
    _Bool _canceled;
    NSString *_localFilePathRelativeToAppHomeDirectory;
    long long _type;
    NSData *_localData;
    NSString *_localFilePath;
    NSString *_assetID;
}

+ (id)contentSourceWithAssetID:(id)arg1;
+ (id)contentSourceWithLocalFile:(id)arg1;
+ (id)contentSourceWithUploadData:(id)arg1;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(readonly, nonatomic) NSData *localData; // @synthesize localData=_localData;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cancel;
- (void)resolveContentMD5CheckSumWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchVideoAVAssetWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *localFilePathRelativeToAppHomeDirectory; // @synthesize localFilePathRelativeToAppHomeDirectory=_localFilePathRelativeToAppHomeDirectory;
@property(readonly, nonatomic) NSString *contentIdentifier;
@property(readonly, nonatomic) _Bool contentExists;
@property(readonly, nonatomic) NSString *contentName;
- (id)resolveMD5ForFileHandle:(id)arg1 data:(id)arg2;
- (id)resolveContentMD5CheckSum;
@property(readonly, nonatomic) NSString *contentMD5CheckSum;
- (unsigned long long)resolveContentBytes;
@property(readonly, nonatomic) unsigned long long contentBytes;
@property(readonly, nonatomic) PHAsset *asset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

