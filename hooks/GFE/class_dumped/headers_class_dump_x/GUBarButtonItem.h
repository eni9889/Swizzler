/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UIAccessibilityIdentification-Protocol.h"

@class GUButton, NSString;

@interface GUBarButtonItem : _ABAddressBookAddRecord <UIAccessibilityIdentification>
{
    GUButton *_button;
    NSString *_accessibilityIdentifier;
}

+ (id)alloc;
- (void)setAccessibilityIdentifier:(id)fp8;
- (id)accessibilityIdentifier;

@end

