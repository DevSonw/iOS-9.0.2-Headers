/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWDeferredMetadataCache : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	OpaqueFigCaptureStreamRef _stream;
	int _numberOfExpectedSampleBuffersForEachPTS;
	BWDeferredMetadataCacheEntry* _cache[5];

}

@property (assign,nonatomic) int numberOfExpectedSampleBuffersForEachPTS; 
-(void)dealloc;
-(void)flush;
-(id)initWithCaptureStream:(OpaqueFigCaptureStreamRef)arg1 atomicTransactions:(BOOL)arg2 ;
-(void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg1 ;
-(void)addMetadataAttachmentToSampleBuffer:(opaqueCMSampleBufferRef)arg1 withDutyCycleMetadataCache:(id)arg2 ;
-(int)numberOfExpectedSampleBuffersForEachPTS;
@end

