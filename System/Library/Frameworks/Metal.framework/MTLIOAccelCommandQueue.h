/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class MTLIOAccelDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {

	IOAccelCommandQueueRef _commandQueue;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelCommandQueueSetPriorityAndBackgroundArgs _PriorityArgs;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)setCompletionQueue:(id)arg1 ;
@end
