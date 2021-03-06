/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSUserDefaults, NSString, NSObject;

@interface LSUserActivityDebuggingManager : NSObject {

	asl_object_sRef _client;
	NSUserDefaults* _userDefaults;
	NSString* _logFileDirectoryPath;
	NSString* _logFilePath;
	int _additionalLogFile;
	NSObject*<OS_dispatch_source> _logRotationTimerSource;
	unsigned long long _lastLogRotationTime;

}

@property (retain) NSUserDefaults * userDefaults;                                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) BOOL loggingEnabled; 
@property (assign) asl_object_sRef client;                                            //@synthesize client=_client - In the implementation block
@property (copy) NSString * logFileDirectoryPath;                                     //@synthesize logFileDirectoryPath=_logFileDirectoryPath - In the implementation block
@property (copy) NSString * logFilePath;                                              //@synthesize logFilePath=_logFilePath - In the implementation block
@property (assign) int additionalLogFile;                                             //@synthesize additionalLogFile=_additionalLogFile - In the implementation block
@property (readonly) BOOL logFileEnabled; 
@property (assign) unsigned long long lastLogRotationTime;                            //@synthesize lastLogRotationTime=_lastLogRotationTime - In the implementation block
@property (assign) NSObject*<OS_dispatch_source> logRotationTimerSource;              //@synthesize logRotationTimerSource=_logRotationTimerSource - In the implementation block
+(void)log:(int)arg1 format:(id)arg2 ;
+(id)hexDataDump:(id)arg1 ;
+(id)sharedDebugManager;
-(void)setLoggingLevel:(int)arg1 ;
-(void)setLogFileDirectoryPath:(NSString *)arg1 ;
-(NSString *)logFileDirectoryPath;
-(void)deleteExtraLogFiles;
-(void)rotateLogFiles;
-(void)setLogRotationTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)logRotationTimerSource;
-(void)doRotateLogFiles;
-(int)additionalLogFile;
-(void)setAdditionalLogFile:(int)arg1 ;
-(double)logRotationTimeInSeconds;
-(unsigned long long)lastLogRotationTime;
-(BOOL)logFileEnabled;
-(void)setLastLogRotationTime:(unsigned long long)arg1 ;
-(long long)logRotationMaximumFiles;
-(BOOL)shouldLogCommon:(unsigned long long)arg1 ;
-(void)log:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(void)log:(int)arg1 format:(id)arg2 args:(char*)arg3 file:(const char*)arg4 line:(long long)arg5 ;
-(void)log:(int)arg1 format:(id)arg2 ;
-(void)log:(int)arg1 file:(const char*)arg2 line:(long long)arg3 format:(id)arg4 ;
-(void)logCommon:(unsigned long long)arg1 format:(id)arg2 args:(char*)arg3 ;
-(BOOL)shouldLog:(int)arg1 ;
-(void)log:(int)arg1 common:(BOOL)arg2 format:(id)arg3 args:(char*)arg4 file:(const char*)arg5 line:(long long)arg6 ;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSString *)logFilePath;
-(void)setLogFilePath:(NSString *)arg1 ;
-(BOOL)loggingEnabled;
-(asl_object_sRef)client;
-(void)setClient:(asl_object_sRef)arg1 ;
@end

