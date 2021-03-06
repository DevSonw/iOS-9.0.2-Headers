/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {

	int _destinationLocation;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasDestinationLocation; 
@property (assign,nonatomic) int destinationLocation;                  //@synthesize destinationLocation=_destinationLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDestinationLocation:(int)arg1 ;
-(BOOL)hasDestinationLocation;
-(int)destinationLocation;
-(void)setHasDestinationLocation:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

