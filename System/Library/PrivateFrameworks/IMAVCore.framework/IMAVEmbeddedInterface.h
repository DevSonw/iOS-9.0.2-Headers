/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)startInterruptionForChat:(id)arg1 ;
-(void)chatStateUpdated;
-(void)startInterruptionForChat:(id)arg1 withSource:(id)arg2 ;
-(void)updateInterruptionForChat:(id)arg1 ;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(void)endInterruptionForChat:(id)arg1 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 withSource:(id)arg2 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 ;
-(id)_chatForAudioPropertiesIgnoringChat:(id)arg1 ;
@end
