/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHealthKitCoachingFeatureGroup;

@interface AWDHealthKitCoachingEvent : PBCodable <NSCopying> {

	SCD_Struct_AW20* _goalTypes;
	unsigned long long _duration;
	unsigned long long _eventTimestamp;
	unsigned long long _timestamp;
	unsigned _dismissReason;
	unsigned _eventType;
	AWDHealthKitCoachingFeatureGroup* _features;
	unsigned _newGoal;
	unsigned _recommendedGoal;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned eventType;                                       //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasDismissReason; 
@property (assign,nonatomic) unsigned dismissReason;                                   //@synthesize dismissReason=_dismissReason - In the implementation block
@property (nonatomic,readonly) unsigned long long goalTypesCount; 
@property (nonatomic,readonly) unsigned* goalTypes; 
@property (assign,nonatomic) BOOL hasRecommendedGoal; 
@property (assign,nonatomic) unsigned recommendedGoal;                                 //@synthesize recommendedGoal=_recommendedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasNewGoal; 
@property (assign,nonatomic) unsigned newGoal;                                         //@synthesize newGoal=_newGoal - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,retain) AWDHealthKitCoachingFeatureGroup * features;              //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) unsigned long long eventTimestamp;                        //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)eventTimestamp;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setEventTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(AWDHealthKitCoachingFeatureGroup *)features;
-(void)setFeatures:(AWDHealthKitCoachingFeatureGroup *)arg1 ;
-(unsigned long long)goalTypesCount;
-(void)clearGoalTypes;
-(unsigned)goalTypeAtIndex:(unsigned long long)arg1 ;
-(void)addGoalType:(unsigned)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(void)setDismissReason:(unsigned)arg1 ;
-(void)setHasDismissReason:(BOOL)arg1 ;
-(BOOL)hasDismissReason;
-(unsigned*)goalTypes;
-(void)setGoalTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setRecommendedGoal:(unsigned)arg1 ;
-(void)setHasRecommendedGoal:(BOOL)arg1 ;
-(BOOL)hasRecommendedGoal;
-(void)setNewGoal:(unsigned)arg1 ;
-(void)setHasNewGoal:(BOOL)arg1 ;
-(BOOL)hasNewGoal;
-(BOOL)hasFeatures;
-(unsigned)eventType;
-(unsigned)dismissReason;
-(unsigned)recommendedGoal;
-(unsigned)newGoal;
@end
