/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLStorageOperator, PLSQLiteConnection, PLTimer;

@interface PLSubmissions : NSObject {

	PLStorageOperator* _storageOperator;
	PLSQLiteConnection* _connection;
	PLTimer* _watchdog;

}

@property (__weak) PLStorageOperator * storageOperator;              //@synthesize storageOperator=_storageOperator - In the implementation block
@property (retain) PLSQLiteConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (retain) PLTimer * watchdog;                               //@synthesize watchdog=_watchdog - In the implementation block
+(id)sharedInstance;
-(id)init;
-(PLSQLiteConnection *)connection;
-(void)setConnection:(PLSQLiteConnection *)arg1 ;
-(void)startWatchdog;
-(PLTimer *)watchdog;
-(void)setWatchdog:(PLTimer *)arg1 ;
-(id)workQueue;
-(PLStorageOperator *)storageOperator;
-(void)setStorageOperator:(PLStorageOperator *)arg1 ;
-(void)generateSubmissionWithPayload:(id)arg1 ;
-(void)stopWatchdog;
-(void)filterDatabaseAtPath:(id)arg1 withMaxOutputFileSize:(long long)arg2 removingTables:(id)arg3 hashingTableKeys:(id)arg4 usingTrimmingQueries:(id)arg5 ;
-(id)trimmingQueryForIndex:(int)arg1 ;
-(void)generateInternalOTASubmission;
-(void)generateTaskedOTASubmission;
@end

