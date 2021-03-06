/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKDatePickerDelegate.h>

@protocol PKPaymentSetupFieldCellDelegate;
@class PKDatePicker, PKPaymentSetupField, UIColor, NSString;

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate> {

	PKDatePicker* _dateInputView;
	BOOL _ignoreCurrentValueChangedNotifications;
	BOOL _enabled;
	BOOL _shouldDrawSeperator;
	BOOL _shouldDrawFullWidthSeperator;
	id<PKPaymentSetupFieldCellDelegate> _delegate;
	PKPaymentSetupField* _paymentSetupField;
	double _editableTextFieldOffset;
	UIColor* _editableTextFieldTextColor;
	UIColor* _editableTextFieldDisabledTextColor;
	UIColor* _editableTextFieldCameraCapturedTextColor;

}

@property (assign,nonatomic) id<PKPaymentSetupFieldCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPaymentSetupField * paymentSetupField;                       //@synthesize paymentSetupField=_paymentSetupField - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double editableTextFieldOffset;                                //@synthesize editableTextFieldOffset=_editableTextFieldOffset - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawSeperator;                                      //@synthesize shouldDrawSeperator=_shouldDrawSeperator - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawFullWidthSeperator;                             //@synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldTextColor;                            //@synthesize editableTextFieldTextColor=_editableTextFieldTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldDisabledTextColor;                    //@synthesize editableTextFieldDisabledTextColor=_editableTextFieldDisabledTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editableTextFieldCameraCapturedTextColor;              //@synthesize editableTextFieldCameraCapturedTextColor=_editableTextFieldCameraCapturedTextColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)tableViewCellStyle;
+(double)minimumCellHeight;
+(id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2 ;
+(id)reuseIdentifier;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setEditableTextFieldCameraCapturedTextColor:(UIColor *)arg1 ;
-(void)setEditableTextFieldTextColor:(UIColor *)arg1 ;
-(void)setEditableTextFieldDisabledTextColor:(UIColor *)arg1 ;
-(PKPaymentSetupField *)paymentSetupField;
-(void)setPaymentSetupField:(PKPaymentSetupField *)arg1 ;
-(void)_editableTextFieldDidBeginEditing:(id)arg1 ;
-(void)_editableTextFieldValueChanged:(id)arg1 ;
-(void)setShouldDrawFullWidthSeperator:(BOOL)arg1 ;
-(void)setShouldDrawSeperator:(BOOL)arg1 ;
-(id)initWithSetupField:(id)arg1 ;
-(void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1 ;
-(void)_updateDisplay:(BOOL)arg1 ;
-(void)_applyDefaultValues;
-(void)_updateDisplayForFieldTypeText:(id)arg1 ;
-(void)_updateDisplayForFieldTypeDate:(id)arg1 ;
-(void)_pullCurrentValueFromField;
-(void)_pushCurrentValueToField;
-(void)datePicker:(id)arg1 didChangeDate:(id)arg2 ;
-(void)setEditableTextFieldOffset:(double)arg1 ;
-(void)updatePaymentSetupFieldWithCurrentCellValue;
-(double)editableTextFieldOffset;
-(BOOL)shouldDrawSeperator;
-(BOOL)shouldDrawFullWidthSeperator;
-(UIColor *)editableTextFieldTextColor;
-(UIColor *)editableTextFieldDisabledTextColor;
-(UIColor *)editableTextFieldCameraCapturedTextColor;
-(double)heightForWidth:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKPaymentSetupFieldCellDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPaymentSetupFieldCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(CGRect)_separatorFrame;
@end

