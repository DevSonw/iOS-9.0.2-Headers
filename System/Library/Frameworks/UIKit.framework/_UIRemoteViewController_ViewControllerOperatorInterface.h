/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIRemoteViewController_ViewControllerOperatorInterface
@required
-(void)__presentActionSheetFromYCoordinate:(double)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(long long)arg4 destructiveButtonIndex:(long long)arg5 style:(long long)arg6;
-(void)__dismissActionSheetWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
-(void)__viewServiceDidPromoteFirstResponder;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)__setSupportedInterfaceOrientations:(id)arg1;
-(void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
-(void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(/*^block*/id)arg4;
-(void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
-(void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
-(void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(BOOL)arg2 fence:(id)arg3 withReplyHandler:(/*^block*/id)arg4;
-(void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
-(void)__viewServicePreferredContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceInstrinsicContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 hidden:(BOOL)arg2 updateAnimation:(long long)arg3;
-(void)__setServiceMaxFrameSize:(CGSize)arg1;
-(void)__trampolineButtonPressData:(id)arg1 canceled:(BOOL)arg2;

@end

