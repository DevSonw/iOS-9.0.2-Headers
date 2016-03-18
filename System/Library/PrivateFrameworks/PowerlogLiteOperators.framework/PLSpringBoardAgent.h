/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLNSNotificationOperatorComposition, PLCFNotificationOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition, PLMonotonicTimer, NSDate, NSDictionary, PLEntry;

@interface PLSpringBoardAgent : PLAgent {

	BOOL _autoLockIsNil;
	PLNSNotificationOperatorComposition* _notificationSBScreenTimeTrackingChanged;
	PLCFNotificationOperatorComposition* _notificationSBLockTrackingChanged;
	PLCFNotificationOperatorComposition* _notificationSBBlankTrackingChanged;
	PLNSNotificationOperatorComposition* _notificationSBWallpaperTrackingChanged;
	PLNSNotificationOperatorComposition* _notificationSBLocalNotificationFired;
	PLNSNotificationOperatorComposition* _notificationSBRemoteNotificationReceived;
	PLNSNotificationOperatorComposition* _notificationSBAutoLockTimerFiredNotification;
	PLTimer* _dailyWallpaperPoll;
	PLEntryNotificationOperatorComposition* _displayOnNotification;
	PLEntryNotificationOperatorComposition* _displayOffNotification;
	PLEntryNotificationOperatorComposition* _receivedPushNotification;
	PLMonotonicTimer* _autolockEnergyPeriodicTimer;
	NSDate* _lastEligibleAutolockEnergyComputationDate;
	NSDictionary* _screenNumberToName;
	PLEntry* _lastSBEntry;
	PLEntry* _lastReceivedPushEntry;

}

@property (readonly) PLNSNotificationOperatorComposition * notificationSBScreenTimeTrackingChanged;                   //@synthesize notificationSBScreenTimeTrackingChanged=_notificationSBScreenTimeTrackingChanged - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * notificationSBLockTrackingChanged;                         //@synthesize notificationSBLockTrackingChanged=_notificationSBLockTrackingChanged - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * notificationSBBlankTrackingChanged;                        //@synthesize notificationSBBlankTrackingChanged=_notificationSBBlankTrackingChanged - In the implementation block
@property (readonly) PLNSNotificationOperatorComposition * notificationSBWallpaperTrackingChanged;                    //@synthesize notificationSBWallpaperTrackingChanged=_notificationSBWallpaperTrackingChanged - In the implementation block
@property (readonly) PLNSNotificationOperatorComposition * notificationSBLocalNotificationFired;                      //@synthesize notificationSBLocalNotificationFired=_notificationSBLocalNotificationFired - In the implementation block
@property (readonly) PLNSNotificationOperatorComposition * notificationSBRemoteNotificationReceived;                  //@synthesize notificationSBRemoteNotificationReceived=_notificationSBRemoteNotificationReceived - In the implementation block
@property (readonly) PLNSNotificationOperatorComposition * notificationSBAutoLockTimerFiredNotification;              //@synthesize notificationSBAutoLockTimerFiredNotification=_notificationSBAutoLockTimerFiredNotification - In the implementation block
@property (retain) PLTimer * dailyWallpaperPoll;                                                                      //@synthesize dailyWallpaperPoll=_dailyWallpaperPoll - In the implementation block
@property (assign) BOOL autoLockIsNil;                                                                                //@synthesize autoLockIsNil=_autoLockIsNil - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * displayOnNotification;                                    //@synthesize displayOnNotification=_displayOnNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * displayOffNotification;                                   //@synthesize displayOffNotification=_displayOffNotification - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * receivedPushNotification;                                 //@synthesize receivedPushNotification=_receivedPushNotification - In the implementation block
@property (retain) PLMonotonicTimer * autolockEnergyPeriodicTimer;                                                    //@synthesize autolockEnergyPeriodicTimer=_autolockEnergyPeriodicTimer - In the implementation block
@property (retain) NSDate * lastEligibleAutolockEnergyComputationDate;                                                //@synthesize lastEligibleAutolockEnergyComputationDate=_lastEligibleAutolockEnergyComputationDate - In the implementation block
@property (retain) NSDictionary * screenNumberToName;                                                                 //@synthesize screenNumberToName=_screenNumberToName - In the implementation block
@property (retain) PLEntry * lastSBEntry;                                                                             //@synthesize lastSBEntry=_lastSBEntry - In the implementation block
@property (nonatomic,retain) PLEntry * lastReceivedPushEntry;                                                         //@synthesize lastReceivedPushEntry=_lastReceivedPushEntry - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventPointAutoLock;
+(id)entryEventPointLocalRemoteNotifications;
+(id)entryEventForwardDefinitionBlank;
+(id)entryEventForwardDefinitionLock;
+(id)entryEventForwardDefinitionScreen;
+(id)entryEventForwardDefinitionWallpaper;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setUpScreenNumberDictionary;
-(void)resetAutoLockIsNil;
-(void)settingsChangedNotification:(id)arg1 ;
-(void)addAccountingEvent:(id)arg1 ;
-(id)fetchSBWallpaperForType:(int)arg1 ;
-(void)setDailyWallpaperPoll:(PLTimer *)arg1 ;
-(void)logNotification:(id)arg1 ofType:(id)arg2 ;
-(void)startAutolockEnergyPeriodicTimer;
-(void)setDisplayOnNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)stopAutolockEnergyPeriodicTimer;
-(void)setDisplayOffNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setLastReceivedPushEntry:(PLEntry *)arg1 ;
-(void)setReceivedPushNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(BOOL)autoLockIsNil;
-(PLMonotonicTimer *)autolockEnergyPeriodicTimer;
-(void)setLastEligibleAutolockEnergyComputationDate:(NSDate *)arg1 ;
-(void)computeAutolockEnergyWithNow:(id)arg1 ;
-(void)setAutolockEnergyPeriodicTimer:(PLMonotonicTimer *)arg1 ;
-(NSDate *)lastEligibleAutolockEnergyComputationDate;
-(id)screenLock:(id)arg1 ;
-(void)setAutoLockIsNil:(BOOL)arg1 ;
-(void)setScreenNumberToName:(NSDictionary *)arg1 ;
-(PLEntry *)lastSBEntry;
-(void)closeLastOpenEventsWithStopDate:(id)arg1 ;
-(NSDictionary *)screenNumberToName;
-(PLEntry *)lastReceivedPushEntry;
-(void)setLastSBEntry:(PLEntry *)arg1 ;
-(PLNSNotificationOperatorComposition *)notificationSBScreenTimeTrackingChanged;
-(PLCFNotificationOperatorComposition *)notificationSBLockTrackingChanged;
-(PLCFNotificationOperatorComposition *)notificationSBBlankTrackingChanged;
-(PLNSNotificationOperatorComposition *)notificationSBWallpaperTrackingChanged;
-(PLNSNotificationOperatorComposition *)notificationSBLocalNotificationFired;
-(PLNSNotificationOperatorComposition *)notificationSBRemoteNotificationReceived;
-(PLNSNotificationOperatorComposition *)notificationSBAutoLockTimerFiredNotification;
-(PLTimer *)dailyWallpaperPoll;
-(PLEntryNotificationOperatorComposition *)displayOnNotification;
-(PLEntryNotificationOperatorComposition *)displayOffNotification;
-(PLEntryNotificationOperatorComposition *)receivedPushNotification;
@end
