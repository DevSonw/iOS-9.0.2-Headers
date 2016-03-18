/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface MusicViewControllerPresenter : NSObject <UIPopoverPresentationControllerDelegate> {

	id _popoverTarget;
	UIViewController* _presentationViewController;

}

@property (assign,nonatomic,__weak) id popoverTarget;                                           //@synthesize popoverTarget=_popoverTarget - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentationViewController;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setPopoverTarget:(id)arg1 ;
-(id)popoverTarget;
@end
