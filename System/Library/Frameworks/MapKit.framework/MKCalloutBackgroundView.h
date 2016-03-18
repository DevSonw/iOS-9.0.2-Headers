/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIView, _MKCalloutBackgroundMaskView, NSMutableArray, UIImageView, UIColor;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView {

	double _arrowOffset;
	unsigned long long _arrowDirection;
	UIView* _containerView;
	UIView* _baseBorderView;
	_MKCalloutBackgroundMaskView* _mainMaskView;
	NSMutableArray* _vendedMaskViews;
	SCD_Struct_MK14 _mapDisplayStyle;
	UIImageView* _currentArrowShadow;

}

@property (assign,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                 //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (nonatomic,readonly) UIColor * calloutBackgroundColor; 
+(void)setBeingCreatedForSmallCalloutController:(id)arg1 ;
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
-(SCD_Struct_MK14)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(void)_setupViews;
-(void)_retractUpDownArrow;
-(void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2 ;
-(id)newMaskLayer;
-(UIColor *)calloutBackgroundColor;
-(void)_extendLeftRightArrow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(id)_shadowPath;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(UIEdgeInsets)_contentViewInsets;
-(void)_showArrow;
-(void)_hideArrow;
@end
