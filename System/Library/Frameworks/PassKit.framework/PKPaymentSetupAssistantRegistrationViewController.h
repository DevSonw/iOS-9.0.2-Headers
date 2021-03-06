/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupViewController.h>

@class UIButton;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupViewController {

	UIButton* _skipButton;

}
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
+(id)defaultWebServiceForContext:(long long)arg1 ;
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_bridgeContextDefaultLocalCredential;
-(id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)privacyButtonTouched:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
@end

