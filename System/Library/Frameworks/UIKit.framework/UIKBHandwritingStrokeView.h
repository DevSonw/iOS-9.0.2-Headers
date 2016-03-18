/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView {

	UIKBHandwritingView* _keyView;
	CGContextRef _bitmapContext;
	double _scaleFactor;
	CGRect _aggregateInvalidRect;

}

@property (nonatomic,retain) UIKBHandwritingView * keyView;              //@synthesize keyView=_keyView - In the implementation block
@property (nonatomic,readonly) CGContextRef bitmapContext;               //@synthesize bitmapContext=_bitmapContext - In the implementation block
@property (nonatomic,readonly) double scaleFactor;                       //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect aggregateInvalidRect;              //@synthesize aggregateInvalidRect=_aggregateInvalidRect - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(double)scaleFactor;
-(void)updateInkColor;
-(UIKBHandwritingView *)keyView;
-(void)createBitmapIfNeeded;
-(CGRect)handwritingPointToRect:(SCD_Struct_UI68)arg1 ;
-(CGRect)convertRectToBitmapCoordinates:(CGRect)arg1 ;
-(CGPathRef)pathForTrapezoidForFirstPoint:(SCD_Struct_UI68)arg1 secondPoint:(SCD_Struct_UI68)arg2 ;
-(CGRect)convertRectToViewCoordinates:(CGRect)arg1 ;
-(void)redrawStrokesInRect:(CGRect)arg1 ;
-(void)displayAggregateInvalidRect;
-(void)addTrapezoidFromFirstPoint:(SCD_Struct_UI68)arg1 secondPoint:(SCD_Struct_UI68)arg2 ;
-(void)addHandwritingPoint:(SCD_Struct_UI68)arg1 ;
-(void)clearRect:(CGRect)arg1 ;
-(void)setKeyView:(UIKBHandwritingView *)arg1 ;
-(CGContextRef)bitmapContext;
-(CGRect)aggregateInvalidRect;
@end
