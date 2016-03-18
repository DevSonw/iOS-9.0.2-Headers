/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface PSUIFindMyiPhoneController : NSObject {

	NSObject*<OS_dispatch_semaphore> _stateChangeSem;

}
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)locatorStateDidChange:(id)arg1 ;
-(BOOL)isFindMyiPhoneEnabled;
-(id)preferredFindMyiPhoneAccount;
-(BOOL)isFindMyiPhoneProvisioned;
-(void)enablePhoneLocatorWithCompletion:(/*^block*/id)arg1 ;
-(void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
