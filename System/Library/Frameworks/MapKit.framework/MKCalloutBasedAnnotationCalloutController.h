/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationCalloutController.h>

@class UICalloutView;

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController {

	UICalloutView* _calloutView;

}
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isShowingCallout;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)_subtitle;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(double)defaultCalloutHeight;
-(BOOL)isCalloutExpanded;
-(void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 animated:(BOOL)arg5 ;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(void)calloutView:(id)arg1 willMoveToAnchorPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)calloutView:(id)arg1 didMoveToAnchorPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)_setTitle:(id)arg1 ;
@end
