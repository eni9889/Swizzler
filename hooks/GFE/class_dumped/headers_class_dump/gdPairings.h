//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSData, NSString;

@interface gdPairings : NSObject
{
    NSString *appID;
    NSData *pushKeyData;
    NSData *dbKeyData;
    struct gdPairingsTable gdpTable;
}

+ (id)allAppIDs;
+ (_Bool)deleteAppByID:(id)arg1;
+ (_Bool)clearAllKeys;
+ (BOOL)setPushKey:(id)arg1 ForApplication:(id)arg2;
+ (BOOL)setDatabaseKey:(id)arg1 ForApplication:(id)arg2;
+ (id)pushKeyForApplication:(id)arg1;
+ (BOOL)setPushKey:(id)arg1 andDBKey:(id)arg2 ForApplication:(id)arg3;
+ (BOOL)getPushKey:(id *)arg1 andDBKey:(id *)arg2 ForApplication:(id)arg3;
+ (BOOL)appIDExists:(id)arg1;
+ (void)updateServerApplicationListWithApplicationIdentifiers:(id)arg1;
+ (void)updateServerApplicationList;
+ (void)sendPendingAppListUpdates;
+ (void)detectApplicationListChange;
+ (const char *)encodeNSDataForSQLiteAutoRel:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(retain) NSString *appID; // @dynamic appID;
@property(retain) NSData *dbKeyData; // @dynamic dbKeyData;
@property(retain) NSData *pushKeyData; // @dynamic pushKeyData;

@end

