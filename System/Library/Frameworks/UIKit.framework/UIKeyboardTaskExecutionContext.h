/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {

	UIKeyboardTaskExecutionContext* _parentExecutionContext;
	/*^block*/id _continuation;
	id _info;
	UIKeyboardTaskQueue* _executionQueue;

}

@property (nonatomic,retain) id info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) UIKeyboardTaskQueue * executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(id)info;
-(void)returnExecutionToParent;
-(id)childWithContinuation:(/*^block*/id)arg1 ;
-(void)transferExecutionToMainThreadWithTask:(/*^block*/id)arg1 ;
-(void)returnExecutionToParentWithInfo:(id)arg1 ;
-(UIKeyboardTaskQueue *)executionQueue;
-(id)initWithParentContext:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)setInfo:(id)arg1 ;
-(id)initWithExecutionQueue:(id)arg1 ;
@end

