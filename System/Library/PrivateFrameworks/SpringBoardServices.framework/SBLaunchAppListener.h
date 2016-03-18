/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLock;

@interface SBLaunchAppListener : NSObject {

	NSString* _bundleIdentifier;
	/*^block*/id _block;
	NSLock* _lock;
	BOOL _launched;
	int _notifyToken;
	int _notifyAppExitedToken;
	unsigned _notifyRegisterStatus;
	unsigned _notifyAppExitedStatus;

}
+(BOOL)waitForLaunchThatSpringBoardKnowsAbout:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)_didLaunch;
-(void)_didFailToLaunch;
-(id)initWithBundleIdentifier:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
@end
