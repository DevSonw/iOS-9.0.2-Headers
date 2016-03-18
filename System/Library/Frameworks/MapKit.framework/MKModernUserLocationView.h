/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView {

	CALayer* _innerCircleLayer;
	BOOL _isShowingStaleColor;
	BOOL _shouldInnerPulse;
	UIImage* _innerImageMask;
	BOOL _rotateInnerImageToMatchCourse;
	CALayer* _baseLayer;
	CALayer* _baseDimmingLayer;

}

@property (assign,nonatomic) BOOL shouldInnerPulse;                           //@synthesize shouldInnerPulse=_shouldInnerPulse - In the implementation block
@property (nonatomic,retain) UIImage * innerImageMask;                        //@synthesize innerImageMask=_innerImageMask - In the implementation block
@property (assign,nonatomic) BOOL rotateInnerImageToMatchCourse;              //@synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse - In the implementation block
+(double)innerDiameter;
+(double)baseDiameter;
-(void)_setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setMapRotationRadians:(double)arg1 ;
-(UIImage *)innerImageMask;
-(BOOL)shouldInnerPulse;
-(CGColorRef)_accuracyFillColor;
-(void)_updatePulseAnimation;
-(void)setRotateInnerImageToMatchCourse:(BOOL)arg1 ;
-(void)_updateInnerCourseRotation;
-(void)_updateLayers;
-(void)_updatePulseColor;
-(id)_baseLayer;
-(id)_layerToMatchAccuracyRing;
-(id)_innerPulseAnimation;
-(void)_updateInnerMaskLayer;
-(id)_pulseAnimation;
-(void)_setupLayers;
-(void)setShouldInnerPulse:(BOOL)arg1 ;
-(id)_baseDimmingLayer;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)_updateInnerImage;
-(BOOL)rotateInnerImageToMatchCourse;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(void)_resetLayerToMatchAccuracyRing;
-(void)setInnerImageMask:(UIImage *)arg1 ;
-(void)_updateBaseImage;
-(id)_pulseLayer;
-(void)_updateAccuracyColors;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)_dealloc;
@end
