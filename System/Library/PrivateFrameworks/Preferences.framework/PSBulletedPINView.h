/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2 ;
@end

