/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class GUGoodTechnologyLogo, GURoundedButton, GmmEasyActivationHandler, GmmEasyActivationRequest, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface GmmEasyActivationProgressVC : _ABAddressBookAddRecord
{
    GmmEasyActivationRequest *_request;
    GmmEasyActivationHandler *_handler;
    NSString *_requestingApplicationName;
    UIActivityIndicatorView *_activityIndicator;
    GUGoodTechnologyLogo *_logo;
    UIImageView *_requestingAppImage;
    UILabel *_requestingAppLabel;
    UILabel *_statusLabel;
    GURoundedButton *_cancelButton;
    UIView *_redLineView;
}

+ (void)initialize;
- (void)setRedLineView:(id)fp8;
- (id)redLineView;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void)setStatusLabel:(id)fp8;
- (id)statusLabel;
- (void)setRequestingAppLabel:(id)fp8;
- (id)requestingAppLabel;
- (void)setRequestingAppImage:(id)fp8;
- (id)requestingAppImage;
- (void)setLogo:(id)fp8;
- (id)logo;
- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (id)requestingApplicationName;
- (void)setHandler:(id)fp8;
- (id)handler;
- (void)setRequest:(id)fp8;
- (id)request;
- (void)didPressCancel:(id)fp8;
- (void)setRequestingApplicationName:(id)fp8;
- (void)setupConstraints;
- (id)pasteboardIcon;
- (void)setupViews;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithEAHandler:(id)fp8 andEARequest:(id)fp12;
- (void)dealloc;

@end
