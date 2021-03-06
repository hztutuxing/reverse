//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UIScrollView;
@protocol XMTagBarDelegate;

@interface XMTagBar : UIView
{
    UIScrollView *_scrollView;
    UIImageView *_selView;
    NSArray *items;
    NSMutableArray *tagBarItems;
    id <XMTagBarDelegate> delegate;
    long long selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(nonatomic) __weak id <XMTagBarDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *tagBarItems; // @synthesize tagBarItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)onItemPressed:(id)arg1;
- (id)init;
- (void)dealloc;

@end

