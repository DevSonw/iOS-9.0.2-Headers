/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSError;

@interface HAPBlockOperation : NSBlockOperation {

	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> finishedSemaphore;              //@synthesize finishedSemaphore=_finishedSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long dispatchTimeout; 
-(void)cancelWithError:(id)arg1 ;
-(NSError *)error;
-(id)_error;
-(void)_setError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)start;
-(void)_cancelWithError:(id)arg1 ;
-(void)finish;
-(NSObject*<OS_dispatch_semaphore>)finishedSemaphore;
-(void)setFinishedSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned long long)dispatchTimeout;
-(id)_finishedSemaphore;
-(void)_setFinishedSemaphore:(id)arg1 ;
-(void)_finish;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setError:(NSError *)arg1 ;
@end

