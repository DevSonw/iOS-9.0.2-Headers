/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/WebKit.axbundle/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/__WKContentViewAccessibility_super.h>

@interface WKContentViewAccessibility : __WKContentViewAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityServesAsFirstResponder;
-(id)_accessibilityResponderElement;
-(id)_accessibilityResponderElementForFocus;
-(id)accessibilityContainerElements;
-(BOOL)_accessibilityIsScrollAncestor;
-(void)_axClearRemoteElements;
-(void)dealloc;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)_processDidExit;
-(void)_setAccessibilityWebProcessToken:(id)arg1 ;
-(void)_accessibilityRegisterUIProcessTokens;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
@end

