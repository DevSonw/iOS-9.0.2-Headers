/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class UIVisualEffectView, UIView, NSString;

@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView> {

	UIVisualEffectView* backdropView;
	UIView* dimmingKnockoutView;
	long long _style;

}

@property (assign) double cornerRadius; 
@property (assign) long long style;                                 //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlpha:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(long long)style;
-(double)cornerRadius;
-(void)setStyle:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_visualEffectForStyle:(long long)arg1 ;
-(id)_filterForBackdropStyle:(long long)arg1 ;
-(id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1 ;
@end

