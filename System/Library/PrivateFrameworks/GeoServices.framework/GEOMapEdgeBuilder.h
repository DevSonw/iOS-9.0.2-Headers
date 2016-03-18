/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	BOOL _buildAhead;
	BOOL _buildBehind;
	Matrix<float, 2, 1> _firstTilePoint;
	Matrix<float, 2, 1> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >* _tileKeysSeen;
	BOOL _searchDirection;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(void)dealloc;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(Matrix<float, 2, 1>)_lastPoint;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(id)_lastTile;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(id)_firstTile;
-(Matrix<float, 2, 1>)_firstPoint;
-(void)_findTilesAdjacentToTile:(const GEOTileKey*)arg1 containingPoint:(const Matrix<float, 2, 1>*)arg2 findAhead:(BOOL)arg3 ;
-(id)edgeHandler;
-(BOOL)_findEdgeAhead;
-(id)initWithMap:(id)arg1 ;
-(BOOL)_findEdgeBehind;
-(void)buildEdge:(/*^block*/id)arg1 ;
-(BOOL)_edgeStart:(const Matrix<float, 2, 1>*)arg1 end:(const Matrix<float, 2, 1>*)arg2 connectsTo:(const SCD_Struct_GE16*)arg3 rect:(const SCD_Struct_GE57*)arg4 ;
-(void)setEdgeHandler:(id)arg1 ;
-(BOOL)_pointConnects:(const Matrix<float, 2, 1>*)arg1 rect:(const SCD_Struct_GE57*)arg2 to:(const SCD_Struct_GE16*)arg3 ;
-(BOOL)_findNextEdge;
-(GEOMapAccess *)map;
@end
