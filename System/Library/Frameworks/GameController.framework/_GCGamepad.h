/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCGamepad.h>
#import <libobjc.A.dylib/GCNamedProfile.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GCController, _GCControllerDirectionPad, _GCControllerButtonInput;

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding> {

	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	_GCControllerDirectionPad* _dpad;
	_GCControllerButtonInput* _button0;
	_GCControllerButtonInput* _button1;
	_GCControllerButtonInput* _button2;
	_GCControllerButtonInput* _button3;
	_GCControllerButtonInput* _leftShoulder;
	_GCControllerButtonInput* _rightShoulder;
	BOOL _dpadFlippedY;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
-(id)dpad;
-(id)buttonA;
-(id)buttonB;
-(id)buttonX;
-(id)buttonY;
-(id)leftShoulder;
-(id)rightShoulder;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(id)controller;
-(void)setController:(id)arg1 ;
@end

