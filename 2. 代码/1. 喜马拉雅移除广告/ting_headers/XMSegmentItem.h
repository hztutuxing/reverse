//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIImage, UIView;

@interface XMSegmentItem : NSObject
{
    _Bool _disabled;
    NSString *_title;
    NSAttributedString *_attributedTitleNormal;
    NSAttributedString *_attributedTitleSelected;
    UIImage *_iconNormal;
    UIImage *_iconSelected;
    UIView *_tagViewNormal;
    UIView *_tagViewSelected;
    NSAttributedString *_attributedTitleDisabled;
    struct CGPoint _tagFrameOffset;
}

@property(copy, nonatomic) NSAttributedString *attributedTitleDisabled; // @synthesize attributedTitleDisabled=_attributedTitleDisabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIView *tagViewSelected; // @synthesize tagViewSelected=_tagViewSelected;
@property(retain, nonatomic) UIView *tagViewNormal; // @synthesize tagViewNormal=_tagViewNormal;
@property(nonatomic) struct CGPoint tagFrameOffset; // @synthesize tagFrameOffset=_tagFrameOffset;
@property(retain, nonatomic) UIImage *iconSelected; // @synthesize iconSelected=_iconSelected;
@property(retain, nonatomic) UIImage *iconNormal; // @synthesize iconNormal=_iconNormal;
@property(copy, nonatomic) NSAttributedString *attributedTitleSelected; // @synthesize attributedTitleSelected=_attributedTitleSelected;
@property(copy, nonatomic) NSAttributedString *attributedTitleNormal; // @synthesize attributedTitleNormal=_attributedTitleNormal;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

