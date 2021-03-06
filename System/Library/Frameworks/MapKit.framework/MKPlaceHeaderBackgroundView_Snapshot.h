/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, MKMapCamera, UIColor, NSString;

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate> {

	MKMapView* _mapView;
	BOOL _renderingMap;
	BOOL _orbiting;
	BOOL _settingUpOrbitAnimation;
	BOOL _showsPin;
	MKMapCamera* _orbitCamera;
	double _zoomLevel;
	UIColor* _pinTintColor;

}

@property (assign,nonatomic) UIColor * pinTintColor;                    //@synthesize pinTintColor=_pinTintColor - In the implementation block
@property (nonatomic,retain) MKMapCamera * orbitCamera;                 //@synthesize orbitCamera=_orbitCamera - In the implementation block
@property (assign,nonatomic) BOOL orbiting;                             //@synthesize orbiting=_orbiting - In the implementation block
@property (assign,nonatomic) BOOL settingUpOrbitAnimation;              //@synthesize settingUpOrbitAnimation=_settingUpOrbitAnimation - In the implementation block
@property (assign,nonatomic) double zoomLevel;                          //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) BOOL showsPin;                             //@synthesize showsPin=_showsPin - In the implementation block
@property (nonatomic,readonly) BOOL useSatellite; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPinTintColor:(UIColor *)arg1 ;
-(UIColor *)pinTintColor;
-(void)prepareForPresentation;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)setOrbitCamera:(MKMapCamera *)arg1 ;
-(void)setShowsPin:(BOOL)arg1 ;
-(void)mapFinishedLoading:(BOOL)arg1 ;
-(void)beginOrbit;
-(void)setOrbiting:(BOOL)arg1 ;
-(BOOL)orbiting;
-(BOOL)useSatellite;
-(void)setSettingUpOrbitAnimation:(BOOL)arg1 ;
-(BOOL)settingUpOrbitAnimation;
-(BOOL)showsPin;
-(void)_orbitNextThird;
-(void)requestSnapshot;
-(MKMapCamera *)orbitCamera;
-(void)pauseOrbit;
-(double)zoomLevel;
-(void)setMapItem:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(void)setZoomLevel:(double)arg1 ;
@end

