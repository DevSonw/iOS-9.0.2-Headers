/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(void)dealloc;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(BOOL)shouldCallImmediately;
-(void)setShouldCallImmediately:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg1 ;
@end

