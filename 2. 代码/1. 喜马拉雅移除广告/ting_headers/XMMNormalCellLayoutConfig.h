//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMMCommunityTheme;

@interface XMMNormalCellLayoutConfig : NSObject
{
    _Bool _shouldShowFollowButton;
    _Bool _shouldHideMoreButton;
    _Bool _showSource;
    _Bool _showCommunityRole;
    _Bool _showReadCount;
    _Bool _isCardStyle;
    double _separatorViewHeight;
    XMMCommunityTheme *_communityTheme;
    struct UIEdgeInsets _cardInsets;
}

+ (struct UIEdgeInsets)defCardStyleInsets;
@property(nonatomic) struct UIEdgeInsets cardInsets; // @synthesize cardInsets=_cardInsets;
@property(nonatomic) _Bool isCardStyle; // @synthesize isCardStyle=_isCardStyle;
@property(retain, nonatomic) XMMCommunityTheme *communityTheme; // @synthesize communityTheme=_communityTheme;
@property(nonatomic) _Bool showReadCount; // @synthesize showReadCount=_showReadCount;
@property(nonatomic) _Bool showCommunityRole; // @synthesize showCommunityRole=_showCommunityRole;
@property(nonatomic) _Bool showSource; // @synthesize showSource=_showSource;
@property(nonatomic) double separatorViewHeight; // @synthesize separatorViewHeight=_separatorViewHeight;
@property(nonatomic) _Bool shouldHideMoreButton; // @synthesize shouldHideMoreButton=_shouldHideMoreButton;
@property(nonatomic) _Bool shouldShowFollowButton; // @synthesize shouldShowFollowButton=_shouldShowFollowButton;
- (void).cxx_destruct;
- (id)init;

@end

