/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSString, NSDate;

@interface STShowMapPointRequest : AFSiriRequest {

	NSData* _placeData;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;
	BOOL _isCurrentLocation;

}

@property (assign,nonatomic) BOOL isCurrentLocation;              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
-(id)mapPointData;
@end
