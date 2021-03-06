//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UILabel, UIView, XMRecFlowInterestModel, XMTableCellObject;
@protocol XMRecFlowInterestCellDelegate;

@interface XMRecFlowInterestCell : UITableViewCell
{
    id <XMRecFlowInterestCellDelegate> _delegate;
    UIView *_boxView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    XMTableCellObject *_cellObj;
    XMRecFlowInterestModel *_model;
    NSMutableArray *_tagButtons;
    UIButton *_confirmButton;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSMutableArray *tagButtons; // @synthesize tagButtons=_tagButtons;
@property(retain, nonatomic) XMRecFlowInterestModel *model; // @synthesize model=_model;
@property(retain, nonatomic) XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *boxView; // @synthesize boxView=_boxView;
@property(nonatomic) __weak id <XMRecFlowInterestCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)unlikeDidClick;
- (void)checkConfirmButtonEnable;
- (void)buttonDidClick:(id)arg1;
- (void)confirmButtonDidClick;
- (void)setupTagButtons;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

