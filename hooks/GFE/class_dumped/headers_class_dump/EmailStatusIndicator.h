//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSTimer;

@interface EmailStatusIndicator : NSObject
{
    BOOL bulkReceive;
    int mode;
    double turnOffThreshold;
    double turnOffBulkReceiveModeAfterInactivity;
    double turnOffBulkReceiveModeRegardlessInactivity;
    struct UIAListener *emailDBListener;
    NSDate *lastActivityDate;
    NSDate *lastSoundAlertDate;
    NSDate *monitoringStartupDate;
    NSDate *lastDisplayedVisualIndicatorFromQueueDate;
    NSDate *lastEmailReceivedQueueProcessingDate;
    double monitoringPeriod;
    double soundAlertInterval;
    NSTimer *monitorTimer;
    BOOL acitvityDetected;
    NSMutableArray *emailReceivedQueue;
    int emailReceivedQueueThreshold;
    double emailReceivedQueueProcessingInterval;
    NSMutableArray *visualIndicatorTextQueue;
    double visualIndicatorQueueDisplayInterval;
    int visualIndicatorQueueThreshold;
    NSDate *lastEmailLeavingOutboxDate;
    double lastEmailLeavingOutboxInterval;
    int leavingOutboxNotifCount;
}

@property(retain, nonatomic) NSDate *lastEmailReceivedQueueProcessingDate; // @synthesize lastEmailReceivedQueueProcessingDate;
@property(retain, nonatomic) NSMutableArray *emailReceivedQueue; // @synthesize emailReceivedQueue;
@property(retain, nonatomic) NSDate *lastEmailLeavingOutboxDate; // @synthesize lastEmailLeavingOutboxDate;
@property(retain, nonatomic) NSDate *lastSoundAlertDate; // @synthesize lastSoundAlertDate;
@property(nonatomic) double turnOffBulkReceiveModeRegardlessInactivity; // @synthesize turnOffBulkReceiveModeRegardlessInactivity;
@property(nonatomic) double turnOffBulkReceiveModeAfterInactivity; // @synthesize turnOffBulkReceiveModeAfterInactivity;
@property(retain, nonatomic) NSMutableArray *visualIndicatorTextQueue; // @synthesize visualIndicatorTextQueue;
@property(retain, nonatomic) NSTimer *monitorTimer; // @synthesize monitorTimer;
@property(retain, nonatomic) NSDate *lastDisplayedVisualIndicatorFromQueueDate; // @synthesize lastDisplayedVisualIndicatorFromQueueDate;
@property(retain, nonatomic) NSDate *monitoringStartupDate; // @synthesize monitoringStartupDate;
@property(retain, nonatomic) NSDate *lastActivityDate; // @synthesize lastActivityDate;
@property(nonatomic) double turnOffThreshold; // @synthesize turnOffThreshold;
@property(nonatomic) BOOL bulkReceive; // @synthesize bulkReceive;
- (void)dealloc;
- (void)updateLastActivityDate;
- (void)playAudibleIndicatorIfRelevant;
- (void)enableBulk:(BOOL)arg1;
- (void)queueVisualIndicatorText:(id)arg1 playSound:(BOOL)arg2;
- (void)showVisualIndicatorWithText:(id)arg1;
- (void)onNoMoreAcitvityDetected;
- (void)onFirstAcitvityDetected;
- (void)onEmailReceivedWithRecordNum:(unsigned short)arg1;
- (void)turnIntoBulkMode;
- (void)handleVisualIndicatorQueue;
- (void)processEmailReceivedQueue;
- (void)onDbNotif:(id)arg1;
- (void)monitor:(id)arg1;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)enableMonitoring:(BOOL)arg1;
- (id)init;

@end
