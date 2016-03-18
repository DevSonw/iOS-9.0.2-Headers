/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class CALayer, NSMutableArray, NSArray;

@interface NetTopoMiniStaticLayout : NSObject {

	id _owningView;
	int _layoutOptions;
	CALayer* _containerLayer;
	NSMutableArray* _topoDeviceLayers;
	NSMutableArray* _connectionLayers;
	NSArray* _topoDevicesDescriptor;

}

@property (nonatomic,retain) CALayer * containerLayer;                     //@synthesize containerLayer=_containerLayer - In the implementation block
@property (nonatomic,retain) NSArray * topoDevicesDescriptor;              //@synthesize topoDevicesDescriptor=_topoDevicesDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * topoDeviceLayers;                 //@synthesize topoDeviceLayers=_topoDeviceLayers - In the implementation block
@property (assign,nonatomic) int layoutOptions;                            //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) id owningView; 
-(void)dealloc;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(NSArray *)topoDevicesDescriptor;
-(id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2 ;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)setLayoutOptions:(int)arg1 ;
-(void)createLayoutForDevices:(id)arg1 ;
-(void)destroyDeviceLayers;
-(CALayer *)containerLayer;
-(void)setTopoDevicesDescriptor:(NSArray *)arg1 ;
-(CGImageRef)imageForDeviceSpec:(id)arg1 wantSmall:(BOOL)arg2 forContentsScale:(double)arg3 ;
-(NSArray *)topoDeviceLayers;
-(void)performLayout;
-(int)layoutOptions;
@end
