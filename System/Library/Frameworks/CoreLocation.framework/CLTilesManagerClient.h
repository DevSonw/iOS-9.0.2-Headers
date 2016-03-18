/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface CLTilesManagerClient : NSObject {

	NSObject*<OS_xpc_object> fXpcConnection;
	NSObject*<OS_dispatch_queue> fQueue;
	NSDictionary* fNotificationHandlers;

}
+(void)initialize;
+(id)sharedClient;
-(void)onNotificationReceived:(id)arg1 ;
-(void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2 ;
-(void)reconnect;
-(BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)registerTo:(id)arg1 onQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)unregisterFrom:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
