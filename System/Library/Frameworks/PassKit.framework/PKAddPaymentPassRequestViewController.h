/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPrivacyFooterViewDelegate.h>

@protocol NSObject, OS_dispatch_source;
@class NSString, PKWeakReference, PKPaymentProvisioningController, PKAddPaymentPassRequestConfiguration, CLInUseAssertion, NSObject, PKAddPaymentPassRequest, PKTableHeaderView, PKPaymentSetupPrivacyFooterView, RemoteUIController, PKPaymentWebService;

@interface PKAddPaymentPassRequestViewController : UITableViewController <PKPaymentSetupPrivacyFooterViewDelegate> {

	NSString* _title;
	NSString* _subtitle;
	long long _headerState;
	id<NSObject> _notificationToken;
	PKWeakReference* _weakDelegate;
	PKPaymentProvisioningController* _provisioningController;
	PKAddPaymentPassRequestConfiguration* _configuration;
	CLInUseAssertion* _passbookForegroundAssertion;
	NSObject*<OS_dispatch_source> _datasourceTimeout;
	PKAddPaymentPassRequest* _addRequest;
	BOOL _maxHeaderWidthCalculated;
	double _maxHeaderWidth;
	BOOL _viewAppearing;
	BOOL _preconditionsValidated;
	PKTableHeaderView* _headerView;
	PKPaymentSetupPrivacyFooterView* _privacyView;
	RemoteUIController* _termsController;
	BOOL _hidePrivacy;
	BOOL _singleTarget;
	PKPaymentWebService* _webService;

}

@property (assign,nonatomic) BOOL hidePrivacy;                                                        //@synthesize hidePrivacy=_hidePrivacy - In the implementation block
@property (assign,nonatomic) BOOL singleTarget;                                                       //@synthesize singleTarget=_singleTarget - In the implementation block
@property (assign,nonatomic) id<PKAddPaymentPassRequestViewControllerDelegate> delegate; 
@property (nonatomic,readonly) PKPaymentWebService * webService;                                      //@synthesize webService=_webService - In the implementation block
-(PKPaymentWebService *)webService;
-(void)_handleAdd:(id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1 ;
-(void)_cancelDatasourceTimeout;
-(void)_applyHeaderState;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)_performNextProvisioningStep;
-(void)_setHeaderState:(long long)arg1 ;
-(void)_performPreconditionValidation;
-(void)_performEligibility;
-(void)_fetchCertificates;
-(void)_performTerms:(id)arg1 ;
-(void)_performProvisioning:(id)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_fetchAddRequestWithCertificatesResponse:(id)arg1 ;
-(void)_showEligibilityIssueForStatus:(long long)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentDisplayableError:(id)arg1 allowEarlyExit:(BOOL)arg2 ;
-(void)_displayTermsForEligibilityResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setupTermsControllerHandlerWithNavigationController:(id)arg1 forCompletion:(/*^block*/id)arg2 ;
-(void)privacyFooterLinkTapped:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 configuration:(id)arg2 ;
-(BOOL)hidePrivacy;
-(void)setHidePrivacy:(BOOL)arg1 ;
-(BOOL)singleTarget;
-(void)setSingleTarget:(BOOL)arg1 ;
-(void)setDelegate:(id<PKAddPaymentPassRequestViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<PKAddPaymentPassRequestViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
