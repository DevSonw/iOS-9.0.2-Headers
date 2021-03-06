/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {

	unsigned long long _component;
	UIPickerView* _picker;

}

@property (assign,nonatomic) unsigned long long component;              //@synthesize component=_component - In the implementation block
@property (assign,nonatomic) UIPickerView * picker;                     //@synthesize picker=_picker - In the implementation block
-(id)_accessibilityUserTestingChildren;
-(int)_accessibilityPickerType;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityScrollStatus;
-(unsigned long long)_accessibilityDatePickerComponentType;
-(id)_accessibilityViewForComponent;
-(void)_accessibilityMoveSelection:(long long)arg1 ;
-(void)_axPostScrollChange;
-(long long)_accessibilityIndexForPickerString:(id)arg1 ;
-(id)_accessibilityDateTimePickerValues;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(UIPickerView *)picker;
-(void)setPicker:(UIPickerView *)arg1 ;
-(unsigned long long)component;
-(void)setComponent:(unsigned long long)arg1 ;
@end

