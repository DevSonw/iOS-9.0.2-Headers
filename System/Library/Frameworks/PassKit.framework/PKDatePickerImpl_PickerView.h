/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIPickerView.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, NSString, NSDate;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {

	unsigned long long _calendarUnit;
	NSRange _possibleRange;
	NSDateFormatter* _dateFormatter;
	id _changeTarget;
	SEL _changeAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * date; 
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)_defaultIndex;
-(id)_dateForIndex:(unsigned long long)arg1 ;
-(id)_dateComponentsForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2 ;
-(id)_stringForIndex:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfItems;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
