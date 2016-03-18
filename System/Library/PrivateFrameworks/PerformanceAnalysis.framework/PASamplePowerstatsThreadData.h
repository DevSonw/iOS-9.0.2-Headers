/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASampleThreadData.h>

@interface PASamplePowerstatsThreadData : PASampleThreadData {

	unsigned _powerstatsFlags;

}
-(unsigned)powerstatsFlags;
-(BOOL)hasValidPowerstatsFlags;
-(id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2 ;
@end
