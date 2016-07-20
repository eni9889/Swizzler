/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableDictionary, NSTimer;

@interface OTAClientAuthenticator : _ABAddressBookAddRecord
{
    id <OTAClientAuthenticatorDelegate> _delegate;
    NSMutableDictionary *_authenticationParameters;
    NSTimer *_timerEvent;
    struct ProvApp *_provApp;
    _Bool _doneFirstPass;
    int _provState;
    int _provSubstate;
    int _retryCount;
    int _previousSubState;
    int _previousProvState;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)onTimer;
- (void)startInstallerTimer:(float)fp8;
- (void)authenticateUser;
- (void)authenticateUserMain;
- (void)reprovisionDevice;
- (void)reprovisionDeviceMain;
- (void)resumeOTA;
- (void)processAuthentication:(id)fp8 withPin:(id)fp12 orcaOverride:(id)fp16;
- (unsigned int)otaError;
- (void)dealloc;
- (id)init;

@end
