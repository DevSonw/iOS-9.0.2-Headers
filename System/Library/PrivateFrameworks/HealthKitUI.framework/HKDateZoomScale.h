/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class HKValueRange, NSString;

@interface HKDateZoomScale : NSObject <HKZoomScale> {

	double _previousZoomScale;
	long long _previousZoom;
	HKValueRange* _valueRange;

}

@property (nonatomic,copy) HKValueRange * valueRange;               //@synthesize valueRange=_valueRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)zoomForZoomScale:(double)arg1 ;
-(HKValueRange *)valueRange;
-(id)minDate;
-(id)maxDate;
-(double)zoomScaleForRange:(HKRange)arg1 ;
-(void)setValueRange:(HKValueRange *)arg1 ;
@end

