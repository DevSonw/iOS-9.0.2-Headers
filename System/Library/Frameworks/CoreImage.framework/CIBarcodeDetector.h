/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIBarcodeDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;

}

@property (nonatomic,retain) CIContext * context; 
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(void)finalize;
-(id)featuresInImage:(id)arg1 ;
@end
