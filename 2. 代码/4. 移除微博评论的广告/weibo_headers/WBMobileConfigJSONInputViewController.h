//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface WBMobileConfigJSONInputViewController : UIViewController
{
    int _inputType;
    NSString *_initialText;
    UITextView *_textView;
    CDUnknownBlockType _commitHandler;
}

@property(copy, nonatomic) CDUnknownBlockType commitHandler; // @synthesize commitHandler=_commitHandler;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(nonatomic) int inputType; // @synthesize inputType=_inputType;
- (void).cxx_destruct;
- (void)doneAction;
- (void)cancelAction;
- (void)showError:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInitialValue:(id)arg1 inputType:(int)arg2 commitHandler:(CDUnknownBlockType)arg3;

@end

