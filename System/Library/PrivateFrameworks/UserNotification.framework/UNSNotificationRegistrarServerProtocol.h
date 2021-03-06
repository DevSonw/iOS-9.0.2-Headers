/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNSNotificationRegistrarServerProtocol <NSObject>
@required
-(void)setAllowsBackgroundRefresh:(BOOL)arg1 forBundleIdentifier:(id)arg2;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)backgroundAppRefreshBundleIdentifierMappingWithResult:(/*^block*/id)arg1;
-(void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)remoteNotificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)registerRemoteNotificationTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)registerBadgeSettingForBundleIdentifier:(id)arg1;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)setObservingRemoteNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;

@end

