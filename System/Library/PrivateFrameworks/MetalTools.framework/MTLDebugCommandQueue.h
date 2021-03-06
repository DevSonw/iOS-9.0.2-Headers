/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsCommandQueue.h>

@interface MTLDebugCommandQueue : MTLToolsCommandQueue {

	unsigned long long _maxCommandBufferCount;

}

@property (nonatomic,readonly) unsigned long long maxCommandBufferCount;              //@synthesize maxCommandBufferCount=_maxCommandBufferCount - In the implementation block
-(id)commandBufferWithUnretainedReferences;
-(id)commandBuffer;
-(id)initWithCommandQueue:(id)arg1 device:(id)arg2 maxBufferCount:(unsigned long long)arg3 ;
-(unsigned long long)maxCommandBufferCount;
@end

