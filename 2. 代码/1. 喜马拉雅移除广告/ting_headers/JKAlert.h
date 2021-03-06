//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface JKAlert : NSObject <UIActionSheetDelegate>
{
    NSMutableArray *_items;
    NSString *_title;
    NSString *_message;
    unsigned long long _styleType;
}

+ (id)showMessage:(id)arg1 OKHandler:(CDUnknownBlockType)arg2;
+ (id)showMessage:(id)arg1;
+ (id)showMessage:(id)arg1 message:(id)arg2;
+ (id)actionSheetWithTitle:(id)arg1 andMessage:(id)arg2;
+ (id)alertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void).cxx_destruct;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topShowViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)show7;
- (void)show8;
- (void)show;
@property(readonly, nonatomic) NSArray *actions;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)addButton:(unsigned long long)arg1 withTitle:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addCommonButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCancleButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (long long)addButtonWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 andMessage:(id)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

