//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CourseModel, UILabel;

@interface CourseCell : UITableViewCell
{
    UILabel *_course_name;
    UILabel *_state;
    UILabel *_count;
    CourseModel *_model;
}

+ (id)viewFromNIB;
@property(retain, nonatomic) CourseModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *count; // @synthesize count=_count;
@property(nonatomic) __weak UILabel *state; // @synthesize state=_state;
@property(nonatomic) __weak UILabel *course_name; // @synthesize course_name=_course_name;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

