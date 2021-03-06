//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class XMDubVideoInfo, XMRecordModel;

@interface XMDubUploadShareView : UIView
{
    XMRecordModel *_recordIndex;
    XMDubVideoInfo *_videoInfo;
    long long _type;
    long long _viewType;
    long long _shareSource;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long shareSource; // @synthesize shareSource=_shareSource;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) XMDubVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) XMRecordModel *recordIndex; // @synthesize recordIndex=_recordIndex;
- (void).cxx_destruct;
- (void)onShareWithDownload;
- (void)normalShare;
- (void)scoredShare;
- (void)onShareWithQRCode;
- (void)onShareWithPlatformType:(unsigned long long)arg1;
- (void)onClick:(id)arg1;
- (void)addShareView;
- (void)addHeaderView;
- (void)initContentView;
- (void)dismiss;
- (void)onTap:(id)arg1;
- (void)showInView:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

