//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, WSLWaterFlowLayout;

@protocol WSLWaterFlowLayoutDelegate <NSObject>
- (struct CGSize)waterFlowLayout:(WSLWaterFlowLayout *)arg1 sizeForFooterViewInSection:(long long)arg2;
- (struct CGSize)waterFlowLayout:(WSLWaterFlowLayout *)arg1 sizeForHeaderViewInSection:(long long)arg2;
- (struct CGSize)waterFlowLayout:(WSLWaterFlowLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (struct UIEdgeInsets)edgeInsetInWaterFlowLayout:(WSLWaterFlowLayout *)arg1;
- (double)rowMarginInWaterFlowLayout:(WSLWaterFlowLayout *)arg1;
- (double)columnMarginInWaterFlowLayout:(WSLWaterFlowLayout *)arg1;
- (double)rowCountInWaterFlowLayout:(WSLWaterFlowLayout *)arg1;
- (double)columnCountInWaterFlowLayout:(WSLWaterFlowLayout *)arg1;
@end

