/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKPropertyComparisonFilter : _HKFilter {

	NSString* _lhPropertyName;
	NSString* _rhPropertyName;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSString * lhPropertyName;                    //@synthesize lhPropertyName=_lhPropertyName - In the implementation block
@property (nonatomic,readonly) NSString * rhPropertyName;                    //@synthesize rhPropertyName=_rhPropertyName - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithLeftHandPropertyName:(id)arg1 rightHandPropertyName:(id)arg2 operator:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)lhPropertyName;
-(NSString *)rhPropertyName;
-(unsigned long long)operatorType;
@end
