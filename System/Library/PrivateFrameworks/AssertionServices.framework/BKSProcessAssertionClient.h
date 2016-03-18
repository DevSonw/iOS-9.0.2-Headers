/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@class NSMapTable;

@interface BKSProcessAssertionClient : BSBaseXPCClient {

	NSMapTable* _assertionHandlersByIdentifier;

}
+(id)sharedInstance;
+(id)clientQueue;
-(void)dealloc;
-(id)description;
-(void)_invalidate;
-(double)backgroundTimeRemaining:(int)arg1 ;
-(void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2 ;
-(void)sendDestroyAssertion:(id)arg1 ;
-(void)unregisterClientHandlerForAssertionIdentifier:(id)arg1 ;
-(void)sendCreateAssertion:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)sendUpdateAssertion:(id)arg1 ;
-(id)_errorWithCode:(unsigned long long)arg1 ;
-(void)_dispatchClientCalloutBlock:(/*^block*/id)arg1 ;
-(void)_sendEvent:(id)arg1 forMessageType:(unsigned long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleDestroy:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_connectionWasDestroyed;
@end
