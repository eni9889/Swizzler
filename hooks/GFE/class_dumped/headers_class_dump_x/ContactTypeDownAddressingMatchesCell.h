/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class ContactPerson, ContactTypeDownAddressingMatchesCellView;

@interface ContactTypeDownAddressingMatchesCell : _ABAddressBookAddRecord
{
    ContactTypeDownAddressingMatchesCellView *customView;
    ContactPerson *contact;
}

- (id)contact;
- (void)dealloc;
- (void)setContact:(id)fp8;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

