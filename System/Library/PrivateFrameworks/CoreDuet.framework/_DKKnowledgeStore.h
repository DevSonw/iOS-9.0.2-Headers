/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _defaultQueue;
	_DKRateLimitPolicyEnforcer* _rateLimitEnforcer;
	_DKPrivacyPolicyEnforcer* _privacyEnforcer;

}

@property (retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> defaultQueue;                     //@synthesize defaultQueue=_defaultQueue - In the implementation block
@property (readonly) _DKRateLimitPolicyEnforcer * rateLimitEnforcer;              //@synthesize rateLimitEnforcer=_rateLimitEnforcer - In the implementation block
@property (readonly) _DKPrivacyPolicyEnforcer * privacyEnforcer;                  //@synthesize privacyEnforcer=_privacyEnforcer - In the implementation block
+(id)knowledgeStore;
-(id)init;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)defaultQueue;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDefaultQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_DKRateLimitPolicyEnforcer *)rateLimitEnforcer;
-(_DKPrivacyPolicyEnforcer *)privacyEnforcer;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
@end
