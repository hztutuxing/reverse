//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton;
@protocol KFAttViewDelegate;

@interface KFAttView : UIView
{
    NSMutableArray *_images;
    id <KFAttViewDelegate> _degelate;
    UIButton *_closeBtn;
    UIButton *_addImageBtn;
}

@property(nonatomic) __weak UIButton *addImageBtn; // @synthesize addImageBtn=_addImageBtn;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <KFAttViewDelegate> degelate; // @synthesize degelate=_degelate;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)removeImages;
- (void)layoutSubviews;
- (void)deleteImage:(id)arg1;
- (void)delAttBtn:(id)arg1;
- (void)addAttBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

