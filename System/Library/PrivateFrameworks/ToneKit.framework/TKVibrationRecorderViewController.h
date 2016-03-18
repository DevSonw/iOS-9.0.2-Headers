/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class TKVibrationRecorderContentViewController;

@interface TKVibrationRecorderViewController : UINavigationController {

	TKVibrationRecorderContentViewController* _vibrationRecorderContentViewController;

}

@property (assign,nonatomic) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate; 
@property (setter=_setVibrationRecorderContentViewController:,nonatomic,retain) TKVibrationRecorderContentViewController * _vibrationRecorderContentViewController;              //@synthesize vibrationRecorderContentViewController=_vibrationRecorderContentViewController - In the implementation block
-(void)dealloc;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setVibrationRecorderViewControllerDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(void)_setVibrationRecorderContentViewController:(id)arg1 ;
-(TKVibrationRecorderContentViewController *)_vibrationRecorderContentViewController;
-(id<TKVibrationRecorderViewControllerDelegate>)vibrationRecorderViewControllerDelegate;
@end
