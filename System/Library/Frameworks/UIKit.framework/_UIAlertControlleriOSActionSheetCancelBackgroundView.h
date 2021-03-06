/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class UIView, _UIDimmingKnockoutBackdropView, _UIBlendingHighlightView, NSString;

@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView <UIAlertControllerBackgroundView> {

	UIView* backgroundView;
	_UIDimmingKnockoutBackdropView* blurView;
	_UIBlendingHighlightView* highlightView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_addConstraints;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

