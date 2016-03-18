/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPDirectionsSearch, NSString, MSPPlaceDisplay, MSPQuerySearch;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDirectionsSearch* _directionsSearch;
	NSString* _identifier;
	MSPPlaceDisplay* _placeDisplay;
	MSPQuerySearch* _querySearch;
	int _searchType;
	SCD_Struct_MS1 _has;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                      //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                     //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasQuerySearch; 
@property (nonatomic,retain) MSPQuerySearch * querySearch;                        //@synthesize querySearch=_querySearch - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsSearch; 
@property (nonatomic,retain) MSPDirectionsSearch * directionsSearch;              //@synthesize directionsSearch=_directionsSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDisplay; 
@property (nonatomic,retain) MSPPlaceDisplay * placeDisplay;                      //@synthesize placeDisplay=_placeDisplay - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setSearchType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(NSString *)identifier;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasPosition;
-(BOOL)hasIdentifier;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)setQuerySearch:(MSPQuerySearch *)arg1 ;
-(MSPDirectionsSearch *)directionsSearch;
-(MSPPlaceDisplay *)placeDisplay;
-(void)setDirectionsSearch:(MSPDirectionsSearch *)arg1 ;
-(void)setPlaceDisplay:(MSPPlaceDisplay *)arg1 ;
-(MSPQuerySearch *)querySearch;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplay;
-(BOOL)hasDirectionsSearch;
-(BOOL)hasSearchType;
-(BOOL)hasQuerySearch;
-(BOOL)readFrom:(id)arg1 ;
-(int)searchType;
@end
