/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegAccountWebViewController.h>

@protocol CNFRegCreateAccountControllerDelegate;
@interface CNFRegCreateAccountController : CNFRegAccountWebViewController {

	id<CNFRegCreateAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegCreateAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CNFRegCreateAccountControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegCreateAccountControllerDelegate>)delegate;
-(id)logName;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)bagKey;
@end
