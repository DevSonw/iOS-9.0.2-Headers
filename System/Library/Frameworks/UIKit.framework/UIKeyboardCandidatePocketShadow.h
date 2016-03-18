/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardCandidatePocketShadow : UIView {

	BOOL _shadowFadesToBottom;
	BOOL _drawsShadow;
	double _shadowHeightGrowthFactor;

}

@property (assign,nonatomic) double shadowHeightGrowthFactor;              //@synthesize shadowHeightGrowthFactor=_shadowHeightGrowthFactor - In the implementation block
@property (assign,nonatomic) BOOL shadowFadesToBottom;                     //@synthesize shadowFadesToBottom=_shadowFadesToBottom - In the implementation block
@property (assign,nonatomic) BOOL drawsShadow;                             //@synthesize drawsShadow=_drawsShadow - In the implementation block
+(double)width;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowHeightGrowthFactor:(double)arg1 ;
-(void)setShadowFadesToBottom:(BOOL)arg1 ;
-(void)setDrawsShadow:(BOOL)arg1 ;
-(BOOL)shadowFadesToBottom;
-(BOOL)drawsShadow;
-(double)shadowHeightGrowthFactor;
@end
