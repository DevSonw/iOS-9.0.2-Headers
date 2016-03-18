/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLArchiveJobManager;
@class PLArchiveEntry, PLTimer;

@interface PLArchiveJob : NSObject {

	id<PLArchiveJobManager> _manager;
	PLArchiveEntry* _archiveEntry;
	PLTimer* _watchdog;

}

@property (retain) id<PLArchiveJobManager> manager;                       //@synthesize manager=_manager - In the implementation block
@property (retain) PLArchiveEntry * archiveEntry;                         //@synthesize archiveEntry=_archiveEntry - In the implementation block
@property (assign,nonatomic) long long stage; 
@property (assign,nonatomic) unsigned long long numAttempts; 
@property (retain) PLTimer * watchdog;                                    //@synthesize watchdog=_watchdog - In the implementation block
+(id)storageQueue;
+(SEL)runSelectorForStage:(long long)arg1 ;
+(SEL)recoverSelectorForStage:(long long)arg1 ;
-(void)setManager:(id<PLArchiveJobManager>)arg1 ;
-(id<PLArchiveJobManager>)manager;
-(void)setArchiveEntry:(PLArchiveEntry *)arg1 ;
-(void)run;
-(long long)stage;
-(void)setStage:(long long)arg1 ;
-(void)startWatchdog;
-(PLTimer *)watchdog;
-(void)setWatchdog:(PLTimer *)arg1 ;
-(PLArchiveEntry *)archiveEntry;
-(unsigned long long)numAttempts;
-(void)setNumAttempts:(unsigned long long)arg1 ;
-(void)recover;
-(void)stopWatchdog;
-(void)stageStart;
-(void)stageCopy;
-(void)stageTrim;
-(void)stageCompress;
-(void)stageRemove;
-(void)recoverCopy;
-(void)recoverTrim;
-(void)recoverCompress;
-(id)initWithManager:(id)arg1 andArchiveEntry:(id)arg2 ;
@end
