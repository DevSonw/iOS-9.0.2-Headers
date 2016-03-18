/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, RadioStation;

@interface RadioStationSkipController : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSObject*<OS_dispatch_source> _availableSkipsInvalidationTimer;
	BOOL _hasValidNumberOfAvailableSkips;
	BOOL _hasValidSkipInvalidationDate;
	unsigned long long _monitoringCount;
	unsigned _skipsEnabled : 2;
	NSDate* _skipInvalidationDate;
	long long _numberOfAvailableSkips;
	RadioStation* _station;

}

@property (nonatomic,readonly) long long numberOfAvailableSkips;                      //@synthesize numberOfAvailableSkips=_numberOfAvailableSkips - In the implementation block
@property (getter=hasSkipsEnabled,nonatomic,readonly) BOOL skipsEnabled; 
@property (nonatomic,readonly) RadioStation * station;                                //@synthesize station=_station - In the implementation block
-(BOOL)isMonitoring;
-(void)dealloc;
-(void)_modelDidChangeNotification:(id)arg1 ;
-(void)_cancelAvailableSkipsInvalidationTimer;
-(void)_rebuildState;
-(void)_createAvailableSkipsInvalidationTimer;
-(void)_updateForInvalidatedModel;
-(void)endMonitoring;
-(long long)numberOfAvailableSkips;
-(BOOL)hasSkipsEnabled;
-(void)beginMonitoring;
-(id)initWithStation:(id)arg1 ;
-(RadioStation *)station;
@end
