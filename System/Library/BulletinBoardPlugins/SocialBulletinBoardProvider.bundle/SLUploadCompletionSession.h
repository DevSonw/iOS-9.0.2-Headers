/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLRemoteUploadCompletion;
@class NSXPCConnection, NSString;

@interface SLUploadCompletionSession : NSObject {

	NSXPCConnection* _connection;
	id<SLRemoteUploadCompletion> _remoteProxy;
	NSString* _serviceName;

}
-(void)completedUploadsWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(void)_connect;
@end

