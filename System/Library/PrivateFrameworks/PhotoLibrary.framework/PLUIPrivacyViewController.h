/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController {

	BOOL _showingAccessDeniedView;
	_UIAccessDeniedView* _accessDeniedView;

}
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_updateAccessDeniedView;
-(void)_showCancelButton;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

