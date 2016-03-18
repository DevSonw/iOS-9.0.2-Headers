/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBRequest <NSCopying> {

	double _arrivalDate;
	double _expirationDate;
	GEOMapItemStorage* _destinationLocation;
	int _transportType;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasArrivalDate; 
@property (assign,nonatomic) double arrivalDate;                                   //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationLocation; 
@property (nonatomic,retain) GEOMapItemStorage * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)arrivalDate;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasExpirationDate;
-(void)setHasArrivalDate:(BOOL)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(BOOL)hasArrivalDate;
-(void)setDestinationLocation:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasTransportType;
-(double)expirationDate;
-(void)setHasTransportType:(BOOL)arg1 ;
-(void)setArrivalDate:(double)arg1 ;
-(int)transportType;
-(BOOL)hasDestinationLocation;
-(void)setExpirationDate:(double)arg1 ;
-(GEOMapItemStorage *)destinationLocation;
-(BOOL)readFrom:(id)arg1 ;
@end
