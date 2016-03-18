/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	unsigned long long _affectedMuid;
	int _entityType;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid;              //@synthesize affectedMuid=_affectedMuid - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                               //@synthesize entityType=_entityType - In the implementation block
-(unsigned long long)muid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(int)entityType;
-(void)setHasAffectedMuid:(BOOL)arg1 ;
-(void)setEntityType:(int)arg1 ;
-(BOOL)hasEntityType;
-(unsigned long long)affectedMuid;
-(BOOL)hasAffectedMuid;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
