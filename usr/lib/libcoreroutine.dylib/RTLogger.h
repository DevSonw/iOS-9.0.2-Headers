/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTLogger : NSObject
+(id)sharedInstance;
+(void)flush;
+(id)diagnosticFiles;
+(CFStringRef)newFormattedLogMessage:(int)arg1 :(CFDateRef)arg2 :(CFStringRef)arg3 :(CFStringRef)arg4 :(const char*)arg5 :(const char*)arg6 :(unsigned long long)arg7 :(const char*)arg8 :(CFStringRef)arg9 ;
+(id)logFacilities;
+(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)logHeader;
@end

