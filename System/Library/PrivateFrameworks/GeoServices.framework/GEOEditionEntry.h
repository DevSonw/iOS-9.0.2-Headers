/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEditionEntry : NSObject {

	unsigned _tileset;
	unsigned _edition;
	unsigned _provider;
	BOOL _invalidateOnly;

}

@property (assign) unsigned tileset;                 //@synthesize tileset=_tileset - In the implementation block
@property (assign) unsigned edition;                 //@synthesize edition=_edition - In the implementation block
@property (assign) unsigned provider;                //@synthesize provider=_provider - In the implementation block
@property (assign) BOOL invalidateOnly;              //@synthesize invalidateOnly=_invalidateOnly - In the implementation block
-(unsigned)provider;
-(unsigned)edition;
-(void)setProvider:(unsigned)arg1 ;
-(void)setTileset:(unsigned)arg1 ;
-(BOOL)invalidateOnly;
-(void)setEdition:(unsigned)arg1 ;
-(void)setInvalidateOnly:(BOOL)arg1 ;
-(unsigned)tileset;
@end
