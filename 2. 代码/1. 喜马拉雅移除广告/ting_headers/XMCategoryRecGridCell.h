//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

@class NSArray, NSMutableArray, UIScrollView, XMCategoryRecModel;
@protocol XMCategoryRecGridCellDelegate;

@interface XMCategoryRecGridCell : XMFindFlowWhiteBackTableViewCell
{
    id <XMCategoryRecGridCellDelegate> _delegate;
    NSArray *_allWords;
    NSMutableArray *_buttons;
    UIScrollView *_scrollView;
    NSArray *_buttonColors;
    XMCategoryRecModel *_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMCategoryRecModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *buttonColors; // @synthesize buttonColors=_buttonColors;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *allWords; // @synthesize allWords=_allWords;
@property(nonatomic) __weak id <XMCategoryRecGridCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (id)createGridButton;
- (void)layoutSubviews;
- (void)buttonDidClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

