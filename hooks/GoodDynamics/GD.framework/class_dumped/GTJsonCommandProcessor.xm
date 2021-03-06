%group GDDumpedHeaders
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

// #import "NSObject.h"

// @interface GTJsonCommandProcessor : NSObject
// {
// }
%hook GTJsonCommandProcessor

+ (id)stringValueForKey:(const char *)arg1 key:(const char *)arg2
{
	NSLog(@"GTJsonCommandProcessor stringValueForKey: %s, key: %s", arg1, arg2);
	return %orig;
}
+ (BOOL)hasKey:(const char *)arg1 key:(const char *)arg2
{
	NSLog(@"GTJsonCommandProcessor hasKey: %s, key: %s", arg1, arg2);
	return %orig;
}
+ (BOOL)parseReceivedMessage:(id)arg1 requestID:(id *)arg2 toService:(id *)arg3 withError:(id *)arg4 withResult:(id *)arg5 withMessage:(id *)arg6 withData:(id *)arg7 withVersion:(id *)arg8 withMethod:(id *)arg9 withParams:(id *)arg10
{
	NSLog(@"GTJsonCommandProcessor parseReceivedMessage: %@ ", arg1);
	return %orig;
}
// + (id)constructSCCRequest:(id)arg1 toService:(id)arg2 withVersion:(id)arg3 withMethod:(id)arg4 withParams:(id)arg5;
// + (id)constructSCCResponse:(id)arg1 resultValue:(id)arg2;
// + (id)constructSCCError:(id)arg1 withCode:(int)arg2 withMessage:(id)arg3 withData:(id)arg4;
+ (BOOL)addToJsonArray:(struct json_object *)arg1 object:(id)arg2 name:(id)arg3
{
	NSLog(@"GTJsonCommandProcessor addToJsonArray: %@, object: %@, name: %@", arg1, arg2, arg3);
	return %orig;
}
+ (BOOL)addNSDictionaryTo:(id)arg1 object:(struct json_object *)arg2 withKey:(id)arg3
{
	NSLog(@"GTJsonCommandProcessor addNSDictionaryTo: %@,  object: %@, withKey: %@", arg1, arg2, arg3);
	return %orig;
}
+ (BOOL)addNSDataTo:(id)arg1 object:(struct json_object *)arg2 withKey:(id)arg3
{
	NSLog(@"GTJsonCommandProcessor addNSDataTo: %@,  object: %@, withKey: %@", arg1, arg2, arg3);
	return %orig;
}
+ (id)parseJSONArray:(struct json_object *)arg1
{
	NSLog(@"GTJsonCommandProcessor parseJSONArray %@", arg1);
	return %orig;
};
+ (id)parseJSONDictionary:(struct json_object *)arg1
{
	NSLog(@"GTJsonCommandProcessor parseJSONDictionary %@", arg1);
	return %orig;
};
+ (id)parseNSData:(struct json_object *)arg1
{
	NSLog(@"GTJsonCommandProcessor parseNSData %@", arg1);
	return %orig;
};
// + (void)logError:(id)arg1;

// @end
%end
%end
