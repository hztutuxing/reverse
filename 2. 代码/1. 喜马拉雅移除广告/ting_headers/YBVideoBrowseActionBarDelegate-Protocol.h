//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, YBVideoBrowseActionBar;

@protocol YBVideoBrowseActionBarDelegate <NSObject>
- (void)yb_videoBrowseActionBar:(YBVideoBrowseActionBar *)arg1 changeValue:(float)arg2;
- (void)yb_videoBrowseActionBar:(YBVideoBrowseActionBar *)arg1 clickPauseButton:(UIButton *)arg2;
- (void)yb_videoBrowseActionBar:(YBVideoBrowseActionBar *)arg1 clickPlayButton:(UIButton *)arg2;
@end

