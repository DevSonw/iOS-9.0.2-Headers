/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostViewControllerDelegate;
@interface HKHealthPrivacyHostViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyHostViewControllerDelegate>)arg1 ;
-(id<HKHealthPrivacyHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)_healthPrivacyServiceViewControllerProxy;
-(void)setRequestRecord:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3 ;
-(void)didFinishWithError:(id)arg1 ;
@end
