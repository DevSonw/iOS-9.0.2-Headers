/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MusicContextualActionsHeaderBlendingHighlightView : UIView {

	UIView* _colorBurnView;
	UIView* _plusDView;

}

@property (assign) double cornerRadius; 
+(id)_blendingSeparatorView;
+(id)_blendingPressedView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3 ;
@end

