/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,copy) id pressedChangedHandler; 
@property (nonatomic,readonly) float value; 
@property (getter=isPressed,nonatomic,readonly) BOOL pressed; 
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(BOOL)isPressed;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(id)pressedChangedHandler;
-(void)setPressedChangedHandler:(id)arg1 ;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
@end
