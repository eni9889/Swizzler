//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "SendLogCommandDelegate.h"

@class ReSyncVC, SendLogCommand, UINavigationController;

@interface ReSyncManager : NSObject <SendLogCommandDelegate>
{
    BOOL _needsReSync;
    int _reSyncState;
    ReSyncVC *_reSyncVC;
    UINavigationController *_reSyncBackgroundVC;
    SendLogCommand *_ftp;
    BOOL isActive;
    BOOL updateTabOrderRequired;
}

+ (void)setIsResyncing:(BOOL)arg1;
+ (BOOL)isResyncing;
@property(nonatomic) BOOL updateTabOrderRequired; // @synthesize updateTabOrderRequired;
@property(nonatomic) BOOL isActive; // @synthesize isActive;
@property(readonly, nonatomic) int reSyncState; // @synthesize reSyncState=_reSyncState;
@property(retain, nonatomic) SendLogCommand *ftp; // @synthesize ftp=_ftp;
@property(retain, nonatomic) UINavigationController *reSyncBackgroundVC; // @synthesize reSyncBackgroundVC=_reSyncBackgroundVC;
@property(retain, nonatomic) ReSyncVC *reSyncVC; // @synthesize reSyncVC=_reSyncVC;
@property(readonly, nonatomic) BOOL needsReSync; // @synthesize needsReSync=_needsReSync;
- (void)handleSendLogCommandBackground;
- (void)handleSendLogCommandOkCancel;
- (void)handleSendLogCommandResume;
- (void)actionSendLogs;
- (void)actionDone;
- (void)handleReSyncTimer:(id)arg1;
- (void)dismissAlert;
- (void)buildReSyncView;
- (void)buildReSyncBackgroundView;
- (void)showSyncAlertView;
- (void)showReSync;
- (void)startReSync;
- (id)init;
- (void)dealloc;

@end
