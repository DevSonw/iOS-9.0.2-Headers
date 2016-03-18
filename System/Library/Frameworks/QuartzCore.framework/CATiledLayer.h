/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) double maximumTileScale; 
@property (getter=isDrawingEnabled) BOOL drawingEnabled; 
@property (assign) unsigned long long levelsOfDetail; 
@property (assign) unsigned long long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(BOOL)shouldDrawOnMainThread;
+(unsigned)prefetchedTiles;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(double)fadeDuration;
-(BOOL)isDrawingEnabled;
-(double)maximumTileScale;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(BOOL)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)_canDisplayConcurrently;
-(unsigned long long)levelsOfDetailBias;
-(unsigned long long)levelsOfDetail;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setTileSize:(CGSize)arg1 ;
-(void)_dealloc;
-(void)_display;
-(CGSize)tileSize;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
@end
