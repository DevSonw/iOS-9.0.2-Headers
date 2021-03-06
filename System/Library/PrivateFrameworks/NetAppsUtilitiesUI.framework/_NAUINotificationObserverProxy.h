/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilitiesUI/_NAUIObserverProxy.h>

@class NSOperationQueue, NSString;

@interface _NAUINotificationObserverProxy : _NAUIObserverProxy {

	id _notificationObserver;
	NSOperationQueue* _observerQueue;
	/*^block*/id _observerBlock;
	NSString* _notificationName;

}

@property (nonatomic,readonly) NSOperationQueue * observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(void)invalidate;
-(NSOperationQueue *)observerQueue;
-(id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)performObserverBlock;
-(id)observerBlock;
-(NSString *)notificationName;
@end

