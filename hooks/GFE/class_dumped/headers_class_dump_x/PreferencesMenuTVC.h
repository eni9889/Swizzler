/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GmmStatusWatcherDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class CellWithSwitch, ContactsSyncHelper, NSMutableArray, NSMutableDictionary, PreferencesViewSecurityManager, SBBrowserSectionManager;

@interface PreferencesMenuTVC : _ABAddressBookAddRecord <UIActionSheetDelegate, GmmStatusWatcherDelegate>
{
    _Bool isGoodUser;
    struct CSecurityManager *_securityManager;
    ContactsSyncHelper *_contactsSyncHelper;
    NSMutableArray *availableSections;
    NSMutableArray *debugSection;
    CellWithSwitch *contactSyncCell;
    NSMutableDictionary *_footers;
    BOOL m_bViewIsVisible;
    BOOL _isiOS7orAbove;
    _Bool m_bSMIMEEnabled;
    PreferencesViewSecurityManager *smimeSecurityManager;
    SBBrowserSectionManager *_browserSectionManager;
}

- (void)setBrowserSectionManager:(id)fp8;
- (id)browserSectionManager;
- (void)setSmimeSecurityManager:(id)fp8;
- (id)smimeSecurityManager;
- (void)setContactSyncCell:(id)fp8;
- (id)contactSyncCell;
- (void)setAvailableSections:(id)fp8;
- (id)availableSections;
- (void)setSecurityManager:(struct CSecurityManager *)fp8;
- (id)newDebugMenuArray;
- (void)secureBrowserTests;
- (void)runtimeTests;
- (void)showStatusView;
- (void)showDebugMenu;
- (void)onStoringCredentialsSwitchChanged:(id)fp8;
- (void)onSMIMEHTMLEnableChanged:(id)fp8;
- (void)onHTMLEnableChanged:(id)fp8;
- (void)onDefaultEncryptionChanged:(id)fp8;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)toggleConversationView:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)toggleCalendarSounds:(id)fp8;
- (void)toggleContactSync:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)shiftUnusedRowForSMIMESection:(int)fp8;
- (int)shiftUnusedRowForEmailSection:(int)fp8;
- (void)updateContactSyncSwitch;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)needReloadView:(id)fp8;
- (void)refreshSMIMEOptions:(id)fp8;
- (void)dismissSecurityNC:(id)fp8;
- (void)dismissSubFolderTVC:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setupCell:(id)fp8 WithLabel:(id)fp12 andDetailedText:(id)fp16;
- (void)reloadGDBrowsersAvailable:(id)fp8;
- (void)lastUpdateChanged;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)setupSectionsAndReloadView;
- (void)viewDidLoad;
- (struct CSecurityManager *)securityManager;
- (void)notesIdPasswordSelected;
- (id)getDefaultAutomationScreenName;

@end

