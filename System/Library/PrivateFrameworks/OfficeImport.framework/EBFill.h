/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFill : NSObject
+(int)convertXlFillPatternEnumToED:(int)arg1 ;
+(int)convertEDPatternFillEnumToXl:(int)arg1 ;
+(BOOL)extractFromEDFill:(id)arg1 foreColorReference:(id*)arg2 backColorReference:(id*)arg3 fillPatternEnum:(int*)arg4 ;
+(id)edFillFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edFillFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
@end

