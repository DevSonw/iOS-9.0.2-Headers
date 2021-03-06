/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CLLocation, NSString;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _currentLocation;
	/*^block*/id _completionBlock;
	BOOL _didFinish;

}

@property (retain) CLLocation * currentLocation;                    //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL didFinish;                                  //@synthesize didFinish=_didFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopTimer;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)timeout;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)startTimer;
-(void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

