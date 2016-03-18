/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelLocation : NSObject <NSSecureCoding> {

	double _Latitude_deg;
	double _Longitude_deg;
	double _uncertainty_m;
	double _confidence;
	double _timestamp_s;

}

@property (assign,nonatomic) double Latitude_deg;               //@synthesize Latitude_deg=_Latitude_deg - In the implementation block
@property (assign,nonatomic) double Longitude_deg;              //@synthesize Longitude_deg=_Longitude_deg - In the implementation block
@property (assign,nonatomic) double uncertainty_m;              //@synthesize uncertainty_m=_uncertainty_m - In the implementation block
@property (assign,nonatomic) double confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double timestamp_s;                //@synthesize timestamp_s=_timestamp_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(double)confidence;
-(id)initWithLocation:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(double)Latitude_deg;
-(double)Longitude_deg;
-(double)uncertainty_m;
-(id)initWithLat:(double)arg1 Lon:(double)arg2 Uncertainty:(double)arg3 confidence:(double)arg4 andTimestamp_s:(double)arg5 ;
-(void)setLatitude_deg:(double)arg1 ;
-(void)setLongitude_deg:(double)arg1 ;
-(void)setUncertainty_m:(double)arg1 ;
-(void)setTimestamp_s:(double)arg1 ;
-(double)timestamp_s;
@end
