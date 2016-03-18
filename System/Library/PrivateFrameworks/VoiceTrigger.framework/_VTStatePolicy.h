/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface _VTStatePolicy : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;
	NSMutableSet* _dependentOnMe;
	NSMutableSet* _dependentUpon;

}
-(void)reload;
-(BOOL)isEnabled;
-(void)dependencyUpdated:(id)arg1 ;
-(void)addDependent:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)notify;
-(void)dependsOn:(id)arg1 ;
-(BOOL)dependenciesSatisfied;
@end
