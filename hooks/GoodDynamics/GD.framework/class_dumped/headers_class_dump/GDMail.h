//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GDMail : NSObject
{
    BOOL _isHTML;
    NSString *_body;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
}

@property(nonatomic) BOOL isHTML; // @synthesize isHTML=_isHTML;
@property(retain, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(retain, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(retain, nonatomic) NSArray *to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
- (id)mailAsParamsDictionaryForGFEMailService;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (oneway void)dealloc;
- (id)initWithBody:(id)arg1 subject:(id)arg2 to:(id)arg3 cc:(id)arg4 bcc:(id)arg5;

@end
