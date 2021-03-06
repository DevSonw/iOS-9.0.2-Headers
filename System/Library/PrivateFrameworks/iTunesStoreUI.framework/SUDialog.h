/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, ISDialog, NSString;

@interface SUDialog : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	/*^block*/id _completionBlock;
	ISDialog* _dialog;

}

@property (nonatomic,readonly) ISDialog * dialog;                   //@synthesize dialog=_dialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(ISDialog *)dialog;
-(id)initWithDialog:(id)arg1 ;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_alertView;
-(void)_completeWithButtonIndex:(long long)arg1 ;
@end

