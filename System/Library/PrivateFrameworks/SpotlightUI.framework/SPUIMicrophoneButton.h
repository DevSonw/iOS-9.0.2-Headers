/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UIButton.h>

@class CALayer, UIImage, UIImageView;

@interface SPUIMicrophoneButton : UIButton {

	CALayer* _bottomLayer;
	CALayer* _middleLayer;
	BOOL _hasInitialized;
	UIImage* _image;
	UIImageView* _overlayView;

}

@property (retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (retain) UIImageView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (assign) BOOL hasInitialized;                    //@synthesize hasInitialized=_hasInitialized - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setup;
-(BOOL)hasInitialized;
-(void)setHasInitialized:(BOOL)arg1 ;
-(void)setOverlayView:(UIImageView *)arg1 ;
-(UIImageView *)overlayView;
@end
