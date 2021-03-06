//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WBTimelineAttributedTextParseStack;

@interface WBTimelineAttributedTextParser : NSObject
{
    _Bool isParserMiniCard;
    NSArray *_miniCardUrlItems;
    NSArray *_topicItems;
    NSString *_plainText;
    WBTimelineAttributedTextParseStack *_parseRangeStack;
    NSMutableArray *_parsedRanges;
}

+ (void)test;
@property(retain, nonatomic) NSMutableArray *parsedRanges; // @synthesize parsedRanges=_parsedRanges;
@property(retain, nonatomic) WBTimelineAttributedTextParseStack *parseRangeStack; // @synthesize parseRangeStack=_parseRangeStack;
@property(retain, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(retain, nonatomic) NSArray *topicItems; // @synthesize topicItems=_topicItems;
@property(retain, nonatomic) NSArray *miniCardUrlItems; // @synthesize miniCardUrlItems=_miniCardUrlItems;
- (void).cxx_destruct;
- (id)parseWithLinkMiniCard:(_Bool)arg1;
- (void)parseEmailAdressModeFromMentionModeResult;
- (void)parseAllModesExceptMiniCardMode;
- (void)parseMiniCardModeWithLink:(_Bool)arg1;
- (void)parsePhoneNumber;
- (unsigned long long)parseAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseNormalModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseMentionModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseEmoticonModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseDollartagModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseHashtagModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseLinkModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tryEnterLinkModeAtIndex:(unsigned long long)arg1 shouldFinishCurrentRange:(_Bool)arg2;
- (id)beginNewRangeWithMode:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)getTopicByTopicName:(id)arg1;
- (void)finishHashtagParseRange:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finishHashtagParseCurrentRangeAtIndex:(unsigned long long)arg1;
- (void)finishParseRange:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finishParseCurrentRangeAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPlainText:(id)arg1 miniCardUrl:(id)arg2 topicItems:(id)arg3;
- (id)initWithPlainText:(id)arg1 andMiniCardUrl:(id)arg2;
- (id)initWithPlainText:(id)arg1;

@end

