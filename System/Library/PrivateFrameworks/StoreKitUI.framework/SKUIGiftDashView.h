/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUIGiftDashView : UIView {

	UIColor* _dashColor;
	CGSize _dashSize;
	double _dashSpacing;

}

@property (nonatomic,copy) UIColor * dashColor;               //@synthesize dashColor=_dashColor - In the implementation block
@property (assign,nonatomic) CGSize dashSize;                 //@synthesize dashSize=_dashSize - In the implementation block
@property (assign,nonatomic) double dashSpacing;              //@synthesize dashSpacing=_dashSpacing - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setDashColor:(UIColor *)arg1 ;
-(void)setDashSize:(CGSize)arg1 ;
-(void)setDashSpacing:(double)arg1 ;
-(UIColor *)dashColor;
-(CGSize)dashSize;
-(double)dashSpacing;
@end
