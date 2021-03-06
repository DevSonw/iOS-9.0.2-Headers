/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class RadioStation, NSString, NSArray;

@interface RadioUpdateStationRequest : RadioSyncRequest {

	RadioStation* _station;
	NSString* _name;
	NSString* _stationDescription;
	NSArray* _seeds;
	long long _songMixType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;              //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy) NSArray * seeds;                            //@synthesize seeds=_seeds - In the implementation block
@property (assign,nonatomic) long long songMixType;                    //@synthesize songMixType=_songMixType - In the implementation block
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)changeList;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)songMixType;
-(void)setSongMixType:(long long)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(id)_updatedStationDictionary;
-(NSArray *)seeds;
-(void)setSeeds:(NSArray *)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(NSString *)stationDescription;
@end

