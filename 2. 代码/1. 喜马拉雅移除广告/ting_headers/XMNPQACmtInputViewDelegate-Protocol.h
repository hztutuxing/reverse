//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMLiveCommentItem, XMNPQACmtInputView, XMPersonItem;

@protocol XMNPQACmtInputViewDelegate <NSObject>

@optional
- (void)NPQACmtInputViewDidDismiss:(XMNPQACmtInputView *)arg1;
- (void)NPQACmtInputViewWillDismiss:(XMNPQACmtInputView *)arg1;
- (void)NPQACmtInputView:(XMNPQACmtInputView *)arg1 sendText:(NSString *)arg2;
- (void)NPQACmtInputView:(XMNPQACmtInputView *)arg1 didPostQA:(XMPersonItem *)arg2;
- (void)NPQACmtInputView:(XMNPQACmtInputView *)arg1 didPostComment:(XMLiveCommentItem *)arg2;
@end

