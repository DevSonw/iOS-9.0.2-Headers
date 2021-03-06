/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOLatLng, NSString;

@interface GEOBusiness : PBCodable <NSCopying> {

	unsigned long long _uID;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _placeDataAmendments;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	NSString* _uRL;
	BOOL _isClosed;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) unsigned long long uID;                            //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                           //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                              //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                    //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasIsClosed; 
@property (assign,nonatomic) BOOL isClosed;                                     //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL;                                //@synthesize mapsURL=_mapsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * ratings;                          //@synthesize ratings=_ratings - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorys;                        //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                           //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeyValues;               //@synthesize attributeKeyValues=_attributeKeyValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * openHours;                        //@synthesize openHours=_openHours - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategories;              //@synthesize localizedCategories=_localizedCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                     //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sources;                          //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableArray * starRatings;                      //@synthesize starRatings=_starRatings - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeDataAmendments;              //@synthesize placeDataAmendments=_placeDataAmendments - In the implementation block
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6 ;
-(id)_firstPhotoOfSize:(int)arg1 ;
-(id)_photosOfSize:(int)arg1 ;
-(unsigned long long)photosCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCenter;
-(NSString *)mapsURL;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(void)clearLocalizedCategories;
-(NSMutableArray *)starRatings;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)addOpenHours:(id)arg1 ;
-(BOOL)hasUID;
-(void)clearSources;
-(void)addStarRating:(id)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(NSMutableArray *)placeDataAmendments;
-(void)addAttributeKeyValue:(id)arg1 ;
-(NSMutableArray *)ratings;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)openHoursCount;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(void)addSource:(id)arg1 ;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setPlaceDataAmendments:(NSMutableArray *)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)clearPlaceDataAmendments;
-(unsigned long long)localizedCategoriesCount;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categorys;
-(void)setUID:(unsigned long long)arg1 ;
-(void)clearRatings;
-(void)clearPhotos;
-(unsigned long long)sourcesCount;
-(BOOL)hasMapsURL;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIsClosed;
-(NSMutableArray *)photos;
-(NSMutableArray *)attributeKeyValues;
-(void)clearOpenHours;
-(NSString *)phoneticName;
-(NSMutableArray *)openHours;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearAttributions;
-(void)setMapsURL:(NSString *)arg1 ;
-(void)addPlaceDataAmendment:(id)arg1 ;
-(void)setHasIsClosed:(BOOL)arg1 ;
-(id)placeDataAmendmentAtIndex:(unsigned long long)arg1 ;
-(void)setPhoneticName:(NSString *)arg1 ;
-(void)setIsClosed:(BOOL)arg1 ;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeDataAmendmentsCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)uID;
-(unsigned long long)attributeKeyValuesCount;
-(void)clearStarRatings;
-(void)addPhoto:(id)arg1 ;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasURL;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(NSString *)telephone;
-(unsigned long long)ratingsCount;
-(void)clearCategorys;
-(BOOL)hasTelephone;
-(unsigned long long)attributionsCount;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(void)addRating:(id)arg1 ;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedCategories;
-(void)addAttribution:(id)arg1 ;
-(BOOL)hasPhoneticName;
-(void)clearAttributeKeyValues;
-(unsigned long long)starRatingsCount;
-(NSString *)uRL;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sources;
-(NSMutableArray *)attributions;
-(void)addLocalizedCategories:(id)arg1 ;
-(void)setSources:(NSMutableArray *)arg1 ;
-(BOOL)hasName;
-(BOOL)isClosed;
-(BOOL)readFrom:(id)arg1 ;
@end

