/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _RadioPlayEventStationInformation : NSObject {

	NSString* _stationHash;
	long long _stationID;

}

@property (nonatomic,copy) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;               //@synthesize stationID=_stationID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(long long)stationID;
-(NSString *)stationHash;
@end

