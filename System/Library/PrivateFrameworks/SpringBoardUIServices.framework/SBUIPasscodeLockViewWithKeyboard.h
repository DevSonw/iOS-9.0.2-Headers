/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <libobjc.A.dylib/SBUIPasscodeEntryFieldDelegate.h>

@class SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, UILabel, UIView, SBUIRingViewLabelButton, NSString;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {

	SBPasscodeKeyboard* _keyboard;
	SBUIAlphanumericPasscodeEntryField* _alphaEntryField;
	UILabel* _statusField;
	UILabel* _statusSubtitleView;
	UIView* _statusFieldBackground;
	SBUIRingViewLabelButton* _emergencyCallButton;
	UIView* _emergencyCallToTopFiller;
	UIView* _emergencyCallLeftFiller;
	UIView* _emergencyCallRightFiller;
	UIView* _statusFieldToTopOrEmergencyCallBottomFiller;
	UIView* _entryFieldToBottomFiller;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _previousKeyboardShowedInlineCandidates;
	BOOL _disableAnimationsDuringMinMax;
	BOOL _triedToMinMaxWhileRotating;
	BOOL _isAnimating;
	BOOL _usesLightStyle;

}

@property (nonatomic,retain) UILabel * statusField;                     //@synthesize statusField=_statusField - In the implementation block
@property (nonatomic,retain) UILabel * statusSubtitleView;              //@synthesize statusSubtitleView=_statusSubtitleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3 ;
-(id)passcode;
-(void)_luminanceBoostDidChange;
-(double)backgroundAlpha;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(id)_newStatusField;
-(void)setStatusField:(UILabel *)arg1 ;
-(id)_newStatusSubtitleView;
-(void)setStatusSubtitleView:(UILabel *)arg1 ;
-(CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1 ;
-(void)_hardwareReturnKeyPressed:(id)arg1 ;
-(void)_geometryChanged:(id)arg1 ;
-(void)_handleWillRotateNotification:(id)arg1 ;
-(void)_handleWillAnimateNotification:(id)arg1 ;
-(void)_handleDidRotateNotification:(id)arg1 ;
-(void)_toggleForEmergencyCall;
-(void)_toggleForStatusField;
-(void)_layoutForMinimizationState:(BOOL)arg1 ;
-(BOOL)_canMinMaxKeyboard;
-(BOOL)_isMinimized;
-(void)_acceptOrCancelReturnKeyPress;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(void)_notifyDelegateThatEmergencyCallButtonWasPressed;
-(UILabel *)statusField;
-(UILabel *)statusSubtitleView;
-(double)_keyboardToEntryFieldOffset;
-(double)_statusTitleWidth;
-(double)_statusFieldHeight;
-(void)_setMinimized:(BOOL)arg1 ;
-(void)_minimize;
-(void)_maximize;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
@end
