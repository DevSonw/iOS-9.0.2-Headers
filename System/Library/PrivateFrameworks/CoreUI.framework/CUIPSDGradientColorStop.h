/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

	psdGradientColor gradientColor;

}
+(void)initialize;
+(id)colorStopWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isColorStop;
-(double)colorLocation;
-(id)initWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
-(psdGradientColor)gradientColor;
@end

