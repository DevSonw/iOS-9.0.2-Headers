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

@interface AWDEventKitSyncSyncedEventCreatedOnWatch : PBCodable <NSCopying> {

	unsigned long long _deltaTransitTime;
	unsigned long long _timestamp;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTransitTime; 
@property (assign,nonatomic) unsigned long long deltaTransitTime;              //@synthesize deltaTransitTime=_deltaTransitTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDeltaTransitTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTransitTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTransitTime;
-(unsigned long long)deltaTransitTime;
@end
