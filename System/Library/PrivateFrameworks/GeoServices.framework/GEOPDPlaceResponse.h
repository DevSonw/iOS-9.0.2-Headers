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

@class NSMutableArray, NSString, GEOPDPlaceGlobalResult;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {

	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceGlobalResult* _globalResult;
	NSMutableArray* _placeResults;
	int _requestType;
	NSMutableArray* _spokenLanguages;
	int _status;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                    //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalResult * globalResult;              //@synthesize globalResult=_globalResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                      //@synthesize placeResults=_placeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                  //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                           //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLanguages;                   //@synthesize spokenLanguages=_spokenLanguages - In the implementation block
-(id)initWithPlace:(id)arg1 forRequestType:(int)arg2 ;
-(id)_disambiguationLabels;
-(int)requestType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(unsigned long long)displayLanguagesCount;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)addSpokenLanguage:(id)arg1 ;
-(NSMutableArray *)spokenLanguages;
-(void)clearSpokenLanguages;
-(void)addDisplayLanguage:(id)arg1 ;
-(void)clearDisplayLanguages;
-(NSString *)displayRegion;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)displayLanguages;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(NSMutableArray *)placeResults;
-(void)clearPlaceResults;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(unsigned long long)placeResultsCount;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
-(BOOL)hasGlobalResult;
-(GEOPDPlaceGlobalResult *)globalResult;
-(BOOL)readFrom:(id)arg1 ;
@end
