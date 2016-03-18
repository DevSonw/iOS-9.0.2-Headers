/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString;

@interface CIKernel : NSObject {

	void* _priv;

}

@property (readonly) NSString * name; 
+(id)modifiedKernelStringForFosl:(id)arg1 ;
+(id)hashForString:(id)arg1 ;
+(id)betterString:(id)arg1 ;
+(id)removeTableKeyword:(id)arg1 ;
+(id)kernelWithString:(id)arg1 ;
+(id)_getDictForSourceString:(id)arg1 dimensionality:(int*)arg2 ;
+(id)kernelsWithString:(id)arg1 ;
+(id)kernelsWithString:(id)arg1 messageLog:(id)arg2 ;
+(id)colorMatrixBiasKernel;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(SEL)ROISelector;
-(id)_initWithDict:(id)arg1 ;
-(id)_initWithFirstKernelFromString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 cpuCallback:(/*^block*/id)arg3 colorManagement:(BOOL)arg4 andArguments:(id)arg5 ;
-(void)setROISelector:(SEL)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithString:(id)arg1 ;
-(id)parameters;
@end
