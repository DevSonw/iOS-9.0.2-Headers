/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, UIDictationMeterView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	UIButton* _waveTapEndpointButton;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	UIDictationMeterView* _meterView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
+(CGSize)viewSize;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)contentOffset;
-(void)setState:(int)arg1 ;
-(BOOL)visible;
-(void)keyboardDidShow:(id)arg1 ;
-(void)applicationWillResignActive;
-(void)highlightEndpointButton;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(BOOL)isShowing;
-(void)returnToKeyboard;
-(BOOL)drawsOwnBackground;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(CGPoint)backgroundOffset;
-(void)endpointButtonPressed;
@end

