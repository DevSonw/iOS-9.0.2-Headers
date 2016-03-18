/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface NLArcLayer : CAShapeLayer {

	BOOL _needsRegeneration;
	double _arcStart;
	double _radius;
	CGPoint _center;

}

@property (assign,nonatomic) double radius;               //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setLineWidth:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)layoutSublayers;
-(void)_regeneratePath;
-(void)animatePathCenter:(CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4 ;
-(void)setNeedsRegeneration;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end
