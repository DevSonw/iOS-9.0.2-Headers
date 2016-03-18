/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FLFollowUpControllerDelegate;
@class NSString, NSXPCConnection, NSLock, NSXPCListener;

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {

	NSString* _clientIdentifier;
	NSString* _machServiceName;
	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	id<FLFollowUpControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLFollowUpControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FLFollowUpControllerDelegate>)arg1 ;
-(id<FLFollowUpControllerDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)countOfPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postHSA2LoginNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1 ;
-(void)_postHSA2PasswordResetNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didActivateHSA2LoginNotification:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3 ;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearPendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
@end
