/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString, GEOTileCache;

@interface MKTileOverlay : NSObject <MKOverlay> {

	NSString* _URLTemplate;
	CGSize _tileSize;
	BOOL _geometryFlipped;
	long long _minimumZ;
	long long _maximumZ;
	BOOL _canReplaceMapContent;
	unsigned _providerID;
	GEOTileCache* _tileCache;

}

@property (assign) CGSize tileSize;                                         //@synthesize tileSize=_tileSize - In the implementation block
@property (getter=isGeometryFlipped) BOOL geometryFlipped;                  //@synthesize geometryFlipped=_geometryFlipped - In the implementation block
@property (assign) long long minimumZ;                                      //@synthesize minimumZ=_minimumZ - In the implementation block
@property (assign) long long maximumZ;                                      //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) NSString * URLTemplate;                                //@synthesize URLTemplate=_URLTemplate - In the implementation block
@property (assign,nonatomic) BOOL canReplaceMapContent;                     //@synthesize canReplaceMapContent=_canReplaceMapContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
-(BOOL)canReplaceMapContent;
-(SCD_Struct_MK2)boundingMapRect;
-(id)initWithURLTemplate:(id)arg1 ;
-(void)loadTileAtPath:(SCD_Struct_MK21)arg1 result:(/*^block*/id)arg2 ;
-(id)URLForTilePath:(SCD_Struct_MK21)arg1 ;
-(NSString *)URLTemplate;
-(void)_assignProviderID;
-(void)setCanReplaceMapContent:(BOOL)arg1 ;
-(void)_flushCaches;
-(GEOTileKey)_keyForPath:(SCD_Struct_MK21)arg1 ;
-(void)setMaximumZ:(long long)arg1 ;
-(id)_tilesInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 contentScale:(double)arg3 ;
-(void)setMinimumZ:(long long)arg1 ;
-(long long)minimumZ;
-(void)_loadTile:(id)arg1 result:(/*^block*/id)arg2 ;
-(int)_zoomLevelForScale:(double)arg1 ;
-(long long)maximumZ;
-(SCD_Struct_MK1)coordinate;
-(void)dealloc;
-(id)init;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
@end
