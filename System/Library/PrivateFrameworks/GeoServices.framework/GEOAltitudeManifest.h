/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {

	GEOAltitudeManifestReserved* _reserved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)commonInit;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(id)tourIdsForRegion:(unsigned)arg1 ;
-(id)tripIdsForRegion:(unsigned)arg1 ;
-(id)initWithoutObserver;
-(id)availableRegions;
-(BOOL)parseXml:(id)arg1 ;
-(BOOL)isValidTourId:(unsigned long long)arg1 ;
-(void)_reloadManifest;
-(unsigned)versionForRegion:(unsigned)arg1 ;
-(BOOL)hasDataVersionForRegion:(unsigned)arg1 ;
-(void)parseManifest:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(unsigned)dataVersionForRegion:(unsigned)arg1 ;
-(id)nameForRegion:(unsigned)arg1 ;
@end
