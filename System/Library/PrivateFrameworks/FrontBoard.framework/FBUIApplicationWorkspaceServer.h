/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
-(void)sendLaunchEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendExitEventWithCompletion:(/*^block*/id)arg1 ;
-(void)sendProcessAssertionExpirationImminent;
-(BOOL)_queue_handleMessage:(id)arg1 withType:(long long)arg2 ;
@end

