/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class PLTextView, UITextField, UILabel, NSString;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {

	PLTextView* _textView;
	UITextField* _textField;
	UILabel* _sizeTextLabel;
	id _delegate;
	BOOL _forceFirstResponder;
	int _cellStyle;

}

@property (assign,nonatomic) int style;                             //@synthesize cellStyle=_cellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)posterCellIdentifier;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)contentSize;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)value;
-(void)setValue:(id)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)isEditing;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_textFieldChanged;
-(id)initWithFrame:(CGRect)arg1 multiLine:(BOOL)arg2 ;
-(id)initHDSDCell;
-(id)initWithFrame:(CGRect)arg1 cellStyle:(int)arg2 ;
-(void)forceFirstResponder:(BOOL)arg1 ;
-(id)sizeTextLabel;
@end

