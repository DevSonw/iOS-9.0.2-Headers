/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDate, NSMutableArray;

@interface AppLaunchStatsAggD : NSObject {

	BOOL buildLaunchStats;
	NSObject*<OS_dispatch_queue> aggDQueue;
	int hasStats;
	int fetchDeniedReasons[13];
	int fetchDenied;
	int fetchAttempt;
	int pushDenied;
	int pushAttempt;
	int pushDeniedReasons[13];
	long long fetchDataTotal;
	int fetchDataCount;
	int fetchPWTotal;
	int fetchGiven;
	int fetchFailedCount;
	int fetchAppFiltered[16];
	long long fetchUpdateTimeTotal;
	int fetchUpdateTimeCount;
	int forceRelease;
	NSMutableDictionary* recentFetchResults[16];
	int currentFetchFailuresIndex;
	int zoneCounts[9];
	int topNZoneCounts[9];
	NSDate* cycleStart;
	NSMutableArray* pastCycle;
	NSMutableDictionary* launchDict;
	int prewarmZoneCounts[9];
	NSMutableDictionary* prewarmDict;
	NSMutableDictionary* previousPrewarmDict;
	NSMutableDictionary* trendingDict;
	NSMutableDictionary* previousTrendingDict;
	NSMutableDictionary* prewarmCountDict;
	unsigned long long numWarmedLaunches;
	unsigned long long numPrewarms;
	int prewarmHits;
	int prewarmMiss;
	int BGReportToken;
	unsigned long long radioWoken;
	unsigned long long radioPiggyback;
	unsigned long long blameReasons[30];
	/*^block*/id appisFetchable;

}

@property (nonatomic,retain) NSMutableArray * pastCycle; 
@property (nonatomic,readonly) NSDate * cycleStart; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fetchTimeUpdate:(long long)arg1 ;
-(void)forceReleaseCount;
-(void)incrementTriggerReason:(long long)arg1 ;
-(NSDate *)cycleStart;
-(void)replacePredictionAtZone:(id)arg1 zoneid:(int)arg2 ;
-(void)fetchAttemptIncrement;
-(void)pushAttemptIncrement:(int)arg1 ;
-(void)fetchFailuresIncrement;
-(void)fetchDeniedForReason:(int)arg1 ;
-(void)pushFailuresIncrement;
-(void)pushDeniedForReason:(int)arg1 ;
-(void)fetchDeniedBecause:(BOOL)arg1 withPWBudget:(BOOL)arg2 wifiQual:(long long)arg3 cellQual:(long long)arg4 networkingDeferred:(BOOL)arg5 ignorePoorCell:(BOOL)arg6 incall:(BOOL)arg7 thermal:(BOOL)arg8 ;
-(void)fetchDeniedForReasons:(id)arg1 ;
-(void)pushDeniedBecause:(BOOL)arg1 withPWBudget:(BOOL)arg2 withConnection:(BOOL)arg3 ;
-(void)radioPiggybackIncrement;
-(void)radioWakeIncrement;
-(void)fetchFilteredForBundle:(id)arg1 forReasons:(id)arg2 ;
-(void)fetchCountUpdate:(int)arg1 ;
-(NSMutableArray *)pastCycle;
-(void)populatePredictZones:(int)arg1 filter:(BOOL)arg2 callback:(/*^block*/id)arg3 ;
-(void)populatePrewarmZones:(int)arg1 callback:(/*^block*/id)arg2 ;
-(void)newCycleWithApps:(id)arg1 ;
-(void)appPrewarm:(id)arg1 type:(int)arg2 ;
-(void)fetchFailedUpdate;
-(void)setCollectLaunchStats;
-(void)setFetchCapableCheck:(/*^block*/id)arg1 ;
-(void)appFGLaunch:(id)arg1 ;
-(int)numSlotsAfterPrewarmForApp:(id)arg1 launchedAt:(id)arg2 ;
-(void)recordGlancePrewarmStatsRaw;
-(void)recordPrewarmFailureReasonsForBundle:(id)arg1 ;
-(void)searchBlame:(id)arg1 inzone:(int)arg2 inminute:(int)arg3 ;
-(void)uploadData;
-(int)distanceToLastPrewarm:(id)arg1 prevDay:(id)arg2 currentSlot:(int)arg3 currentoffset:(int)arg4 ;
-(void)accountPredatePrewarm:(id)arg1 prevDay:(id)arg2 launch:(int)arg3 launchvalue:(int)arg4 prewarmvalue:(int)arg5 diff:(int)arg6 result:(int*)arg7 ;
-(void)calculatePrewarmHitMiss:(id)arg1 launch:(id)arg2 ;
-(BOOL)accountYesterday:(id)arg1 atzone:(int)arg2 launchVal:(int)arg3 result:(int*)arg4 ;
-(void)fetchFilteredForBundle:(id)arg1 forReason:(int)arg2 ;
-(void)fetchDeniesIncrement;
-(void)fetchFiltered:(int)arg1 ;
-(void)pushDeniedForReasons:(id)arg1 ;
-(void)fetchDataCount:(int)arg1 ;
-(void)fetchPWCount:(int)arg1 ;
-(void)setPastCycle:(NSMutableArray *)arg1 ;
@end

