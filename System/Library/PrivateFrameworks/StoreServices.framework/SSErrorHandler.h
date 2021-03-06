/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSErrorHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSErrorHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSErrorHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _failureTypes;
	SSXPCConnection* _observerConnection;

}

@property (assign) id<SSErrorHandlerDelegate> delegate; 
@property (copy) NSArray * failureTypes; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<SSErrorHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SSErrorHandlerDelegate>)delegate;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(void)_dispatchToDelegate:(/*^block*/id)arg1 ;
-(NSArray *)failureTypes;
-(void)setFailureTypes:(NSArray *)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/id)arg1 ;
@end

