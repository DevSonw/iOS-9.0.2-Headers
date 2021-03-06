/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, STCity, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	STCity* _city;
	STWeatherUnits* _units;

}
+(BOOL)supportsSecureCoding;
-(id)city;
-(id)units;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)currentConditions;
-(id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3 ;
@end

