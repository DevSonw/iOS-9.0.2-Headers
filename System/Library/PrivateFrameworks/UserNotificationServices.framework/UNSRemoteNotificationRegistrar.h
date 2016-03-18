/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationRegistrarConnectionObserver.h>

@protocol UNSRemoteNotificationRegistrarDelegate;
@class NSString;

@interface UNSRemoteNotificationRegistrar : NSObject <UNSNotificationRegistrarConnectionObserver> {

	NSString* _bundleIdentifier;
	id<UNSRemoteNotificationRegistrarDelegate> _delegate;

}

@property (copy) NSString * bundleIdentifier;                                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) id<UNSRemoteNotificationRegistrarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundAppRefreshBundleIdentifierMapping;
+(void)setAllowsBackgroundRefresh:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
+(void)backgroundAppRefreshBundleIdentifierMappingWithResult:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<UNSRemoteNotificationRegistrarDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UNSRemoteNotificationRegistrarDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)requestTokenForRemoteNotificationsWithResult:(/*^block*/id)arg1 ;
-(BOOL)allowsRemoteNotifications;
-(void)invalidateTokenForRemoteNotifications;
-(unsigned long long)remoteNotificationTypes;
-(void)registerRemoteNotificationTypes:(unsigned long long)arg1 withResult:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)allowsRemoteNotificationsWithResult:(/*^block*/id)arg1 ;
-(void)remoteNotificationTypesWithResult:(/*^block*/id)arg1 ;
@end
