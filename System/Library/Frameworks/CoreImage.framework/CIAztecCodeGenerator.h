/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIAztecCodeGenerator : CICodeGenerator {

	NSNumber* inputCorrectionLevel;
	NSNumber* inputLayers;
	NSNumber* inputCompactStyle;

}

@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputLayers; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
+(id)customAttributes;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(void)setInputLayers:(NSNumber *)arg1 ;
-(NSNumber *)inputLayers;
-(CGImageRef)outputCGImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end
