//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UIControl, UIImageView, UILabel;

@interface WBPageContributionExpandMoreCardView : WBPageCardViewBase
{
    UILabel *_titleLabel;
    UIImageView *_arrowsImageView;
    UIControl *_backgroundControl;
}

+ (void)load;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1 constraintToWidth:(double)arg2;
+ (_Bool)timelineIntegratable;
@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(retain, nonatomic) UIImageView *arrowsImageView; // @synthesize arrowsImageView=_arrowsImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)backgroundAreaPressed:(id)arg1;
- (void)updateViews;
- (void)setPageCard:(id)arg1;
- (long long)selectionCellStyle;
- (void)layoutSubviews;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

