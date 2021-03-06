//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMCSocialShareItemFactory : NSObject
{
}

+ (id)audioItemForWeiboWithAudioURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 musicFileURLStr:(id)arg5 thumbImageData:(id)arg6 scheme:(id)arg7 objectID:(id)arg8 platformType:(unsigned long long)arg9;
+ (id)audioItemForWechatWithAudioURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 musicFileURLStr:(id)arg5 thumbImageData:(id)arg6 platformType:(unsigned long long)arg7;
+ (id)audioItemForQQWithWithAudioURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 musicFileURLStr:(id)arg5 thumbImageData:(id)arg6 platformType:(unsigned long long)arg7;
+ (id)audioItemForQQWithAudioURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 musicFileURLStr:(id)arg5 thumbImageURLStr:(id)arg6 platformType:(unsigned long long)arg7;
+ (id)itemForWeiboWithImageData:(id)arg1 text:(id)arg2 desc:(id)arg3 platformType:(unsigned long long)arg4;
+ (id)imageItemForWechatWithImageData:(id)arg1 thumbImageData:(id)arg2 title:(id)arg3 text:(id)arg4 desc:(id)arg5 platformType:(unsigned long long)arg6;
+ (id)imageItemForQQWithImageData:(id)arg1 thumbImageData:(id)arg2 title:(id)arg3 text:(id)arg4 desc:(id)arg5 platformType:(unsigned long long)arg6;
+ (id)webpageItemForWeiboWithWebpageURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 thumbImageData:(id)arg5 scheme:(id)arg6 objectID:(id)arg7 platformType:(unsigned long long)arg8;
+ (id)webpageItemForWechatWithWebpageURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 thumbImageData:(id)arg5 platformType:(unsigned long long)arg6;
+ (id)webpageItemForQQWithWebpageURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 thumbImageData:(id)arg5 platformType:(unsigned long long)arg6;
+ (id)webpageItemForQQWithWebpageURLStr:(id)arg1 title:(id)arg2 text:(id)arg3 desc:(id)arg4 thumbImageURLStr:(id)arg5 platformType:(unsigned long long)arg6;
+ (id)textItemForWeiboWithText:(id)arg1 platformType:(unsigned long long)arg2;
+ (id)textItemForWechatWithText:(id)arg1 platformType:(unsigned long long)arg2;
+ (id)textItemForQQWithText:(id)arg1 platformType:(unsigned long long)arg2;

@end

