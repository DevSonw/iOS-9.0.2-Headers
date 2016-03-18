/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PASampleAggregator, NSMutableDictionary, PASampleTimeSeriesDataStore;

@interface PAAggregatedTask : NSObject {

	PASampleAggregator* _aggregator;
	NSMutableDictionary* _binaryImages;

}

@property (readonly) PASampleTimeSeriesDataStore * sampleStore; 
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(PASampleTimeSeriesDataStore *)sampleStore;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)aggregator;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 ;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(BOOL)arg2 ;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(BOOL)arg4 ;
-(void)updateBinaryLocationIfLower:(id)arg1 ;
-(void)printBinaryImagesToStream:(_sFILE*)arg1 ;
@end
