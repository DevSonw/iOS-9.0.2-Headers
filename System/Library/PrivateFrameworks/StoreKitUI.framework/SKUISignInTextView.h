/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextField.h>
#import <UIKit/UITextInputTraits.h>

@class NSString;

@interface SKUISignInTextView : UITextField <UITextInputTraits> {

	long long _keyboardType;

}

@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(long long)spellCheckingType;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)returnKeyType;
@end

