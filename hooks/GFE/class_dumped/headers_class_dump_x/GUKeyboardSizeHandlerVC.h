/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUFontSizeAwareViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class GUTextView, UIScrollView;

@interface GUKeyboardSizeHandlerVC : GUFontSizeAwareViewController <UITextViewDelegate>
{
    GUTextView *_textView;
    UIScrollView *scrollView;
    BOOL _keyboardWasHidden;
    float _keyboardHeight;
}

- (void)setTextView:(id)fp8;
- (id)TextView;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)keyboardWillBeHidden:(id)fp8;
- (void)keyboardWasShown:(id)fp8;
- (void)viewDidLoad;
- (id)createTextView;
- (void)dealloc;

@end
