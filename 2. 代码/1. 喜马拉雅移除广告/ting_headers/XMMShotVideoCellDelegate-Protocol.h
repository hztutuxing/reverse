//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMMShotVideoCell;

@protocol XMMShotVideoCellDelegate <NSObject>
- (void)xmmShotVideoCellDidTapVideo:(XMMShotVideoCell *)arg1;
- (void)xmmShotVideoCellDidTapUser:(XMMShotVideoCell *)arg1;
- (void)xmmShotVideoCell:(XMMShotVideoCell *)arg1 praiseCallback:(void (^)(_Bool))arg2;

@optional
- (void)xmmShotVideoCell:(XMMShotVideoCell *)arg1 didTapBookMark:(NSString *)arg2;
- (void)xmmShotVideoCell:(XMMShotVideoCell *)arg1 didTapTopic:(long long)arg2 linkUrl:(NSString *)arg3;
@end

