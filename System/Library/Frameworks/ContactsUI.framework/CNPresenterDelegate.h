/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol CNPresenterDelegate <NSObject>
@property (readonly) UIViewController * currentPresentedViewController; 
@property (readonly) BOOL isPresentingModalViewController; 
@required
-(void)sender:(id)arg1 presentViewController:(id)arg2;
-(void)sender:(id)arg1 dismissViewController:(id)arg2;
-(UIViewController *)currentPresentedViewController;
-(BOOL)isPresentingModalViewController;

@end
